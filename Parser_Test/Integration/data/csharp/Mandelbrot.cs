using System;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;
using System.Globalization;
using System.Collections.Generic;

namespace Mandelbrot
{ 
    class Mandelbrot : Form
    {
        double schaal = 0.01;
        double middenX = 0;
        double middenY = 0;
        int herhaling = 100;
        int bitmapSize = 600;
        int mandelPlaatjeX = 0;
        int mandelPlaatjeY = 0;
        double time = 0;
        bool julia = false;
        double juliaEcht = -0.8;
        double juliaImaginair = 0.156;
        bool smoothing = false;
        int hoogteConfiguratie = 450;
        int hoogteInteressantePuntenBox = 200;
        int hoogteTijdBox = 50;
        int hoogteOpslaanBox = 50;

        Panel zijPaneel;

        GroupBox configuratie;
        Bitmap mandelBitmap;
        TextBox middenXTextbox;
        TextBox middenYTextbox;
        TextBox schaalTextbox;
        TextBox herhalingTextbox;
        ListBox kleurmodellenListbox;
        PictureBox gekozenKleur1;
        PictureBox gekozenKleur2;
        PictureBox gekozenKleur3;
        TextBox naamEigenModelTextbox;
        CheckBox smoothingCheckbox;
        Label waarschuwingsLabel;
        CheckBox fractalKeuze;
        TextBox juliaEchtTextbox;
        TextBox juliaImaginairTextbox;

        GroupBox interessantePuntenBox;
        ListBox interessantePuntenListbox;
        TextBox interessantePuntNaamTextbox;

        GroupBox tijdBox;
        Label tijdLabel;
        List<OpgeslagenMandelbrot> interessantePunten = new List<OpgeslagenMandelbrot>();

        GroupBox opslaan;


        List<KleurModel> kleurModellen = new List<KleurModel>();
        int currentKleurModel = 1;


        static readonly object lockVoorThreads = new object();
        int aantalThreads = Environment.ProcessorCount;

        Mandelbrot()
        {
            this.Text = "Mandelbrot";
            this.ClientSize = new Size(820, 600);

            this.Paint += this.tekenScherm;
            this.MouseClick += Mandelbrot_MouseClick;
            this.Resize += WindowVerandering;
            this.ResizeEnd += WindowVeranderingEind;

            mandelBitmap = new Bitmap(bitmapSize, bitmapSize);
            Thread.CurrentThread.Name = "0";

            //Voeg standaard kleurmodellen toe
            Color[] basis = new Color[2];
            basis[0] = Color.Black;
            basis[1] = Color.White;
            kleurModellen.Add(new KleurModel(kleurModellen.Count, "Zwart-Wit", basis));

            Color[] BlauwOranje = new Color[16];
            BlauwOranje[0] = Color.FromArgb(66, 30, 15);
            BlauwOranje[1] = Color.FromArgb(25, 7, 26);
            BlauwOranje[2] = Color.FromArgb(9, 1, 47);
            BlauwOranje[3] = Color.FromArgb(4, 4, 73);
            BlauwOranje[4] = Color.FromArgb(0, 7, 100);
            BlauwOranje[5] = Color.FromArgb(12, 44, 138);
            BlauwOranje[6] = Color.FromArgb(24, 82, 177);
            BlauwOranje[7] = Color.FromArgb(57, 125, 209);
            BlauwOranje[8] = Color.FromArgb(134, 181, 229);
            BlauwOranje[9] = Color.FromArgb(211, 236, 248);
            BlauwOranje[10] = Color.FromArgb(241, 233, 191);
            BlauwOranje[11] = Color.FromArgb(248, 201, 95);
            BlauwOranje[12] = Color.FromArgb(255, 170, 0);
            BlauwOranje[13] = Color.FromArgb(204, 128, 0);
            BlauwOranje[14] = Color.FromArgb(153, 87, 0);
            BlauwOranje[15] = Color.FromArgb(106, 52, 3);
            kleurModellen.Add(new KleurModel(kleurModellen.Count, "Blauw-Oranje", BlauwOranje));//Deze is gebaseerd op het kleurmodel dat op de wikipediapagina over mandelbrot wordt gebruikt

            Color[] Regenboog = new Color[7];
            Regenboog[0] = Color.Red;
            Regenboog[1] = Color.Orange;
            Regenboog[2] = Color.Yellow;
            Regenboog[3] = Color.Green;
            Regenboog[4] = Color.Blue;
            Regenboog[5] = Color.Indigo;
            Regenboog[6] = Color.Violet;
            kleurModellen.Add(new KleurModel(kleurModellen.Count, "Regenboog", Regenboog));


            kleurModellen.Add(new KleurModel(kleurModellen.Count, "Vuur", null));
            kleurModellen[kleurModellen.Count - 1].type = "Vuur";

            kleurModellen.Add(new KleurModel(kleurModellen.Count, "Blauw-Mix", null));
            kleurModellen[kleurModellen.Count - 1].type = "Blauw-Mix";

            kleurModellen.Add(new KleurModel(kleurModellen.Count, "Groen-Mix", null));
            kleurModellen[kleurModellen.Count - 1].type = "Groen-Mix";

            kleurModellen.Add(new KleurModel(kleurModellen.Count, "Roze", null));
            kleurModellen[kleurModellen.Count - 1].type = "Roze";


            //UI elementen aanmaken
            zijPaneel = new Panel();
            zijPaneel.SetBounds(this.Width - 235, 5, 220, this.Height - 50);
            zijPaneel.AutoScroll = true;
            this.Controls.Add(zijPaneel);


            //Start configuratiebox
            configuratie = new GroupBox();
            configuratie.SetBounds(2, 0, 195, hoogteConfiguratie);
            configuratie.Text = "Configuratie";
            configuratie.MouseClick += VeranderGroteZijscherm;
            zijPaneel.Controls.Add(configuratie);


            //X 
            Label middenXLabel = new Label();
            middenXLabel.SetBounds(3, 20, 70, 15);
            middenXLabel.Text = "Midden X: ";
            this.configuratie.Controls.Add(middenXLabel);

            middenXTextbox = new TextBox();
            middenXTextbox.SetBounds(3, 40, 90, 15);
            middenXTextbox.Text = middenX.ToString();
            middenXTextbox.KeyDown += TextboxEnter;
            this.configuratie.Controls.Add(middenXTextbox);


            //Y
            Label middenYLabel = new Label();
            middenYLabel.SetBounds(100, 20, 70, 15);
            middenYLabel.Text = "Midden Y: ";
            this.configuratie.Controls.Add(middenYLabel);

            middenYTextbox = new TextBox();
            middenYTextbox.SetBounds(100, 40, 90, 15);
            middenYTextbox.Text = middenY.ToString();
            middenYTextbox.KeyDown += TextboxEnter;
            this.configuratie.Controls.Add(middenYTextbox);


            //Schaal
            Label schaalLabel = new Label();
            schaalLabel.SetBounds(3, 70, 70, 15);
            schaalLabel.Text = "Schaal: ";
            this.configuratie.Controls.Add(schaalLabel);

            schaalTextbox = new TextBox();
            schaalTextbox.SetBounds(3, 90, 90, 15);
            schaalTextbox.Text = schaal.ToString();
            schaalTextbox.KeyDown += TextboxEnter;
            this.configuratie.Controls.Add(schaalTextbox);


            //Iteraties
            Label herhalingLabel = new Label();
            herhalingLabel.SetBounds(100, 70, 70, 15);
            herhalingLabel.Text = "Iteraties: ";
            this.configuratie.Controls.Add(herhalingLabel);

            herhalingTextbox = new TextBox();
            herhalingTextbox.SetBounds(100, 90, 90, 15);
            herhalingTextbox.Text = herhaling.ToString();
            herhalingTextbox.KeyDown += TextboxEnter;
            this.configuratie.Controls.Add(herhalingTextbox);

            //Kleuren
            Label kleurListboxLabel = new Label();
            kleurListboxLabel.SetBounds(3, 120, 80, 20);
            kleurListboxLabel.Text = "Kleurmodellen: ";
            this.configuratie.Controls.Add(kleurListboxLabel);

            kleurmodellenListbox = new ListBox();
            kleurmodellenListbox.SetBounds(3, 140, 90, 100);
            foreach (KleurModel k in kleurModellen)//laad standaardkleurmodellen in de listbox
            {
                kleurmodellenListbox.Items.Add(k.naam);
            }
            kleurmodellenListbox.SelectedIndexChanged += GeselecteerdKleurmodelVerandering;
            this.configuratie.Controls.Add(kleurmodellenListbox);

            Button kiesKleur1 = new Button();
            kiesKleur1.SetBounds(100, 120, 60, 20);
            kiesKleur1.Text = "Kleur 1:";
            kiesKleur1.MouseClick += KiesKleurKlik;
            this.configuratie.Controls.Add(kiesKleur1);

            gekozenKleur1 = new PictureBox();
            gekozenKleur1.BackColor = Color.White;
            gekozenKleur1.SetBounds(170, 120, 20, 20);
            this.configuratie.Controls.Add(gekozenKleur1);

            Button kiesKleur2 = new Button();
            kiesKleur2.SetBounds(100, 145, 60, 20);
            kiesKleur2.Text = "Kleur 2:";
            kiesKleur2.MouseClick += KiesKleurKlik;
            this.configuratie.Controls.Add(kiesKleur2);

            gekozenKleur2 = new PictureBox();
            gekozenKleur2.BackColor = Color.White;
            gekozenKleur2.SetBounds(170, 145, 20, 20);
            this.configuratie.Controls.Add(gekozenKleur2);

            Button kiesKleur3 = new Button();
            kiesKleur3.SetBounds(100, 170, 60, 20);
            kiesKleur3.Text = "Kleur 3:";
            kiesKleur3.MouseClick += KiesKleurKlik;
            this.configuratie.Controls.Add(kiesKleur3);

            gekozenKleur3 = new PictureBox();
            gekozenKleur3.BackColor = Color.White;
            gekozenKleur3.SetBounds(170, 170, 20, 20);
            this.configuratie.Controls.Add(gekozenKleur3);

            Label naamEigenModelLabel = new Label();
            naamEigenModelLabel.SetBounds(92, 200, 38, 15);
            naamEigenModelLabel.Text = "Naam:";
            this.configuratie.Controls.Add(naamEigenModelLabel);

            naamEigenModelTextbox = new TextBox();
            naamEigenModelTextbox.SetBounds(130, 198, 60, 20);
            this.configuratie.Controls.Add(naamEigenModelTextbox);

            Button stelEigenKleurIn = new Button();
            stelEigenKleurIn.SetBounds(105, 225, 80, 40);
            stelEigenKleurIn.Text = "Sla kleur- model op";
            stelEigenKleurIn.MouseHover += HelpTekstKleurInstellen;
            stelEigenKleurIn.MouseClick += StelEigenKleurIn;
            this.configuratie.Controls.Add(stelEigenKleurIn);


            //Smoothing
            smoothingCheckbox = new CheckBox();
            smoothingCheckbox.SetBounds(3, 245, 100, 20);
            smoothingCheckbox.Text = "Smoothing";
            smoothingCheckbox.CheckStateChanged += Smoothing;
            this.configuratie.Controls.Add(smoothingCheckbox);


            //Mandelbrot/Julia Keuze
            fractalKeuze = new CheckBox();
            fractalKeuze.SetBounds(3, 275, 100, 20);
            fractalKeuze.Text = "Julia fractal";
            fractalKeuze.CheckStateChanged += veranderFractalType;
            this.configuratie.Controls.Add(fractalKeuze);

            Label juliaRealLabel = new Label();
            juliaRealLabel.SetBounds(3, 295, 70, 15);
            juliaRealLabel.Text = "Julia echt: ";
            this.configuratie.Controls.Add(juliaRealLabel);

            juliaEchtTextbox = new TextBox();
            juliaEchtTextbox.SetBounds(3, 315, 90, 15);
            juliaEchtTextbox.Text = juliaEcht.ToString();
            juliaEchtTextbox.KeyDown += TextboxEnter;
            juliaEchtTextbox.Enabled = false;
            this.configuratie.Controls.Add(juliaEchtTextbox);

            Label juliaImaginairLabel = new Label();
            juliaImaginairLabel.SetBounds(100, 295, 90, 15);
            juliaImaginairLabel.Text = "Julia Imaginair: ";
            this.configuratie.Controls.Add(juliaImaginairLabel);

            juliaImaginairTextbox = new TextBox();
            juliaImaginairTextbox.SetBounds(100, 315, 90, 15);
            juliaImaginairTextbox.Text = juliaImaginair.ToString();
            juliaImaginairTextbox.KeyDown += TextboxEnter;
            juliaImaginairTextbox.Enabled = false;
            this.configuratie.Controls.Add(juliaImaginairTextbox);


            //Generate en reset knop
            Button generateMandelbrot = new Button();
            generateMandelbrot.SetBounds(3, 345, 80, 40);
            generateMandelbrot.Text = "Genereer\nFiguur";
            generateMandelbrot.Font = new Font(generateMandelbrot.Font.FontFamily, 10, FontStyle.Bold);
            generateMandelbrot.MouseClick += MuisKlik;
            this.configuratie.Controls.Add(generateMandelbrot);

            Button resetButton = new Button();
            resetButton.SetBounds(100, 345, 80, 40);
            resetButton.Text = "Reset";
            resetButton.MouseClick += Reset;
            this.configuratie.Controls.Add(resetButton);


            //WaarschuwingsLabel
            waarschuwingsLabel = new Label();
            waarschuwingsLabel.SetBounds(3, 395, 190, 50);
            waarschuwingsLabel.ForeColor = Color.Red;
            waarschuwingsLabel.Text = "";
            this.configuratie.Controls.Add(waarschuwingsLabel);

            //Einde configuratie box


            //interessante punten Box
            interessantePuntenBox = new GroupBox();
            interessantePuntenBox.SetBounds(2, configuratie.Top + configuratie.Height, 195, hoogteInteressantePuntenBox);
            interessantePuntenBox.Text = "Interessante punten";
            interessantePuntenBox.MouseClick += VeranderGroteZijscherm;
            zijPaneel.Controls.Add(interessantePuntenBox);

            interessantePuntenListbox = new ListBox();
            interessantePuntenListbox.SetBounds(3, 20, 100, 150);
            this.interessantePuntenBox.Controls.Add(interessantePuntenListbox);

            //voeg standaard interessantepunten toe
            OpgeslagenMandelbrot oogVDDuivel = new OpgeslagenMandelbrot("Eye of the devil", -0.906454144288828, 0.272821065568659, 4.54747350886466E-15, 2000, true, false, 0, 0, 3);
            interessantePuntenListbox.Items.Add(oogVDDuivel.naam);
            interessantePunten.Add(oogVDDuivel);

            OpgeslagenMandelbrot oogVDDuivel2 = new OpgeslagenMandelbrot("Eye of the devil 2", 0.1730126953125, -0.238515625, 2.44140625E-6, 1000, true, true, -0.8, 0.156, 3);
            interessantePuntenListbox.Items.Add(oogVDDuivel2.naam);
            interessantePunten.Add(oogVDDuivel2);

            OpgeslagenMandelbrot flowers = new OpgeslagenMandelbrot("Flowers", 0.34574948310852, -0.578032903671265, 2.38418579101563E-9, 5000, true, false, 0, 0, 4);
            interessantePuntenListbox.Items.Add(flowers.naam);
            interessantePunten.Add(flowers);

            OpgeslagenMandelbrot symmetry = new OpgeslagenMandelbrot("Symmetry", -1.99999999564062, 4.76689008247075E-12, 4.65661287307739E-12, 100, false, false, 0, 0, 0);
            interessantePuntenListbox.Items.Add(symmetry.naam);
            interessantePunten.Add(symmetry);

            OpgeslagenMandelbrot psychedelic = new OpgeslagenMandelbrot("Psychedelic", -0.483160568228923, -0.625536816087552, 1.49011611938477E-10, 400, true, false, 0, 0, 2);
            interessantePuntenListbox.Items.Add(psychedelic.naam);
            interessantePunten.Add(psychedelic);

            OpgeslagenMandelbrot psychedelic2 = new OpgeslagenMandelbrot("Psychedelic 2", 0.355728752319701, -0.584374508837936, 2.3283064365387E-12, 5000, false, false, 0, 0, 1);
            interessantePuntenListbox.Items.Add(psychedelic2.naam);
            interessantePunten.Add(psychedelic2);

            OpgeslagenMandelbrot edgeofAbyss = new OpgeslagenMandelbrot("Edge of the abyss", 0.350298442840576, -0.580946884155273, 3.814697265625E-8, 5000, false, false, 0, 0, 6);
            interessantePuntenListbox.Items.Add(edgeofAbyss.naam);
            interessantePunten.Add(edgeofAbyss);

            OpgeslagenMandelbrot Julia_1 = new OpgeslagenMandelbrot("Julia 1", 0, 0, 0.005, 200, true, true, 0.285, 0.01, 1);
            interessantePuntenListbox.Items.Add(Julia_1.naam);
            interessantePunten.Add(Julia_1);

            OpgeslagenMandelbrot Julia_2 = new OpgeslagenMandelbrot("Julia 2", 0, 0, 0.005, 200, true, true, -0.7269, 0.1889, 4);
            interessantePuntenListbox.Items.Add(Julia_2.naam);
            interessantePunten.Add(Julia_2);

            OpgeslagenMandelbrot Julia_3 = new OpgeslagenMandelbrot("Julia 3", 0, 0, 0.005, 100, true, true, -0.4, 0.6, 5);
            interessantePuntenListbox.Items.Add(Julia_3.naam);
            interessantePunten.Add(Julia_3);

            //

            Label naamInteressantPunt = new Label();
            naamInteressantPunt.SetBounds(100, 20, 70, 20);
            naamInteressantPunt.Text = "Naam:";
            this.interessantePuntenBox.Controls.Add(naamInteressantPunt);

            interessantePuntNaamTextbox = new TextBox();
            interessantePuntNaamTextbox.SetBounds(100, 40, 90, 15);
            this.interessantePuntenBox.Controls.Add(interessantePuntNaamTextbox);

            Button voegInteressantPuntToe = new Button();
            voegInteressantPuntToe.SetBounds(110, 60, 70, 40);
            voegInteressantPuntToe.Text = "Voeg punt \ntoe";
            voegInteressantPuntToe.MouseClick += VoegInteressantPuntToe;
            this.interessantePuntenBox.Controls.Add(voegInteressantPuntToe);

            Button haalInteressantPuntOp = new Button();
            haalInteressantPuntOp.SetBounds(110, 120, 70, 40);
            haalInteressantPuntOp.Text = "Haal punt \nop";
            haalInteressantPuntOp.MouseClick += HaalInteressantPuntOp;
            this.interessantePuntenBox.Controls.Add(haalInteressantPuntOp);
            //Einde interessante punten box


            //Tijd Box
            tijdBox = new GroupBox();
            tijdBox.SetBounds(2, interessantePuntenBox.Top + interessantePuntenBox.Height, 195, hoogteTijdBox);
            tijdBox.Text = "Tijd";
            tijdBox.MouseClick += VeranderGroteZijscherm;
            zijPaneel.Controls.Add(tijdBox);

            tijdLabel = new Label();
            tijdLabel.SetBounds(55, 20, 100, 15);
            this.tijdBox.Controls.Add(tijdLabel);
            //Einde Tijd box


            //Opslaan
            opslaan = new GroupBox();
            opslaan.SetBounds(2, tijdBox.Top + tijdBox.Height, 195, hoogteOpslaanBox);
            opslaan.Text = "Opslaan";
            opslaan.MouseClick += VeranderGroteZijscherm;
            zijPaneel.Controls.Add(opslaan);

            Button opslaanKnop = new Button();
            opslaanKnop.SetBounds(30, 20, 100, 20);
            opslaanKnop.Text = "Opslaan";
            opslaanKnop.MouseClick += BitmapOpslaan;
            this.opslaan.Controls.Add(opslaanKnop);
            //Einde opslaan box


            // einde aanmaken UI elementen



            updateBitmap(true);
        }

        private void HelpTekstKleurInstellen(object sender, EventArgs e)
        {
            ToolTip tooltip1 = new ToolTip();
            tooltip1.SetToolTip(((Button)sender), "Selecteer met de drie bovenstaande knoppen drie kleuren, \ngeef een naam op en klik hier om daarna het kleurenmodel op te slaan.");
        }

        private void BitmapOpslaan(object sender, MouseEventArgs e)
        {
            SaveFileDialog sFD = new SaveFileDialog();
            sFD.FileName = "Mandelbrot";
            sFD.Filter = "picture (.png)|*.png";
            sFD.DefaultExt = ".png";
            DialogResult result = DialogResult.None;

            Thread t = new Thread(() =>//de Dialog window moet in een nieuwe thread worden geopend omdat de hooft thread niet single threaded apartment kan zijn
            {
                result = sFD.ShowDialog();
            });

            t.SetApartmentState(ApartmentState.STA);
            t.Start();
            t.Join();

            if (result == DialogResult.OK)
            {
                mandelBitmap.Save(sFD.FileName);
            }
        }

        private void HaalInteressantPuntOp(object sender, MouseEventArgs e)
        {
            foreach (OpgeslagenMandelbrot oM in interessantePunten)
            {
                if (oM.naam == interessantePuntenListbox.SelectedItem.ToString())
                {
                    this.schaal = oM.schaal;
                    this.middenX = oM.middenX;
                    this.middenY = oM.middenY;
                    this.herhaling = oM.herhaling;
                    this.smoothing = oM.smoothing;
                    this.julia = oM.julia;
                    if (julia)
                    {
                        this.juliaEcht = oM.juliaE;
                        this.juliaImaginair = oM.juliaI;
                    }
                    this.currentKleurModel = oM.kleurModel;
                    resetUI();
                    updateBitmap(true);
                }
            }
        }

        private void VoegInteressantPuntToe(object sender, MouseEventArgs e)
        {
            waarschuwingsLabel.Text = "";
            bool naamVrij = true;
            foreach (OpgeslagenMandelbrot oM in interessantePunten)
            {
                if (oM.naam == interessantePuntNaamTextbox.Text)
                {
                    naamVrij = false;
                }
            }
            if (naamVrij && interessantePuntNaamTextbox.Text.Length > 0)
            {
                OpgeslagenMandelbrot oM = new OpgeslagenMandelbrot(interessantePuntNaamTextbox.Text, middenX, middenY, schaal, herhaling, smoothing, julia, juliaEcht, juliaImaginair, currentKleurModel);
                interessantePunten.Add(oM);
                interessantePuntenListbox.Items.Add(oM.naam);
                resetUI();
            }
            else if (naamVrij)
            {
                waarschuwingsLabel.Text = "Naam mag niet leeg zijn.";

            }
            else
            {
                waarschuwingsLabel.Text = "Naam in gebruik.";
            }
        }

        private void VeranderGroteZijscherm(object sender, MouseEventArgs e)    //zorgt er voor dat je de losse vakjes in het zijscherm open en dicht kan  maken
        {
            GroupBox gB = (GroupBox)sender;
            if (e.Y <= 15)                                                      //wanneer op de bovenkant wordt gedrukt
            {
                if (gB.Height > 20)
                {
                    gB.Height = 20;
                }
                else
                {
                    if (gB == configuratie)
                    {
                        gB.Height = hoogteConfiguratie;

                    }
                    else if (gB == interessantePuntenBox)
                    {
                        gB.Height = hoogteInteressantePuntenBox;

                    }
                    else if (gB == tijdBox)
                    {
                        gB.Height = hoogteTijdBox;

                    }
                    else if (gB == opslaan)
                    {
                        gB.Height = hoogteOpslaanBox;

                    }
                }

                interessantePuntenBox.Top = configuratie.Top + configuratie.Height;         //zorgt dat alle zijvakjes netjes onder elkaar komen
                tijdBox.Top = interessantePuntenBox.Top + interessantePuntenBox.Height;
                opslaan.Top = tijdBox.Top + tijdBox.Height;

            }
        }

        private void Smoothing(object sender, EventArgs e)
        {
            CheckBox cb = (CheckBox)sender;
            if (cb.Checked)
            {
                smoothing = true;
            }
            else
            {
                smoothing = false;
            }
            updateBitmap(true);
        }

        private void veranderFractalType(object sender, EventArgs e)
        {
            CheckBox cb = (CheckBox)sender;
            if (cb.Checked)
            {
                julia = true;
                juliaEchtTextbox.Enabled = true;
                juliaImaginairTextbox.Enabled = true;
            }
            else
            {
                julia = false;
                juliaEchtTextbox.Enabled = false;
                juliaImaginairTextbox.Enabled = false;

            }
        }

        private void StelEigenKleurIn(object sender, MouseEventArgs e)
        {
            waarschuwingsLabel.Text = "";

            string naam = naamEigenModelTextbox.Text;
            bool ingebruik = false;

            foreach (KleurModel k in kleurModellen)
            {
                if (k.naam == naam)
                {
                    ingebruik = true;
                }
            }
            if (!ingebruik && naam.Length > 0)
            {
                Color gekozenKleur1 = this.gekozenKleur1.BackColor;
                Color gekozenKleur2 = this.gekozenKleur2.BackColor;
                Color gekozenKleur3 = this.gekozenKleur3.BackColor;
                Color[] gekozenKleurModel = new Color[30];
                int lengteStap = gekozenKleurModel.Length / 3;
                for (int i = 0; i < gekozenKleurModel.Length; i++)      //zorgt dat de 3 opgegeven kleuren mooi in elkaar overgaan
                {
                    if (i < lengteStap)
                    {
                        gekozenKleurModel[i] = Color.FromArgb(gekozenKleur3.R - (gekozenKleur3.R - gekozenKleur1.R) * i / lengteStap, gekozenKleur3.G - (gekozenKleur3.G - gekozenKleur1.G) * i / lengteStap, gekozenKleur3.B - (gekozenKleur3.B - gekozenKleur1.B) * i / lengteStap);
                    }
                    else if (i < lengteStap * 2)
                    {
                        gekozenKleurModel[i] = Color.FromArgb(gekozenKleur1.R - (gekozenKleur1.R - gekozenKleur2.R) * (i - lengteStap) / lengteStap, gekozenKleur1.G - (gekozenKleur1.G - gekozenKleur2.G) * (i - lengteStap) / lengteStap, gekozenKleur1.B - (gekozenKleur1.B - gekozenKleur2.B) * (i - lengteStap) / lengteStap);
                    }
                    else
                    {
                        gekozenKleurModel[i] = Color.FromArgb(gekozenKleur2.R - (gekozenKleur2.R - gekozenKleur3.R) * (i - lengteStap * 2) / lengteStap, gekozenKleur2.G - (gekozenKleur2.G - gekozenKleur3.G) * (i - lengteStap * 2) / lengteStap, gekozenKleur2.B - (gekozenKleur2.B - gekozenKleur3.B) * (i - lengteStap * 2) / lengteStap);

                    }
                }
                kleurModellen.Add(new KleurModel(kleurModellen.Count, naam, gekozenKleurModel));
                kleurmodellenListbox.Items.Add(naam);
                currentKleurModel = kleurModellen.Count - 1;
                resetUI();
                updateBitmap(true);
            }
            else if (naam.Length > 0)
            {
                waarschuwingsLabel.Text = "Die naam is al in gebruik, kies een andere";
            }
            else
            {
                waarschuwingsLabel.Text = "Naam mag niet leeg zijn";
            }
        }


        private void KiesKleurKlik(object sender, MouseEventArgs e)
        {
            Button obj = (Button)sender;
            ColorDialog cd = new ColorDialog();
            if (cd.ShowDialog() == DialogResult.OK)
            {
                if (obj.Text == "Kleur 1:")
                {
                    gekozenKleur1.BackColor = cd.Color;
                }
                else if (obj.Text == "Kleur 2:")
                {
                    gekozenKleur2.BackColor = cd.Color;
                }
                else if (obj.Text == "Kleur 3:")
                {
                    gekozenKleur3.BackColor = cd.Color;
                }
            }
        }

        private void WindowVeranderingEind(object sender, EventArgs e)  //zorgt dat de grote van de bitmap altijd gelijk is aan de hoogt van het scherm, dit gebeurt na het einde van een verandering aangezien er anders te vaak opnieuw wordt berekent/getekend
        {
            if (bitmapSize != this.ClientSize.Height) //zorgt dat de bitmap niet wordt geupdate wanner de hoogt niet verander. B.v. als de window horizontaal wordt vergroot
            {
                bitmapSize = this.ClientSize.Height;
                mandelBitmap.Dispose();
                mandelBitmap = new Bitmap(bitmapSize, bitmapSize);
                updateBitmap(true);
            }
        }

        private void WindowVerandering(object sender, EventArgs e)  //zorgt dat de zijbalk altijd de voledige hoogte beschrijft, kan constant worden uitgevoerd aangezien het niet een dure operatie is
        {
            zijPaneel.SetBounds(this.Width - 235, 5, 215, this.Height - 50);
        }

        private void Reset(object sender, MouseEventArgs e)     //zet de figuur terug naar zijn standaardwaarden
        {
            schaal = 0.01;
            middenX = 0;
            middenY = 0;
            herhaling = 100;
            resetUI();
            updateBitmap(true);
        }

        private void GeselecteerdKleurmodelVerandering(object sender, EventArgs e)
        {
            for (int i = 0; i < kleurModellen.Count; i++)
            {
                if (kleurModellen[i].naam == kleurmodellenListbox.SelectedItem.ToString() && currentKleurModel != i)
                {
                    this.currentKleurModel = i;
                    updateBitmap(true);
                }
            }
        }



        private void berekenMandelbrotPixels()
        {
            Monitor.Enter(lockVoorThreads);                 //Ivm multithreading is het handig de waarden die steeds opnieuw nodig zijn tijdelijk in een eigen variabele op te slaan
            int mandelBitmapWidth = mandelBitmap.Width;
            int mandelBitmapHeight = mandelBitmap.Height;
            Monitor.Exit(lockVoorThreads);

            for (int i = 0; i < mandelBitmapWidth; i++)
            {
                for (int i2 = Int32.Parse(Thread.CurrentThread.Name); i2 < mandelBitmapHeight; i2 += aantalThreads)     //zorgt er voor dat elke thread verschillende regels doet. zodat niet één thread een grote hoeveelheid "oneindigheden" moet berekenen
                {
                    Color kleur;
                    double mandelGetal = mandelbrotGetal((i - bitmapSize / 2) * schaal + middenX, (i2 - bitmapSize / 2) * schaal - middenY);    //zorgt dat de juiste x en y worden doorgegeven wanneer (middenX,middenY) het midden van de bitmapbeschrijft.
                    if (mandelGetal < herhaling)            //zorgt ervoor dat punten met mandelgetal "oneindig" altijd zwart zijn
                    {
                        kleur = kleurModellen[currentKleurModel].KleurBijGetal(mandelGetal);
                    }
                    else
                    {
                        kleur = Color.Black;
                    }

                    Monitor.Enter(lockVoorThreads);
                    mandelBitmap.SetPixel(i, i2, kleur);
                    Monitor.Exit(lockVoorThreads);

                }
            }
        }

        private void TextboxEnter(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                MuisKlik(this, new MouseEventArgs(MouseButtons.Left, 0, 0, 0, 0));
            }
        }

        private void MuisKlik(object sender, MouseEventArgs e)
        {
            this.waarschuwingsLabel.Text = "";
            double xResult;
            double yResult;
            double schaalResult;
            int herhalingResult;
            double juliaEResult;
            double juliaIResult;
            if (double.TryParse(middenXTextbox.Text.Replace(',', '.'), NumberStyles.Any, CultureInfo.InvariantCulture, out xResult) &&                  //test voor correcte input alvorens de waarden toe te passen.
                double.TryParse(middenYTextbox.Text.Replace(',', '.'), NumberStyles.Any, CultureInfo.InvariantCulture, out yResult) &&
                double.TryParse(juliaEchtTextbox.Text.Replace(',', '.'), NumberStyles.Any, CultureInfo.InvariantCulture, out juliaEResult) &&
                double.TryParse(juliaImaginairTextbox.Text.Replace(',', '.'), NumberStyles.Any, CultureInfo.InvariantCulture, out juliaIResult) &&
                double.TryParse(schaalTextbox.Text.Replace(',', '.'), NumberStyles.Any, CultureInfo.InvariantCulture, out schaalResult) &&
                Int32.TryParse(herhalingTextbox.Text, out herhalingResult) && herhalingResult >= 0)                                         
            {
                this.middenX = xResult;
                this.middenY = yResult;
                this.schaal = schaalResult;
                this.herhaling = herhalingResult;
                this.juliaEcht = juliaEResult;
                this.juliaImaginair = juliaIResult;
                resetUI();
                updateBitmap(true);
            }
            else
            {
                this.waarschuwingsLabel.Text = "Foutieve input. \nZorg dat je getallen invoert. Schaal positief is en het aantal iteraties positief en geheel is.";
                resetUI();
            }
        }

        private void resetUI()  //reset de UI voor als er aanpassingen aan de waarden worden gedaan die niet via het UI worden ingesteld.
        {
            this.middenXTextbox.Text = middenX.ToString();
            this.middenYTextbox.Text = middenY.ToString();
            this.schaalTextbox.Text = schaal.ToString();
            this.herhalingTextbox.Text = herhaling.ToString();
            this.smoothingCheckbox.Checked = smoothing;
            this.fractalKeuze.Checked = julia;
            this.juliaEchtTextbox.Text = juliaEcht.ToString();
            this.juliaImaginairTextbox.Text = juliaImaginair.ToString();
            this.naamEigenModelTextbox.Text = "";
            this.gekozenKleur1.BackColor = Color.White;
            this.gekozenKleur2.BackColor = Color.White;
            this.gekozenKleur3.BackColor = Color.White;
            this.interessantePuntNaamTextbox.Text = "";
        }



        private void Mandelbrot_MouseClick(object sender, MouseEventArgs mea)
        {
            if (mea.Button == MouseButtons.Left || mea.Button == MouseButtons.Right)
            {
                if (mea.X >= mandelPlaatjeX && mea.X <= mandelPlaatjeX + mandelBitmap.Width && mea.Y >= mandelPlaatjeY && mea.Y <= mandelPlaatjeY + mandelBitmap.Height)
                {
                    if (Control.ModifierKeys != Keys.Shift)                                         //zorgt dat je met shift ingedrukt exact richting het midden kan inzoomen
                    {
                        middenX = (mea.X - mandelPlaatjeX - bitmapSize / 2) * schaal + middenX;
                        middenY = (bitmapSize / 2 - mea.Y + mandelPlaatjeY) * schaal + middenY;
                    }

                    if (mea.Button == MouseButtons.Left)
                    {
                        schaal = schaal / 2;
                    }
                    else
                    {
                        schaal = schaal * 2;
                    }

                    updateBitmap(true);
                }
                middenXTextbox.Text = middenX.ToString();
                middenYTextbox.Text = middenY.ToString();
                schaalTextbox.Text = schaal.ToString();
            }

        }

        private void updateBitmap(bool tekenBitmap)
        {
            DateTime tijd = System.DateTime.Now;

            Thread[] threads = new Thread[aantalThreads];
            for (int i = 0; i < aantalThreads; i++)    //maakt threads aan en geeft ze de juiste functie om aan te werken
            {
                ThreadStart childRef = new ThreadStart(berekenMandelbrotPixels);
                Thread childThread = new Thread(childRef);
                childThread.Name = (i + 1).ToString();          //zorgt dat threads genummerd zijn van 1 t/m aantalthreads aangezien de hoofdthread thread "0" is.
                childThread.Start();
                threads[i] = childThread;
            }

            berekenMandelbrotPixels();


            foreach (Thread t in threads)       //zorgt ervoor dat alle threads klaar zijn voordat de bitmap wordt getekent
            {
                t.Join();
                t.Abort();
            }

            if (tekenBitmap)
            {
                this.Invalidate();
            }

            tijdLabel.Text = (System.DateTime.Now - tijd).ToString();       //Geeft de tijd weer die het kost om de mandelbrot te berekenen en tekenen
        }

        private void tekenScherm(object obj, PaintEventArgs pea)
        {
            pea.Graphics.DrawImage(mandelBitmap, mandelPlaatjeX, mandelPlaatjeY);
        }

        private double mandelbrotGetal(double x, double y)
        {
            double mandelbrotGetal = 0;
            double a = 0;
            double b = 0;

            if (julia)
            {
                a = x;
                b = y;
                x = juliaEcht;
                y = juliaImaginair;
            }

            double aKwadraat = a * a;       //aangezien er meer dan 1 keer a en b kwadraat wordt gebruikt per cycle wordt deze elke keer los berekent en opgeslagen om het algoritme te versnellen
            double bKwadraat = b * b;
            double tmpA = a;

            while (aKwadraat + bKwadraat <= 4 && mandelbrotGetal < herhaling)
            {
                tmpA = a;
                a = aKwadraat - bKwadraat + x;
                b = 2 * tmpA * b + y;
                mandelbrotGetal++;
                aKwadraat = a * a;
                bKwadraat = b * b;
            }

            if (smoothing)                  
            {
                for (int i = 0; i < 3; i++)// Er worden extra stappen gedaan omdat dit smoothing er beter uit laat zijn, na 3 stappen is het resultaat al zeer goed en extra stappen leken niet nodig
                {
                    tmpA = a;
                    a = aKwadraat - bKwadraat + x;
                    b = 2 * tmpA * b + y;
                    mandelbrotGetal++;
                    aKwadraat = a * a;
                    bKwadraat = b * b;
                }

                mandelbrotGetal = mandelbrotGetal + 1 - Math.Log(Math.Log(Math.Sqrt(aKwadraat + bKwadraat))) / Math.Log(2);
            }

            return mandelbrotGetal;
        }

        static void Main()
        {
            Application.Run(new Mandelbrot());
        }
    }

    class OpgeslagenMandelbrot          //hiermee worden opgeslagen punten opgeslagen zodat alle waarden simpel erin en uit kunnen worden gehaald
    {
        public string naam;
        public double schaal, middenX, middenY, juliaE, juliaI;
        public int herhaling;
        public bool julia, smoothing;
        public int kleurModel;

        public OpgeslagenMandelbrot(string naam, double middenX, double middenY, double schaal, int herhaling, bool smoothing, bool julia, double juliaE, double juliaI, int kleurModel)
        {
            this.naam = naam;
            this.schaal = schaal;
            this.middenX = middenX;
            this.middenY = middenY;
            this.herhaling = herhaling;
            this.smoothing = smoothing;
            this.julia = julia;
            this.kleurModel = kleurModel;
            if (julia)
            {
                this.juliaE = juliaE;
                this.juliaI = juliaI;
            }
        }
    }

    class KleurModel        
    {
        public string type;
        Color[] model;
        public int nummer;
        public string naam;

        public KleurModel(int nummer, string naam, Color[] model)
        {
            this.model = model;
            this.nummer = nummer;
            this.naam = naam;
            this.type = "Array";
        }

        public Color KleurBijGetal(double getal)
        {
            if (type == "Array")        //wanneer het kleurmodel in een array zit kan het via de functie GemiddeldGewogenKleur worden ingesteld
            {
                return gemiddeldGewogenKleur(getal);
            }
            else if (type == "Blauw-Mix")     //enkele zelfgevonden kleurmodellen zijn gebaseerd op het direct gebruiken van het mandelgetal bij het bepalen van de kleur, deze moeten echter wel los worden toegevoegd
            {
                return Color.FromArgb((int)(getal % 128 * 2), (int)(getal % 32 * 7), (int)(getal % 16 * 14));
            }
            else if (type == "Vuur")
            {
                return Color.FromArgb((int)(getal % 128 * 2), 0, 0);
            }
            else if (type == "Roze")
            {
                return Color.FromArgb(255-(int)(getal % 50 * 2), 255-(int)(getal % 100 * 2), 255-(int)(getal % 20 * 2));
            }
            else
            {
                return Color.FromArgb((int)(getal % 123 * 2), (int)(getal % 26 * 8), (int)(getal % 75 * 3));
            }
        }

        private Color gemiddeldGewogenKleur(double mandelGetal)
        {
            int kleur1 = (int)mandelGetal;                  
            double afstand2 = mandelGetal - kleur1;         //neemt het getal dat na de komma staat dit is hoever het punt tussen kleur 1 en 2 zit
            double afstand1 = 1 - afstand2;                 
            kleur1 = kleur1 % model.Length;                 //stelt kleur 1 in
            int kleur2 = (kleur1 + 1) % model.Length;       //neemt de eerstvolgende kleur in de array
            int r = (int)(model[kleur1].R * afstand1 + model[kleur2].R * afstand2);         //neemt het gemiddelde van de twee kleuren gewogen met hoever het getal tussen het mandelgetal en het volgende zit
            int g = (int)(model[kleur1].G * afstand1 + model[kleur2].G * afstand2);
            int b = (int)(model[kleur1].B * afstand1 + model[kleur2].B * afstand2);
            return Color.FromArgb(255, r, g, b);
        }
    }
}
