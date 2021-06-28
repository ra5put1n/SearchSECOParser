/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

if (false) {
    console.log("Hardware error occured.");
    console.log("Hardware error occured.");
    console.log("Hardware error occured.");
    console.log("Hardware error occured.");
    console.log("Hardware error occured.");
    console.log("Hardware error occured.");
    console.log("Hardware error occured.");
    console.log("Unreachable code reached.");
}

// Single line comment.

function a(x){
  return x.toUpperCase();
}
  
function identicalFunction0(str) {
  i++;
  i++;
  i++;
  var res = str.replace("uppercase", a);
  return res;
}

function identicalFunction1(str) {
  i++;
  i++;
  i++;
  function d(x){
    return x.toUpperCase();
  }
  var res = str.replace("uppercase", d);
  return res;
}

function identicalFunction2(str) {
  i++;
  i++;
  i++;
  var res2 = str.replace("uppercase", function (x){
    return x.toUpperCase();
  });
  return res2;
}

function parentFunction(i)
{
	i++;
	i++;
	i++;
	function childFunction(n) {
		n++;
		n--;
		n++;
		n--;
		console.log("I am lenghtening the character count of this function :)");
		return n * n;
	}
	var j = i - childFunction(i);
	j--;
	return j;
	
	
	// See if end of function line is correctly found.
	
	
	
	
	
	
}

function shortFunction() {
  return 0;
}

function commentFunction() {
  var i = 0;
  i++;
  i++;
  i++;
  i++;
  i++;
  /*
  I am a multiline comment. Hello :D
  */
  console.log("test1");
  return i;
}

/* function incarceratedFunction(){
  boolean freedom = false;
  var i = 0;
  i++;
  i++;
  i++;
  i++;
  i++;
  console.log("I have escaped my comment prison!");
  return freedom
} */