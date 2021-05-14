
// Generated from C.g4 by ANTLR 4.9.2


#include "CListener.h"
#include "CVisitor.h"

#include "CParser.h"


using namespace antlrcpp;
using namespace antlr4;

CParser::CParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CParser::~CParser() {
  delete _interpreter;
}

std::string CParser::getGrammarFileName() const {
  return "C.g4";
}

const std::vector<std::string>& CParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- IdentifierContext ------------------------------------------------------------------

CParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::IdentifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::IdentifierContext::getRuleIndex() const {
  return CParser::RuleIdentifier;
}

void CParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void CParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any CParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::IdentifierContext* CParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 0, CParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

CParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::IdentifierContext* CParser::PrimaryExpressionContext::identifier() {
  return getRuleContext<CParser::IdentifierContext>(0);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::Constant() {
  return getToken(CParser::Constant, 0);
}

std::vector<tree::TerminalNode *> CParser::PrimaryExpressionContext::StringLiteral() {
  return getTokens(CParser::StringLiteral);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::StringLiteral(size_t i) {
  return getToken(CParser::StringLiteral, i);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::PrimaryExpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::GenericSelectionContext* CParser::PrimaryExpressionContext::genericSelection() {
  return getRuleContext<CParser::GenericSelectionContext>(0);
}

CParser::CompoundStatementContext* CParser::PrimaryExpressionContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}

CParser::UnaryExpressionContext* CParser::PrimaryExpressionContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::Comma() {
  return getToken(CParser::Comma, 0);
}

CParser::TypeNameContext* CParser::PrimaryExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}


size_t CParser::PrimaryExpressionContext::getRuleIndex() const {
  return CParser::RulePrimaryExpression;
}

void CParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void CParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any CParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::PrimaryExpressionContext* CParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, CParser::RulePrimaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(211);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(178);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(179);
      match(CParser::Constant);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(181); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(180);
        match(CParser::StringLiteral);
        setState(183); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == CParser::StringLiteral);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(185);
      match(CParser::LeftParen);
      setState(186);
      expression();
      setState(187);
      match(CParser::RightParen);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(189);
      genericSelection();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(191);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::T__0) {
        setState(190);
        match(CParser::T__0);
      }
      setState(193);
      match(CParser::LeftParen);
      setState(194);
      compoundStatement();
      setState(195);
      match(CParser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(197);
      match(CParser::T__1);
      setState(198);
      match(CParser::LeftParen);
      setState(199);
      unaryExpression();
      setState(200);
      match(CParser::Comma);
      setState(201);
      typeName();
      setState(202);
      match(CParser::RightParen);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(204);
      match(CParser::T__2);
      setState(205);
      match(CParser::LeftParen);
      setState(206);
      typeName();
      setState(207);
      match(CParser::Comma);
      setState(208);
      unaryExpression();
      setState(209);
      match(CParser::RightParen);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericSelectionContext ------------------------------------------------------------------

CParser::GenericSelectionContext::GenericSelectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::GenericSelectionContext::Generic() {
  return getToken(CParser::Generic, 0);
}

tree::TerminalNode* CParser::GenericSelectionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::AssignmentExpressionContext* CParser::GenericSelectionContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::GenericSelectionContext::Comma() {
  return getToken(CParser::Comma, 0);
}

CParser::GenericAssocListContext* CParser::GenericSelectionContext::genericAssocList() {
  return getRuleContext<CParser::GenericAssocListContext>(0);
}

tree::TerminalNode* CParser::GenericSelectionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::GenericSelectionContext::getRuleIndex() const {
  return CParser::RuleGenericSelection;
}

void CParser::GenericSelectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericSelection(this);
}

void CParser::GenericSelectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericSelection(this);
}


antlrcpp::Any CParser::GenericSelectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGenericSelection(this);
  else
    return visitor->visitChildren(this);
}

CParser::GenericSelectionContext* CParser::genericSelection() {
  GenericSelectionContext *_localctx = _tracker.createInstance<GenericSelectionContext>(_ctx, getState());
  enterRule(_localctx, 4, CParser::RuleGenericSelection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(CParser::Generic);
    setState(214);
    match(CParser::LeftParen);
    setState(215);
    assignmentExpression();
    setState(216);
    match(CParser::Comma);
    setState(217);
    genericAssocList();
    setState(218);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericAssocListContext ------------------------------------------------------------------

CParser::GenericAssocListContext::GenericAssocListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::GenericAssociationContext *> CParser::GenericAssocListContext::genericAssociation() {
  return getRuleContexts<CParser::GenericAssociationContext>();
}

CParser::GenericAssociationContext* CParser::GenericAssocListContext::genericAssociation(size_t i) {
  return getRuleContext<CParser::GenericAssociationContext>(i);
}

std::vector<tree::TerminalNode *> CParser::GenericAssocListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::GenericAssocListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::GenericAssocListContext::getRuleIndex() const {
  return CParser::RuleGenericAssocList;
}

void CParser::GenericAssocListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericAssocList(this);
}

void CParser::GenericAssocListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericAssocList(this);
}


antlrcpp::Any CParser::GenericAssocListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGenericAssocList(this);
  else
    return visitor->visitChildren(this);
}

CParser::GenericAssocListContext* CParser::genericAssocList() {
  GenericAssocListContext *_localctx = _tracker.createInstance<GenericAssocListContext>(_ctx, getState());
  enterRule(_localctx, 6, CParser::RuleGenericAssocList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    genericAssociation();
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(221);
      match(CParser::Comma);
      setState(222);
      genericAssociation();
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericAssociationContext ------------------------------------------------------------------

CParser::GenericAssociationContext::GenericAssociationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::GenericAssociationContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::AssignmentExpressionContext* CParser::GenericAssociationContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::TypeNameContext* CParser::GenericAssociationContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

tree::TerminalNode* CParser::GenericAssociationContext::Default() {
  return getToken(CParser::Default, 0);
}


size_t CParser::GenericAssociationContext::getRuleIndex() const {
  return CParser::RuleGenericAssociation;
}

void CParser::GenericAssociationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericAssociation(this);
}

void CParser::GenericAssociationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericAssociation(this);
}


antlrcpp::Any CParser::GenericAssociationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGenericAssociation(this);
  else
    return visitor->visitChildren(this);
}

CParser::GenericAssociationContext* CParser::genericAssociation() {
  GenericAssociationContext *_localctx = _tracker.createInstance<GenericAssociationContext>(_ctx, getState());
  enterRule(_localctx, 8, CParser::RuleGenericAssociation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::T__6:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Struct:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Identifier: {
        setState(228);
        typeName();
        break;
      }

      case CParser::Default: {
        setState(229);
        match(CParser::Default);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(232);
    match(CParser::Colon);
    setState(233);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

CParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PrimaryExpressionContext* CParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<CParser::PrimaryExpressionContext>(0);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::LeftParen() {
  return getTokens(CParser::LeftParen);
}

tree::TerminalNode* CParser::PostfixExpressionContext::LeftParen(size_t i) {
  return getToken(CParser::LeftParen, i);
}

CParser::TypeNameContext* CParser::PostfixExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::RightParen() {
  return getTokens(CParser::RightParen);
}

tree::TerminalNode* CParser::PostfixExpressionContext::RightParen(size_t i) {
  return getToken(CParser::RightParen, i);
}

tree::TerminalNode* CParser::PostfixExpressionContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::InitializerListContext* CParser::PostfixExpressionContext::initializerList() {
  return getRuleContext<CParser::InitializerListContext>(0);
}

tree::TerminalNode* CParser::PostfixExpressionContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::LeftBracket() {
  return getTokens(CParser::LeftBracket);
}

tree::TerminalNode* CParser::PostfixExpressionContext::LeftBracket(size_t i) {
  return getToken(CParser::LeftBracket, i);
}

std::vector<CParser::ExpressionContext *> CParser::PostfixExpressionContext::expression() {
  return getRuleContexts<CParser::ExpressionContext>();
}

CParser::ExpressionContext* CParser::PostfixExpressionContext::expression(size_t i) {
  return getRuleContext<CParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::RightBracket() {
  return getTokens(CParser::RightBracket);
}

tree::TerminalNode* CParser::PostfixExpressionContext::RightBracket(size_t i) {
  return getToken(CParser::RightBracket, i);
}

std::vector<CParser::IdentifierContext *> CParser::PostfixExpressionContext::identifier() {
  return getRuleContexts<CParser::IdentifierContext>();
}

CParser::IdentifierContext* CParser::PostfixExpressionContext::identifier(size_t i) {
  return getRuleContext<CParser::IdentifierContext>(i);
}

std::vector<CParser::PostfixExpressionContext *> CParser::PostfixExpressionContext::postfixExpression() {
  return getRuleContexts<CParser::PostfixExpressionContext>();
}

CParser::PostfixExpressionContext* CParser::PostfixExpressionContext::postfixExpression(size_t i) {
  return getRuleContext<CParser::PostfixExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::Dot() {
  return getTokens(CParser::Dot);
}

tree::TerminalNode* CParser::PostfixExpressionContext::Dot(size_t i) {
  return getToken(CParser::Dot, i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::Arrow() {
  return getTokens(CParser::Arrow);
}

tree::TerminalNode* CParser::PostfixExpressionContext::Arrow(size_t i) {
  return getToken(CParser::Arrow, i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::PlusPlus() {
  return getTokens(CParser::PlusPlus);
}

tree::TerminalNode* CParser::PostfixExpressionContext::PlusPlus(size_t i) {
  return getToken(CParser::PlusPlus, i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::MinusMinus() {
  return getTokens(CParser::MinusMinus);
}

tree::TerminalNode* CParser::PostfixExpressionContext::MinusMinus(size_t i) {
  return getToken(CParser::MinusMinus, i);
}

tree::TerminalNode* CParser::PostfixExpressionContext::Comma() {
  return getToken(CParser::Comma, 0);
}

std::vector<CParser::ArgumentExpressionListContext *> CParser::PostfixExpressionContext::argumentExpressionList() {
  return getRuleContexts<CParser::ArgumentExpressionListContext>();
}

CParser::ArgumentExpressionListContext* CParser::PostfixExpressionContext::argumentExpressionList(size_t i) {
  return getRuleContext<CParser::ArgumentExpressionListContext>(i);
}


size_t CParser::PostfixExpressionContext::getRuleIndex() const {
  return CParser::RulePostfixExpression;
}

void CParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void CParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


antlrcpp::Any CParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::PostfixExpressionContext* CParser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, CParser::RulePostfixExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(249);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(235);
      primaryExpression();
      break;
    }

    case 2: {
      setState(237);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::T__0) {
        setState(236);
        match(CParser::T__0);
      }
      setState(239);
      match(CParser::LeftParen);
      setState(240);
      typeName();
      setState(241);
      match(CParser::RightParen);
      setState(242);
      match(CParser::LeftBrace);
      setState(243);
      initializerList();
      setState(245);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Comma) {
        setState(244);
        match(CParser::Comma);
      }
      setState(247);
      match(CParser::RightBrace);
      break;
    }

    default:
      break;
    }
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(265);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(251);
          match(CParser::LeftBracket);
          setState(252);
          expression();
          setState(253);
          match(CParser::RightBracket);
          break;
        }

        case 2: {
          setState(255);
          match(CParser::LeftParen);
          setState(257);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::T__2)
            | (1ULL << CParser::Sizeof)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Generic)
            | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
            | (1ULL << (CParser::PlusPlus - 71))
            | (1ULL << (CParser::Minus - 71))
            | (1ULL << (CParser::MinusMinus - 71))
            | (1ULL << (CParser::Star - 71))
            | (1ULL << (CParser::And - 71))
            | (1ULL << (CParser::AndAnd - 71))
            | (1ULL << (CParser::Not - 71))
            | (1ULL << (CParser::Tilde - 71))
            | (1ULL << (CParser::Identifier - 71))
            | (1ULL << (CParser::Constant - 71))
            | (1ULL << (CParser::DigitSequence - 71))
            | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
            setState(256);
            argumentExpressionList();
          }
          setState(259);
          match(CParser::RightParen);
          break;
        }

        case 3: {
          setState(260);
          _la = _input->LA(1);
          if (!(_la == CParser::Arrow

          || _la == CParser::Dot)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(261);
          identifier();
          break;
        }

        case 4: {
          setState(262);
          _la = _input->LA(1);
          if (!(_la == CParser::Arrow

          || _la == CParser::Dot)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(263);
          postfixExpression();
          break;
        }

        case 5: {
          setState(264);
          _la = _input->LA(1);
          if (!(_la == CParser::PlusPlus

          || _la == CParser::MinusMinus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(269);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentExpressionListContext ------------------------------------------------------------------

CParser::ArgumentExpressionListContext::ArgumentExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AssignmentExpressionContext *> CParser::ArgumentExpressionListContext::assignmentExpression() {
  return getRuleContexts<CParser::AssignmentExpressionContext>();
}

CParser::AssignmentExpressionContext* CParser::ArgumentExpressionListContext::assignmentExpression(size_t i) {
  return getRuleContext<CParser::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ArgumentExpressionListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::ArgumentExpressionListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::ArgumentExpressionListContext::getRuleIndex() const {
  return CParser::RuleArgumentExpressionList;
}

void CParser::ArgumentExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentExpressionList(this);
}

void CParser::ArgumentExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentExpressionList(this);
}


antlrcpp::Any CParser::ArgumentExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitArgumentExpressionList(this);
  else
    return visitor->visitChildren(this);
}

CParser::ArgumentExpressionListContext* CParser::argumentExpressionList() {
  ArgumentExpressionListContext *_localctx = _tracker.createInstance<ArgumentExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 12, CParser::RuleArgumentExpressionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    assignmentExpression();
    setState(275);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(271);
      match(CParser::Comma);
      setState(272);
      assignmentExpression();
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

CParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PostfixExpressionContext* CParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<CParser::PostfixExpressionContext>(0);
}

CParser::UnaryOperatorContext* CParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<CParser::UnaryOperatorContext>(0);
}

CParser::CastExpressionContext* CParser::UnaryExpressionContext::castExpression() {
  return getRuleContext<CParser::CastExpressionContext>(0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::TypeNameContext* CParser::UnaryExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::AndAnd() {
  return getToken(CParser::AndAnd, 0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

std::vector<tree::TerminalNode *> CParser::UnaryExpressionContext::Sizeof() {
  return getTokens(CParser::Sizeof);
}

tree::TerminalNode* CParser::UnaryExpressionContext::Sizeof(size_t i) {
  return getToken(CParser::Sizeof, i);
}

tree::TerminalNode* CParser::UnaryExpressionContext::Alignof() {
  return getToken(CParser::Alignof, 0);
}

std::vector<tree::TerminalNode *> CParser::UnaryExpressionContext::PlusPlus() {
  return getTokens(CParser::PlusPlus);
}

tree::TerminalNode* CParser::UnaryExpressionContext::PlusPlus(size_t i) {
  return getToken(CParser::PlusPlus, i);
}

std::vector<tree::TerminalNode *> CParser::UnaryExpressionContext::MinusMinus() {
  return getTokens(CParser::MinusMinus);
}

tree::TerminalNode* CParser::UnaryExpressionContext::MinusMinus(size_t i) {
  return getToken(CParser::MinusMinus, i);
}


size_t CParser::UnaryExpressionContext::getRuleIndex() const {
  return CParser::RuleUnaryExpression;
}

void CParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void CParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


antlrcpp::Any CParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnaryExpressionContext* CParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, CParser::RuleUnaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(281);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(278);
        _la = _input->LA(1);
        if (!(((((_la - 39) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 39)) & ((1ULL << (CParser::Sizeof - 39))
          | (1ULL << (CParser::PlusPlus - 39))
          | (1ULL << (CParser::MinusMinus - 39)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(283);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(295);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::T__2:
      case CParser::Generic:
      case CParser::LeftParen:
      case CParser::Identifier:
      case CParser::Constant:
      case CParser::StringLiteral: {
        setState(284);
        postfixExpression();
        break;
      }

      case CParser::Plus:
      case CParser::Minus:
      case CParser::Star:
      case CParser::And:
      case CParser::Not:
      case CParser::Tilde: {
        setState(285);
        unaryOperator();
        setState(286);
        castExpression();
        break;
      }

      case CParser::Sizeof:
      case CParser::Alignof: {
        setState(288);
        _la = _input->LA(1);
        if (!(_la == CParser::Sizeof

        || _la == CParser::Alignof)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(289);
        match(CParser::LeftParen);
        setState(290);
        typeName();
        setState(291);
        match(CParser::RightParen);
        break;
      }

      case CParser::AndAnd: {
        setState(293);
        match(CParser::AndAnd);
        setState(294);
        match(CParser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

CParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::UnaryOperatorContext::And() {
  return getToken(CParser::And, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Star() {
  return getToken(CParser::Star, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Plus() {
  return getToken(CParser::Plus, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Minus() {
  return getToken(CParser::Minus, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Tilde() {
  return getToken(CParser::Tilde, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Not() {
  return getToken(CParser::Not, 0);
}


size_t CParser::UnaryOperatorContext::getRuleIndex() const {
  return CParser::RuleUnaryOperator;
}

void CParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void CParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


antlrcpp::Any CParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnaryOperatorContext* CParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 16, CParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    _la = _input->LA(1);
    if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

CParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CastExpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::TypeNameContext* CParser::CastExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

tree::TerminalNode* CParser::CastExpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::CastExpressionContext* CParser::CastExpressionContext::castExpression() {
  return getRuleContext<CParser::CastExpressionContext>(0);
}

CParser::UnaryExpressionContext* CParser::CastExpressionContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CParser::CastExpressionContext::DigitSequence() {
  return getToken(CParser::DigitSequence, 0);
}


size_t CParser::CastExpressionContext::getRuleIndex() const {
  return CParser::RuleCastExpression;
}

void CParser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void CParser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}


antlrcpp::Any CParser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::CastExpressionContext* CParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CParser::RuleCastExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(309);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(300);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::T__0) {
        setState(299);
        match(CParser::T__0);
      }
      setState(302);
      match(CParser::LeftParen);
      setState(303);
      typeName();
      setState(304);
      match(CParser::RightParen);
      setState(305);
      castExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(307);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(308);
      match(CParser::DigitSequence);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

CParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::CastExpressionContext *> CParser::MultiplicativeExpressionContext::castExpression() {
  return getRuleContexts<CParser::CastExpressionContext>();
}

CParser::CastExpressionContext* CParser::MultiplicativeExpressionContext::castExpression(size_t i) {
  return getRuleContext<CParser::CastExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::MultiplicativeExpressionContext::Star() {
  return getTokens(CParser::Star);
}

tree::TerminalNode* CParser::MultiplicativeExpressionContext::Star(size_t i) {
  return getToken(CParser::Star, i);
}

std::vector<tree::TerminalNode *> CParser::MultiplicativeExpressionContext::Div() {
  return getTokens(CParser::Div);
}

tree::TerminalNode* CParser::MultiplicativeExpressionContext::Div(size_t i) {
  return getToken(CParser::Div, i);
}

std::vector<tree::TerminalNode *> CParser::MultiplicativeExpressionContext::Mod() {
  return getTokens(CParser::Mod);
}

tree::TerminalNode* CParser::MultiplicativeExpressionContext::Mod(size_t i) {
  return getToken(CParser::Mod, i);
}


size_t CParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return CParser::RuleMultiplicativeExpression;
}

void CParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void CParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


antlrcpp::Any CParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::MultiplicativeExpressionContext* CParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, CParser::RuleMultiplicativeExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    castExpression();
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (CParser::Star - 75))
      | (1ULL << (CParser::Div - 75))
      | (1ULL << (CParser::Mod - 75)))) != 0)) {
      setState(312);
      _la = _input->LA(1);
      if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & ((1ULL << (CParser::Star - 75))
        | (1ULL << (CParser::Div - 75))
        | (1ULL << (CParser::Mod - 75)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(313);
      castExpression();
      setState(318);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

CParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::MultiplicativeExpressionContext *> CParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<CParser::MultiplicativeExpressionContext>();
}

CParser::MultiplicativeExpressionContext* CParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<CParser::MultiplicativeExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::AdditiveExpressionContext::Plus() {
  return getTokens(CParser::Plus);
}

tree::TerminalNode* CParser::AdditiveExpressionContext::Plus(size_t i) {
  return getToken(CParser::Plus, i);
}

std::vector<tree::TerminalNode *> CParser::AdditiveExpressionContext::Minus() {
  return getTokens(CParser::Minus);
}

tree::TerminalNode* CParser::AdditiveExpressionContext::Minus(size_t i) {
  return getToken(CParser::Minus, i);
}


size_t CParser::AdditiveExpressionContext::getRuleIndex() const {
  return CParser::RuleAdditiveExpression;
}

void CParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void CParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


antlrcpp::Any CParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::AdditiveExpressionContext* CParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 22, CParser::RuleAdditiveExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    multiplicativeExpression();
    setState(324);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Plus

    || _la == CParser::Minus) {
      setState(320);
      _la = _input->LA(1);
      if (!(_la == CParser::Plus

      || _la == CParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(321);
      multiplicativeExpression();
      setState(326);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

CParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AdditiveExpressionContext *> CParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContexts<CParser::AdditiveExpressionContext>();
}

CParser::AdditiveExpressionContext* CParser::ShiftExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<CParser::AdditiveExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ShiftExpressionContext::LeftShift() {
  return getTokens(CParser::LeftShift);
}

tree::TerminalNode* CParser::ShiftExpressionContext::LeftShift(size_t i) {
  return getToken(CParser::LeftShift, i);
}

std::vector<tree::TerminalNode *> CParser::ShiftExpressionContext::RightShift() {
  return getTokens(CParser::RightShift);
}

tree::TerminalNode* CParser::ShiftExpressionContext::RightShift(size_t i) {
  return getToken(CParser::RightShift, i);
}


size_t CParser::ShiftExpressionContext::getRuleIndex() const {
  return CParser::RuleShiftExpression;
}

void CParser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void CParser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}


antlrcpp::Any CParser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ShiftExpressionContext* CParser::shiftExpression() {
  ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, CParser::RuleShiftExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    additiveExpression();
    setState(332);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::LeftShift

    || _la == CParser::RightShift) {
      setState(328);
      _la = _input->LA(1);
      if (!(_la == CParser::LeftShift

      || _la == CParser::RightShift)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(329);
      additiveExpression();
      setState(334);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

CParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ShiftExpressionContext *> CParser::RelationalExpressionContext::shiftExpression() {
  return getRuleContexts<CParser::ShiftExpressionContext>();
}

CParser::ShiftExpressionContext* CParser::RelationalExpressionContext::shiftExpression(size_t i) {
  return getRuleContext<CParser::ShiftExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::RelationalExpressionContext::Less() {
  return getTokens(CParser::Less);
}

tree::TerminalNode* CParser::RelationalExpressionContext::Less(size_t i) {
  return getToken(CParser::Less, i);
}

std::vector<tree::TerminalNode *> CParser::RelationalExpressionContext::Greater() {
  return getTokens(CParser::Greater);
}

tree::TerminalNode* CParser::RelationalExpressionContext::Greater(size_t i) {
  return getToken(CParser::Greater, i);
}

std::vector<tree::TerminalNode *> CParser::RelationalExpressionContext::LessEqual() {
  return getTokens(CParser::LessEqual);
}

tree::TerminalNode* CParser::RelationalExpressionContext::LessEqual(size_t i) {
  return getToken(CParser::LessEqual, i);
}

std::vector<tree::TerminalNode *> CParser::RelationalExpressionContext::GreaterEqual() {
  return getTokens(CParser::GreaterEqual);
}

tree::TerminalNode* CParser::RelationalExpressionContext::GreaterEqual(size_t i) {
  return getToken(CParser::GreaterEqual, i);
}


size_t CParser::RelationalExpressionContext::getRuleIndex() const {
  return CParser::RuleRelationalExpression;
}

void CParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void CParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


antlrcpp::Any CParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::RelationalExpressionContext* CParser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, CParser::RuleRelationalExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    shiftExpression();
    setState(340);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CParser::Less - 65))
      | (1ULL << (CParser::LessEqual - 65))
      | (1ULL << (CParser::Greater - 65))
      | (1ULL << (CParser::GreaterEqual - 65)))) != 0)) {
      setState(336);
      _la = _input->LA(1);
      if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CParser::Less - 65))
        | (1ULL << (CParser::LessEqual - 65))
        | (1ULL << (CParser::Greater - 65))
        | (1ULL << (CParser::GreaterEqual - 65)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(337);
      shiftExpression();
      setState(342);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

CParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::RelationalExpressionContext *> CParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContexts<CParser::RelationalExpressionContext>();
}

CParser::RelationalExpressionContext* CParser::EqualityExpressionContext::relationalExpression(size_t i) {
  return getRuleContext<CParser::RelationalExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::EqualityExpressionContext::Equal() {
  return getTokens(CParser::Equal);
}

tree::TerminalNode* CParser::EqualityExpressionContext::Equal(size_t i) {
  return getToken(CParser::Equal, i);
}

std::vector<tree::TerminalNode *> CParser::EqualityExpressionContext::NotEqual() {
  return getTokens(CParser::NotEqual);
}

tree::TerminalNode* CParser::EqualityExpressionContext::NotEqual(size_t i) {
  return getToken(CParser::NotEqual, i);
}


size_t CParser::EqualityExpressionContext::getRuleIndex() const {
  return CParser::RuleEqualityExpression;
}

void CParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void CParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


antlrcpp::Any CParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::EqualityExpressionContext* CParser::equalityExpression() {
  EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, CParser::RuleEqualityExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    relationalExpression();
    setState(348);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Equal

    || _la == CParser::NotEqual) {
      setState(344);
      _la = _input->LA(1);
      if (!(_la == CParser::Equal

      || _la == CParser::NotEqual)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(345);
      relationalExpression();
      setState(350);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

CParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::EqualityExpressionContext *> CParser::AndExpressionContext::equalityExpression() {
  return getRuleContexts<CParser::EqualityExpressionContext>();
}

CParser::EqualityExpressionContext* CParser::AndExpressionContext::equalityExpression(size_t i) {
  return getRuleContext<CParser::EqualityExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::AndExpressionContext::And() {
  return getTokens(CParser::And);
}

tree::TerminalNode* CParser::AndExpressionContext::And(size_t i) {
  return getToken(CParser::And, i);
}


size_t CParser::AndExpressionContext::getRuleIndex() const {
  return CParser::RuleAndExpression;
}

void CParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void CParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}


antlrcpp::Any CParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::AndExpressionContext* CParser::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, CParser::RuleAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    equalityExpression();
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::And) {
      setState(352);
      match(CParser::And);
      setState(353);
      equalityExpression();
      setState(358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

CParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AndExpressionContext *> CParser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContexts<CParser::AndExpressionContext>();
}

CParser::AndExpressionContext* CParser::ExclusiveOrExpressionContext::andExpression(size_t i) {
  return getRuleContext<CParser::AndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ExclusiveOrExpressionContext::Caret() {
  return getTokens(CParser::Caret);
}

tree::TerminalNode* CParser::ExclusiveOrExpressionContext::Caret(size_t i) {
  return getToken(CParser::Caret, i);
}


size_t CParser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return CParser::RuleExclusiveOrExpression;
}

void CParser::ExclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveOrExpression(this);
}

void CParser::ExclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveOrExpression(this);
}


antlrcpp::Any CParser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExclusiveOrExpressionContext* CParser::exclusiveOrExpression() {
  ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, CParser::RuleExclusiveOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(359);
    andExpression();
    setState(364);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Caret) {
      setState(360);
      match(CParser::Caret);
      setState(361);
      andExpression();
      setState(366);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

CParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ExclusiveOrExpressionContext *> CParser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContexts<CParser::ExclusiveOrExpressionContext>();
}

CParser::ExclusiveOrExpressionContext* CParser::InclusiveOrExpressionContext::exclusiveOrExpression(size_t i) {
  return getRuleContext<CParser::ExclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::InclusiveOrExpressionContext::Or() {
  return getTokens(CParser::Or);
}

tree::TerminalNode* CParser::InclusiveOrExpressionContext::Or(size_t i) {
  return getToken(CParser::Or, i);
}


size_t CParser::InclusiveOrExpressionContext::getRuleIndex() const {
  return CParser::RuleInclusiveOrExpression;
}

void CParser::InclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveOrExpression(this);
}

void CParser::InclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveOrExpression(this);
}


antlrcpp::Any CParser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::InclusiveOrExpressionContext* CParser::inclusiveOrExpression() {
  InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 34, CParser::RuleInclusiveOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    exclusiveOrExpression();
    setState(372);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Or) {
      setState(368);
      match(CParser::Or);
      setState(369);
      exclusiveOrExpression();
      setState(374);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

CParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::InclusiveOrExpressionContext *> CParser::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContexts<CParser::InclusiveOrExpressionContext>();
}

CParser::InclusiveOrExpressionContext* CParser::LogicalAndExpressionContext::inclusiveOrExpression(size_t i) {
  return getRuleContext<CParser::InclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::LogicalAndExpressionContext::AndAnd() {
  return getTokens(CParser::AndAnd);
}

tree::TerminalNode* CParser::LogicalAndExpressionContext::AndAnd(size_t i) {
  return getToken(CParser::AndAnd, i);
}


size_t CParser::LogicalAndExpressionContext::getRuleIndex() const {
  return CParser::RuleLogicalAndExpression;
}

void CParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}

void CParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}


antlrcpp::Any CParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::LogicalAndExpressionContext* CParser::logicalAndExpression() {
  LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, CParser::RuleLogicalAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    inclusiveOrExpression();
    setState(380);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::AndAnd) {
      setState(376);
      match(CParser::AndAnd);
      setState(377);
      inclusiveOrExpression();
      setState(382);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

CParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::LogicalAndExpressionContext *> CParser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContexts<CParser::LogicalAndExpressionContext>();
}

CParser::LogicalAndExpressionContext* CParser::LogicalOrExpressionContext::logicalAndExpression(size_t i) {
  return getRuleContext<CParser::LogicalAndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::LogicalOrExpressionContext::OrOr() {
  return getTokens(CParser::OrOr);
}

tree::TerminalNode* CParser::LogicalOrExpressionContext::OrOr(size_t i) {
  return getToken(CParser::OrOr, i);
}


size_t CParser::LogicalOrExpressionContext::getRuleIndex() const {
  return CParser::RuleLogicalOrExpression;
}

void CParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}

void CParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}


antlrcpp::Any CParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::LogicalOrExpressionContext* CParser::logicalOrExpression() {
  LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, CParser::RuleLogicalOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    logicalAndExpression();
    setState(388);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::OrOr) {
      setState(384);
      match(CParser::OrOr);
      setState(385);
      logicalAndExpression();
      setState(390);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

CParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LogicalOrExpressionContext* CParser::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<CParser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* CParser::ConditionalExpressionContext::Question() {
  return getToken(CParser::Question, 0);
}

CParser::ExpressionContext* CParser::ConditionalExpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::ConditionalExpressionContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::ConditionalExpressionContext* CParser::ConditionalExpressionContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::ConditionalExpressionContext::getRuleIndex() const {
  return CParser::RuleConditionalExpression;
}

void CParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void CParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


antlrcpp::Any CParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConditionalExpressionContext* CParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, CParser::RuleConditionalExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    logicalOrExpression();
    setState(397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Question) {
      setState(392);
      match(CParser::Question);
      setState(393);
      expression();
      setState(394);
      match(CParser::Colon);
      setState(395);
      conditionalExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

CParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ConditionalExpressionContext* CParser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}

CParser::UnaryExpressionContext* CParser::AssignmentExpressionContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

CParser::AssignmentOperatorContext* CParser::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<CParser::AssignmentOperatorContext>(0);
}

CParser::AssignmentExpressionContext* CParser::AssignmentExpressionContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::AssignmentExpressionContext::DigitSequence() {
  return getToken(CParser::DigitSequence, 0);
}


size_t CParser::AssignmentExpressionContext::getRuleIndex() const {
  return CParser::RuleAssignmentExpression;
}

void CParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void CParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


antlrcpp::Any CParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::AssignmentExpressionContext* CParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, CParser::RuleAssignmentExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(405);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(399);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(400);
      unaryExpression();
      setState(401);
      assignmentOperator();
      setState(402);
      assignmentExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(404);
      match(CParser::DigitSequence);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

CParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AssignmentOperatorContext::Assign() {
  return getToken(CParser::Assign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::StarAssign() {
  return getToken(CParser::StarAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::DivAssign() {
  return getToken(CParser::DivAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::ModAssign() {
  return getToken(CParser::ModAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::PlusAssign() {
  return getToken(CParser::PlusAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::MinusAssign() {
  return getToken(CParser::MinusAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::LeftShiftAssign() {
  return getToken(CParser::LeftShiftAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::RightShiftAssign() {
  return getToken(CParser::RightShiftAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::AndAssign() {
  return getToken(CParser::AndAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::XorAssign() {
  return getToken(CParser::XorAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::OrAssign() {
  return getToken(CParser::OrAssign, 0);
}


size_t CParser::AssignmentOperatorContext::getRuleIndex() const {
  return CParser::RuleAssignmentOperator;
}

void CParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void CParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any CParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::AssignmentOperatorContext* CParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 44, CParser::RuleAssignmentOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    _la = _input->LA(1);
    if (!(((((_la - 89) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 89)) & ((1ULL << (CParser::Assign - 89))
      | (1ULL << (CParser::StarAssign - 89))
      | (1ULL << (CParser::DivAssign - 89))
      | (1ULL << (CParser::ModAssign - 89))
      | (1ULL << (CParser::PlusAssign - 89))
      | (1ULL << (CParser::MinusAssign - 89))
      | (1ULL << (CParser::LeftShiftAssign - 89))
      | (1ULL << (CParser::RightShiftAssign - 89))
      | (1ULL << (CParser::AndAssign - 89))
      | (1ULL << (CParser::XorAssign - 89))
      | (1ULL << (CParser::OrAssign - 89)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AssignmentExpressionContext *> CParser::ExpressionContext::assignmentExpression() {
  return getRuleContexts<CParser::AssignmentExpressionContext>();
}

CParser::AssignmentExpressionContext* CParser::ExpressionContext::assignmentExpression(size_t i) {
  return getRuleContext<CParser::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ExpressionContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::ExpressionContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::ExpressionContext::getRuleIndex() const {
  return CParser::RuleExpression;
}

void CParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExpressionContext* CParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, CParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    assignmentExpression();
    setState(414);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(410);
      match(CParser::Comma);
      setState(411);
      assignmentExpression();
      setState(416);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

CParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ConditionalExpressionContext* CParser::ConstantExpressionContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::ConstantExpressionContext::getRuleIndex() const {
  return CParser::RuleConstantExpression;
}

void CParser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}

void CParser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}


antlrcpp::Any CParser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConstantExpressionContext* CParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, CParser::RuleConstantExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::DeclarationContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

tree::TerminalNode* CParser::DeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::InitDeclaratorListContext* CParser::DeclarationContext::initDeclaratorList() {
  return getRuleContext<CParser::InitDeclaratorListContext>(0);
}

CParser::StaticAssertDeclarationContext* CParser::DeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CParser::StaticAssertDeclarationContext>(0);
}


size_t CParser::DeclarationContext::getRuleIndex() const {
  return CParser::RuleDeclaration;
}

void CParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any CParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationContext* CParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 50, CParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(426);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::T__6:
      case CParser::T__7:
      case CParser::T__8:
      case CParser::T__9:
      case CParser::T__11:
      case CParser::Auto:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Extern:
      case CParser::Float:
      case CParser::Inline:
      case CParser::Int:
      case CParser::Long:
      case CParser::Register:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Static:
      case CParser::Struct:
      case CParser::Typedef:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Alignas:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Noreturn:
      case CParser::ThreadLocal:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(419);
        declarationSpecifiers();
        setState(421);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 59) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
          | (1ULL << (CParser::Star - 59))
          | (1ULL << (CParser::Caret - 59))
          | (1ULL << (CParser::Identifier - 59)))) != 0)) {
          setState(420);
          initDeclaratorList();
        }
        setState(423);
        match(CParser::Semi);
        break;
      }

      case CParser::StaticAssert: {
        enterOuterAlt(_localctx, 2);
        setState(425);
        staticAssertDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifiersContext ------------------------------------------------------------------

CParser::DeclarationSpecifiersContext::DeclarationSpecifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::DeclarationSpecifierContext *> CParser::DeclarationSpecifiersContext::declarationSpecifier() {
  return getRuleContexts<CParser::DeclarationSpecifierContext>();
}

CParser::DeclarationSpecifierContext* CParser::DeclarationSpecifiersContext::declarationSpecifier(size_t i) {
  return getRuleContext<CParser::DeclarationSpecifierContext>(i);
}


size_t CParser::DeclarationSpecifiersContext::getRuleIndex() const {
  return CParser::RuleDeclarationSpecifiers;
}

void CParser::DeclarationSpecifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifiers(this);
}

void CParser::DeclarationSpecifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifiers(this);
}


antlrcpp::Any CParser::DeclarationSpecifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifiers(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationSpecifiersContext* CParser::declarationSpecifiers() {
  DeclarationSpecifiersContext *_localctx = _tracker.createInstance<DeclarationSpecifiersContext>(_ctx, getState());
  enterRule(_localctx, 52, CParser::RuleDeclarationSpecifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(429); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(428);
              declarationSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(431); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifiers2Context ------------------------------------------------------------------

CParser::DeclarationSpecifiers2Context::DeclarationSpecifiers2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::DeclarationSpecifierContext *> CParser::DeclarationSpecifiers2Context::declarationSpecifier() {
  return getRuleContexts<CParser::DeclarationSpecifierContext>();
}

CParser::DeclarationSpecifierContext* CParser::DeclarationSpecifiers2Context::declarationSpecifier(size_t i) {
  return getRuleContext<CParser::DeclarationSpecifierContext>(i);
}


size_t CParser::DeclarationSpecifiers2Context::getRuleIndex() const {
  return CParser::RuleDeclarationSpecifiers2;
}

void CParser::DeclarationSpecifiers2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifiers2(this);
}

void CParser::DeclarationSpecifiers2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifiers2(this);
}


antlrcpp::Any CParser::DeclarationSpecifiers2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifiers2(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationSpecifiers2Context* CParser::declarationSpecifiers2() {
  DeclarationSpecifiers2Context *_localctx = _tracker.createInstance<DeclarationSpecifiers2Context>(_ctx, getState());
  enterRule(_localctx, 54, CParser::RuleDeclarationSpecifiers2);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(433);
      declarationSpecifier();
      setState(436); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifierContext ------------------------------------------------------------------

CParser::DeclarationSpecifierContext::DeclarationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::StorageClassSpecifierContext* CParser::DeclarationSpecifierContext::storageClassSpecifier() {
  return getRuleContext<CParser::StorageClassSpecifierContext>(0);
}

CParser::TypeSpecifierContext* CParser::DeclarationSpecifierContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::TypeQualifierContext* CParser::DeclarationSpecifierContext::typeQualifier() {
  return getRuleContext<CParser::TypeQualifierContext>(0);
}

CParser::FunctionSpecifierContext* CParser::DeclarationSpecifierContext::functionSpecifier() {
  return getRuleContext<CParser::FunctionSpecifierContext>(0);
}

CParser::AlignmentSpecifierContext* CParser::DeclarationSpecifierContext::alignmentSpecifier() {
  return getRuleContext<CParser::AlignmentSpecifierContext>(0);
}


size_t CParser::DeclarationSpecifierContext::getRuleIndex() const {
  return CParser::RuleDeclarationSpecifier;
}

void CParser::DeclarationSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifier(this);
}

void CParser::DeclarationSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifier(this);
}


antlrcpp::Any CParser::DeclarationSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationSpecifierContext* CParser::declarationSpecifier() {
  DeclarationSpecifierContext *_localctx = _tracker.createInstance<DeclarationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 56, CParser::RuleDeclarationSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(443);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(438);
      storageClassSpecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(439);
      typeSpecifier(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(440);
      typeQualifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(441);
      functionSpecifier();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(442);
      alignmentSpecifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

CParser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::InitDeclaratorContext *> CParser::InitDeclaratorListContext::initDeclarator() {
  return getRuleContexts<CParser::InitDeclaratorContext>();
}

CParser::InitDeclaratorContext* CParser::InitDeclaratorListContext::initDeclarator(size_t i) {
  return getRuleContext<CParser::InitDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CParser::InitDeclaratorListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::InitDeclaratorListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::InitDeclaratorListContext::getRuleIndex() const {
  return CParser::RuleInitDeclaratorList;
}

void CParser::InitDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclaratorList(this);
}

void CParser::InitDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclaratorList(this);
}


antlrcpp::Any CParser::InitDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitDeclaratorListContext* CParser::initDeclaratorList() {
  InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 58, CParser::RuleInitDeclaratorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    initDeclarator();
    setState(450);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(446);
      match(CParser::Comma);
      setState(447);
      initDeclarator();
      setState(452);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorContext ------------------------------------------------------------------

CParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::InitDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

tree::TerminalNode* CParser::InitDeclaratorContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::InitializerContext* CParser::InitDeclaratorContext::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}


size_t CParser::InitDeclaratorContext::getRuleIndex() const {
  return CParser::RuleInitDeclarator;
}

void CParser::InitDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclarator(this);
}

void CParser::InitDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclarator(this);
}


antlrcpp::Any CParser::InitDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitDeclaratorContext* CParser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 60, CParser::RuleInitDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    declarator();
    setState(456);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Assign) {
      setState(454);
      match(CParser::Assign);
      setState(455);
      initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

CParser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Typedef() {
  return getToken(CParser::Typedef, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Extern() {
  return getToken(CParser::Extern, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Static() {
  return getToken(CParser::Static, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::ThreadLocal() {
  return getToken(CParser::ThreadLocal, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Auto() {
  return getToken(CParser::Auto, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Register() {
  return getToken(CParser::Register, 0);
}


size_t CParser::StorageClassSpecifierContext::getRuleIndex() const {
  return CParser::RuleStorageClassSpecifier;
}

void CParser::StorageClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageClassSpecifier(this);
}

void CParser::StorageClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageClassSpecifier(this);
}


antlrcpp::Any CParser::StorageClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStorageClassSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::StorageClassSpecifierContext* CParser::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 62, CParser::RuleStorageClassSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::Auto)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::ThreadLocal))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

CParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypeSpecifierContext::Void() {
  return getToken(CParser::Void, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Char() {
  return getToken(CParser::Char, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Short() {
  return getToken(CParser::Short, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Int() {
  return getToken(CParser::Int, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Long() {
  return getToken(CParser::Long, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Float() {
  return getToken(CParser::Float, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Double() {
  return getToken(CParser::Double, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Signed() {
  return getToken(CParser::Signed, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Unsigned() {
  return getToken(CParser::Unsigned, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Bool() {
  return getToken(CParser::Bool, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Complex() {
  return getToken(CParser::Complex, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::AtomicTypeSpecifierContext* CParser::TypeSpecifierContext::atomicTypeSpecifier() {
  return getRuleContext<CParser::AtomicTypeSpecifierContext>(0);
}

CParser::StructOrUnionSpecifierContext* CParser::TypeSpecifierContext::structOrUnionSpecifier() {
  return getRuleContext<CParser::StructOrUnionSpecifierContext>(0);
}

CParser::EnumSpecifierContext* CParser::TypeSpecifierContext::enumSpecifier() {
  return getRuleContext<CParser::EnumSpecifierContext>(0);
}

CParser::TypedefNameContext* CParser::TypeSpecifierContext::typedefName() {
  return getRuleContext<CParser::TypedefNameContext>(0);
}

CParser::ConstantExpressionContext* CParser::TypeSpecifierContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}

CParser::TypeSpecifierContext* CParser::TypeSpecifierContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::PointerContext* CParser::TypeSpecifierContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}


size_t CParser::TypeSpecifierContext::getRuleIndex() const {
  return CParser::RuleTypeSpecifier;
}

void CParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void CParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


antlrcpp::Any CParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}


CParser::TypeSpecifierContext* CParser::typeSpecifier() {
   return typeSpecifier(0);
}

CParser::TypeSpecifierContext* CParser::typeSpecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, parentState);
  CParser::TypeSpecifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, CParser::RuleTypeSpecifier, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(475);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::Char:
      case CParser::Double:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Bool:
      case CParser::Complex: {
        setState(461);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__3)
          | (1ULL << CParser::T__4)
          | (1ULL << CParser::T__5)
          | (1ULL << CParser::Char)
          | (1ULL << CParser::Double)
          | (1ULL << CParser::Float)
          | (1ULL << CParser::Int)
          | (1ULL << CParser::Long)
          | (1ULL << CParser::Short)
          | (1ULL << CParser::Signed)
          | (1ULL << CParser::Unsigned)
          | (1ULL << CParser::Void)
          | (1ULL << CParser::Bool)
          | (1ULL << CParser::Complex))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CParser::T__0: {
        setState(462);
        match(CParser::T__0);
        setState(463);
        match(CParser::LeftParen);
        setState(464);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__3)
          | (1ULL << CParser::T__4)
          | (1ULL << CParser::T__5))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(465);
        match(CParser::RightParen);
        break;
      }

      case CParser::Atomic: {
        setState(466);
        atomicTypeSpecifier();
        break;
      }

      case CParser::Struct:
      case CParser::Union: {
        setState(467);
        structOrUnionSpecifier();
        break;
      }

      case CParser::Enum: {
        setState(468);
        enumSpecifier();
        break;
      }

      case CParser::Identifier: {
        setState(469);
        typedefName();
        break;
      }

      case CParser::T__6: {
        setState(470);
        match(CParser::T__6);
        setState(471);
        match(CParser::LeftParen);
        setState(472);
        constantExpression();
        setState(473);
        match(CParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(481);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeSpecifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeSpecifier);
        setState(477);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(478);
        pointer(); 
      }
      setState(483);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StructOrUnionSpecifierContext ------------------------------------------------------------------

CParser::StructOrUnionSpecifierContext::StructOrUnionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::StructOrUnionContext* CParser::StructOrUnionSpecifierContext::structOrUnion() {
  return getRuleContext<CParser::StructOrUnionContext>(0);
}

tree::TerminalNode* CParser::StructOrUnionSpecifierContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::StructDeclarationListContext* CParser::StructOrUnionSpecifierContext::structDeclarationList() {
  return getRuleContext<CParser::StructDeclarationListContext>(0);
}

tree::TerminalNode* CParser::StructOrUnionSpecifierContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::StructOrUnionSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::StructOrUnionSpecifierContext::getRuleIndex() const {
  return CParser::RuleStructOrUnionSpecifier;
}

void CParser::StructOrUnionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructOrUnionSpecifier(this);
}

void CParser::StructOrUnionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructOrUnionSpecifier(this);
}


antlrcpp::Any CParser::StructOrUnionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructOrUnionSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructOrUnionSpecifierContext* CParser::structOrUnionSpecifier() {
  StructOrUnionSpecifierContext *_localctx = _tracker.createInstance<StructOrUnionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 66, CParser::RuleStructOrUnionSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(495);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(484);
      structOrUnion();
      setState(486);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(485);
        match(CParser::Identifier);
      }
      setState(488);
      match(CParser::LeftBrace);
      setState(489);
      structDeclarationList();
      setState(490);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(492);
      structOrUnion();
      setState(493);
      match(CParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructOrUnionContext ------------------------------------------------------------------

CParser::StructOrUnionContext::StructOrUnionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::StructOrUnionContext::Struct() {
  return getToken(CParser::Struct, 0);
}

tree::TerminalNode* CParser::StructOrUnionContext::Union() {
  return getToken(CParser::Union, 0);
}


size_t CParser::StructOrUnionContext::getRuleIndex() const {
  return CParser::RuleStructOrUnion;
}

void CParser::StructOrUnionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructOrUnion(this);
}

void CParser::StructOrUnionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructOrUnion(this);
}


antlrcpp::Any CParser::StructOrUnionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructOrUnion(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructOrUnionContext* CParser::structOrUnion() {
  StructOrUnionContext *_localctx = _tracker.createInstance<StructOrUnionContext>(_ctx, getState());
  enterRule(_localctx, 68, CParser::RuleStructOrUnion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    _la = _input->LA(1);
    if (!(_la == CParser::Struct

    || _la == CParser::Union)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationListContext ------------------------------------------------------------------

CParser::StructDeclarationListContext::StructDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::StructDeclarationContext *> CParser::StructDeclarationListContext::structDeclaration() {
  return getRuleContexts<CParser::StructDeclarationContext>();
}

CParser::StructDeclarationContext* CParser::StructDeclarationListContext::structDeclaration(size_t i) {
  return getRuleContext<CParser::StructDeclarationContext>(i);
}


size_t CParser::StructDeclarationListContext::getRuleIndex() const {
  return CParser::RuleStructDeclarationList;
}

void CParser::StructDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclarationList(this);
}

void CParser::StructDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclarationList(this);
}


antlrcpp::Any CParser::StructDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructDeclarationListContext* CParser::structDeclarationList() {
  StructDeclarationListContext *_localctx = _tracker.createInstance<StructDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 70, CParser::RuleStructDeclarationList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(499);
      structDeclaration();
      setState(502); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::StaticAssert))) != 0) || _la == CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

CParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SpecifierQualifierListContext* CParser::StructDeclarationContext::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}

tree::TerminalNode* CParser::StructDeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::StructDeclaratorListContext* CParser::StructDeclarationContext::structDeclaratorList() {
  return getRuleContext<CParser::StructDeclaratorListContext>(0);
}

CParser::StaticAssertDeclarationContext* CParser::StructDeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CParser::StaticAssertDeclarationContext>(0);
}


size_t CParser::StructDeclarationContext::getRuleIndex() const {
  return CParser::RuleStructDeclaration;
}

void CParser::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void CParser::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}


antlrcpp::Any CParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructDeclarationContext* CParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 72, CParser::RuleStructDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(511);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::T__6:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Struct:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(504);
        specifierQualifierList();
        setState(506);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 59) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
          | (1ULL << (CParser::Star - 59))
          | (1ULL << (CParser::Caret - 59))
          | (1ULL << (CParser::Colon - 59))
          | (1ULL << (CParser::Identifier - 59)))) != 0)) {
          setState(505);
          structDeclaratorList();
        }
        setState(508);
        match(CParser::Semi);
        break;
      }

      case CParser::StaticAssert: {
        enterOuterAlt(_localctx, 2);
        setState(510);
        staticAssertDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecifierQualifierListContext ------------------------------------------------------------------

CParser::SpecifierQualifierListContext::SpecifierQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypeSpecifierContext* CParser::SpecifierQualifierListContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::TypeQualifierContext* CParser::SpecifierQualifierListContext::typeQualifier() {
  return getRuleContext<CParser::TypeQualifierContext>(0);
}

CParser::SpecifierQualifierListContext* CParser::SpecifierQualifierListContext::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}


size_t CParser::SpecifierQualifierListContext::getRuleIndex() const {
  return CParser::RuleSpecifierQualifierList;
}

void CParser::SpecifierQualifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecifierQualifierList(this);
}

void CParser::SpecifierQualifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecifierQualifierList(this);
}


antlrcpp::Any CParser::SpecifierQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSpecifierQualifierList(this);
  else
    return visitor->visitChildren(this);
}

CParser::SpecifierQualifierListContext* CParser::specifierQualifierList() {
  SpecifierQualifierListContext *_localctx = _tracker.createInstance<SpecifierQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 74, CParser::RuleSpecifierQualifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(513);
      typeSpecifier(0);
      break;
    }

    case 2: {
      setState(514);
      typeQualifier();
      break;
    }

    default:
      break;
    }
    setState(518);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(517);
      specifierQualifierList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclaratorListContext ------------------------------------------------------------------

CParser::StructDeclaratorListContext::StructDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::StructDeclaratorContext *> CParser::StructDeclaratorListContext::structDeclarator() {
  return getRuleContexts<CParser::StructDeclaratorContext>();
}

CParser::StructDeclaratorContext* CParser::StructDeclaratorListContext::structDeclarator(size_t i) {
  return getRuleContext<CParser::StructDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CParser::StructDeclaratorListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::StructDeclaratorListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::StructDeclaratorListContext::getRuleIndex() const {
  return CParser::RuleStructDeclaratorList;
}

void CParser::StructDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaratorList(this);
}

void CParser::StructDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaratorList(this);
}


antlrcpp::Any CParser::StructDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructDeclaratorListContext* CParser::structDeclaratorList() {
  StructDeclaratorListContext *_localctx = _tracker.createInstance<StructDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 76, CParser::RuleStructDeclaratorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    structDeclarator();
    setState(525);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(521);
      match(CParser::Comma);
      setState(522);
      structDeclarator();
      setState(527);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclaratorContext ------------------------------------------------------------------

CParser::StructDeclaratorContext::StructDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::StructDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

tree::TerminalNode* CParser::StructDeclaratorContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::ConstantExpressionContext* CParser::StructDeclaratorContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}


size_t CParser::StructDeclaratorContext::getRuleIndex() const {
  return CParser::RuleStructDeclarator;
}

void CParser::StructDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclarator(this);
}

void CParser::StructDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclarator(this);
}


antlrcpp::Any CParser::StructDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructDeclaratorContext* CParser::structDeclarator() {
  StructDeclaratorContext *_localctx = _tracker.createInstance<StructDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 78, CParser::RuleStructDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(534);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(528);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(530);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 59) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
        | (1ULL << (CParser::Star - 59))
        | (1ULL << (CParser::Caret - 59))
        | (1ULL << (CParser::Identifier - 59)))) != 0)) {
        setState(529);
        declarator();
      }
      setState(532);
      match(CParser::Colon);
      setState(533);
      constantExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumSpecifierContext ------------------------------------------------------------------

CParser::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumSpecifierContext::Enum() {
  return getToken(CParser::Enum, 0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::EnumeratorListContext* CParser::EnumSpecifierContext::enumeratorList() {
  return getRuleContext<CParser::EnumeratorListContext>(0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::EnumSpecifierContext::getRuleIndex() const {
  return CParser::RuleEnumSpecifier;
}

void CParser::EnumSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumSpecifier(this);
}

void CParser::EnumSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumSpecifier(this);
}


antlrcpp::Any CParser::EnumSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumSpecifierContext* CParser::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 80, CParser::RuleEnumSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(549);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(536);
      match(CParser::Enum);
      setState(538);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(537);
        match(CParser::Identifier);
      }
      setState(540);
      match(CParser::LeftBrace);
      setState(541);
      enumeratorList();
      setState(543);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Comma) {
        setState(542);
        match(CParser::Comma);
      }
      setState(545);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(547);
      match(CParser::Enum);
      setState(548);
      match(CParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorListContext ------------------------------------------------------------------

CParser::EnumeratorListContext::EnumeratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::EnumeratorContext *> CParser::EnumeratorListContext::enumerator() {
  return getRuleContexts<CParser::EnumeratorContext>();
}

CParser::EnumeratorContext* CParser::EnumeratorListContext::enumerator(size_t i) {
  return getRuleContext<CParser::EnumeratorContext>(i);
}

std::vector<tree::TerminalNode *> CParser::EnumeratorListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::EnumeratorListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::EnumeratorListContext::getRuleIndex() const {
  return CParser::RuleEnumeratorList;
}

void CParser::EnumeratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorList(this);
}

void CParser::EnumeratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorList(this);
}


antlrcpp::Any CParser::EnumeratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumeratorList(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumeratorListContext* CParser::enumeratorList() {
  EnumeratorListContext *_localctx = _tracker.createInstance<EnumeratorListContext>(_ctx, getState());
  enterRule(_localctx, 82, CParser::RuleEnumeratorList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(551);
    enumerator();
    setState(556);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(552);
        match(CParser::Comma);
        setState(553);
        enumerator(); 
      }
      setState(558);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

CParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::EnumerationConstantContext* CParser::EnumeratorContext::enumerationConstant() {
  return getRuleContext<CParser::EnumerationConstantContext>(0);
}

tree::TerminalNode* CParser::EnumeratorContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::ConstantExpressionContext* CParser::EnumeratorContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}


size_t CParser::EnumeratorContext::getRuleIndex() const {
  return CParser::RuleEnumerator;
}

void CParser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void CParser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}


antlrcpp::Any CParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumeratorContext* CParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 84, CParser::RuleEnumerator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    enumerationConstant();
    setState(562);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Assign) {
      setState(560);
      match(CParser::Assign);
      setState(561);
      constantExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumerationConstantContext ------------------------------------------------------------------

CParser::EnumerationConstantContext::EnumerationConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumerationConstantContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::EnumerationConstantContext::getRuleIndex() const {
  return CParser::RuleEnumerationConstant;
}

void CParser::EnumerationConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerationConstant(this);
}

void CParser::EnumerationConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerationConstant(this);
}


antlrcpp::Any CParser::EnumerationConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumerationConstant(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumerationConstantContext* CParser::enumerationConstant() {
  EnumerationConstantContext *_localctx = _tracker.createInstance<EnumerationConstantContext>(_ctx, getState());
  enterRule(_localctx, 86, CParser::RuleEnumerationConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomicTypeSpecifierContext ------------------------------------------------------------------

CParser::AtomicTypeSpecifierContext::AtomicTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AtomicTypeSpecifierContext::Atomic() {
  return getToken(CParser::Atomic, 0);
}

tree::TerminalNode* CParser::AtomicTypeSpecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::TypeNameContext* CParser::AtomicTypeSpecifierContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

tree::TerminalNode* CParser::AtomicTypeSpecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::AtomicTypeSpecifierContext::getRuleIndex() const {
  return CParser::RuleAtomicTypeSpecifier;
}

void CParser::AtomicTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicTypeSpecifier(this);
}

void CParser::AtomicTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicTypeSpecifier(this);
}


antlrcpp::Any CParser::AtomicTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAtomicTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::AtomicTypeSpecifierContext* CParser::atomicTypeSpecifier() {
  AtomicTypeSpecifierContext *_localctx = _tracker.createInstance<AtomicTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 88, CParser::RuleAtomicTypeSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(566);
    match(CParser::Atomic);
    setState(567);
    match(CParser::LeftParen);
    setState(568);
    typeName();
    setState(569);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierContext ------------------------------------------------------------------

CParser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypeQualifierContext::Const() {
  return getToken(CParser::Const, 0);
}

tree::TerminalNode* CParser::TypeQualifierContext::Restrict() {
  return getToken(CParser::Restrict, 0);
}

tree::TerminalNode* CParser::TypeQualifierContext::Volatile() {
  return getToken(CParser::Volatile, 0);
}

tree::TerminalNode* CParser::TypeQualifierContext::Atomic() {
  return getToken(CParser::Atomic, 0);
}


size_t CParser::TypeQualifierContext::getRuleIndex() const {
  return CParser::RuleTypeQualifier;
}

void CParser::TypeQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifier(this);
}

void CParser::TypeQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifier(this);
}


antlrcpp::Any CParser::TypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeQualifierContext* CParser::typeQualifier() {
  TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 90, CParser::RuleTypeQualifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(571);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::Const)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Atomic))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSpecifierContext ------------------------------------------------------------------

CParser::FunctionSpecifierContext::FunctionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::FunctionSpecifierContext::Inline() {
  return getToken(CParser::Inline, 0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::Noreturn() {
  return getToken(CParser::Noreturn, 0);
}

CParser::GccAttributeSpecifierContext* CParser::FunctionSpecifierContext::gccAttributeSpecifier() {
  return getRuleContext<CParser::GccAttributeSpecifierContext>(0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::FunctionSpecifierContext::getRuleIndex() const {
  return CParser::RuleFunctionSpecifier;
}

void CParser::FunctionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSpecifier(this);
}

void CParser::FunctionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSpecifier(this);
}


antlrcpp::Any CParser::FunctionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctionSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctionSpecifierContext* CParser::functionSpecifier() {
  FunctionSpecifierContext *_localctx = _tracker.createInstance<FunctionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 92, CParser::RuleFunctionSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(579);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__7:
      case CParser::T__8:
      case CParser::Inline:
      case CParser::Noreturn: {
        enterOuterAlt(_localctx, 1);
        setState(573);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__7)
          | (1ULL << CParser::T__8)
          | (1ULL << CParser::Inline)
          | (1ULL << CParser::Noreturn))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(574);
        gccAttributeSpecifier();
        break;
      }

      case CParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(575);
        match(CParser::T__9);
        setState(576);
        match(CParser::LeftParen);
        setState(577);
        match(CParser::Identifier);
        setState(578);
        match(CParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlignmentSpecifierContext ------------------------------------------------------------------

CParser::AlignmentSpecifierContext::AlignmentSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AlignmentSpecifierContext::Alignas() {
  return getToken(CParser::Alignas, 0);
}

tree::TerminalNode* CParser::AlignmentSpecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::AlignmentSpecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::TypeNameContext* CParser::AlignmentSpecifierContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

CParser::ConstantExpressionContext* CParser::AlignmentSpecifierContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}


size_t CParser::AlignmentSpecifierContext::getRuleIndex() const {
  return CParser::RuleAlignmentSpecifier;
}

void CParser::AlignmentSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlignmentSpecifier(this);
}

void CParser::AlignmentSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlignmentSpecifier(this);
}


antlrcpp::Any CParser::AlignmentSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAlignmentSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::AlignmentSpecifierContext* CParser::alignmentSpecifier() {
  AlignmentSpecifierContext *_localctx = _tracker.createInstance<AlignmentSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 94, CParser::RuleAlignmentSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    match(CParser::Alignas);
    setState(582);
    match(CParser::LeftParen);
    setState(585);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(583);
      typeName();
      break;
    }

    case 2: {
      setState(584);
      constantExpression();
      break;
    }

    default:
      break;
    }
    setState(587);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

CParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DirectDeclaratorContext* CParser::DeclaratorContext::directDeclarator() {
  return getRuleContext<CParser::DirectDeclaratorContext>(0);
}

CParser::PointerContext* CParser::DeclaratorContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}

std::vector<CParser::GccDeclaratorExtensionContext *> CParser::DeclaratorContext::gccDeclaratorExtension() {
  return getRuleContexts<CParser::GccDeclaratorExtensionContext>();
}

CParser::GccDeclaratorExtensionContext* CParser::DeclaratorContext::gccDeclaratorExtension(size_t i) {
  return getRuleContext<CParser::GccDeclaratorExtensionContext>(i);
}


size_t CParser::DeclaratorContext::getRuleIndex() const {
  return CParser::RuleDeclarator;
}

void CParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void CParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}


antlrcpp::Any CParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclaratorContext* CParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 96, CParser::RuleDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(590);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Star

    || _la == CParser::Caret) {
      setState(589);
      pointer();
    }
    setState(592);
    directDeclarator(0);
    setState(596);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(593);
        gccDeclaratorExtension(); 
      }
      setState(598);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectDeclaratorContext ------------------------------------------------------------------

CParser::DirectDeclaratorContext::DirectDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::DeclaratorContext* CParser::DirectDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Colon() {
  return getToken(CParser::Colon, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::DigitSequence() {
  return getToken(CParser::DigitSequence, 0);
}

CParser::PointerContext* CParser::DirectDeclaratorContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}

CParser::DirectDeclaratorContext* CParser::DirectDeclaratorContext::directDeclarator() {
  return getRuleContext<CParser::DirectDeclaratorContext>(0);
}

CParser::TypeSpecifierContext* CParser::DirectDeclaratorContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::TypeQualifierListContext* CParser::DirectDeclaratorContext::typeQualifierList() {
  return getRuleContext<CParser::TypeQualifierListContext>(0);
}

CParser::AssignmentExpressionContext* CParser::DirectDeclaratorContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Static() {
  return getToken(CParser::Static, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Star() {
  return getToken(CParser::Star, 0);
}

CParser::ParameterTypeListContext* CParser::DirectDeclaratorContext::parameterTypeList() {
  return getRuleContext<CParser::ParameterTypeListContext>(0);
}

CParser::IdentifierListContext* CParser::DirectDeclaratorContext::identifierList() {
  return getRuleContext<CParser::IdentifierListContext>(0);
}


size_t CParser::DirectDeclaratorContext::getRuleIndex() const {
  return CParser::RuleDirectDeclarator;
}

void CParser::DirectDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectDeclarator(this);
}

void CParser::DirectDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectDeclarator(this);
}


antlrcpp::Any CParser::DirectDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDirectDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CParser::DirectDeclaratorContext* CParser::directDeclarator() {
   return directDeclarator(0);
}

CParser::DirectDeclaratorContext* CParser::directDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::DirectDeclaratorContext *_localctx = _tracker.createInstance<DirectDeclaratorContext>(_ctx, parentState);
  CParser::DirectDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 98;
  enterRecursionRule(_localctx, 98, CParser::RuleDirectDeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(616);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      setState(600);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      setState(601);
      match(CParser::LeftParen);
      setState(602);
      declarator();
      setState(603);
      match(CParser::RightParen);
      break;
    }

    case 3: {
      setState(605);
      match(CParser::Identifier);
      setState(606);
      match(CParser::Colon);
      setState(607);
      match(CParser::DigitSequence);
      break;
    }

    case 4: {
      setState(608);
      match(CParser::LeftParen);
      setState(610);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__3)
        | (1ULL << CParser::T__4)
        | (1ULL << CParser::T__5)
        | (1ULL << CParser::T__6)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Struct)
        | (1ULL << CParser::Union)
        | (1ULL << CParser::Unsigned)
        | (1ULL << CParser::Void)
        | (1ULL << CParser::Atomic)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Complex))) != 0) || _la == CParser::Identifier) {
        setState(609);
        typeSpecifier(0);
      }
      setState(612);
      pointer();
      setState(613);
      directDeclarator(0);
      setState(614);
      match(CParser::RightParen);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(663);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(661);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(618);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(619);
          match(CParser::LeftBracket);
          setState(621);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(620);
            typeQualifierList();
          }
          setState(624);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::T__2)
            | (1ULL << CParser::Sizeof)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Generic)
            | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
            | (1ULL << (CParser::PlusPlus - 71))
            | (1ULL << (CParser::Minus - 71))
            | (1ULL << (CParser::MinusMinus - 71))
            | (1ULL << (CParser::Star - 71))
            | (1ULL << (CParser::And - 71))
            | (1ULL << (CParser::AndAnd - 71))
            | (1ULL << (CParser::Not - 71))
            | (1ULL << (CParser::Tilde - 71))
            | (1ULL << (CParser::Identifier - 71))
            | (1ULL << (CParser::Constant - 71))
            | (1ULL << (CParser::DigitSequence - 71))
            | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
            setState(623);
            assignmentExpression();
          }
          setState(626);
          match(CParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(627);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(628);
          match(CParser::LeftBracket);
          setState(629);
          match(CParser::Static);
          setState(631);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(630);
            typeQualifierList();
          }
          setState(633);
          assignmentExpression();
          setState(634);
          match(CParser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(636);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(637);
          match(CParser::LeftBracket);
          setState(638);
          typeQualifierList();
          setState(639);
          match(CParser::Static);
          setState(640);
          assignmentExpression();
          setState(641);
          match(CParser::RightBracket);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(643);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(644);
          match(CParser::LeftBracket);
          setState(646);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(645);
            typeQualifierList();
          }
          setState(648);
          match(CParser::Star);
          setState(649);
          match(CParser::RightBracket);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(650);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(651);
          match(CParser::LeftParen);
          setState(652);
          parameterTypeList();
          setState(653);
          match(CParser::RightParen);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(655);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(656);
          match(CParser::LeftParen);
          setState(658);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CParser::Identifier) {
            setState(657);
            identifierList();
          }
          setState(660);
          match(CParser::RightParen);
          break;
        }

        default:
          break;
        } 
      }
      setState(665);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- GccDeclaratorExtensionContext ------------------------------------------------------------------

CParser::GccDeclaratorExtensionContext::GccDeclaratorExtensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::GccDeclaratorExtensionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::GccDeclaratorExtensionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

std::vector<tree::TerminalNode *> CParser::GccDeclaratorExtensionContext::StringLiteral() {
  return getTokens(CParser::StringLiteral);
}

tree::TerminalNode* CParser::GccDeclaratorExtensionContext::StringLiteral(size_t i) {
  return getToken(CParser::StringLiteral, i);
}

CParser::GccAttributeSpecifierContext* CParser::GccDeclaratorExtensionContext::gccAttributeSpecifier() {
  return getRuleContext<CParser::GccAttributeSpecifierContext>(0);
}


size_t CParser::GccDeclaratorExtensionContext::getRuleIndex() const {
  return CParser::RuleGccDeclaratorExtension;
}

void CParser::GccDeclaratorExtensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccDeclaratorExtension(this);
}

void CParser::GccDeclaratorExtensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccDeclaratorExtension(this);
}


antlrcpp::Any CParser::GccDeclaratorExtensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccDeclaratorExtension(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccDeclaratorExtensionContext* CParser::gccDeclaratorExtension() {
  GccDeclaratorExtensionContext *_localctx = _tracker.createInstance<GccDeclaratorExtensionContext>(_ctx, getState());
  enterRule(_localctx, 100, CParser::RuleGccDeclaratorExtension);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(675);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__10: {
        enterOuterAlt(_localctx, 1);
        setState(666);
        match(CParser::T__10);
        setState(667);
        match(CParser::LeftParen);
        setState(669); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(668);
          match(CParser::StringLiteral);
          setState(671); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == CParser::StringLiteral);
        setState(673);
        match(CParser::RightParen);
        break;
      }

      case CParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(674);
        gccAttributeSpecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccAttributeSpecifierContext ------------------------------------------------------------------

CParser::GccAttributeSpecifierContext::GccAttributeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::GccAttributeSpecifierContext::LeftParen() {
  return getTokens(CParser::LeftParen);
}

tree::TerminalNode* CParser::GccAttributeSpecifierContext::LeftParen(size_t i) {
  return getToken(CParser::LeftParen, i);
}

CParser::GccAttributeListContext* CParser::GccAttributeSpecifierContext::gccAttributeList() {
  return getRuleContext<CParser::GccAttributeListContext>(0);
}

std::vector<tree::TerminalNode *> CParser::GccAttributeSpecifierContext::RightParen() {
  return getTokens(CParser::RightParen);
}

tree::TerminalNode* CParser::GccAttributeSpecifierContext::RightParen(size_t i) {
  return getToken(CParser::RightParen, i);
}


size_t CParser::GccAttributeSpecifierContext::getRuleIndex() const {
  return CParser::RuleGccAttributeSpecifier;
}

void CParser::GccAttributeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttributeSpecifier(this);
}

void CParser::GccAttributeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttributeSpecifier(this);
}


antlrcpp::Any CParser::GccAttributeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccAttributeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccAttributeSpecifierContext* CParser::gccAttributeSpecifier() {
  GccAttributeSpecifierContext *_localctx = _tracker.createInstance<GccAttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 102, CParser::RuleGccAttributeSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(677);
    match(CParser::T__11);
    setState(678);
    match(CParser::LeftParen);
    setState(679);
    match(CParser::LeftParen);
    setState(680);
    gccAttributeList();
    setState(681);
    match(CParser::RightParen);
    setState(682);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccAttributeListContext ------------------------------------------------------------------

CParser::GccAttributeListContext::GccAttributeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::GccAttributeContext *> CParser::GccAttributeListContext::gccAttribute() {
  return getRuleContexts<CParser::GccAttributeContext>();
}

CParser::GccAttributeContext* CParser::GccAttributeListContext::gccAttribute(size_t i) {
  return getRuleContext<CParser::GccAttributeContext>(i);
}

std::vector<tree::TerminalNode *> CParser::GccAttributeListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::GccAttributeListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::GccAttributeListContext::getRuleIndex() const {
  return CParser::RuleGccAttributeList;
}

void CParser::GccAttributeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttributeList(this);
}

void CParser::GccAttributeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttributeList(this);
}


antlrcpp::Any CParser::GccAttributeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccAttributeList(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccAttributeListContext* CParser::gccAttributeList() {
  GccAttributeListContext *_localctx = _tracker.createInstance<GccAttributeListContext>(_ctx, getState());
  enterRule(_localctx, 104, CParser::RuleGccAttributeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(685);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Else)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftBracket)
      | (1ULL << CParser::RightBracket)
      | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::RightBrace - 64))
      | (1ULL << (CParser::Less - 64))
      | (1ULL << (CParser::LessEqual - 64))
      | (1ULL << (CParser::Greater - 64))
      | (1ULL << (CParser::GreaterEqual - 64))
      | (1ULL << (CParser::LeftShift - 64))
      | (1ULL << (CParser::RightShift - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::MinusMinus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::Div - 64))
      | (1ULL << (CParser::Mod - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::Or - 64))
      | (1ULL << (CParser::AndAnd - 64))
      | (1ULL << (CParser::OrOr - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Not - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::Question - 64))
      | (1ULL << (CParser::Colon - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::Assign - 64))
      | (1ULL << (CParser::StarAssign - 64))
      | (1ULL << (CParser::DivAssign - 64))
      | (1ULL << (CParser::ModAssign - 64))
      | (1ULL << (CParser::PlusAssign - 64))
      | (1ULL << (CParser::MinusAssign - 64))
      | (1ULL << (CParser::LeftShiftAssign - 64))
      | (1ULL << (CParser::RightShiftAssign - 64))
      | (1ULL << (CParser::AndAssign - 64))
      | (1ULL << (CParser::XorAssign - 64))
      | (1ULL << (CParser::OrAssign - 64))
      | (1ULL << (CParser::Equal - 64))
      | (1ULL << (CParser::NotEqual - 64))
      | (1ULL << (CParser::Arrow - 64))
      | (1ULL << (CParser::Dot - 64))
      | (1ULL << (CParser::Ellipsis - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::Constant - 64))
      | (1ULL << (CParser::DigitSequence - 64))
      | (1ULL << (CParser::StringLiteral - 64))
      | (1ULL << (CParser::ComplexDefine - 64))
      | (1ULL << (CParser::IncludeDirective - 64))
      | (1ULL << (CParser::AsmBlock - 64))
      | (1ULL << (CParser::LineAfterPreprocessing - 64))
      | (1ULL << (CParser::LineDirective - 64))
      | (1ULL << (CParser::PragmaDirective - 64))
      | (1ULL << (CParser::Whitespace - 64))
      | (1ULL << (CParser::Newline - 64))
      | (1ULL << (CParser::BlockComment - 64))
      | (1ULL << (CParser::LineComment - 64)))) != 0)) {
      setState(684);
      gccAttribute();
    }
    setState(693);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(687);
      match(CParser::Comma);
      setState(689);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::T__3)
        | (1ULL << CParser::T__4)
        | (1ULL << CParser::T__5)
        | (1ULL << CParser::T__6)
        | (1ULL << CParser::T__7)
        | (1ULL << CParser::T__8)
        | (1ULL << CParser::T__9)
        | (1ULL << CParser::T__10)
        | (1ULL << CParser::T__11)
        | (1ULL << CParser::T__12)
        | (1ULL << CParser::T__13)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Break)
        | (1ULL << CParser::Case)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Const)
        | (1ULL << CParser::Continue)
        | (1ULL << CParser::Default)
        | (1ULL << CParser::Do)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Else)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::Extern)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::For)
        | (1ULL << CParser::Goto)
        | (1ULL << CParser::If)
        | (1ULL << CParser::Inline)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::Register)
        | (1ULL << CParser::Restrict)
        | (1ULL << CParser::Return)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Static)
        | (1ULL << CParser::Struct)
        | (1ULL << CParser::Switch)
        | (1ULL << CParser::Typedef)
        | (1ULL << CParser::Union)
        | (1ULL << CParser::Unsigned)
        | (1ULL << CParser::Void)
        | (1ULL << CParser::Volatile)
        | (1ULL << CParser::While)
        | (1ULL << CParser::Alignas)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Atomic)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Complex)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::Imaginary)
        | (1ULL << CParser::Noreturn)
        | (1ULL << CParser::StaticAssert)
        | (1ULL << CParser::ThreadLocal)
        | (1ULL << CParser::LeftBracket)
        | (1ULL << CParser::RightBracket)
        | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::RightBrace - 64))
        | (1ULL << (CParser::Less - 64))
        | (1ULL << (CParser::LessEqual - 64))
        | (1ULL << (CParser::Greater - 64))
        | (1ULL << (CParser::GreaterEqual - 64))
        | (1ULL << (CParser::LeftShift - 64))
        | (1ULL << (CParser::RightShift - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::MinusMinus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::Div - 64))
        | (1ULL << (CParser::Mod - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::AndAnd - 64))
        | (1ULL << (CParser::OrOr - 64))
        | (1ULL << (CParser::Caret - 64))
        | (1ULL << (CParser::Not - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::Question - 64))
        | (1ULL << (CParser::Colon - 64))
        | (1ULL << (CParser::Semi - 64))
        | (1ULL << (CParser::Assign - 64))
        | (1ULL << (CParser::StarAssign - 64))
        | (1ULL << (CParser::DivAssign - 64))
        | (1ULL << (CParser::ModAssign - 64))
        | (1ULL << (CParser::PlusAssign - 64))
        | (1ULL << (CParser::MinusAssign - 64))
        | (1ULL << (CParser::LeftShiftAssign - 64))
        | (1ULL << (CParser::RightShiftAssign - 64))
        | (1ULL << (CParser::AndAssign - 64))
        | (1ULL << (CParser::XorAssign - 64))
        | (1ULL << (CParser::OrAssign - 64))
        | (1ULL << (CParser::Equal - 64))
        | (1ULL << (CParser::NotEqual - 64))
        | (1ULL << (CParser::Arrow - 64))
        | (1ULL << (CParser::Dot - 64))
        | (1ULL << (CParser::Ellipsis - 64))
        | (1ULL << (CParser::Identifier - 64))
        | (1ULL << (CParser::Constant - 64))
        | (1ULL << (CParser::DigitSequence - 64))
        | (1ULL << (CParser::StringLiteral - 64))
        | (1ULL << (CParser::ComplexDefine - 64))
        | (1ULL << (CParser::IncludeDirective - 64))
        | (1ULL << (CParser::AsmBlock - 64))
        | (1ULL << (CParser::LineAfterPreprocessing - 64))
        | (1ULL << (CParser::LineDirective - 64))
        | (1ULL << (CParser::PragmaDirective - 64))
        | (1ULL << (CParser::Whitespace - 64))
        | (1ULL << (CParser::Newline - 64))
        | (1ULL << (CParser::BlockComment - 64))
        | (1ULL << (CParser::LineComment - 64)))) != 0)) {
        setState(688);
        gccAttribute();
      }
      setState(695);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccAttributeContext ------------------------------------------------------------------

CParser::GccAttributeContext::GccAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::GccAttributeContext::Comma() {
  return getToken(CParser::Comma, 0);
}

std::vector<tree::TerminalNode *> CParser::GccAttributeContext::LeftParen() {
  return getTokens(CParser::LeftParen);
}

tree::TerminalNode* CParser::GccAttributeContext::LeftParen(size_t i) {
  return getToken(CParser::LeftParen, i);
}

std::vector<tree::TerminalNode *> CParser::GccAttributeContext::RightParen() {
  return getTokens(CParser::RightParen);
}

tree::TerminalNode* CParser::GccAttributeContext::RightParen(size_t i) {
  return getToken(CParser::RightParen, i);
}

CParser::ArgumentExpressionListContext* CParser::GccAttributeContext::argumentExpressionList() {
  return getRuleContext<CParser::ArgumentExpressionListContext>(0);
}


size_t CParser::GccAttributeContext::getRuleIndex() const {
  return CParser::RuleGccAttribute;
}

void CParser::GccAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttribute(this);
}

void CParser::GccAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttribute(this);
}


antlrcpp::Any CParser::GccAttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccAttribute(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccAttributeContext* CParser::gccAttribute() {
  GccAttributeContext *_localctx = _tracker.createInstance<GccAttributeContext>(_ctx, getState());
  enterRule(_localctx, 106, CParser::RuleGccAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(696);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
      | (1ULL << (CParser::RightParen - 59))
      | (1ULL << (CParser::Comma - 59)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(702);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::LeftParen) {
      setState(697);
      match(CParser::LeftParen);
      setState(699);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(698);
        argumentExpressionList();
      }
      setState(701);
      match(CParser::RightParen);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedParenthesesBlockContext ------------------------------------------------------------------

CParser::NestedParenthesesBlockContext::NestedParenthesesBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::NestedParenthesesBlockContext::LeftParen() {
  return getTokens(CParser::LeftParen);
}

tree::TerminalNode* CParser::NestedParenthesesBlockContext::LeftParen(size_t i) {
  return getToken(CParser::LeftParen, i);
}

std::vector<CParser::NestedParenthesesBlockContext *> CParser::NestedParenthesesBlockContext::nestedParenthesesBlock() {
  return getRuleContexts<CParser::NestedParenthesesBlockContext>();
}

CParser::NestedParenthesesBlockContext* CParser::NestedParenthesesBlockContext::nestedParenthesesBlock(size_t i) {
  return getRuleContext<CParser::NestedParenthesesBlockContext>(i);
}

std::vector<tree::TerminalNode *> CParser::NestedParenthesesBlockContext::RightParen() {
  return getTokens(CParser::RightParen);
}

tree::TerminalNode* CParser::NestedParenthesesBlockContext::RightParen(size_t i) {
  return getToken(CParser::RightParen, i);
}


size_t CParser::NestedParenthesesBlockContext::getRuleIndex() const {
  return CParser::RuleNestedParenthesesBlock;
}

void CParser::NestedParenthesesBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedParenthesesBlock(this);
}

void CParser::NestedParenthesesBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedParenthesesBlock(this);
}


antlrcpp::Any CParser::NestedParenthesesBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNestedParenthesesBlock(this);
  else
    return visitor->visitChildren(this);
}

CParser::NestedParenthesesBlockContext* CParser::nestedParenthesesBlock() {
  NestedParenthesesBlockContext *_localctx = _tracker.createInstance<NestedParenthesesBlockContext>(_ctx, getState());
  enterRule(_localctx, 108, CParser::RuleNestedParenthesesBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(711);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Else)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen)
      | (1ULL << CParser::LeftBracket)
      | (1ULL << CParser::RightBracket)
      | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::RightBrace - 64))
      | (1ULL << (CParser::Less - 64))
      | (1ULL << (CParser::LessEqual - 64))
      | (1ULL << (CParser::Greater - 64))
      | (1ULL << (CParser::GreaterEqual - 64))
      | (1ULL << (CParser::LeftShift - 64))
      | (1ULL << (CParser::RightShift - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::MinusMinus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::Div - 64))
      | (1ULL << (CParser::Mod - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::Or - 64))
      | (1ULL << (CParser::AndAnd - 64))
      | (1ULL << (CParser::OrOr - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Not - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::Question - 64))
      | (1ULL << (CParser::Colon - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::Comma - 64))
      | (1ULL << (CParser::Assign - 64))
      | (1ULL << (CParser::StarAssign - 64))
      | (1ULL << (CParser::DivAssign - 64))
      | (1ULL << (CParser::ModAssign - 64))
      | (1ULL << (CParser::PlusAssign - 64))
      | (1ULL << (CParser::MinusAssign - 64))
      | (1ULL << (CParser::LeftShiftAssign - 64))
      | (1ULL << (CParser::RightShiftAssign - 64))
      | (1ULL << (CParser::AndAssign - 64))
      | (1ULL << (CParser::XorAssign - 64))
      | (1ULL << (CParser::OrAssign - 64))
      | (1ULL << (CParser::Equal - 64))
      | (1ULL << (CParser::NotEqual - 64))
      | (1ULL << (CParser::Arrow - 64))
      | (1ULL << (CParser::Dot - 64))
      | (1ULL << (CParser::Ellipsis - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::Constant - 64))
      | (1ULL << (CParser::DigitSequence - 64))
      | (1ULL << (CParser::StringLiteral - 64))
      | (1ULL << (CParser::ComplexDefine - 64))
      | (1ULL << (CParser::IncludeDirective - 64))
      | (1ULL << (CParser::AsmBlock - 64))
      | (1ULL << (CParser::LineAfterPreprocessing - 64))
      | (1ULL << (CParser::LineDirective - 64))
      | (1ULL << (CParser::PragmaDirective - 64))
      | (1ULL << (CParser::Whitespace - 64))
      | (1ULL << (CParser::Newline - 64))
      | (1ULL << (CParser::BlockComment - 64))
      | (1ULL << (CParser::LineComment - 64)))) != 0)) {
      setState(709);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CParser::T__0:
        case CParser::T__1:
        case CParser::T__2:
        case CParser::T__3:
        case CParser::T__4:
        case CParser::T__5:
        case CParser::T__6:
        case CParser::T__7:
        case CParser::T__8:
        case CParser::T__9:
        case CParser::T__10:
        case CParser::T__11:
        case CParser::T__12:
        case CParser::T__13:
        case CParser::Auto:
        case CParser::Break:
        case CParser::Case:
        case CParser::Char:
        case CParser::Const:
        case CParser::Continue:
        case CParser::Default:
        case CParser::Do:
        case CParser::Double:
        case CParser::Else:
        case CParser::Enum:
        case CParser::Extern:
        case CParser::Float:
        case CParser::For:
        case CParser::Goto:
        case CParser::If:
        case CParser::Inline:
        case CParser::Int:
        case CParser::Long:
        case CParser::Register:
        case CParser::Restrict:
        case CParser::Return:
        case CParser::Short:
        case CParser::Signed:
        case CParser::Sizeof:
        case CParser::Static:
        case CParser::Struct:
        case CParser::Switch:
        case CParser::Typedef:
        case CParser::Union:
        case CParser::Unsigned:
        case CParser::Void:
        case CParser::Volatile:
        case CParser::While:
        case CParser::Alignas:
        case CParser::Alignof:
        case CParser::Atomic:
        case CParser::Bool:
        case CParser::Complex:
        case CParser::Generic:
        case CParser::Imaginary:
        case CParser::Noreturn:
        case CParser::StaticAssert:
        case CParser::ThreadLocal:
        case CParser::LeftBracket:
        case CParser::RightBracket:
        case CParser::LeftBrace:
        case CParser::RightBrace:
        case CParser::Less:
        case CParser::LessEqual:
        case CParser::Greater:
        case CParser::GreaterEqual:
        case CParser::LeftShift:
        case CParser::RightShift:
        case CParser::Plus:
        case CParser::PlusPlus:
        case CParser::Minus:
        case CParser::MinusMinus:
        case CParser::Star:
        case CParser::Div:
        case CParser::Mod:
        case CParser::And:
        case CParser::Or:
        case CParser::AndAnd:
        case CParser::OrOr:
        case CParser::Caret:
        case CParser::Not:
        case CParser::Tilde:
        case CParser::Question:
        case CParser::Colon:
        case CParser::Semi:
        case CParser::Comma:
        case CParser::Assign:
        case CParser::StarAssign:
        case CParser::DivAssign:
        case CParser::ModAssign:
        case CParser::PlusAssign:
        case CParser::MinusAssign:
        case CParser::LeftShiftAssign:
        case CParser::RightShiftAssign:
        case CParser::AndAssign:
        case CParser::XorAssign:
        case CParser::OrAssign:
        case CParser::Equal:
        case CParser::NotEqual:
        case CParser::Arrow:
        case CParser::Dot:
        case CParser::Ellipsis:
        case CParser::Identifier:
        case CParser::Constant:
        case CParser::DigitSequence:
        case CParser::StringLiteral:
        case CParser::ComplexDefine:
        case CParser::IncludeDirective:
        case CParser::AsmBlock:
        case CParser::LineAfterPreprocessing:
        case CParser::LineDirective:
        case CParser::PragmaDirective:
        case CParser::Whitespace:
        case CParser::Newline:
        case CParser::BlockComment:
        case CParser::LineComment: {
          setState(704);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == CParser::LeftParen

          || _la == CParser::RightParen)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case CParser::LeftParen: {
          setState(705);
          match(CParser::LeftParen);
          setState(706);
          nestedParenthesesBlock();
          setState(707);
          match(CParser::RightParen);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(713);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerContext ------------------------------------------------------------------

CParser::PointerContext::PointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::PointerContext::Star() {
  return getTokens(CParser::Star);
}

tree::TerminalNode* CParser::PointerContext::Star(size_t i) {
  return getToken(CParser::Star, i);
}

std::vector<tree::TerminalNode *> CParser::PointerContext::Caret() {
  return getTokens(CParser::Caret);
}

tree::TerminalNode* CParser::PointerContext::Caret(size_t i) {
  return getToken(CParser::Caret, i);
}

std::vector<CParser::TypeQualifierListContext *> CParser::PointerContext::typeQualifierList() {
  return getRuleContexts<CParser::TypeQualifierListContext>();
}

CParser::TypeQualifierListContext* CParser::PointerContext::typeQualifierList(size_t i) {
  return getRuleContext<CParser::TypeQualifierListContext>(i);
}


size_t CParser::PointerContext::getRuleIndex() const {
  return CParser::RulePointer;
}

void CParser::PointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointer(this);
}

void CParser::PointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointer(this);
}


antlrcpp::Any CParser::PointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPointer(this);
  else
    return visitor->visitChildren(this);
}

CParser::PointerContext* CParser::pointer() {
  PointerContext *_localctx = _tracker.createInstance<PointerContext>(_ctx, getState());
  enterRule(_localctx, 110, CParser::RulePointer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(718); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(714);
              _la = _input->LA(1);
              if (!(_la == CParser::Star

              || _la == CParser::Caret)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              setState(716);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
              case 1: {
                setState(715);
                typeQualifierList();
                break;
              }

              default:
                break;
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(720); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierListContext ------------------------------------------------------------------

CParser::TypeQualifierListContext::TypeQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::TypeQualifierContext *> CParser::TypeQualifierListContext::typeQualifier() {
  return getRuleContexts<CParser::TypeQualifierContext>();
}

CParser::TypeQualifierContext* CParser::TypeQualifierListContext::typeQualifier(size_t i) {
  return getRuleContext<CParser::TypeQualifierContext>(i);
}


size_t CParser::TypeQualifierListContext::getRuleIndex() const {
  return CParser::RuleTypeQualifierList;
}

void CParser::TypeQualifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifierList(this);
}

void CParser::TypeQualifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifierList(this);
}


antlrcpp::Any CParser::TypeQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeQualifierList(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeQualifierListContext* CParser::typeQualifierList() {
  TypeQualifierListContext *_localctx = _tracker.createInstance<TypeQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 112, CParser::RuleTypeQualifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(723); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(722);
              typeQualifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(725); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterTypeListContext ------------------------------------------------------------------

CParser::ParameterTypeListContext::ParameterTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ParameterListContext* CParser::ParameterTypeListContext::parameterList() {
  return getRuleContext<CParser::ParameterListContext>(0);
}

tree::TerminalNode* CParser::ParameterTypeListContext::Comma() {
  return getToken(CParser::Comma, 0);
}

tree::TerminalNode* CParser::ParameterTypeListContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}


size_t CParser::ParameterTypeListContext::getRuleIndex() const {
  return CParser::RuleParameterTypeList;
}

void CParser::ParameterTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterTypeList(this);
}

void CParser::ParameterTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterTypeList(this);
}


antlrcpp::Any CParser::ParameterTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterTypeList(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParameterTypeListContext* CParser::parameterTypeList() {
  ParameterTypeListContext *_localctx = _tracker.createInstance<ParameterTypeListContext>(_ctx, getState());
  enterRule(_localctx, 114, CParser::RuleParameterTypeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(727);
    parameterList();
    setState(730);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Comma) {
      setState(728);
      match(CParser::Comma);
      setState(729);
      match(CParser::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

CParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ParameterDeclarationContext *> CParser::ParameterListContext::parameterDeclaration() {
  return getRuleContexts<CParser::ParameterDeclarationContext>();
}

CParser::ParameterDeclarationContext* CParser::ParameterListContext::parameterDeclaration(size_t i) {
  return getRuleContext<CParser::ParameterDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ParameterListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::ParameterListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::ParameterListContext::getRuleIndex() const {
  return CParser::RuleParameterList;
}

void CParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void CParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


antlrcpp::Any CParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParameterListContext* CParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 116, CParser::RuleParameterList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(732);
    parameterDeclaration();
    setState(737);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(733);
        match(CParser::Comma);
        setState(734);
        parameterDeclaration(); 
      }
      setState(739);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

CParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::ParameterDeclarationContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

CParser::DeclaratorContext* CParser::ParameterDeclarationContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::DeclarationSpecifiers2Context* CParser::ParameterDeclarationContext::declarationSpecifiers2() {
  return getRuleContext<CParser::DeclarationSpecifiers2Context>(0);
}

CParser::AbstractDeclaratorContext* CParser::ParameterDeclarationContext::abstractDeclarator() {
  return getRuleContext<CParser::AbstractDeclaratorContext>(0);
}


size_t CParser::ParameterDeclarationContext::getRuleIndex() const {
  return CParser::RuleParameterDeclaration;
}

void CParser::ParameterDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclaration(this);
}

void CParser::ParameterDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclaration(this);
}


antlrcpp::Any CParser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParameterDeclarationContext* CParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 118, CParser::RuleParameterDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(747);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(740);
      declarationSpecifiers();
      setState(741);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(743);
      declarationSpecifiers2();
      setState(745);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 59) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
        | (1ULL << (CParser::LeftBracket - 59))
        | (1ULL << (CParser::Star - 59))
        | (1ULL << (CParser::Caret - 59)))) != 0)) {
        setState(744);
        abstractDeclarator();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

CParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::IdentifierListContext::Identifier() {
  return getTokens(CParser::Identifier);
}

tree::TerminalNode* CParser::IdentifierListContext::Identifier(size_t i) {
  return getToken(CParser::Identifier, i);
}

std::vector<tree::TerminalNode *> CParser::IdentifierListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::IdentifierListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::IdentifierListContext::getRuleIndex() const {
  return CParser::RuleIdentifierList;
}

void CParser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void CParser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


antlrcpp::Any CParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

CParser::IdentifierListContext* CParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 120, CParser::RuleIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(749);
    match(CParser::Identifier);
    setState(754);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(750);
      match(CParser::Comma);
      setState(751);
      match(CParser::Identifier);
      setState(756);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

CParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SpecifierQualifierListContext* CParser::TypeNameContext::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}

CParser::AbstractDeclaratorContext* CParser::TypeNameContext::abstractDeclarator() {
  return getRuleContext<CParser::AbstractDeclaratorContext>(0);
}


size_t CParser::TypeNameContext::getRuleIndex() const {
  return CParser::RuleTypeName;
}

void CParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void CParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any CParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeNameContext* CParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 122, CParser::RuleTypeName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(757);
    specifierQualifierList();
    setState(759);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
      | (1ULL << (CParser::LeftBracket - 59))
      | (1ULL << (CParser::Star - 59))
      | (1ULL << (CParser::Caret - 59)))) != 0)) {
      setState(758);
      abstractDeclarator();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

CParser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PointerContext* CParser::AbstractDeclaratorContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}

CParser::DirectAbstractDeclaratorContext* CParser::AbstractDeclaratorContext::directAbstractDeclarator() {
  return getRuleContext<CParser::DirectAbstractDeclaratorContext>(0);
}

std::vector<CParser::GccDeclaratorExtensionContext *> CParser::AbstractDeclaratorContext::gccDeclaratorExtension() {
  return getRuleContexts<CParser::GccDeclaratorExtensionContext>();
}

CParser::GccDeclaratorExtensionContext* CParser::AbstractDeclaratorContext::gccDeclaratorExtension(size_t i) {
  return getRuleContext<CParser::GccDeclaratorExtensionContext>(i);
}


size_t CParser::AbstractDeclaratorContext::getRuleIndex() const {
  return CParser::RuleAbstractDeclarator;
}

void CParser::AbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractDeclarator(this);
}

void CParser::AbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractDeclarator(this);
}


antlrcpp::Any CParser::AbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::AbstractDeclaratorContext* CParser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 124, CParser::RuleAbstractDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(772);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(761);
      pointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(763);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Star

      || _la == CParser::Caret) {
        setState(762);
        pointer();
      }
      setState(765);
      directAbstractDeclarator(0);
      setState(769);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CParser::T__10

      || _la == CParser::T__11) {
        setState(766);
        gccDeclaratorExtension();
        setState(771);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectAbstractDeclaratorContext ------------------------------------------------------------------

CParser::DirectAbstractDeclaratorContext::DirectAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::AbstractDeclaratorContext* CParser::DirectAbstractDeclaratorContext::abstractDeclarator() {
  return getRuleContext<CParser::AbstractDeclaratorContext>(0);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

std::vector<CParser::GccDeclaratorExtensionContext *> CParser::DirectAbstractDeclaratorContext::gccDeclaratorExtension() {
  return getRuleContexts<CParser::GccDeclaratorExtensionContext>();
}

CParser::GccDeclaratorExtensionContext* CParser::DirectAbstractDeclaratorContext::gccDeclaratorExtension(size_t i) {
  return getRuleContext<CParser::GccDeclaratorExtensionContext>(i);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::TypeQualifierListContext* CParser::DirectAbstractDeclaratorContext::typeQualifierList() {
  return getRuleContext<CParser::TypeQualifierListContext>(0);
}

CParser::AssignmentExpressionContext* CParser::DirectAbstractDeclaratorContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::Static() {
  return getToken(CParser::Static, 0);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::Star() {
  return getToken(CParser::Star, 0);
}

CParser::ParameterTypeListContext* CParser::DirectAbstractDeclaratorContext::parameterTypeList() {
  return getRuleContext<CParser::ParameterTypeListContext>(0);
}

CParser::DirectAbstractDeclaratorContext* CParser::DirectAbstractDeclaratorContext::directAbstractDeclarator() {
  return getRuleContext<CParser::DirectAbstractDeclaratorContext>(0);
}


size_t CParser::DirectAbstractDeclaratorContext::getRuleIndex() const {
  return CParser::RuleDirectAbstractDeclarator;
}

void CParser::DirectAbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectAbstractDeclarator(this);
}

void CParser::DirectAbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectAbstractDeclarator(this);
}


antlrcpp::Any CParser::DirectAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDirectAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CParser::DirectAbstractDeclaratorContext* CParser::directAbstractDeclarator() {
   return directAbstractDeclarator(0);
}

CParser::DirectAbstractDeclaratorContext* CParser::directAbstractDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::DirectAbstractDeclaratorContext *_localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(_ctx, parentState);
  CParser::DirectAbstractDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 126;
  enterRecursionRule(_localctx, 126, CParser::RuleDirectAbstractDeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(820);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      setState(775);
      match(CParser::LeftParen);
      setState(776);
      abstractDeclarator();
      setState(777);
      match(CParser::RightParen);
      setState(781);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(778);
          gccDeclaratorExtension(); 
        }
        setState(783);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
      }
      break;
    }

    case 2: {
      setState(784);
      match(CParser::LeftBracket);
      setState(786);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::Const)
        | (1ULL << CParser::Restrict)
        | (1ULL << CParser::Volatile)
        | (1ULL << CParser::Atomic))) != 0)) {
        setState(785);
        typeQualifierList();
      }
      setState(789);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(788);
        assignmentExpression();
      }
      setState(791);
      match(CParser::RightBracket);
      break;
    }

    case 3: {
      setState(792);
      match(CParser::LeftBracket);
      setState(793);
      match(CParser::Static);
      setState(795);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::Const)
        | (1ULL << CParser::Restrict)
        | (1ULL << CParser::Volatile)
        | (1ULL << CParser::Atomic))) != 0)) {
        setState(794);
        typeQualifierList();
      }
      setState(797);
      assignmentExpression();
      setState(798);
      match(CParser::RightBracket);
      break;
    }

    case 4: {
      setState(800);
      match(CParser::LeftBracket);
      setState(801);
      typeQualifierList();
      setState(802);
      match(CParser::Static);
      setState(803);
      assignmentExpression();
      setState(804);
      match(CParser::RightBracket);
      break;
    }

    case 5: {
      setState(806);
      match(CParser::LeftBracket);
      setState(807);
      match(CParser::Star);
      setState(808);
      match(CParser::RightBracket);
      break;
    }

    case 6: {
      setState(809);
      match(CParser::LeftParen);
      setState(811);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__3)
        | (1ULL << CParser::T__4)
        | (1ULL << CParser::T__5)
        | (1ULL << CParser::T__6)
        | (1ULL << CParser::T__7)
        | (1ULL << CParser::T__8)
        | (1ULL << CParser::T__9)
        | (1ULL << CParser::T__11)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Const)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::Extern)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Inline)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::Register)
        | (1ULL << CParser::Restrict)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Static)
        | (1ULL << CParser::Struct)
        | (1ULL << CParser::Typedef)
        | (1ULL << CParser::Union)
        | (1ULL << CParser::Unsigned)
        | (1ULL << CParser::Void)
        | (1ULL << CParser::Volatile)
        | (1ULL << CParser::Alignas)
        | (1ULL << CParser::Atomic)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Complex)
        | (1ULL << CParser::Noreturn)
        | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier) {
        setState(810);
        parameterTypeList();
      }
      setState(813);
      match(CParser::RightParen);
      setState(817);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(814);
          gccDeclaratorExtension(); 
        }
        setState(819);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
      }
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(865);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(863);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(822);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(823);
          match(CParser::LeftBracket);
          setState(825);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(824);
            typeQualifierList();
          }
          setState(828);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::T__2)
            | (1ULL << CParser::Sizeof)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Generic)
            | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
            | (1ULL << (CParser::PlusPlus - 71))
            | (1ULL << (CParser::Minus - 71))
            | (1ULL << (CParser::MinusMinus - 71))
            | (1ULL << (CParser::Star - 71))
            | (1ULL << (CParser::And - 71))
            | (1ULL << (CParser::AndAnd - 71))
            | (1ULL << (CParser::Not - 71))
            | (1ULL << (CParser::Tilde - 71))
            | (1ULL << (CParser::Identifier - 71))
            | (1ULL << (CParser::Constant - 71))
            | (1ULL << (CParser::DigitSequence - 71))
            | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
            setState(827);
            assignmentExpression();
          }
          setState(830);
          match(CParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(831);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(832);
          match(CParser::LeftBracket);
          setState(833);
          match(CParser::Static);
          setState(835);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(834);
            typeQualifierList();
          }
          setState(837);
          assignmentExpression();
          setState(838);
          match(CParser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(840);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(841);
          match(CParser::LeftBracket);
          setState(842);
          typeQualifierList();
          setState(843);
          match(CParser::Static);
          setState(844);
          assignmentExpression();
          setState(845);
          match(CParser::RightBracket);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(847);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(848);
          match(CParser::LeftBracket);
          setState(849);
          match(CParser::Star);
          setState(850);
          match(CParser::RightBracket);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(851);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(852);
          match(CParser::LeftParen);
          setState(854);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__3)
            | (1ULL << CParser::T__4)
            | (1ULL << CParser::T__5)
            | (1ULL << CParser::T__6)
            | (1ULL << CParser::T__7)
            | (1ULL << CParser::T__8)
            | (1ULL << CParser::T__9)
            | (1ULL << CParser::T__11)
            | (1ULL << CParser::Auto)
            | (1ULL << CParser::Char)
            | (1ULL << CParser::Const)
            | (1ULL << CParser::Double)
            | (1ULL << CParser::Enum)
            | (1ULL << CParser::Extern)
            | (1ULL << CParser::Float)
            | (1ULL << CParser::Inline)
            | (1ULL << CParser::Int)
            | (1ULL << CParser::Long)
            | (1ULL << CParser::Register)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Short)
            | (1ULL << CParser::Signed)
            | (1ULL << CParser::Static)
            | (1ULL << CParser::Struct)
            | (1ULL << CParser::Typedef)
            | (1ULL << CParser::Union)
            | (1ULL << CParser::Unsigned)
            | (1ULL << CParser::Void)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Alignas)
            | (1ULL << CParser::Atomic)
            | (1ULL << CParser::Bool)
            | (1ULL << CParser::Complex)
            | (1ULL << CParser::Noreturn)
            | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier) {
            setState(853);
            parameterTypeList();
          }
          setState(856);
          match(CParser::RightParen);
          setState(860);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(857);
              gccDeclaratorExtension(); 
            }
            setState(862);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx);
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(867);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypedefNameContext ------------------------------------------------------------------

CParser::TypedefNameContext::TypedefNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypedefNameContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::TypedefNameContext::getRuleIndex() const {
  return CParser::RuleTypedefName;
}

void CParser::TypedefNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefName(this);
}

void CParser::TypedefNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefName(this);
}


antlrcpp::Any CParser::TypedefNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypedefName(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypedefNameContext* CParser::typedefName() {
  TypedefNameContext *_localctx = _tracker.createInstance<TypedefNameContext>(_ctx, getState());
  enterRule(_localctx, 128, CParser::RuleTypedefName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(868);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

CParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::InitializerContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::InitializerContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::InitializerListContext* CParser::InitializerContext::initializerList() {
  return getRuleContext<CParser::InitializerListContext>(0);
}

tree::TerminalNode* CParser::InitializerContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::InitializerContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::InitializerContext::getRuleIndex() const {
  return CParser::RuleInitializer;
}

void CParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void CParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any CParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitializerContext* CParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 130, CParser::RuleInitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(878);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::T__2:
      case CParser::Sizeof:
      case CParser::Alignof:
      case CParser::Generic:
      case CParser::LeftParen:
      case CParser::Plus:
      case CParser::PlusPlus:
      case CParser::Minus:
      case CParser::MinusMinus:
      case CParser::Star:
      case CParser::And:
      case CParser::AndAnd:
      case CParser::Not:
      case CParser::Tilde:
      case CParser::Identifier:
      case CParser::Constant:
      case CParser::DigitSequence:
      case CParser::StringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(870);
        assignmentExpression();
        break;
      }

      case CParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(871);
        match(CParser::LeftBrace);
        setState(872);
        initializerList();
        setState(874);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CParser::Comma) {
          setState(873);
          match(CParser::Comma);
        }
        setState(876);
        match(CParser::RightBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

CParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::InitializerContext *> CParser::InitializerListContext::initializer() {
  return getRuleContexts<CParser::InitializerContext>();
}

CParser::InitializerContext* CParser::InitializerListContext::initializer(size_t i) {
  return getRuleContext<CParser::InitializerContext>(i);
}

std::vector<CParser::DesignationContext *> CParser::InitializerListContext::designation() {
  return getRuleContexts<CParser::DesignationContext>();
}

CParser::DesignationContext* CParser::InitializerListContext::designation(size_t i) {
  return getRuleContext<CParser::DesignationContext>(i);
}

std::vector<tree::TerminalNode *> CParser::InitializerListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::InitializerListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::InitializerListContext::getRuleIndex() const {
  return CParser::RuleInitializerList;
}

void CParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void CParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}


antlrcpp::Any CParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitializerListContext* CParser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 132, CParser::RuleInitializerList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(881);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::LeftBracket

    || _la == CParser::Dot) {
      setState(880);
      designation();
    }
    setState(883);
    initializer();
    setState(891);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(884);
        match(CParser::Comma);
        setState(886);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CParser::LeftBracket

        || _la == CParser::Dot) {
          setState(885);
          designation();
        }
        setState(888);
        initializer(); 
      }
      setState(893);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignationContext ------------------------------------------------------------------

CParser::DesignationContext::DesignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DesignatorListContext* CParser::DesignationContext::designatorList() {
  return getRuleContext<CParser::DesignatorListContext>(0);
}

tree::TerminalNode* CParser::DesignationContext::Assign() {
  return getToken(CParser::Assign, 0);
}


size_t CParser::DesignationContext::getRuleIndex() const {
  return CParser::RuleDesignation;
}

void CParser::DesignationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignation(this);
}

void CParser::DesignationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignation(this);
}


antlrcpp::Any CParser::DesignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDesignation(this);
  else
    return visitor->visitChildren(this);
}

CParser::DesignationContext* CParser::designation() {
  DesignationContext *_localctx = _tracker.createInstance<DesignationContext>(_ctx, getState());
  enterRule(_localctx, 134, CParser::RuleDesignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(894);
    designatorList();
    setState(895);
    match(CParser::Assign);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorListContext ------------------------------------------------------------------

CParser::DesignatorListContext::DesignatorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::DesignatorContext *> CParser::DesignatorListContext::designator() {
  return getRuleContexts<CParser::DesignatorContext>();
}

CParser::DesignatorContext* CParser::DesignatorListContext::designator(size_t i) {
  return getRuleContext<CParser::DesignatorContext>(i);
}


size_t CParser::DesignatorListContext::getRuleIndex() const {
  return CParser::RuleDesignatorList;
}

void CParser::DesignatorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignatorList(this);
}

void CParser::DesignatorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignatorList(this);
}


antlrcpp::Any CParser::DesignatorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDesignatorList(this);
  else
    return visitor->visitChildren(this);
}

CParser::DesignatorListContext* CParser::designatorList() {
  DesignatorListContext *_localctx = _tracker.createInstance<DesignatorListContext>(_ctx, getState());
  enterRule(_localctx, 136, CParser::RuleDesignatorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(898); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(897);
      designator();
      setState(900); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CParser::LeftBracket

    || _la == CParser::Dot);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorContext ------------------------------------------------------------------

CParser::DesignatorContext::DesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DesignatorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

CParser::ConstantExpressionContext* CParser::DesignatorContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CParser::DesignatorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

tree::TerminalNode* CParser::DesignatorContext::Dot() {
  return getToken(CParser::Dot, 0);
}

tree::TerminalNode* CParser::DesignatorContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::DesignatorContext::getRuleIndex() const {
  return CParser::RuleDesignator;
}

void CParser::DesignatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignator(this);
}

void CParser::DesignatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignator(this);
}


antlrcpp::Any CParser::DesignatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDesignator(this);
  else
    return visitor->visitChildren(this);
}

CParser::DesignatorContext* CParser::designator() {
  DesignatorContext *_localctx = _tracker.createInstance<DesignatorContext>(_ctx, getState());
  enterRule(_localctx, 138, CParser::RuleDesignator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(908);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(902);
        match(CParser::LeftBracket);
        setState(903);
        constantExpression();
        setState(904);
        match(CParser::RightBracket);
        break;
      }

      case CParser::Dot: {
        enterOuterAlt(_localctx, 2);
        setState(906);
        match(CParser::Dot);
        setState(907);
        match(CParser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticAssertDeclarationContext ------------------------------------------------------------------

CParser::StaticAssertDeclarationContext::StaticAssertDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::StaticAssert() {
  return getToken(CParser::StaticAssert, 0);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ConstantExpressionContext* CParser::StaticAssertDeclarationContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::Comma() {
  return getToken(CParser::Comma, 0);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

std::vector<tree::TerminalNode *> CParser::StaticAssertDeclarationContext::StringLiteral() {
  return getTokens(CParser::StringLiteral);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::StringLiteral(size_t i) {
  return getToken(CParser::StringLiteral, i);
}


size_t CParser::StaticAssertDeclarationContext::getRuleIndex() const {
  return CParser::RuleStaticAssertDeclaration;
}

void CParser::StaticAssertDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticAssertDeclaration(this);
}

void CParser::StaticAssertDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticAssertDeclaration(this);
}


antlrcpp::Any CParser::StaticAssertDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStaticAssertDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::StaticAssertDeclarationContext* CParser::staticAssertDeclaration() {
  StaticAssertDeclarationContext *_localctx = _tracker.createInstance<StaticAssertDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 140, CParser::RuleStaticAssertDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(910);
    match(CParser::StaticAssert);
    setState(911);
    match(CParser::LeftParen);
    setState(912);
    constantExpression();
    setState(913);
    match(CParser::Comma);
    setState(915); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(914);
      match(CParser::StringLiteral);
      setState(917); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CParser::StringLiteral);
    setState(919);
    match(CParser::RightParen);
    setState(920);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LabeledStatementContext* CParser::StatementContext::labeledStatement() {
  return getRuleContext<CParser::LabeledStatementContext>(0);
}

CParser::CompoundStatementContext* CParser::StatementContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}

CParser::ExpressionStatementContext* CParser::StatementContext::expressionStatement() {
  return getRuleContext<CParser::ExpressionStatementContext>(0);
}

CParser::SelectionStatementContext* CParser::StatementContext::selectionStatement() {
  return getRuleContext<CParser::SelectionStatementContext>(0);
}

CParser::IterationStatementContext* CParser::StatementContext::iterationStatement() {
  return getRuleContext<CParser::IterationStatementContext>(0);
}

CParser::JumpStatementContext* CParser::StatementContext::jumpStatement() {
  return getRuleContext<CParser::JumpStatementContext>(0);
}

tree::TerminalNode* CParser::StatementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::StatementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::StatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::StatementContext::Volatile() {
  return getToken(CParser::Volatile, 0);
}

std::vector<CParser::LogicalOrExpressionContext *> CParser::StatementContext::logicalOrExpression() {
  return getRuleContexts<CParser::LogicalOrExpressionContext>();
}

CParser::LogicalOrExpressionContext* CParser::StatementContext::logicalOrExpression(size_t i) {
  return getRuleContext<CParser::LogicalOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::StatementContext::Colon() {
  return getTokens(CParser::Colon);
}

tree::TerminalNode* CParser::StatementContext::Colon(size_t i) {
  return getToken(CParser::Colon, i);
}

std::vector<tree::TerminalNode *> CParser::StatementContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::StatementContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::StatementContext::getRuleIndex() const {
  return CParser::RuleStatement;
}

void CParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any CParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::StatementContext* CParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 142, CParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(959);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(922);
      labeledStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(923);
      compoundStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(924);
      expressionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(925);
      selectionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(926);
      iterationStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(927);
      jumpStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(928);
      _la = _input->LA(1);
      if (!(_la == CParser::T__10

      || _la == CParser::T__12)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(929);
      _la = _input->LA(1);
      if (!(_la == CParser::T__13

      || _la == CParser::Volatile)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(930);
      match(CParser::LeftParen);
      setState(939);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(931);
        logicalOrExpression();
        setState(936);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CParser::Comma) {
          setState(932);
          match(CParser::Comma);
          setState(933);
          logicalOrExpression();
          setState(938);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(954);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CParser::Colon) {
        setState(941);
        match(CParser::Colon);
        setState(950);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__0)
          | (1ULL << CParser::T__1)
          | (1ULL << CParser::T__2)
          | (1ULL << CParser::Sizeof)
          | (1ULL << CParser::Alignof)
          | (1ULL << CParser::Generic)
          | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
          | (1ULL << (CParser::PlusPlus - 71))
          | (1ULL << (CParser::Minus - 71))
          | (1ULL << (CParser::MinusMinus - 71))
          | (1ULL << (CParser::Star - 71))
          | (1ULL << (CParser::And - 71))
          | (1ULL << (CParser::AndAnd - 71))
          | (1ULL << (CParser::Not - 71))
          | (1ULL << (CParser::Tilde - 71))
          | (1ULL << (CParser::Identifier - 71))
          | (1ULL << (CParser::Constant - 71))
          | (1ULL << (CParser::DigitSequence - 71))
          | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
          setState(942);
          logicalOrExpression();
          setState(947);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == CParser::Comma) {
            setState(943);
            match(CParser::Comma);
            setState(944);
            logicalOrExpression();
            setState(949);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(956);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(957);
      match(CParser::RightParen);
      setState(958);
      match(CParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

CParser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::LabeledStatementContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::LabeledStatementContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::StatementContext* CParser::LabeledStatementContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

tree::TerminalNode* CParser::LabeledStatementContext::Case() {
  return getToken(CParser::Case, 0);
}

CParser::ConstantExpressionContext* CParser::LabeledStatementContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CParser::LabeledStatementContext::Default() {
  return getToken(CParser::Default, 0);
}


size_t CParser::LabeledStatementContext::getRuleIndex() const {
  return CParser::RuleLabeledStatement;
}

void CParser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}

void CParser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}


antlrcpp::Any CParser::LabeledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLabeledStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::LabeledStatementContext* CParser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 144, CParser::RuleLabeledStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(972);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(961);
        match(CParser::Identifier);
        setState(962);
        match(CParser::Colon);
        setState(963);
        statement();
        break;
      }

      case CParser::Case: {
        enterOuterAlt(_localctx, 2);
        setState(964);
        match(CParser::Case);
        setState(965);
        constantExpression();
        setState(966);
        match(CParser::Colon);
        setState(967);
        statement();
        break;
      }

      case CParser::Default: {
        enterOuterAlt(_localctx, 3);
        setState(969);
        match(CParser::Default);
        setState(970);
        match(CParser::Colon);
        setState(971);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

CParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CompoundStatementContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

tree::TerminalNode* CParser::CompoundStatementContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

CParser::BlockItemListContext* CParser::CompoundStatementContext::blockItemList() {
  return getRuleContext<CParser::BlockItemListContext>(0);
}


size_t CParser::CompoundStatementContext::getRuleIndex() const {
  return CParser::RuleCompoundStatement;
}

void CParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void CParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


antlrcpp::Any CParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::CompoundStatementContext* CParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 146, CParser::RuleCompoundStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(974);
    match(CParser::LeftBrace);
    setState(976);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen)
      | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Semi - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
      setState(975);
      blockItemList();
    }
    setState(978);
    match(CParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemListContext ------------------------------------------------------------------

CParser::BlockItemListContext::BlockItemListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::BlockItemContext *> CParser::BlockItemListContext::blockItem() {
  return getRuleContexts<CParser::BlockItemContext>();
}

CParser::BlockItemContext* CParser::BlockItemListContext::blockItem(size_t i) {
  return getRuleContext<CParser::BlockItemContext>(i);
}


size_t CParser::BlockItemListContext::getRuleIndex() const {
  return CParser::RuleBlockItemList;
}

void CParser::BlockItemListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItemList(this);
}

void CParser::BlockItemListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItemList(this);
}


antlrcpp::Any CParser::BlockItemListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBlockItemList(this);
  else
    return visitor->visitChildren(this);
}

CParser::BlockItemListContext* CParser::blockItemList() {
  BlockItemListContext *_localctx = _tracker.createInstance<BlockItemListContext>(_ctx, getState());
  enterRule(_localctx, 148, CParser::RuleBlockItemList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(981); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(980);
      blockItem();
      setState(983); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen)
      | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Semi - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

CParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::StatementContext* CParser::BlockItemContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

CParser::DeclarationContext* CParser::BlockItemContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}


size_t CParser::BlockItemContext::getRuleIndex() const {
  return CParser::RuleBlockItem;
}

void CParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void CParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


antlrcpp::Any CParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

CParser::BlockItemContext* CParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 150, CParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(987);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(985);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(986);
      declaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

CParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ExpressionStatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::ExpressionContext* CParser::ExpressionStatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}


size_t CParser::ExpressionStatementContext::getRuleIndex() const {
  return CParser::RuleExpressionStatement;
}

void CParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void CParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any CParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExpressionStatementContext* CParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 152, CParser::RuleExpressionStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(990);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
      setState(989);
      expression();
    }
    setState(992);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

CParser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::SelectionStatementContext::If() {
  return getToken(CParser::If, 0);
}

tree::TerminalNode* CParser::SelectionStatementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::SelectionStatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::SelectionStatementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

std::vector<CParser::StatementContext *> CParser::SelectionStatementContext::statement() {
  return getRuleContexts<CParser::StatementContext>();
}

CParser::StatementContext* CParser::SelectionStatementContext::statement(size_t i) {
  return getRuleContext<CParser::StatementContext>(i);
}

tree::TerminalNode* CParser::SelectionStatementContext::Else() {
  return getToken(CParser::Else, 0);
}

tree::TerminalNode* CParser::SelectionStatementContext::Switch() {
  return getToken(CParser::Switch, 0);
}


size_t CParser::SelectionStatementContext::getRuleIndex() const {
  return CParser::RuleSelectionStatement;
}

void CParser::SelectionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionStatement(this);
}

void CParser::SelectionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionStatement(this);
}


antlrcpp::Any CParser::SelectionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSelectionStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::SelectionStatementContext* CParser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 154, CParser::RuleSelectionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1009);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(994);
        match(CParser::If);
        setState(995);
        match(CParser::LeftParen);
        setState(996);
        expression();
        setState(997);
        match(CParser::RightParen);
        setState(998);
        statement();
        setState(1001);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
        case 1: {
          setState(999);
          match(CParser::Else);
          setState(1000);
          statement();
          break;
        }

        default:
          break;
        }
        break;
      }

      case CParser::Switch: {
        enterOuterAlt(_localctx, 2);
        setState(1003);
        match(CParser::Switch);
        setState(1004);
        match(CParser::LeftParen);
        setState(1005);
        expression();
        setState(1006);
        match(CParser::RightParen);
        setState(1007);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

CParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::IterationStatementContext::While() {
  return getToken(CParser::While, 0);
}

tree::TerminalNode* CParser::IterationStatementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::IterationStatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::IterationStatementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::StatementContext* CParser::IterationStatementContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

tree::TerminalNode* CParser::IterationStatementContext::Do() {
  return getToken(CParser::Do, 0);
}

tree::TerminalNode* CParser::IterationStatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::IterationStatementContext::For() {
  return getToken(CParser::For, 0);
}

CParser::ForConditionContext* CParser::IterationStatementContext::forCondition() {
  return getRuleContext<CParser::ForConditionContext>(0);
}


size_t CParser::IterationStatementContext::getRuleIndex() const {
  return CParser::RuleIterationStatement;
}

void CParser::IterationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationStatement(this);
}

void CParser::IterationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationStatement(this);
}


antlrcpp::Any CParser::IterationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIterationStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::IterationStatementContext* CParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 156, CParser::RuleIterationStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1031);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::While: {
        enterOuterAlt(_localctx, 1);
        setState(1011);
        match(CParser::While);
        setState(1012);
        match(CParser::LeftParen);
        setState(1013);
        expression();
        setState(1014);
        match(CParser::RightParen);
        setState(1015);
        statement();
        break;
      }

      case CParser::Do: {
        enterOuterAlt(_localctx, 2);
        setState(1017);
        match(CParser::Do);
        setState(1018);
        statement();
        setState(1019);
        match(CParser::While);
        setState(1020);
        match(CParser::LeftParen);
        setState(1021);
        expression();
        setState(1022);
        match(CParser::RightParen);
        setState(1023);
        match(CParser::Semi);
        break;
      }

      case CParser::For: {
        enterOuterAlt(_localctx, 3);
        setState(1025);
        match(CParser::For);
        setState(1026);
        match(CParser::LeftParen);
        setState(1027);
        forCondition();
        setState(1028);
        match(CParser::RightParen);
        setState(1029);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForConditionContext ------------------------------------------------------------------

CParser::ForConditionContext::ForConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::ForConditionContext::Semi() {
  return getTokens(CParser::Semi);
}

tree::TerminalNode* CParser::ForConditionContext::Semi(size_t i) {
  return getToken(CParser::Semi, i);
}

CParser::ForDeclarationContext* CParser::ForConditionContext::forDeclaration() {
  return getRuleContext<CParser::ForDeclarationContext>(0);
}

std::vector<CParser::ForExpressionContext *> CParser::ForConditionContext::forExpression() {
  return getRuleContexts<CParser::ForExpressionContext>();
}

CParser::ForExpressionContext* CParser::ForConditionContext::forExpression(size_t i) {
  return getRuleContext<CParser::ForExpressionContext>(i);
}

CParser::ExpressionContext* CParser::ForConditionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}


size_t CParser::ForConditionContext::getRuleIndex() const {
  return CParser::RuleForCondition;
}

void CParser::ForConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCondition(this);
}

void CParser::ForConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCondition(this);
}


antlrcpp::Any CParser::ForConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitForCondition(this);
  else
    return visitor->visitChildren(this);
}

CParser::ForConditionContext* CParser::forCondition() {
  ForConditionContext *_localctx = _tracker.createInstance<ForConditionContext>(_ctx, getState());
  enterRule(_localctx, 158, CParser::RuleForCondition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1037);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
    case 1: {
      setState(1033);
      forDeclaration();
      break;
    }

    case 2: {
      setState(1035);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(1034);
        expression();
      }
      break;
    }

    default:
      break;
    }
    setState(1039);
    match(CParser::Semi);
    setState(1041);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
      setState(1040);
      forExpression();
    }
    setState(1043);
    match(CParser::Semi);
    setState(1045);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
      setState(1044);
      forExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForDeclarationContext ------------------------------------------------------------------

CParser::ForDeclarationContext::ForDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::ForDeclarationContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

CParser::InitDeclaratorListContext* CParser::ForDeclarationContext::initDeclaratorList() {
  return getRuleContext<CParser::InitDeclaratorListContext>(0);
}


size_t CParser::ForDeclarationContext::getRuleIndex() const {
  return CParser::RuleForDeclaration;
}

void CParser::ForDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForDeclaration(this);
}

void CParser::ForDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForDeclaration(this);
}


antlrcpp::Any CParser::ForDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitForDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::ForDeclarationContext* CParser::forDeclaration() {
  ForDeclarationContext *_localctx = _tracker.createInstance<ForDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 160, CParser::RuleForDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1047);
    declarationSpecifiers();
    setState(1049);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
      | (1ULL << (CParser::Star - 59))
      | (1ULL << (CParser::Caret - 59))
      | (1ULL << (CParser::Identifier - 59)))) != 0)) {
      setState(1048);
      initDeclaratorList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForExpressionContext ------------------------------------------------------------------

CParser::ForExpressionContext::ForExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AssignmentExpressionContext *> CParser::ForExpressionContext::assignmentExpression() {
  return getRuleContexts<CParser::AssignmentExpressionContext>();
}

CParser::AssignmentExpressionContext* CParser::ForExpressionContext::assignmentExpression(size_t i) {
  return getRuleContext<CParser::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ForExpressionContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::ForExpressionContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::ForExpressionContext::getRuleIndex() const {
  return CParser::RuleForExpression;
}

void CParser::ForExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForExpression(this);
}

void CParser::ForExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForExpression(this);
}


antlrcpp::Any CParser::ForExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitForExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ForExpressionContext* CParser::forExpression() {
  ForExpressionContext *_localctx = _tracker.createInstance<ForExpressionContext>(_ctx, getState());
  enterRule(_localctx, 162, CParser::RuleForExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1051);
    assignmentExpression();
    setState(1056);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1052);
      match(CParser::Comma);
      setState(1053);
      assignmentExpression();
      setState(1058);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

CParser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::JumpStatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::JumpStatementContext::Goto() {
  return getToken(CParser::Goto, 0);
}

tree::TerminalNode* CParser::JumpStatementContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::JumpStatementContext::Return() {
  return getToken(CParser::Return, 0);
}

CParser::UnaryExpressionContext* CParser::JumpStatementContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CParser::JumpStatementContext::Continue() {
  return getToken(CParser::Continue, 0);
}

tree::TerminalNode* CParser::JumpStatementContext::Break() {
  return getToken(CParser::Break, 0);
}

CParser::ExpressionContext* CParser::JumpStatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}


size_t CParser::JumpStatementContext::getRuleIndex() const {
  return CParser::RuleJumpStatement;
}

void CParser::JumpStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpStatement(this);
}

void CParser::JumpStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpStatement(this);
}


antlrcpp::Any CParser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitJumpStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::JumpStatementContext* CParser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 164, CParser::RuleJumpStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1068);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      setState(1059);
      match(CParser::Goto);
      setState(1060);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      setState(1061);
      _la = _input->LA(1);
      if (!(_la == CParser::Break

      || _la == CParser::Continue)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      setState(1062);
      match(CParser::Return);
      setState(1064);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(1063);
        expression();
      }
      break;
    }

    case 4: {
      setState(1066);
      match(CParser::Goto);
      setState(1067);
      unaryExpression();
      break;
    }

    default:
      break;
    }
    setState(1070);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

CParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CompilationUnitContext::EOF() {
  return getToken(CParser::EOF, 0);
}

CParser::TranslationUnitContext* CParser::CompilationUnitContext::translationUnit() {
  return getRuleContext<CParser::TranslationUnitContext>(0);
}


size_t CParser::CompilationUnitContext::getRuleIndex() const {
  return CParser::RuleCompilationUnit;
}

void CParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void CParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any CParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

CParser::CompilationUnitContext* CParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 166, CParser::RuleCompilationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1073);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (CParser::Star - 75))
      | (1ULL << (CParser::Caret - 75))
      | (1ULL << (CParser::Semi - 75))
      | (1ULL << (CParser::Identifier - 75)))) != 0)) {
      setState(1072);
      translationUnit();
    }
    setState(1075);
    match(CParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TranslationUnitContext ------------------------------------------------------------------

CParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ExternalDeclarationContext *> CParser::TranslationUnitContext::externalDeclaration() {
  return getRuleContexts<CParser::ExternalDeclarationContext>();
}

CParser::ExternalDeclarationContext* CParser::TranslationUnitContext::externalDeclaration(size_t i) {
  return getRuleContext<CParser::ExternalDeclarationContext>(i);
}


size_t CParser::TranslationUnitContext::getRuleIndex() const {
  return CParser::RuleTranslationUnit;
}

void CParser::TranslationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationUnit(this);
}

void CParser::TranslationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationUnit(this);
}


antlrcpp::Any CParser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}

CParser::TranslationUnitContext* CParser::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 168, CParser::RuleTranslationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1078); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1077);
      externalDeclaration();
      setState(1080); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (CParser::Star - 75))
      | (1ULL << (CParser::Caret - 75))
      | (1ULL << (CParser::Semi - 75))
      | (1ULL << (CParser::Identifier - 75)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternalDeclarationContext ------------------------------------------------------------------

CParser::ExternalDeclarationContext::ExternalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::FunctionDefinitionContext* CParser::ExternalDeclarationContext::functionDefinition() {
  return getRuleContext<CParser::FunctionDefinitionContext>(0);
}

CParser::DeclarationContext* CParser::ExternalDeclarationContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}

tree::TerminalNode* CParser::ExternalDeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}


size_t CParser::ExternalDeclarationContext::getRuleIndex() const {
  return CParser::RuleExternalDeclaration;
}

void CParser::ExternalDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternalDeclaration(this);
}

void CParser::ExternalDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternalDeclaration(this);
}


antlrcpp::Any CParser::ExternalDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExternalDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExternalDeclarationContext* CParser::externalDeclaration() {
  ExternalDeclarationContext *_localctx = _tracker.createInstance<ExternalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 170, CParser::RuleExternalDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1085);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1082);
      functionDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1083);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1084);
      match(CParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

CParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::FunctionDefinitionContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::CompoundStatementContext* CParser::FunctionDefinitionContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}

CParser::DeclarationSpecifiersContext* CParser::FunctionDefinitionContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

CParser::DeclarationListContext* CParser::FunctionDefinitionContext::declarationList() {
  return getRuleContext<CParser::DeclarationListContext>(0);
}


size_t CParser::FunctionDefinitionContext::getRuleIndex() const {
  return CParser::RuleFunctionDefinition;
}

void CParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void CParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any CParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctionDefinitionContext* CParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 172, CParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1088);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx)) {
    case 1: {
      setState(1087);
      declarationSpecifiers();
      break;
    }

    default:
      break;
    }
    setState(1090);
    declarator();
    setState(1092);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier) {
      setState(1091);
      declarationList();
    }
    setState(1094);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationListContext ------------------------------------------------------------------

CParser::DeclarationListContext::DeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::DeclarationContext *> CParser::DeclarationListContext::declaration() {
  return getRuleContexts<CParser::DeclarationContext>();
}

CParser::DeclarationContext* CParser::DeclarationListContext::declaration(size_t i) {
  return getRuleContext<CParser::DeclarationContext>(i);
}


size_t CParser::DeclarationListContext::getRuleIndex() const {
  return CParser::RuleDeclarationList;
}

void CParser::DeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationList(this);
}

void CParser::DeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationList(this);
}


antlrcpp::Any CParser::DeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationListContext* CParser::declarationList() {
  DeclarationListContext *_localctx = _tracker.createInstance<DeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 174, CParser::RuleDeclarationList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1097); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1096);
      declaration();
      setState(1099); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 32: return typeSpecifierSempred(dynamic_cast<TypeSpecifierContext *>(context), predicateIndex);
    case 49: return directDeclaratorSempred(dynamic_cast<DirectDeclaratorContext *>(context), predicateIndex);
    case 63: return directAbstractDeclaratorSempred(dynamic_cast<DirectAbstractDeclaratorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CParser::typeSpecifierSempred(TypeSpecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::directDeclaratorSempred(DirectDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CParser::directAbstractDeclaratorSempred(DirectAbstractDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 3);
    case 10: return precpred(_ctx, 2);
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CParser::_decisionToDFA;
atn::PredictionContextCache CParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CParser::_atn;
std::vector<uint16_t> CParser::_serializedATN;

std::vector<std::string> CParser::_ruleNames = {
  "identifier", "primaryExpression", "genericSelection", "genericAssocList", 
  "genericAssociation", "postfixExpression", "argumentExpressionList", "unaryExpression", 
  "unaryOperator", "castExpression", "multiplicativeExpression", "additiveExpression", 
  "shiftExpression", "relationalExpression", "equalityExpression", "andExpression", 
  "exclusiveOrExpression", "inclusiveOrExpression", "logicalAndExpression", 
  "logicalOrExpression", "conditionalExpression", "assignmentExpression", 
  "assignmentOperator", "expression", "constantExpression", "declaration", 
  "declarationSpecifiers", "declarationSpecifiers2", "declarationSpecifier", 
  "initDeclaratorList", "initDeclarator", "storageClassSpecifier", "typeSpecifier", 
  "structOrUnionSpecifier", "structOrUnion", "structDeclarationList", "structDeclaration", 
  "specifierQualifierList", "structDeclaratorList", "structDeclarator", 
  "enumSpecifier", "enumeratorList", "enumerator", "enumerationConstant", 
  "atomicTypeSpecifier", "typeQualifier", "functionSpecifier", "alignmentSpecifier", 
  "declarator", "directDeclarator", "gccDeclaratorExtension", "gccAttributeSpecifier", 
  "gccAttributeList", "gccAttribute", "nestedParenthesesBlock", "pointer", 
  "typeQualifierList", "parameterTypeList", "parameterList", "parameterDeclaration", 
  "identifierList", "typeName", "abstractDeclarator", "directAbstractDeclarator", 
  "typedefName", "initializer", "initializerList", "designation", "designatorList", 
  "designator", "staticAssertDeclaration", "statement", "labeledStatement", 
  "compoundStatement", "blockItemList", "blockItem", "expressionStatement", 
  "selectionStatement", "iterationStatement", "forCondition", "forDeclaration", 
  "forExpression", "jumpStatement", "compilationUnit", "translationUnit", 
  "externalDeclaration", "functionDefinition", "declarationList"
};

std::vector<std::string> CParser::_literalNames = {
  "", "'__extension__'", "'__builtin_va_arg'", "'__builtin_offsetof'", "'__m128'", 
  "'__m128d'", "'__m128i'", "'__typeof__'", "'__inline__'", "'__stdcall'", 
  "'__declspec'", "'__asm'", "'__attribute__'", "'__asm__'", "'__volatile__'", 
  "'auto'", "'break'", "'case'", "'char'", "'const'", "'continue'", "'default'", 
  "'do'", "'double'", "'else'", "'enum'", "'extern'", "'float'", "'for'", 
  "'goto'", "'if'", "'inline'", "'int'", "'long'", "'register'", "'restrict'", 
  "'return'", "'short'", "'signed'", "'sizeof'", "'static'", "'struct'", 
  "'switch'", "'typedef'", "'union'", "'unsigned'", "'void'", "'volatile'", 
  "'while'", "'_Alignas'", "'_Alignof'", "'_Atomic'", "'_Bool'", "'_Complex'", 
  "'_Generic'", "'_Imaginary'", "'_Noreturn'", "'_Static_assert'", "'_Thread_local'", 
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'<'", "'<='", "'>'", "'>='", 
  "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", "'%'", "'&'", 
  "'|'", "'&&'", "'||'", "'^'", "'!'", "'~'", "'\u003F'", "':'", "';'", 
  "','", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", 
  "'&='", "'^='", "'|='", "'=='", "'!='", "'->'", "'.'", "'...'"
};

std::vector<std::string> CParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Auto", "Break", 
  "Case", "Char", "Const", "Continue", "Default", "Do", "Double", "Else", 
  "Enum", "Extern", "Float", "For", "Goto", "If", "Inline", "Int", "Long", 
  "Register", "Restrict", "Return", "Short", "Signed", "Sizeof", "Static", 
  "Struct", "Switch", "Typedef", "Union", "Unsigned", "Void", "Volatile", 
  "While", "Alignas", "Alignof", "Atomic", "Bool", "Complex", "Generic", 
  "Imaginary", "Noreturn", "StaticAssert", "ThreadLocal", "LeftParen", "RightParen", 
  "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", "Less", "LessEqual", 
  "Greater", "GreaterEqual", "LeftShift", "RightShift", "Plus", "PlusPlus", 
  "Minus", "MinusMinus", "Star", "Div", "Mod", "And", "Or", "AndAnd", "OrOr", 
  "Caret", "Not", "Tilde", "Question", "Colon", "Semi", "Comma", "Assign", 
  "StarAssign", "DivAssign", "ModAssign", "PlusAssign", "MinusAssign", "LeftShiftAssign", 
  "RightShiftAssign", "AndAssign", "XorAssign", "OrAssign", "Equal", "NotEqual", 
  "Arrow", "Dot", "Ellipsis", "Identifier", "Constant", "DigitSequence", 
  "StringLiteral", "ComplexDefine", "IncludeDirective", "AsmBlock", "LineAfterPreprocessing", 
  "LineDirective", "PragmaDirective", "Whitespace", "Newline", "BlockComment", 
  "LineComment"
};

dfa::Vocabulary CParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CParser::_tokenNames;

CParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x78, 0x450, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 
       0x3, 0xb8, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0xb9, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xc2, 0xa, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xd6, 
       0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xe2, 0xa, 
       0x5, 0xc, 0x5, 0xe, 0x5, 0xe5, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 
       0x6, 0xe9, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
       0x7, 0x5, 0x7, 0xf0, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xf8, 0xa, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x5, 0x7, 0xfc, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x104, 0xa, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x10c, 0xa, 
       0x7, 0xc, 0x7, 0xe, 0x7, 0x10f, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x7, 0x8, 0x114, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x117, 0xb, 0x8, 
       0x3, 0x9, 0x7, 0x9, 0x11a, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x11d, 0xb, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x12a, 
       0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x5, 0xb, 0x12f, 0xa, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x5, 0xb, 0x138, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 
       0xc, 0x13d, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x140, 0xb, 0xc, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x145, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
       0x148, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x14d, 0xa, 
       0xe, 0xc, 0xe, 0xe, 0xe, 0x150, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x7, 0xf, 0x155, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x158, 0xb, 0xf, 
       0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x15d, 0xa, 0x10, 0xc, 
       0x10, 0xe, 0x10, 0x160, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x7, 0x11, 0x165, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x168, 0xb, 0x11, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x16d, 0xa, 0x12, 0xc, 
       0x12, 0xe, 0x12, 0x170, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x7, 0x13, 0x175, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x178, 0xb, 0x13, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x17d, 0xa, 0x14, 0xc, 
       0x14, 0xe, 0x14, 0x180, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x7, 0x15, 0x185, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x188, 0xb, 0x15, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x5, 0x16, 0x190, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x198, 0xa, 0x17, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x19f, 0xa, 
       0x19, 0xc, 0x19, 0xe, 0x19, 0x1a2, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x1a8, 0xa, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x1ad, 0xa, 0x1b, 0x3, 0x1c, 0x6, 0x1c, 
       0x1b0, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x1b1, 0x3, 0x1d, 0x6, 0x1d, 
       0x1b5, 0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 0x1b6, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1be, 0xa, 0x1e, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x1c3, 0xa, 0x1f, 0xc, 0x1f, 
       0xe, 0x1f, 0x1c6, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 
       0x20, 0x1cb, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x5, 0x22, 0x1de, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 
       0x22, 0x1e2, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x1e5, 0xb, 0x22, 0x3, 
       0x23, 0x3, 0x23, 0x5, 0x23, 0x1e9, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 
       0x1f2, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x6, 0x25, 0x1f7, 
       0xa, 0x25, 0xd, 0x25, 0xe, 0x25, 0x1f8, 0x3, 0x26, 0x3, 0x26, 0x5, 
       0x26, 0x1fd, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 
       0x202, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x206, 0xa, 0x27, 
       0x3, 0x27, 0x5, 0x27, 0x209, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x7, 0x28, 0x20e, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x211, 0xb, 
       0x28, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x215, 0xa, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x5, 0x29, 0x219, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x5, 
       0x2a, 0x21d, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
       0x222, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 
       0x2a, 0x228, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 
       0x22d, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x230, 0xb, 0x2b, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x235, 0xa, 0x2c, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x5, 0x30, 0x246, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x24c, 0xa, 0x31, 0x3, 0x31, 0x3, 
       0x31, 0x3, 0x32, 0x5, 0x32, 0x251, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x7, 0x32, 0x255, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x258, 0xb, 0x32, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 
       0x265, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 
       0x33, 0x26b, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 
       0x270, 0xa, 0x33, 0x3, 0x33, 0x5, 0x33, 0x273, 0xa, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x27a, 0xa, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x5, 0x33, 0x289, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x295, 0xa, 0x33, 0x3, 0x33, 0x7, 
       0x33, 0x298, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x29b, 0xb, 0x33, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x6, 0x34, 0x2a0, 0xa, 0x34, 0xd, 0x34, 
       0xe, 0x34, 0x2a1, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x2a6, 0xa, 0x34, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x36, 0x5, 0x36, 0x2b0, 0xa, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x5, 0x36, 0x2b4, 0xa, 0x36, 0x7, 0x36, 0x2b6, 0xa, 0x36, 0xc, 
       0x36, 0xe, 0x36, 0x2b9, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x5, 0x37, 0x2be, 0xa, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2c1, 0xa, 0x37, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 
       0x2c8, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x2cb, 0xb, 0x38, 0x3, 0x39, 
       0x3, 0x39, 0x5, 0x39, 0x2cf, 0xa, 0x39, 0x6, 0x39, 0x2d1, 0xa, 0x39, 
       0xd, 0x39, 0xe, 0x39, 0x2d2, 0x3, 0x3a, 0x6, 0x3a, 0x2d6, 0xa, 0x3a, 
       0xd, 0x3a, 0xe, 0x3a, 0x2d7, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 
       0x3b, 0x2dd, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 
       0x2e2, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x2e5, 0xb, 0x3c, 0x3, 0x3d, 
       0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x2ec, 0xa, 
       0x3d, 0x5, 0x3d, 0x2ee, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
       0x7, 0x3e, 0x2f3, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 0x2f6, 0xb, 0x3e, 
       0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x2fa, 0xa, 0x3f, 0x3, 0x40, 0x3, 
       0x40, 0x5, 0x40, 0x2fe, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 
       0x302, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x305, 0xb, 0x40, 0x5, 0x40, 
       0x307, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x7, 0x41, 0x30e, 0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x311, 0xb, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x315, 0xa, 0x41, 0x3, 0x41, 
       0x5, 0x41, 0x318, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x5, 0x41, 0x31e, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
       0x32e, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x332, 0xa, 0x41, 
       0xc, 0x41, 0xe, 0x41, 0x335, 0xb, 0x41, 0x5, 0x41, 0x337, 0xa, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x33c, 0xa, 0x41, 0x3, 
       0x41, 0x5, 0x41, 0x33f, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x346, 0xa, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x359, 0xa, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x35d, 0xa, 0x41, 0xc, 0x41, 0xe, 
       0x41, 0x360, 0xb, 0x41, 0x7, 0x41, 0x362, 0xa, 0x41, 0xc, 0x41, 0xe, 
       0x41, 0x365, 0xb, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x36d, 0xa, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x5, 0x43, 0x371, 0xa, 0x43, 0x3, 0x44, 0x5, 0x44, 0x374, 0xa, 
       0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x379, 0xa, 0x44, 
       0x3, 0x44, 0x7, 0x44, 0x37c, 0xa, 0x44, 0xc, 0x44, 0xe, 0x44, 0x37f, 
       0xb, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x6, 0x46, 
       0x385, 0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 0x386, 0x3, 0x47, 0x3, 0x47, 
       0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x38f, 0xa, 
       0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x6, 
       0x48, 0x396, 0xa, 0x48, 0xd, 0x48, 0xe, 0x48, 0x397, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x7, 0x49, 0x3a9, 0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 
       0x3ac, 0xb, 0x49, 0x5, 0x49, 0x3ae, 0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 
       0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x3b4, 0xa, 0x49, 0xc, 0x49, 0xe, 
       0x49, 0x3b7, 0xb, 0x49, 0x5, 0x49, 0x3b9, 0xa, 0x49, 0x7, 0x49, 0x3bb, 
       0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x3be, 0xb, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x5, 0x49, 0x3c2, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x3cf, 0xa, 0x4a, 0x3, 0x4b, 0x3, 
       0x4b, 0x5, 0x4b, 0x3d3, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 
       0x6, 0x4c, 0x3d8, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 0x3d9, 0x3, 0x4d, 
       0x3, 0x4d, 0x5, 0x4d, 0x3de, 0xa, 0x4d, 0x3, 0x4e, 0x5, 0x4e, 0x3e1, 
       0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3ec, 0xa, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x5, 0x4f, 0x3f4, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 
       0x40a, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x40e, 0xa, 0x51, 
       0x5, 0x51, 0x410, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x414, 
       0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x418, 0xa, 0x51, 0x3, 
       0x52, 0x3, 0x52, 0x5, 0x52, 0x41c, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x53, 0x7, 0x53, 0x421, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x424, 
       0xb, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
       0x5, 0x54, 0x42b, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x42f, 
       0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x5, 0x55, 0x434, 0xa, 
       0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x6, 0x56, 0x439, 0xa, 0x56, 
       0xd, 0x56, 0xe, 0x56, 0x43a, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 
       0x57, 0x440, 0xa, 0x57, 0x3, 0x58, 0x5, 0x58, 0x443, 0xa, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x5, 0x58, 0x447, 0xa, 0x58, 0x3, 0x58, 0x3, 0x58, 
       0x3, 0x59, 0x6, 0x59, 0x44c, 0xa, 0x59, 0xd, 0x59, 0xe, 0x59, 0x44d, 
       0x3, 0x59, 0x2, 0x5, 0x42, 0x64, 0x80, 0x5a, 0x2, 0x4, 0x6, 0x8, 
       0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
       0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
       0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
       0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 
       0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
       0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
       0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 
       0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0x2, 0x19, 0x3, 0x2, 0x68, 0x69, 
       0x4, 0x2, 0x4a, 0x4a, 0x4c, 0x4c, 0x5, 0x2, 0x29, 0x29, 0x4a, 0x4a, 
       0x4c, 0x4c, 0x4, 0x2, 0x29, 0x29, 0x34, 0x34, 0x7, 0x2, 0x49, 0x49, 
       0x4b, 0x4b, 0x4d, 0x4d, 0x50, 0x50, 0x55, 0x56, 0x3, 0x2, 0x4d, 0x4f, 
       0x4, 0x2, 0x49, 0x49, 0x4b, 0x4b, 0x3, 0x2, 0x47, 0x48, 0x3, 0x2, 
       0x43, 0x46, 0x3, 0x2, 0x66, 0x67, 0x3, 0x2, 0x5b, 0x65, 0x8, 0x2, 
       0x11, 0x11, 0x1c, 0x1c, 0x24, 0x24, 0x2a, 0x2a, 0x2d, 0x2d, 0x3c, 
       0x3c, 0xa, 0x2, 0x6, 0x8, 0x14, 0x14, 0x19, 0x19, 0x1d, 0x1d, 0x22, 
       0x23, 0x27, 0x28, 0x2f, 0x30, 0x36, 0x37, 0x3, 0x2, 0x6, 0x8, 0x4, 
       0x2, 0x2b, 0x2b, 0x2e, 0x2e, 0x6, 0x2, 0x15, 0x15, 0x25, 0x25, 0x31, 
       0x31, 0x35, 0x35, 0x5, 0x2, 0xa, 0xb, 0x21, 0x21, 0x3a, 0x3a, 0x4, 
       0x2, 0x3d, 0x3e, 0x5a, 0x5a, 0x3, 0x2, 0x3d, 0x3e, 0x4, 0x2, 0x4d, 
       0x4d, 0x54, 0x54, 0x4, 0x2, 0xd, 0xd, 0xf, 0xf, 0x4, 0x2, 0x10, 0x10, 
       0x31, 0x31, 0x4, 0x2, 0x12, 0x12, 0x16, 0x16, 0x2, 0x4ad, 0x2, 0xb2, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x6, 0xd7, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0xde, 0x3, 0x2, 0x2, 0x2, 0xa, 0xe8, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xe, 0x110, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x12b, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0x137, 0x3, 0x2, 0x2, 0x2, 0x16, 0x139, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0x141, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x149, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0x151, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x159, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0x161, 0x3, 0x2, 0x2, 0x2, 0x22, 0x169, 0x3, 0x2, 0x2, 
       0x2, 0x24, 0x171, 0x3, 0x2, 0x2, 0x2, 0x26, 0x179, 0x3, 0x2, 0x2, 
       0x2, 0x28, 0x181, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x189, 0x3, 0x2, 0x2, 
       0x2, 0x2c, 0x197, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x199, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1a3, 0x3, 0x2, 0x2, 
       0x2, 0x34, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1af, 0x3, 0x2, 0x2, 
       0x2, 0x38, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1bd, 0x3, 0x2, 0x2, 
       0x2, 0x3c, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1c7, 0x3, 0x2, 0x2, 
       0x2, 0x40, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1dd, 0x3, 0x2, 0x2, 
       0x2, 0x44, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1f3, 0x3, 0x2, 0x2, 
       0x2, 0x48, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x201, 0x3, 0x2, 0x2, 
       0x2, 0x4c, 0x205, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x20a, 0x3, 0x2, 0x2, 
       0x2, 0x50, 0x218, 0x3, 0x2, 0x2, 0x2, 0x52, 0x227, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0x229, 0x3, 0x2, 0x2, 0x2, 0x56, 0x231, 0x3, 0x2, 0x2, 
       0x2, 0x58, 0x236, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x238, 0x3, 0x2, 0x2, 
       0x2, 0x5c, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x245, 0x3, 0x2, 0x2, 
       0x2, 0x60, 0x247, 0x3, 0x2, 0x2, 0x2, 0x62, 0x250, 0x3, 0x2, 0x2, 
       0x2, 0x64, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2a5, 0x3, 0x2, 0x2, 
       0x2, 0x68, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2af, 0x3, 0x2, 0x2, 
       0x2, 0x6c, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2c9, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2d5, 0x3, 0x2, 0x2, 
       0x2, 0x74, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2de, 0x3, 0x2, 0x2, 
       0x2, 0x78, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2ef, 0x3, 0x2, 0x2, 
       0x2, 0x7c, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x306, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x336, 0x3, 0x2, 0x2, 0x2, 0x82, 0x366, 0x3, 0x2, 0x2, 
       0x2, 0x84, 0x370, 0x3, 0x2, 0x2, 0x2, 0x86, 0x373, 0x3, 0x2, 0x2, 
       0x2, 0x88, 0x380, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x384, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x390, 0x3, 0x2, 0x2, 
       0x2, 0x90, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3ce, 0x3, 0x2, 0x2, 
       0x2, 0x94, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x96, 0x3d7, 0x3, 0x2, 0x2, 
       0x2, 0x98, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3e0, 0x3, 0x2, 0x2, 
       0x2, 0x9c, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x409, 0x3, 0x2, 0x2, 
       0x2, 0xa0, 0x40f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x419, 0x3, 0x2, 0x2, 
       0x2, 0xa4, 0x41d, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x42e, 0x3, 0x2, 0x2, 
       0x2, 0xa8, 0x433, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x438, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0x43f, 0x3, 0x2, 0x2, 0x2, 0xae, 0x442, 0x3, 0x2, 0x2, 
       0x2, 0xb0, 0x44b, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x6b, 0x2, 
       0x2, 0xb3, 0x3, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xd6, 0x5, 0x2, 0x2, 0x2, 
       0xb5, 0xd6, 0x7, 0x6c, 0x2, 0x2, 0xb6, 0xb8, 0x7, 0x6e, 0x2, 0x2, 
       0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 
       0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xd6, 
       0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x3d, 0x2, 0x2, 0xbc, 0xbd, 
       0x5, 0x30, 0x19, 0x2, 0xbd, 0xbe, 0x7, 0x3e, 0x2, 0x2, 0xbe, 0xd6, 
       0x3, 0x2, 0x2, 0x2, 0xbf, 0xd6, 0x5, 0x6, 0x4, 0x2, 0xc0, 0xc2, 0x7, 
       0x3, 0x2, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 
       0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x3d, 
       0x2, 0x2, 0xc4, 0xc5, 0x5, 0x94, 0x4b, 0x2, 0xc5, 0xc6, 0x7, 0x3e, 
       0x2, 0x2, 0xc6, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x4, 0x2, 
       0x2, 0xc8, 0xc9, 0x7, 0x3d, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x10, 0x9, 
       0x2, 0xca, 0xcb, 0x7, 0x5a, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x7c, 0x3f, 
       0x2, 0xcc, 0xcd, 0x7, 0x3e, 0x2, 0x2, 0xcd, 0xd6, 0x3, 0x2, 0x2, 
       0x2, 0xce, 0xcf, 0x7, 0x5, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x3d, 0x2, 
       0x2, 0xd0, 0xd1, 0x5, 0x7c, 0x3f, 0x2, 0xd1, 0xd2, 0x7, 0x5a, 0x2, 
       0x2, 0xd2, 0xd3, 0x5, 0x10, 0x9, 0x2, 0xd3, 0xd4, 0x7, 0x3e, 0x2, 
       0x2, 0xd4, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xb4, 0x3, 0x2, 0x2, 0x2, 
       0xd5, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xd5, 
       0xbb, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xc1, 
       0x3, 0x2, 0x2, 0x2, 0xd5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xce, 0x3, 
       0x2, 0x2, 0x2, 0xd6, 0x5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x38, 
       0x2, 0x2, 0xd8, 0xd9, 0x7, 0x3d, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x2c, 
       0x17, 0x2, 0xda, 0xdb, 0x7, 0x5a, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x8, 
       0x5, 0x2, 0xdc, 0xdd, 0x7, 0x3e, 0x2, 0x2, 0xdd, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0xde, 0xe3, 0x5, 0xa, 0x6, 0x2, 0xdf, 0xe0, 0x7, 0x5a, 0x2, 
       0x2, 0xe0, 0xe2, 0x5, 0xa, 0x6, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 
       0xe2, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 
       0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x9, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 
       0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 0x5, 0x7c, 0x3f, 0x2, 0xe7, 0xe9, 
       0x7, 0x17, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe7, 
       0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 
       0x58, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x2c, 0x17, 0x2, 0xec, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0xed, 0xfc, 0x5, 0x4, 0x3, 0x2, 0xee, 0xf0, 0x7, 0x3, 
       0x2, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 
       0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x3d, 0x2, 
       0x2, 0xf2, 0xf3, 0x5, 0x7c, 0x3f, 0x2, 0xf3, 0xf4, 0x7, 0x3e, 0x2, 
       0x2, 0xf4, 0xf5, 0x7, 0x41, 0x2, 0x2, 0xf5, 0xf7, 0x5, 0x86, 0x44, 
       0x2, 0xf6, 0xf8, 0x7, 0x5a, 0x2, 0x2, 0xf7, 0xf6, 0x3, 0x2, 0x2, 
       0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 
       0xf9, 0xfa, 0x7, 0x42, 0x2, 0x2, 0xfa, 0xfc, 0x3, 0x2, 0x2, 0x2, 
       0xfb, 0xed, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xef, 0x3, 0x2, 0x2, 0x2, 0xfc, 
       0x10d, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x3f, 0x2, 0x2, 0xfe, 
       0xff, 0x5, 0x30, 0x19, 0x2, 0xff, 0x100, 0x7, 0x40, 0x2, 0x2, 0x100, 
       0x10c, 0x3, 0x2, 0x2, 0x2, 0x101, 0x103, 0x7, 0x3d, 0x2, 0x2, 0x102, 
       0x104, 0x5, 0xe, 0x8, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 0x103, 
       0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 
       0x10c, 0x7, 0x3e, 0x2, 0x2, 0x106, 0x107, 0x9, 0x2, 0x2, 0x2, 0x107, 
       0x10c, 0x5, 0x2, 0x2, 0x2, 0x108, 0x109, 0x9, 0x2, 0x2, 0x2, 0x109, 
       0x10c, 0x5, 0xc, 0x7, 0x2, 0x10a, 0x10c, 0x9, 0x3, 0x2, 0x2, 0x10b, 
       0xfd, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x101, 0x3, 0x2, 0x2, 0x2, 0x10b, 
       0x106, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10b, 
       0x10a, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 
       0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 
       0xd, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 
       0x115, 0x5, 0x2c, 0x17, 0x2, 0x111, 0x112, 0x7, 0x5a, 0x2, 0x2, 0x112, 
       0x114, 0x5, 0x2c, 0x17, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x114, 
       0x117, 0x3, 0x2, 0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 
       0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0xf, 0x3, 0x2, 0x2, 0x2, 0x117, 
       0x115, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 0x9, 0x4, 0x2, 0x2, 0x119, 
       0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11b, 
       0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 
       0x129, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11e, 
       0x12a, 0x5, 0xc, 0x7, 0x2, 0x11f, 0x120, 0x5, 0x12, 0xa, 0x2, 0x120, 
       0x121, 0x5, 0x14, 0xb, 0x2, 0x121, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x122, 
       0x123, 0x9, 0x5, 0x2, 0x2, 0x123, 0x124, 0x7, 0x3d, 0x2, 0x2, 0x124, 
       0x125, 0x5, 0x7c, 0x3f, 0x2, 0x125, 0x126, 0x7, 0x3e, 0x2, 0x2, 0x126, 
       0x12a, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x7, 0x52, 0x2, 0x2, 0x128, 
       0x12a, 0x7, 0x6b, 0x2, 0x2, 0x129, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x129, 
       0x11f, 0x3, 0x2, 0x2, 0x2, 0x129, 0x122, 0x3, 0x2, 0x2, 0x2, 0x129, 
       0x127, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x12b, 
       0x12c, 0x9, 0x6, 0x2, 0x2, 0x12c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x12d, 
       0x12f, 0x7, 0x3, 0x2, 0x2, 0x12e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12e, 
       0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 
       0x131, 0x7, 0x3d, 0x2, 0x2, 0x131, 0x132, 0x5, 0x7c, 0x3f, 0x2, 0x132, 
       0x133, 0x7, 0x3e, 0x2, 0x2, 0x133, 0x134, 0x5, 0x14, 0xb, 0x2, 0x134, 
       0x138, 0x3, 0x2, 0x2, 0x2, 0x135, 0x138, 0x5, 0x10, 0x9, 0x2, 0x136, 
       0x138, 0x7, 0x6d, 0x2, 0x2, 0x137, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x137, 
       0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 
       0x15, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13e, 0x5, 0x14, 0xb, 0x2, 0x13a, 
       0x13b, 0x9, 0x7, 0x2, 0x2, 0x13b, 0x13d, 0x5, 0x14, 0xb, 0x2, 0x13c, 
       0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13e, 
       0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13f, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x141, 
       0x146, 0x5, 0x16, 0xc, 0x2, 0x142, 0x143, 0x9, 0x8, 0x2, 0x2, 0x143, 
       0x145, 0x5, 0x16, 0xc, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x145, 
       0x148, 0x3, 0x2, 0x2, 0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 
       0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x19, 0x3, 0x2, 0x2, 0x2, 0x148, 
       0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14e, 0x5, 0x18, 0xd, 0x2, 0x14a, 
       0x14b, 0x9, 0x9, 0x2, 0x2, 0x14b, 0x14d, 0x5, 0x18, 0xd, 0x2, 0x14c, 
       0x14a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x150, 0x3, 0x2, 0x2, 0x2, 0x14e, 
       0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x151, 
       0x156, 0x5, 0x1a, 0xe, 0x2, 0x152, 0x153, 0x9, 0xa, 0x2, 0x2, 0x153, 
       0x155, 0x5, 0x1a, 0xe, 0x2, 0x154, 0x152, 0x3, 0x2, 0x2, 0x2, 0x155, 
       0x158, 0x3, 0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 
       0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x158, 
       0x156, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15e, 0x5, 0x1c, 0xf, 0x2, 0x15a, 
       0x15b, 0x9, 0xb, 0x2, 0x2, 0x15b, 0x15d, 0x5, 0x1c, 0xf, 0x2, 0x15c, 
       0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x160, 0x3, 0x2, 0x2, 0x2, 0x15e, 
       0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x161, 
       0x166, 0x5, 0x1e, 0x10, 0x2, 0x162, 0x163, 0x7, 0x50, 0x2, 0x2, 0x163, 
       0x165, 0x5, 0x1e, 0x10, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x165, 
       0x168, 0x3, 0x2, 0x2, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 
       0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x21, 0x3, 0x2, 0x2, 0x2, 0x168, 
       0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16e, 0x5, 0x20, 0x11, 0x2, 0x16a, 
       0x16b, 0x7, 0x54, 0x2, 0x2, 0x16b, 0x16d, 0x5, 0x20, 0x11, 0x2, 0x16c, 
       0x16a, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16e, 
       0x16c, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 
       0x23, 0x3, 0x2, 0x2, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x171, 
       0x176, 0x5, 0x22, 0x12, 0x2, 0x172, 0x173, 0x7, 0x51, 0x2, 0x2, 0x173, 
       0x175, 0x5, 0x22, 0x12, 0x2, 0x174, 0x172, 0x3, 0x2, 0x2, 0x2, 0x175, 
       0x178, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x25, 0x3, 0x2, 0x2, 0x2, 0x178, 
       0x176, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17e, 0x5, 0x24, 0x13, 0x2, 0x17a, 
       0x17b, 0x7, 0x52, 0x2, 0x2, 0x17b, 0x17d, 0x5, 0x24, 0x13, 0x2, 0x17c, 
       0x17a, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x180, 0x3, 0x2, 0x2, 0x2, 0x17e, 
       0x17c, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x181, 
       0x186, 0x5, 0x26, 0x14, 0x2, 0x182, 0x183, 0x7, 0x53, 0x2, 0x2, 0x183, 
       0x185, 0x5, 0x26, 0x14, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 
       0x188, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 
       0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 0x29, 0x3, 0x2, 0x2, 0x2, 0x188, 
       0x186, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18f, 0x5, 0x28, 0x15, 0x2, 0x18a, 
       0x18b, 0x7, 0x57, 0x2, 0x2, 0x18b, 0x18c, 0x5, 0x30, 0x19, 0x2, 0x18c, 
       0x18d, 0x7, 0x58, 0x2, 0x2, 0x18d, 0x18e, 0x5, 0x2a, 0x16, 0x2, 0x18e, 
       0x190, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18f, 
       0x190, 0x3, 0x2, 0x2, 0x2, 0x190, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x191, 
       0x198, 0x5, 0x2a, 0x16, 0x2, 0x192, 0x193, 0x5, 0x10, 0x9, 0x2, 0x193, 
       0x194, 0x5, 0x2e, 0x18, 0x2, 0x194, 0x195, 0x5, 0x2c, 0x17, 0x2, 
       0x195, 0x198, 0x3, 0x2, 0x2, 0x2, 0x196, 0x198, 0x7, 0x6d, 0x2, 0x2, 
       0x197, 0x191, 0x3, 0x2, 0x2, 0x2, 0x197, 0x192, 0x3, 0x2, 0x2, 0x2, 
       0x197, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x2d, 0x3, 0x2, 0x2, 0x2, 
       0x199, 0x19a, 0x9, 0xc, 0x2, 0x2, 0x19a, 0x2f, 0x3, 0x2, 0x2, 0x2, 
       0x19b, 0x1a0, 0x5, 0x2c, 0x17, 0x2, 0x19c, 0x19d, 0x7, 0x5a, 0x2, 
       0x2, 0x19d, 0x19f, 0x5, 0x2c, 0x17, 0x2, 0x19e, 0x19c, 0x3, 0x2, 
       0x2, 0x2, 0x19f, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 
       0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x31, 0x3, 0x2, 
       0x2, 0x2, 0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x5, 0x2a, 
       0x16, 0x2, 0x1a4, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a7, 0x5, 0x36, 
       0x1c, 0x2, 0x1a6, 0x1a8, 0x5, 0x3c, 0x1f, 0x2, 0x1a7, 0x1a6, 0x3, 
       0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 
       0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x7, 0x59, 0x2, 0x2, 0x1aa, 0x1ad, 0x3, 
       0x2, 0x2, 0x2, 0x1ab, 0x1ad, 0x5, 0x8e, 0x48, 0x2, 0x1ac, 0x1a5, 
       0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b0, 0x5, 0x3a, 0x1e, 0x2, 0x1af, 0x1ae, 
       0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1af, 
       0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b5, 0x5, 0x3a, 0x1e, 0x2, 0x1b4, 0x1b3, 
       0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 
       0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1be, 0x5, 0x40, 0x21, 0x2, 0x1b9, 0x1be, 
       0x5, 0x42, 0x22, 0x2, 0x1ba, 0x1be, 0x5, 0x5c, 0x2f, 0x2, 0x1bb, 
       0x1be, 0x5, 0x5e, 0x30, 0x2, 0x1bc, 0x1be, 0x5, 0x60, 0x31, 0x2, 
       0x1bd, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
       0x1bd, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 
       0x1bd, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x3b, 0x3, 0x2, 0x2, 0x2, 
       0x1bf, 0x1c4, 0x5, 0x3e, 0x20, 0x2, 0x1c0, 0x1c1, 0x7, 0x5a, 0x2, 
       0x2, 0x1c1, 0x1c3, 0x5, 0x3e, 0x20, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 
       0x2, 0x2, 0x1c3, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 
       0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x3d, 0x3, 0x2, 
       0x2, 0x2, 0x1c6, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1ca, 0x5, 0x62, 
       0x32, 0x2, 0x1c8, 0x1c9, 0x7, 0x5b, 0x2, 0x2, 0x1c9, 0x1cb, 0x5, 
       0x84, 0x43, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 
       0x3, 0x2, 0x2, 0x2, 0x1cb, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 
       0x9, 0xd, 0x2, 0x2, 0x1cd, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 
       0x8, 0x22, 0x1, 0x2, 0x1cf, 0x1de, 0x9, 0xe, 0x2, 0x2, 0x1d0, 0x1d1, 
       0x7, 0x3, 0x2, 0x2, 0x1d1, 0x1d2, 0x7, 0x3d, 0x2, 0x2, 0x1d2, 0x1d3, 
       0x9, 0xf, 0x2, 0x2, 0x1d3, 0x1de, 0x7, 0x3e, 0x2, 0x2, 0x1d4, 0x1de, 
       0x5, 0x5a, 0x2e, 0x2, 0x1d5, 0x1de, 0x5, 0x44, 0x23, 0x2, 0x1d6, 
       0x1de, 0x5, 0x52, 0x2a, 0x2, 0x1d7, 0x1de, 0x5, 0x82, 0x42, 0x2, 
       0x1d8, 0x1d9, 0x7, 0x9, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x3d, 0x2, 0x2, 
       0x1da, 0x1db, 0x5, 0x32, 0x1a, 0x2, 0x1db, 0x1dc, 0x7, 0x3e, 0x2, 
       0x2, 0x1dc, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1ce, 0x3, 0x2, 0x2, 
       0x2, 0x1dd, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1d4, 0x3, 0x2, 0x2, 
       0x2, 0x1dd, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1d6, 0x3, 0x2, 0x2, 
       0x2, 0x1dd, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1d8, 0x3, 0x2, 0x2, 
       0x2, 0x1de, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0xc, 0x3, 0x2, 
       0x2, 0x1e0, 0x1e2, 0x5, 0x70, 0x39, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 
       0x2, 0x2, 0x1e2, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e1, 0x3, 0x2, 
       0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x43, 0x3, 0x2, 
       0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e8, 0x5, 0x46, 
       0x24, 0x2, 0x1e7, 0x1e9, 0x7, 0x6b, 0x2, 0x2, 0x1e8, 0x1e7, 0x3, 
       0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x3, 
       0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x41, 0x2, 0x2, 0x1eb, 0x1ec, 0x5, 
       0x48, 0x25, 0x2, 0x1ec, 0x1ed, 0x7, 0x42, 0x2, 0x2, 0x1ed, 0x1f2, 
       0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x5, 0x46, 0x24, 0x2, 0x1ef, 0x1f0, 
       0x7, 0x6b, 0x2, 0x2, 0x1f0, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1e6, 
       0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x9, 0x10, 0x2, 0x2, 0x1f4, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f7, 0x5, 0x4a, 0x26, 0x2, 0x1f6, 0x1f5, 
       0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 0x5, 0x4c, 0x27, 0x2, 0x1fb, 0x1fd, 
       0x5, 0x4e, 0x28, 0x2, 0x1fc, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 
       0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 
       0x7, 0x59, 0x2, 0x2, 0x1ff, 0x202, 0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 
       0x5, 0x8e, 0x48, 0x2, 0x201, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x201, 0x200, 
       0x3, 0x2, 0x2, 0x2, 0x202, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x203, 0x206, 
       0x5, 0x42, 0x22, 0x2, 0x204, 0x206, 0x5, 0x5c, 0x2f, 0x2, 0x205, 
       0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 
       0x208, 0x3, 0x2, 0x2, 0x2, 0x207, 0x209, 0x5, 0x4c, 0x27, 0x2, 0x208, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x4d, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20f, 0x5, 0x50, 0x29, 0x2, 0x20b, 
       0x20c, 0x7, 0x5a, 0x2, 0x2, 0x20c, 0x20e, 0x5, 0x50, 0x29, 0x2, 0x20d, 
       0x20b, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x211, 0x3, 0x2, 0x2, 0x2, 0x20f, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 
       0x4f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x212, 
       0x219, 0x5, 0x62, 0x32, 0x2, 0x213, 0x215, 0x5, 0x62, 0x32, 0x2, 
       0x214, 0x213, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 
       0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x7, 0x58, 0x2, 0x2, 
       0x217, 0x219, 0x5, 0x32, 0x1a, 0x2, 0x218, 0x212, 0x3, 0x2, 0x2, 
       0x2, 0x218, 0x214, 0x3, 0x2, 0x2, 0x2, 0x219, 0x51, 0x3, 0x2, 0x2, 
       0x2, 0x21a, 0x21c, 0x7, 0x1b, 0x2, 0x2, 0x21b, 0x21d, 0x7, 0x6b, 
       0x2, 0x2, 0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 
       0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x7, 0x41, 
       0x2, 0x2, 0x21f, 0x221, 0x5, 0x54, 0x2b, 0x2, 0x220, 0x222, 0x7, 
       0x5a, 0x2, 0x2, 0x221, 0x220, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 
       0x2, 0x2, 0x2, 0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x7, 
       0x42, 0x2, 0x2, 0x224, 0x228, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 
       0x1b, 0x2, 0x2, 0x226, 0x228, 0x7, 0x6b, 0x2, 0x2, 0x227, 0x21a, 
       0x3, 0x2, 0x2, 0x2, 0x227, 0x225, 0x3, 0x2, 0x2, 0x2, 0x228, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x22e, 0x5, 0x56, 0x2c, 0x2, 0x22a, 0x22b, 
       0x7, 0x5a, 0x2, 0x2, 0x22b, 0x22d, 0x5, 0x56, 0x2c, 0x2, 0x22c, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x22d, 0x230, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22c, 
       0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x231, 0x234, 
       0x5, 0x58, 0x2d, 0x2, 0x232, 0x233, 0x7, 0x5b, 0x2, 0x2, 0x233, 0x235, 
       0x5, 0x32, 0x1a, 0x2, 0x234, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x235, 0x57, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 
       0x7, 0x6b, 0x2, 0x2, 0x237, 0x59, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 
       0x7, 0x35, 0x2, 0x2, 0x239, 0x23a, 0x7, 0x3d, 0x2, 0x2, 0x23a, 0x23b, 
       0x5, 0x7c, 0x3f, 0x2, 0x23b, 0x23c, 0x7, 0x3e, 0x2, 0x2, 0x23c, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x9, 0x11, 0x2, 0x2, 0x23e, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x246, 0x9, 0x12, 0x2, 0x2, 0x240, 0x246, 
       0x5, 0x68, 0x35, 0x2, 0x241, 0x242, 0x7, 0xc, 0x2, 0x2, 0x242, 0x243, 
       0x7, 0x3d, 0x2, 0x2, 0x243, 0x244, 0x7, 0x6b, 0x2, 0x2, 0x244, 0x246, 
       0x7, 0x3e, 0x2, 0x2, 0x245, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x245, 0x240, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x241, 0x3, 0x2, 0x2, 0x2, 0x246, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x7, 0x33, 0x2, 0x2, 0x248, 0x24b, 
       0x7, 0x3d, 0x2, 0x2, 0x249, 0x24c, 0x5, 0x7c, 0x3f, 0x2, 0x24a, 0x24c, 
       0x5, 0x32, 0x1a, 0x2, 0x24b, 0x249, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24a, 
       0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 
       0x7, 0x3e, 0x2, 0x2, 0x24e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x251, 
       0x5, 0x70, 0x39, 0x2, 0x250, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 
       0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x3, 0x2, 0x2, 0x2, 0x252, 0x256, 
       0x5, 0x64, 0x33, 0x2, 0x253, 0x255, 0x5, 0x66, 0x34, 0x2, 0x254, 
       0x253, 0x3, 0x2, 0x2, 0x2, 0x255, 0x258, 0x3, 0x2, 0x2, 0x2, 0x256, 
       0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 0x2, 0x257, 
       0x63, 0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 0x2, 0x259, 
       0x25a, 0x8, 0x33, 0x1, 0x2, 0x25a, 0x26b, 0x7, 0x6b, 0x2, 0x2, 0x25b, 
       0x25c, 0x7, 0x3d, 0x2, 0x2, 0x25c, 0x25d, 0x5, 0x62, 0x32, 0x2, 0x25d, 
       0x25e, 0x7, 0x3e, 0x2, 0x2, 0x25e, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x25f, 
       0x260, 0x7, 0x6b, 0x2, 0x2, 0x260, 0x261, 0x7, 0x58, 0x2, 0x2, 0x261, 
       0x26b, 0x7, 0x6d, 0x2, 0x2, 0x262, 0x264, 0x7, 0x3d, 0x2, 0x2, 0x263, 
       0x265, 0x5, 0x42, 0x22, 0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 0x264, 
       0x265, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 
       0x267, 0x5, 0x70, 0x39, 0x2, 0x267, 0x268, 0x5, 0x64, 0x33, 0x2, 
       0x268, 0x269, 0x7, 0x3e, 0x2, 0x2, 0x269, 0x26b, 0x3, 0x2, 0x2, 0x2, 
       0x26a, 0x259, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x25b, 0x3, 0x2, 0x2, 0x2, 
       0x26a, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x262, 0x3, 0x2, 0x2, 0x2, 
       0x26b, 0x299, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0xc, 0xa, 0x2, 0x2, 
       0x26d, 0x26f, 0x7, 0x3f, 0x2, 0x2, 0x26e, 0x270, 0x5, 0x72, 0x3a, 
       0x2, 0x26f, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x3, 0x2, 0x2, 
       0x2, 0x270, 0x272, 0x3, 0x2, 0x2, 0x2, 0x271, 0x273, 0x5, 0x2c, 0x17, 
       0x2, 0x272, 0x271, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x3, 0x2, 0x2, 
       0x2, 0x273, 0x274, 0x3, 0x2, 0x2, 0x2, 0x274, 0x298, 0x7, 0x40, 0x2, 
       0x2, 0x275, 0x276, 0xc, 0x9, 0x2, 0x2, 0x276, 0x277, 0x7, 0x3f, 0x2, 
       0x2, 0x277, 0x279, 0x7, 0x2a, 0x2, 0x2, 0x278, 0x27a, 0x5, 0x72, 
       0x3a, 0x2, 0x279, 0x278, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x3, 0x2, 
       0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x5, 0x2c, 
       0x17, 0x2, 0x27c, 0x27d, 0x7, 0x40, 0x2, 0x2, 0x27d, 0x298, 0x3, 
       0x2, 0x2, 0x2, 0x27e, 0x27f, 0xc, 0x8, 0x2, 0x2, 0x27f, 0x280, 0x7, 
       0x3f, 0x2, 0x2, 0x280, 0x281, 0x5, 0x72, 0x3a, 0x2, 0x281, 0x282, 
       0x7, 0x2a, 0x2, 0x2, 0x282, 0x283, 0x5, 0x2c, 0x17, 0x2, 0x283, 0x284, 
       0x7, 0x40, 0x2, 0x2, 0x284, 0x298, 0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 
       0xc, 0x7, 0x2, 0x2, 0x286, 0x288, 0x7, 0x3f, 0x2, 0x2, 0x287, 0x289, 
       0x5, 0x72, 0x3a, 0x2, 0x288, 0x287, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 
       0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 
       0x7, 0x4d, 0x2, 0x2, 0x28b, 0x298, 0x7, 0x40, 0x2, 0x2, 0x28c, 0x28d, 
       0xc, 0x6, 0x2, 0x2, 0x28d, 0x28e, 0x7, 0x3d, 0x2, 0x2, 0x28e, 0x28f, 
       0x5, 0x74, 0x3b, 0x2, 0x28f, 0x290, 0x7, 0x3e, 0x2, 0x2, 0x290, 0x298, 
       0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0xc, 0x5, 0x2, 0x2, 0x292, 0x294, 
       0x7, 0x3d, 0x2, 0x2, 0x293, 0x295, 0x5, 0x7a, 0x3e, 0x2, 0x294, 0x293, 
       0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 
       0x3, 0x2, 0x2, 0x2, 0x296, 0x298, 0x7, 0x3e, 0x2, 0x2, 0x297, 0x26c, 
       0x3, 0x2, 0x2, 0x2, 0x297, 0x275, 0x3, 0x2, 0x2, 0x2, 0x297, 0x27e, 
       0x3, 0x2, 0x2, 0x2, 0x297, 0x285, 0x3, 0x2, 0x2, 0x2, 0x297, 0x28c, 
       0x3, 0x2, 0x2, 0x2, 0x297, 0x291, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29b, 
       0x3, 0x2, 0x2, 0x2, 0x299, 0x297, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 
       0x3, 0x2, 0x2, 0x2, 0x29a, 0x65, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x299, 
       0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x7, 0xd, 0x2, 0x2, 0x29d, 0x29f, 
       0x7, 0x3d, 0x2, 0x2, 0x29e, 0x2a0, 0x7, 0x6e, 0x2, 0x2, 0x29f, 0x29e, 
       0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x29f, 
       0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 
       0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a6, 0x7, 0x3e, 0x2, 0x2, 0x2a4, 0x2a6, 
       0x5, 0x68, 0x35, 0x2, 0x2a5, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a4, 
       0x3, 0x2, 0x2, 0x2, 0x2a6, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 
       0x7, 0xe, 0x2, 0x2, 0x2a8, 0x2a9, 0x7, 0x3d, 0x2, 0x2, 0x2a9, 0x2aa, 
       0x7, 0x3d, 0x2, 0x2, 0x2aa, 0x2ab, 0x5, 0x6a, 0x36, 0x2, 0x2ab, 0x2ac, 
       0x7, 0x3e, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x3e, 0x2, 0x2, 0x2ad, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2b0, 0x5, 0x6c, 0x37, 0x2, 0x2af, 0x2ae, 
       0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b7, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b3, 0x7, 0x5a, 0x2, 0x2, 0x2b2, 0x2b4, 
       0x5, 0x6c, 0x37, 0x2, 0x2b3, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 
       0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b1, 
       0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b5, 
       0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2c0, 
       0xa, 0x13, 0x2, 0x2, 0x2bb, 0x2bd, 0x7, 0x3d, 0x2, 0x2, 0x2bc, 0x2be, 
       0x5, 0xe, 0x8, 0x2, 0x2bd, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2be, 
       0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c1, 
       0x7, 0x3e, 0x2, 0x2, 0x2c0, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 
       0x3, 0x2, 0x2, 0x2, 0x2c1, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c8, 
       0xa, 0x14, 0x2, 0x2, 0x2c3, 0x2c4, 0x7, 0x3d, 0x2, 0x2, 0x2c4, 0x2c5, 
       0x5, 0x6e, 0x38, 0x2, 0x2c5, 0x2c6, 0x7, 0x3e, 0x2, 0x2, 0x2c6, 0x2c8, 
       0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c3, 
       0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2c7, 
       0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x6f, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2ce, 
       0x9, 0x15, 0x2, 0x2, 0x2cd, 0x2cf, 0x5, 0x72, 0x3a, 0x2, 0x2ce, 0x2cd, 
       0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d1, 
       0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 
       0x3, 0x2, 0x2, 0x2, 0x2d3, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d6, 
       0x5, 0x5c, 0x2f, 0x2, 0x2d5, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 
       0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 
       0x3, 0x2, 0x2, 0x2, 0x2d8, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2dc, 
       0x5, 0x76, 0x3c, 0x2, 0x2da, 0x2db, 0x7, 0x5a, 0x2, 0x2, 0x2db, 0x2dd, 
       0x7, 0x6a, 0x2, 0x2, 0x2dc, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 
       0x3, 0x2, 0x2, 0x2, 0x2dd, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2e3, 
       0x5, 0x78, 0x3d, 0x2, 0x2df, 0x2e0, 0x7, 0x5a, 0x2, 0x2, 0x2e0, 0x2e2, 
       0x5, 0x78, 0x3d, 0x2, 0x2e1, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 
       0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 
       0x3, 0x2, 0x2, 0x2, 0x2e4, 0x77, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 
       0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x5, 0x36, 0x1c, 0x2, 0x2e7, 0x2e8, 
       0x5, 0x62, 0x32, 0x2, 0x2e8, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2eb, 
       0x5, 0x38, 0x1d, 0x2, 0x2ea, 0x2ec, 0x5, 0x7e, 0x40, 0x2, 0x2eb, 
       0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ec, 
       0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2ed, 
       0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2ef, 
       0x2f4, 0x7, 0x6b, 0x2, 0x2, 0x2f0, 0x2f1, 0x7, 0x5a, 0x2, 0x2, 0x2f1, 
       0x2f3, 0x7, 0x6b, 0x2, 0x2, 0x2f2, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f3, 
       0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f4, 
       0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2f6, 
       0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f9, 0x5, 0x4c, 0x27, 0x2, 0x2f8, 
       0x2fa, 0x5, 0x7e, 0x40, 0x2, 0x2f9, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f9, 
       0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2fb, 
       0x307, 0x5, 0x70, 0x39, 0x2, 0x2fc, 0x2fe, 0x5, 0x70, 0x39, 0x2, 
       0x2fd, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x3, 0x2, 0x2, 0x2, 
       0x2fe, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x303, 0x5, 0x80, 0x41, 
       0x2, 0x300, 0x302, 0x5, 0x66, 0x34, 0x2, 0x301, 0x300, 0x3, 0x2, 
       0x2, 0x2, 0x302, 0x305, 0x3, 0x2, 0x2, 0x2, 0x303, 0x301, 0x3, 0x2, 
       0x2, 0x2, 0x303, 0x304, 0x3, 0x2, 0x2, 0x2, 0x304, 0x307, 0x3, 0x2, 
       0x2, 0x2, 0x305, 0x303, 0x3, 0x2, 0x2, 0x2, 0x306, 0x2fb, 0x3, 0x2, 
       0x2, 0x2, 0x306, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x307, 0x7f, 0x3, 0x2, 
       0x2, 0x2, 0x308, 0x309, 0x8, 0x41, 0x1, 0x2, 0x309, 0x30a, 0x7, 0x3d, 
       0x2, 0x2, 0x30a, 0x30b, 0x5, 0x7e, 0x40, 0x2, 0x30b, 0x30f, 0x7, 
       0x3e, 0x2, 0x2, 0x30c, 0x30e, 0x5, 0x66, 0x34, 0x2, 0x30d, 0x30c, 
       0x3, 0x2, 0x2, 0x2, 0x30e, 0x311, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x30d, 
       0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x3, 0x2, 0x2, 0x2, 0x310, 0x337, 
       0x3, 0x2, 0x2, 0x2, 0x311, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x312, 0x314, 
       0x7, 0x3f, 0x2, 0x2, 0x313, 0x315, 0x5, 0x72, 0x3a, 0x2, 0x314, 0x313, 
       0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 0x317, 
       0x3, 0x2, 0x2, 0x2, 0x316, 0x318, 0x5, 0x2c, 0x17, 0x2, 0x317, 0x316, 
       0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 
       0x3, 0x2, 0x2, 0x2, 0x319, 0x337, 0x7, 0x40, 0x2, 0x2, 0x31a, 0x31b, 
       0x7, 0x3f, 0x2, 0x2, 0x31b, 0x31d, 0x7, 0x2a, 0x2, 0x2, 0x31c, 0x31e, 
       0x5, 0x72, 0x3a, 0x2, 0x31d, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 
       0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 
       0x5, 0x2c, 0x17, 0x2, 0x320, 0x321, 0x7, 0x40, 0x2, 0x2, 0x321, 0x337, 
       0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x7, 0x3f, 0x2, 0x2, 0x323, 0x324, 
       0x5, 0x72, 0x3a, 0x2, 0x324, 0x325, 0x7, 0x2a, 0x2, 0x2, 0x325, 0x326, 
       0x5, 0x2c, 0x17, 0x2, 0x326, 0x327, 0x7, 0x40, 0x2, 0x2, 0x327, 0x337, 
       0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x7, 0x3f, 0x2, 0x2, 0x329, 0x32a, 
       0x7, 0x4d, 0x2, 0x2, 0x32a, 0x337, 0x7, 0x40, 0x2, 0x2, 0x32b, 0x32d, 
       0x7, 0x3d, 0x2, 0x2, 0x32c, 0x32e, 0x5, 0x74, 0x3b, 0x2, 0x32d, 0x32c, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 
       0x3, 0x2, 0x2, 0x2, 0x32f, 0x333, 0x7, 0x3e, 0x2, 0x2, 0x330, 0x332, 
       0x5, 0x66, 0x34, 0x2, 0x331, 0x330, 0x3, 0x2, 0x2, 0x2, 0x332, 0x335, 
       0x3, 0x2, 0x2, 0x2, 0x333, 0x331, 0x3, 0x2, 0x2, 0x2, 0x333, 0x334, 
       0x3, 0x2, 0x2, 0x2, 0x334, 0x337, 0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 
       0x3, 0x2, 0x2, 0x2, 0x336, 0x308, 0x3, 0x2, 0x2, 0x2, 0x336, 0x312, 
       0x3, 0x2, 0x2, 0x2, 0x336, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x336, 0x322, 
       0x3, 0x2, 0x2, 0x2, 0x336, 0x328, 0x3, 0x2, 0x2, 0x2, 0x336, 0x32b, 
       0x3, 0x2, 0x2, 0x2, 0x337, 0x363, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 
       0xc, 0x7, 0x2, 0x2, 0x339, 0x33b, 0x7, 0x3f, 0x2, 0x2, 0x33a, 0x33c, 
       0x5, 0x72, 0x3a, 0x2, 0x33b, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 
       0x3, 0x2, 0x2, 0x2, 0x33c, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33f, 
       0x5, 0x2c, 0x17, 0x2, 0x33e, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33f, 
       0x3, 0x2, 0x2, 0x2, 0x33f, 0x340, 0x3, 0x2, 0x2, 0x2, 0x340, 0x362, 
       0x7, 0x40, 0x2, 0x2, 0x341, 0x342, 0xc, 0x6, 0x2, 0x2, 0x342, 0x343, 
       0x7, 0x3f, 0x2, 0x2, 0x343, 0x345, 0x7, 0x2a, 0x2, 0x2, 0x344, 0x346, 
       0x5, 0x72, 0x3a, 0x2, 0x345, 0x344, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 
       0x3, 0x2, 0x2, 0x2, 0x346, 0x347, 0x3, 0x2, 0x2, 0x2, 0x347, 0x348, 
       0x5, 0x2c, 0x17, 0x2, 0x348, 0x349, 0x7, 0x40, 0x2, 0x2, 0x349, 0x362, 
       0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0xc, 0x5, 0x2, 0x2, 0x34b, 0x34c, 
       0x7, 0x3f, 0x2, 0x2, 0x34c, 0x34d, 0x5, 0x72, 0x3a, 0x2, 0x34d, 0x34e, 
       0x7, 0x2a, 0x2, 0x2, 0x34e, 0x34f, 0x5, 0x2c, 0x17, 0x2, 0x34f, 0x350, 
       0x7, 0x40, 0x2, 0x2, 0x350, 0x362, 0x3, 0x2, 0x2, 0x2, 0x351, 0x352, 
       0xc, 0x4, 0x2, 0x2, 0x352, 0x353, 0x7, 0x3f, 0x2, 0x2, 0x353, 0x354, 
       0x7, 0x4d, 0x2, 0x2, 0x354, 0x362, 0x7, 0x40, 0x2, 0x2, 0x355, 0x356, 
       0xc, 0x3, 0x2, 0x2, 0x356, 0x358, 0x7, 0x3d, 0x2, 0x2, 0x357, 0x359, 
       0x5, 0x74, 0x3b, 0x2, 0x358, 0x357, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 
       0x3, 0x2, 0x2, 0x2, 0x359, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35e, 
       0x7, 0x3e, 0x2, 0x2, 0x35b, 0x35d, 0x5, 0x66, 0x34, 0x2, 0x35c, 0x35b, 
       0x3, 0x2, 0x2, 0x2, 0x35d, 0x360, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x35c, 
       0x3, 0x2, 0x2, 0x2, 0x35e, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x362, 
       0x3, 0x2, 0x2, 0x2, 0x360, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x361, 0x338, 
       0x3, 0x2, 0x2, 0x2, 0x361, 0x341, 0x3, 0x2, 0x2, 0x2, 0x361, 0x34a, 
       0x3, 0x2, 0x2, 0x2, 0x361, 0x351, 0x3, 0x2, 0x2, 0x2, 0x361, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x362, 0x365, 0x3, 0x2, 0x2, 0x2, 0x363, 0x361, 
       0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x3, 0x2, 0x2, 0x2, 0x364, 0x81, 
       0x3, 0x2, 0x2, 0x2, 0x365, 0x363, 0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 
       0x7, 0x6b, 0x2, 0x2, 0x367, 0x83, 0x3, 0x2, 0x2, 0x2, 0x368, 0x371, 
       0x5, 0x2c, 0x17, 0x2, 0x369, 0x36a, 0x7, 0x41, 0x2, 0x2, 0x36a, 0x36c, 
       0x5, 0x86, 0x44, 0x2, 0x36b, 0x36d, 0x7, 0x5a, 0x2, 0x2, 0x36c, 0x36b, 
       0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 
       0x3, 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x7, 0x42, 0x2, 0x2, 0x36f, 0x371, 
       0x3, 0x2, 0x2, 0x2, 0x370, 0x368, 0x3, 0x2, 0x2, 0x2, 0x370, 0x369, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x85, 0x3, 0x2, 0x2, 0x2, 0x372, 0x374, 
       0x5, 0x88, 0x45, 0x2, 0x373, 0x372, 0x3, 0x2, 0x2, 0x2, 0x373, 0x374, 
       0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 0x3, 0x2, 0x2, 0x2, 0x375, 0x37d, 
       0x5, 0x84, 0x43, 0x2, 0x376, 0x378, 0x7, 0x5a, 0x2, 0x2, 0x377, 0x379, 
       0x5, 0x88, 0x45, 0x2, 0x378, 0x377, 0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 
       0x3, 0x2, 0x2, 0x2, 0x379, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37c, 
       0x5, 0x84, 0x43, 0x2, 0x37b, 0x376, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37f, 
       0x3, 0x2, 0x2, 0x2, 0x37d, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37e, 
       0x3, 0x2, 0x2, 0x2, 0x37e, 0x87, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x37d, 
       0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x5, 0x8a, 0x46, 0x2, 0x381, 0x382, 
       0x7, 0x5b, 0x2, 0x2, 0x382, 0x89, 0x3, 0x2, 0x2, 0x2, 0x383, 0x385, 
       0x5, 0x8c, 0x47, 0x2, 0x384, 0x383, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 
       0x3, 0x2, 0x2, 0x2, 0x386, 0x384, 0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 
       0x3, 0x2, 0x2, 0x2, 0x387, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 
       0x7, 0x3f, 0x2, 0x2, 0x389, 0x38a, 0x5, 0x32, 0x1a, 0x2, 0x38a, 0x38b, 
       0x7, 0x40, 0x2, 0x2, 0x38b, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 
       0x7, 0x69, 0x2, 0x2, 0x38d, 0x38f, 0x7, 0x6b, 0x2, 0x2, 0x38e, 0x388, 
       0x3, 0x2, 0x2, 0x2, 0x38e, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x8d, 
       0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x7, 0x3b, 0x2, 0x2, 0x391, 0x392, 
       0x7, 0x3d, 0x2, 0x2, 0x392, 0x393, 0x5, 0x32, 0x1a, 0x2, 0x393, 0x395, 
       0x7, 0x5a, 0x2, 0x2, 0x394, 0x396, 0x7, 0x6e, 0x2, 0x2, 0x395, 0x394, 
       0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x3, 0x2, 0x2, 0x2, 0x397, 0x395, 
       0x3, 0x2, 0x2, 0x2, 0x397, 0x398, 0x3, 0x2, 0x2, 0x2, 0x398, 0x399, 
       0x3, 0x2, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x3e, 0x2, 0x2, 0x39a, 0x39b, 
       0x7, 0x59, 0x2, 0x2, 0x39b, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x3c2, 
       0x5, 0x92, 0x4a, 0x2, 0x39d, 0x3c2, 0x5, 0x94, 0x4b, 0x2, 0x39e, 
       0x3c2, 0x5, 0x9a, 0x4e, 0x2, 0x39f, 0x3c2, 0x5, 0x9c, 0x4f, 0x2, 
       0x3a0, 0x3c2, 0x5, 0x9e, 0x50, 0x2, 0x3a1, 0x3c2, 0x5, 0xa6, 0x54, 
       0x2, 0x3a2, 0x3a3, 0x9, 0x16, 0x2, 0x2, 0x3a3, 0x3a4, 0x9, 0x17, 
       0x2, 0x2, 0x3a4, 0x3ad, 0x7, 0x3d, 0x2, 0x2, 0x3a5, 0x3aa, 0x5, 0x28, 
       0x15, 0x2, 0x3a6, 0x3a7, 0x7, 0x5a, 0x2, 0x2, 0x3a7, 0x3a9, 0x5, 
       0x28, 0x15, 0x2, 0x3a8, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3ac, 
       0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 
       0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3aa, 
       0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ae, 
       0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b8, 
       0x7, 0x58, 0x2, 0x2, 0x3b0, 0x3b5, 0x5, 0x28, 0x15, 0x2, 0x3b1, 0x3b2, 
       0x7, 0x5a, 0x2, 0x2, 0x3b2, 0x3b4, 0x5, 0x28, 0x15, 0x2, 0x3b3, 0x3b1, 
       0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b3, 
       0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b9, 
       0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b0, 
       0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3bb, 
       0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3be, 
       0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 
       0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bc, 
       0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x7, 0x3e, 0x2, 0x2, 0x3c0, 0x3c2, 
       0x7, 0x59, 0x2, 0x2, 0x3c1, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x39d, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x39f, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3a1, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x91, 
       0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c4, 0x7, 0x6b, 0x2, 0x2, 0x3c4, 0x3c5, 
       0x7, 0x58, 0x2, 0x2, 0x3c5, 0x3cf, 0x5, 0x90, 0x49, 0x2, 0x3c6, 0x3c7, 
       0x7, 0x13, 0x2, 0x2, 0x3c7, 0x3c8, 0x5, 0x32, 0x1a, 0x2, 0x3c8, 0x3c9, 
       0x7, 0x58, 0x2, 0x2, 0x3c9, 0x3ca, 0x5, 0x90, 0x49, 0x2, 0x3ca, 0x3cf, 
       0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3cc, 0x7, 0x17, 0x2, 0x2, 0x3cc, 0x3cd, 
       0x7, 0x58, 0x2, 0x2, 0x3cd, 0x3cf, 0x5, 0x90, 0x49, 0x2, 0x3ce, 0x3c3, 
       0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3cb, 
       0x3, 0x2, 0x2, 0x2, 0x3cf, 0x93, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d2, 
       0x7, 0x41, 0x2, 0x2, 0x3d1, 0x3d3, 0x5, 0x96, 0x4c, 0x2, 0x3d2, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 
       0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d5, 0x7, 0x42, 0x2, 0x2, 0x3d5, 0x95, 
       0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d8, 0x5, 0x98, 0x4d, 0x2, 0x3d7, 0x3d6, 
       0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3d7, 
       0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x97, 
       0x3, 0x2, 0x2, 0x2, 0x3db, 0x3de, 0x5, 0x90, 0x49, 0x2, 0x3dc, 0x3de, 
       0x5, 0x34, 0x1b, 0x2, 0x3dd, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3dc, 
       0x3, 0x2, 0x2, 0x2, 0x3de, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e1, 
       0x5, 0x30, 0x19, 0x2, 0x3e0, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 
       0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 
       0x7, 0x59, 0x2, 0x2, 0x3e3, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e5, 
       0x7, 0x20, 0x2, 0x2, 0x3e5, 0x3e6, 0x7, 0x3d, 0x2, 0x2, 0x3e6, 0x3e7, 
       0x5, 0x30, 0x19, 0x2, 0x3e7, 0x3e8, 0x7, 0x3e, 0x2, 0x2, 0x3e8, 0x3eb, 
       0x5, 0x90, 0x49, 0x2, 0x3e9, 0x3ea, 0x7, 0x1a, 0x2, 0x2, 0x3ea, 0x3ec, 
       0x5, 0x90, 0x49, 0x2, 0x3eb, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 
       0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3ee, 
       0x7, 0x2c, 0x2, 0x2, 0x3ee, 0x3ef, 0x7, 0x3d, 0x2, 0x2, 0x3ef, 0x3f0, 
       0x5, 0x30, 0x19, 0x2, 0x3f0, 0x3f1, 0x7, 0x3e, 0x2, 0x2, 0x3f1, 0x3f2, 
       0x5, 0x90, 0x49, 0x2, 0x3f2, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3e4, 
       0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 0x7, 0x32, 0x2, 0x2, 0x3f6, 0x3f7, 
       0x7, 0x3d, 0x2, 0x2, 0x3f7, 0x3f8, 0x5, 0x30, 0x19, 0x2, 0x3f8, 0x3f9, 
       0x7, 0x3e, 0x2, 0x2, 0x3f9, 0x3fa, 0x5, 0x90, 0x49, 0x2, 0x3fa, 0x40a, 
       0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x18, 0x2, 0x2, 0x3fc, 0x3fd, 
       0x5, 0x90, 0x49, 0x2, 0x3fd, 0x3fe, 0x7, 0x32, 0x2, 0x2, 0x3fe, 0x3ff, 
       0x7, 0x3d, 0x2, 0x2, 0x3ff, 0x400, 0x5, 0x30, 0x19, 0x2, 0x400, 0x401, 
       0x7, 0x3e, 0x2, 0x2, 0x401, 0x402, 0x7, 0x59, 0x2, 0x2, 0x402, 0x40a, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 0x7, 0x1e, 0x2, 0x2, 0x404, 0x405, 
       0x7, 0x3d, 0x2, 0x2, 0x405, 0x406, 0x5, 0xa0, 0x51, 0x2, 0x406, 0x407, 
       0x7, 0x3e, 0x2, 0x2, 0x407, 0x408, 0x5, 0x90, 0x49, 0x2, 0x408, 0x40a, 
       0x3, 0x2, 0x2, 0x2, 0x409, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x409, 0x3fb, 
       0x3, 0x2, 0x2, 0x2, 0x409, 0x403, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x40b, 0x410, 0x5, 0xa2, 0x52, 0x2, 0x40c, 0x40e, 
       0x5, 0x30, 0x19, 0x2, 0x40d, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 
       0x3, 0x2, 0x2, 0x2, 0x40e, 0x410, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x40b, 
       0x3, 0x2, 0x2, 0x2, 0x40f, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 
       0x3, 0x2, 0x2, 0x2, 0x411, 0x413, 0x7, 0x59, 0x2, 0x2, 0x412, 0x414, 
       0x5, 0xa4, 0x53, 0x2, 0x413, 0x412, 0x3, 0x2, 0x2, 0x2, 0x413, 0x414, 
       0x3, 0x2, 0x2, 0x2, 0x414, 0x415, 0x3, 0x2, 0x2, 0x2, 0x415, 0x417, 
       0x7, 0x59, 0x2, 0x2, 0x416, 0x418, 0x5, 0xa4, 0x53, 0x2, 0x417, 0x416, 
       0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 0x3, 0x2, 0x2, 0x2, 0x418, 0xa1, 
       0x3, 0x2, 0x2, 0x2, 0x419, 0x41b, 0x5, 0x36, 0x1c, 0x2, 0x41a, 0x41c, 
       0x5, 0x3c, 0x1f, 0x2, 0x41b, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41c, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x422, 
       0x5, 0x2c, 0x17, 0x2, 0x41e, 0x41f, 0x7, 0x5a, 0x2, 0x2, 0x41f, 0x421, 
       0x5, 0x2c, 0x17, 0x2, 0x420, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x421, 0x424, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x422, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x423, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x424, 0x422, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x426, 0x7, 0x1f, 0x2, 0x2, 0x426, 0x42f, 
       0x7, 0x6b, 0x2, 0x2, 0x427, 0x42f, 0x9, 0x18, 0x2, 0x2, 0x428, 0x42a, 
       0x7, 0x26, 0x2, 0x2, 0x429, 0x42b, 0x5, 0x30, 0x19, 0x2, 0x42a, 0x429, 
       0x3, 0x2, 0x2, 0x2, 0x42a, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42f, 
       0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x7, 0x1f, 0x2, 0x2, 0x42d, 0x42f, 
       0x5, 0x10, 0x9, 0x2, 0x42e, 0x425, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x427, 
       0x3, 0x2, 0x2, 0x2, 0x42e, 0x428, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42c, 
       0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 0x3, 0x2, 0x2, 0x2, 0x430, 0x431, 
       0x7, 0x59, 0x2, 0x2, 0x431, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x432, 0x434, 
       0x5, 0xaa, 0x56, 0x2, 0x433, 0x432, 0x3, 0x2, 0x2, 0x2, 0x433, 0x434, 
       0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x3, 0x2, 0x2, 0x2, 0x435, 0x436, 
       0x7, 0x2, 0x2, 0x3, 0x436, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x437, 0x439, 
       0x5, 0xac, 0x57, 0x2, 0x438, 0x437, 0x3, 0x2, 0x2, 0x2, 0x439, 0x43a, 
       0x3, 0x2, 0x2, 0x2, 0x43a, 0x438, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x43b, 
       0x3, 0x2, 0x2, 0x2, 0x43b, 0xab, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x440, 
       0x5, 0xae, 0x58, 0x2, 0x43d, 0x440, 0x5, 0x34, 0x1b, 0x2, 0x43e, 
       0x440, 0x7, 0x59, 0x2, 0x2, 0x43f, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43f, 
       0x43d, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x440, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x441, 0x443, 0x5, 0x36, 0x1c, 0x2, 0x442, 
       0x441, 0x3, 0x2, 0x2, 0x2, 0x442, 0x443, 0x3, 0x2, 0x2, 0x2, 0x443, 
       0x444, 0x3, 0x2, 0x2, 0x2, 0x444, 0x446, 0x5, 0x62, 0x32, 0x2, 0x445, 
       0x447, 0x5, 0xb0, 0x59, 0x2, 0x446, 0x445, 0x3, 0x2, 0x2, 0x2, 0x446, 
       0x447, 0x3, 0x2, 0x2, 0x2, 0x447, 0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 
       0x449, 0x5, 0x94, 0x4b, 0x2, 0x449, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x44a, 
       0x44c, 0x5, 0x34, 0x1b, 0x2, 0x44b, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x44c, 
       0x44d, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44d, 
       0x44e, 0x3, 0x2, 0x2, 0x2, 0x44e, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x8b, 
       0xb9, 0xc1, 0xd5, 0xe3, 0xe8, 0xef, 0xf7, 0xfb, 0x103, 0x10b, 0x10d, 
       0x115, 0x11b, 0x129, 0x12e, 0x137, 0x13e, 0x146, 0x14e, 0x156, 0x15e, 
       0x166, 0x16e, 0x176, 0x17e, 0x186, 0x18f, 0x197, 0x1a0, 0x1a7, 0x1ac, 
       0x1b1, 0x1b6, 0x1bd, 0x1c4, 0x1ca, 0x1dd, 0x1e3, 0x1e8, 0x1f1, 0x1f8, 
       0x1fc, 0x201, 0x205, 0x208, 0x20f, 0x214, 0x218, 0x21c, 0x221, 0x227, 
       0x22e, 0x234, 0x245, 0x24b, 0x250, 0x256, 0x264, 0x26a, 0x26f, 0x272, 
       0x279, 0x288, 0x294, 0x297, 0x299, 0x2a1, 0x2a5, 0x2af, 0x2b3, 0x2b7, 
       0x2bd, 0x2c0, 0x2c7, 0x2c9, 0x2ce, 0x2d2, 0x2d7, 0x2dc, 0x2e3, 0x2eb, 
       0x2ed, 0x2f4, 0x2f9, 0x2fd, 0x303, 0x306, 0x30f, 0x314, 0x317, 0x31d, 
       0x32d, 0x333, 0x336, 0x33b, 0x33e, 0x345, 0x358, 0x35e, 0x361, 0x363, 
       0x36c, 0x370, 0x373, 0x378, 0x37d, 0x386, 0x38e, 0x397, 0x3aa, 0x3ad, 
       0x3b5, 0x3b8, 0x3bc, 0x3c1, 0x3ce, 0x3d2, 0x3d9, 0x3dd, 0x3e0, 0x3eb, 
       0x3f3, 0x409, 0x40d, 0x40f, 0x413, 0x417, 0x41b, 0x422, 0x42a, 0x42e, 
       0x433, 0x43a, 0x43f, 0x442, 0x446, 0x44d, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CParser::Initializer CParser::_init;
