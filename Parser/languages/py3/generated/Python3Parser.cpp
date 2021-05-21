
// Generated from Python3.g4 by ANTLR 4.9.2


#include "Python3Listener.h"
#include "Python3Visitor.h"

#include "Python3Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Python3Parser::Python3Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Python3Parser::~Python3Parser() {
  delete _interpreter;
}

std::string Python3Parser::getGrammarFileName() const {
  return "Python3.g4";
}

const std::vector<std::string>& Python3Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Python3Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Single_inputContext ------------------------------------------------------------------

Python3Parser::Single_inputContext::Single_inputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Single_inputContext::NEWLINE() {
  return getToken(Python3Parser::NEWLINE, 0);
}

Python3Parser::Simple_stmtContext* Python3Parser::Single_inputContext::simple_stmt() {
  return getRuleContext<Python3Parser::Simple_stmtContext>(0);
}

Python3Parser::Compound_stmtContext* Python3Parser::Single_inputContext::compound_stmt() {
  return getRuleContext<Python3Parser::Compound_stmtContext>(0);
}


size_t Python3Parser::Single_inputContext::getRuleIndex() const {
  return Python3Parser::RuleSingle_input;
}

void Python3Parser::Single_inputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle_input(this);
}

void Python3Parser::Single_inputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle_input(this);
}


antlrcpp::Any Python3Parser::Single_inputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSingle_input(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Single_inputContext* Python3Parser::single_input() {
  Single_inputContext *_localctx = _tracker.createInstance<Single_inputContext>(_ctx, getState());
  enterRule(_localctx, 0, Python3Parser::RuleSingle_input);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NEWLINE: {
        enterOuterAlt(_localctx, 1);
        setState(176);
        match(Python3Parser::NEWLINE);
        break;
      }

      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::RETURN:
      case Python3Parser::RAISE:
      case Python3Parser::FROM:
      case Python3Parser::IMPORT:
      case Python3Parser::GLOBAL:
      case Python3Parser::NONLOCAL:
      case Python3Parser::ASSERT:
      case Python3Parser::LAMBDA:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::YIELD:
      case Python3Parser::DEL:
      case Python3Parser::PASS:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::STAR:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(177);
        simple_stmt();
        break;
      }

      case Python3Parser::DEF:
      case Python3Parser::IF:
      case Python3Parser::WHILE:
      case Python3Parser::FOR:
      case Python3Parser::TRY:
      case Python3Parser::WITH:
      case Python3Parser::CLASS:
      case Python3Parser::ASYNC:
      case Python3Parser::AT: {
        enterOuterAlt(_localctx, 3);
        setState(178);
        compound_stmt();
        setState(179);
        match(Python3Parser::NEWLINE);
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

//----------------- File_inputContext ------------------------------------------------------------------

Python3Parser::File_inputContext::File_inputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::File_inputContext::EOF() {
  return getToken(Python3Parser::EOF, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::File_inputContext::NEWLINE() {
  return getTokens(Python3Parser::NEWLINE);
}

tree::TerminalNode* Python3Parser::File_inputContext::NEWLINE(size_t i) {
  return getToken(Python3Parser::NEWLINE, i);
}

std::vector<Python3Parser::StmtContext *> Python3Parser::File_inputContext::stmt() {
  return getRuleContexts<Python3Parser::StmtContext>();
}

Python3Parser::StmtContext* Python3Parser::File_inputContext::stmt(size_t i) {
  return getRuleContext<Python3Parser::StmtContext>(i);
}


size_t Python3Parser::File_inputContext::getRuleIndex() const {
  return Python3Parser::RuleFile_input;
}

void Python3Parser::File_inputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_input(this);
}

void Python3Parser::File_inputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_input(this);
}


antlrcpp::Any Python3Parser::File_inputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFile_input(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::File_inputContext* Python3Parser::file_input() {
  File_inputContext *_localctx = _tracker.createInstance<File_inputContext>(_ctx, getState());
  enterRule(_localctx, 2, Python3Parser::RuleFile_input);
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
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::DEF)
      | (1ULL << Python3Parser::RETURN)
      | (1ULL << Python3Parser::RAISE)
      | (1ULL << Python3Parser::FROM)
      | (1ULL << Python3Parser::IMPORT)
      | (1ULL << Python3Parser::GLOBAL)
      | (1ULL << Python3Parser::NONLOCAL)
      | (1ULL << Python3Parser::ASSERT)
      | (1ULL << Python3Parser::IF)
      | (1ULL << Python3Parser::WHILE)
      | (1ULL << Python3Parser::FOR)
      | (1ULL << Python3Parser::TRY)
      | (1ULL << Python3Parser::WITH)
      | (1ULL << Python3Parser::LAMBDA)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::CLASS)
      | (1ULL << Python3Parser::YIELD)
      | (1ULL << Python3Parser::DEL)
      | (1ULL << Python3Parser::PASS)
      | (1ULL << Python3Parser::CONTINUE)
      | (1ULL << Python3Parser::BREAK)
      | (1ULL << Python3Parser::ASYNC)
      | (1ULL << Python3Parser::AWAIT)
      | (1ULL << Python3Parser::NEWLINE)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::ELLIPSIS)
      | (1ULL << Python3Parser::STAR)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
      | (1ULL << (Python3Parser::MINUS - 66))
      | (1ULL << (Python3Parser::NOT_OP - 66))
      | (1ULL << (Python3Parser::OPEN_BRACE - 66))
      | (1ULL << (Python3Parser::AT - 66)))) != 0)) {
      setState(185);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::NEWLINE: {
          setState(183);
          match(Python3Parser::NEWLINE);
          break;
        }

        case Python3Parser::STRING:
        case Python3Parser::NUMBER:
        case Python3Parser::DEF:
        case Python3Parser::RETURN:
        case Python3Parser::RAISE:
        case Python3Parser::FROM:
        case Python3Parser::IMPORT:
        case Python3Parser::GLOBAL:
        case Python3Parser::NONLOCAL:
        case Python3Parser::ASSERT:
        case Python3Parser::IF:
        case Python3Parser::WHILE:
        case Python3Parser::FOR:
        case Python3Parser::TRY:
        case Python3Parser::WITH:
        case Python3Parser::LAMBDA:
        case Python3Parser::NOT:
        case Python3Parser::NONE:
        case Python3Parser::TRUE:
        case Python3Parser::FALSE:
        case Python3Parser::CLASS:
        case Python3Parser::YIELD:
        case Python3Parser::DEL:
        case Python3Parser::PASS:
        case Python3Parser::CONTINUE:
        case Python3Parser::BREAK:
        case Python3Parser::ASYNC:
        case Python3Parser::AWAIT:
        case Python3Parser::NAME:
        case Python3Parser::ELLIPSIS:
        case Python3Parser::STAR:
        case Python3Parser::OPEN_PAREN:
        case Python3Parser::OPEN_BRACK:
        case Python3Parser::ADD:
        case Python3Parser::MINUS:
        case Python3Parser::NOT_OP:
        case Python3Parser::OPEN_BRACE:
        case Python3Parser::AT: {
          setState(184);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(190);
    match(Python3Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Eval_inputContext ------------------------------------------------------------------

Python3Parser::Eval_inputContext::Eval_inputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::TestlistContext* Python3Parser::Eval_inputContext::testlist() {
  return getRuleContext<Python3Parser::TestlistContext>(0);
}

tree::TerminalNode* Python3Parser::Eval_inputContext::EOF() {
  return getToken(Python3Parser::EOF, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::Eval_inputContext::NEWLINE() {
  return getTokens(Python3Parser::NEWLINE);
}

tree::TerminalNode* Python3Parser::Eval_inputContext::NEWLINE(size_t i) {
  return getToken(Python3Parser::NEWLINE, i);
}


size_t Python3Parser::Eval_inputContext::getRuleIndex() const {
  return Python3Parser::RuleEval_input;
}

void Python3Parser::Eval_inputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEval_input(this);
}

void Python3Parser::Eval_inputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEval_input(this);
}


antlrcpp::Any Python3Parser::Eval_inputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitEval_input(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Eval_inputContext* Python3Parser::eval_input() {
  Eval_inputContext *_localctx = _tracker.createInstance<Eval_inputContext>(_ctx, getState());
  enterRule(_localctx, 4, Python3Parser::RuleEval_input);
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
    setState(192);
    testlist();
    setState(196);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::NEWLINE) {
      setState(193);
      match(Python3Parser::NEWLINE);
      setState(198);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(199);
    match(Python3Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratorContext ------------------------------------------------------------------

Python3Parser::DecoratorContext::DecoratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::DecoratorContext::AT() {
  return getToken(Python3Parser::AT, 0);
}

Python3Parser::Dotted_nameContext* Python3Parser::DecoratorContext::dotted_name() {
  return getRuleContext<Python3Parser::Dotted_nameContext>(0);
}

tree::TerminalNode* Python3Parser::DecoratorContext::NEWLINE() {
  return getToken(Python3Parser::NEWLINE, 0);
}

tree::TerminalNode* Python3Parser::DecoratorContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::DecoratorContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::ArglistContext* Python3Parser::DecoratorContext::arglist() {
  return getRuleContext<Python3Parser::ArglistContext>(0);
}


size_t Python3Parser::DecoratorContext::getRuleIndex() const {
  return Python3Parser::RuleDecorator;
}

void Python3Parser::DecoratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecorator(this);
}

void Python3Parser::DecoratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecorator(this);
}


antlrcpp::Any Python3Parser::DecoratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitDecorator(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::DecoratorContext* Python3Parser::decorator() {
  DecoratorContext *_localctx = _tracker.createInstance<DecoratorContext>(_ctx, getState());
  enterRule(_localctx, 6, Python3Parser::RuleDecorator);
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
    setState(201);
    match(Python3Parser::AT);
    setState(202);
    dotted_name();
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::OPEN_PAREN) {
      setState(203);
      match(Python3Parser::OPEN_PAREN);
      setState(205);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
        | (1ULL << Python3Parser::NUMBER)
        | (1ULL << Python3Parser::LAMBDA)
        | (1ULL << Python3Parser::NOT)
        | (1ULL << Python3Parser::NONE)
        | (1ULL << Python3Parser::TRUE)
        | (1ULL << Python3Parser::FALSE)
        | (1ULL << Python3Parser::AWAIT)
        | (1ULL << Python3Parser::NAME)
        | (1ULL << Python3Parser::ELLIPSIS)
        | (1ULL << Python3Parser::STAR)
        | (1ULL << Python3Parser::OPEN_PAREN)
        | (1ULL << Python3Parser::POWER)
        | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
        | (1ULL << (Python3Parser::MINUS - 66))
        | (1ULL << (Python3Parser::NOT_OP - 66))
        | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
        setState(204);
        arglist();
      }
      setState(207);
      match(Python3Parser::CLOSE_PAREN);
    }
    setState(210);
    match(Python3Parser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratorsContext ------------------------------------------------------------------

Python3Parser::DecoratorsContext::DecoratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::DecoratorContext *> Python3Parser::DecoratorsContext::decorator() {
  return getRuleContexts<Python3Parser::DecoratorContext>();
}

Python3Parser::DecoratorContext* Python3Parser::DecoratorsContext::decorator(size_t i) {
  return getRuleContext<Python3Parser::DecoratorContext>(i);
}


size_t Python3Parser::DecoratorsContext::getRuleIndex() const {
  return Python3Parser::RuleDecorators;
}

void Python3Parser::DecoratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecorators(this);
}

void Python3Parser::DecoratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecorators(this);
}


antlrcpp::Any Python3Parser::DecoratorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitDecorators(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::DecoratorsContext* Python3Parser::decorators() {
  DecoratorsContext *_localctx = _tracker.createInstance<DecoratorsContext>(_ctx, getState());
  enterRule(_localctx, 8, Python3Parser::RuleDecorators);
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
    setState(213); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(212);
      decorator();
      setState(215); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == Python3Parser::AT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratedContext ------------------------------------------------------------------

Python3Parser::DecoratedContext::DecoratedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::DecoratorsContext* Python3Parser::DecoratedContext::decorators() {
  return getRuleContext<Python3Parser::DecoratorsContext>(0);
}

Python3Parser::ClassdefContext* Python3Parser::DecoratedContext::classdef() {
  return getRuleContext<Python3Parser::ClassdefContext>(0);
}

Python3Parser::FuncdefContext* Python3Parser::DecoratedContext::funcdef() {
  return getRuleContext<Python3Parser::FuncdefContext>(0);
}

Python3Parser::Async_funcdefContext* Python3Parser::DecoratedContext::async_funcdef() {
  return getRuleContext<Python3Parser::Async_funcdefContext>(0);
}


size_t Python3Parser::DecoratedContext::getRuleIndex() const {
  return Python3Parser::RuleDecorated;
}

void Python3Parser::DecoratedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecorated(this);
}

void Python3Parser::DecoratedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecorated(this);
}


antlrcpp::Any Python3Parser::DecoratedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitDecorated(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::DecoratedContext* Python3Parser::decorated() {
  DecoratedContext *_localctx = _tracker.createInstance<DecoratedContext>(_ctx, getState());
  enterRule(_localctx, 10, Python3Parser::RuleDecorated);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    decorators();
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::CLASS: {
        setState(218);
        classdef();
        break;
      }

      case Python3Parser::DEF: {
        setState(219);
        funcdef();
        break;
      }

      case Python3Parser::ASYNC: {
        setState(220);
        async_funcdef();
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

//----------------- Async_funcdefContext ------------------------------------------------------------------

Python3Parser::Async_funcdefContext::Async_funcdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Async_funcdefContext::ASYNC() {
  return getToken(Python3Parser::ASYNC, 0);
}

Python3Parser::FuncdefContext* Python3Parser::Async_funcdefContext::funcdef() {
  return getRuleContext<Python3Parser::FuncdefContext>(0);
}


size_t Python3Parser::Async_funcdefContext::getRuleIndex() const {
  return Python3Parser::RuleAsync_funcdef;
}

void Python3Parser::Async_funcdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsync_funcdef(this);
}

void Python3Parser::Async_funcdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsync_funcdef(this);
}


antlrcpp::Any Python3Parser::Async_funcdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAsync_funcdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Async_funcdefContext* Python3Parser::async_funcdef() {
  Async_funcdefContext *_localctx = _tracker.createInstance<Async_funcdefContext>(_ctx, getState());
  enterRule(_localctx, 12, Python3Parser::RuleAsync_funcdef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(Python3Parser::ASYNC);
    setState(224);
    funcdef();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefContext ------------------------------------------------------------------

Python3Parser::FuncdefContext::FuncdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::FuncdefContext::DEF() {
  return getToken(Python3Parser::DEF, 0);
}

Python3Parser::NameContext* Python3Parser::FuncdefContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}

Python3Parser::ParametersContext* Python3Parser::FuncdefContext::parameters() {
  return getRuleContext<Python3Parser::ParametersContext>(0);
}

tree::TerminalNode* Python3Parser::FuncdefContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::FuncbodyContext* Python3Parser::FuncdefContext::funcbody() {
  return getRuleContext<Python3Parser::FuncbodyContext>(0);
}

tree::TerminalNode* Python3Parser::FuncdefContext::ARROW() {
  return getToken(Python3Parser::ARROW, 0);
}

Python3Parser::TestContext* Python3Parser::FuncdefContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}


size_t Python3Parser::FuncdefContext::getRuleIndex() const {
  return Python3Parser::RuleFuncdef;
}

void Python3Parser::FuncdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncdef(this);
}

void Python3Parser::FuncdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncdef(this);
}


antlrcpp::Any Python3Parser::FuncdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFuncdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FuncdefContext* Python3Parser::funcdef() {
  FuncdefContext *_localctx = _tracker.createInstance<FuncdefContext>(_ctx, getState());
  enterRule(_localctx, 14, Python3Parser::RuleFuncdef);
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
    setState(226);
    match(Python3Parser::DEF);
    setState(227);
    name();
    setState(228);
    parameters();
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ARROW) {
      setState(229);
      match(Python3Parser::ARROW);
      setState(230);
      test();
    }
    setState(233);
    match(Python3Parser::COLON);
    setState(234);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncbodyContext ------------------------------------------------------------------

Python3Parser::FuncbodyContext::FuncbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::SuiteContext* Python3Parser::FuncbodyContext::suite() {
  return getRuleContext<Python3Parser::SuiteContext>(0);
}


size_t Python3Parser::FuncbodyContext::getRuleIndex() const {
  return Python3Parser::RuleFuncbody;
}

void Python3Parser::FuncbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncbody(this);
}

void Python3Parser::FuncbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncbody(this);
}


antlrcpp::Any Python3Parser::FuncbodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFuncbody(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FuncbodyContext* Python3Parser::funcbody() {
  FuncbodyContext *_localctx = _tracker.createInstance<FuncbodyContext>(_ctx, getState());
  enterRule(_localctx, 16, Python3Parser::RuleFuncbody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    suite();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

Python3Parser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::ParametersContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::ParametersContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::TypedargslistContext* Python3Parser::ParametersContext::typedargslist() {
  return getRuleContext<Python3Parser::TypedargslistContext>(0);
}


size_t Python3Parser::ParametersContext::getRuleIndex() const {
  return Python3Parser::RuleParameters;
}

void Python3Parser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void Python3Parser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}


antlrcpp::Any Python3Parser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ParametersContext* Python3Parser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 18, Python3Parser::RuleParameters);
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
    setState(238);
    match(Python3Parser::OPEN_PAREN);
    setState(240);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::STAR)
      | (1ULL << Python3Parser::POWER))) != 0)) {
      setState(239);
      typedargslist();
    }
    setState(242);
    match(Python3Parser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedargslistContext ------------------------------------------------------------------

Python3Parser::TypedargslistContext::TypedargslistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TfpdefContext *> Python3Parser::TypedargslistContext::tfpdef() {
  return getRuleContexts<Python3Parser::TfpdefContext>();
}

Python3Parser::TfpdefContext* Python3Parser::TypedargslistContext::tfpdef(size_t i) {
  return getRuleContext<Python3Parser::TfpdefContext>(i);
}

tree::TerminalNode* Python3Parser::TypedargslistContext::STAR() {
  return getToken(Python3Parser::STAR, 0);
}

tree::TerminalNode* Python3Parser::TypedargslistContext::POWER() {
  return getToken(Python3Parser::POWER, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::TypedargslistContext::ASSIGN() {
  return getTokens(Python3Parser::ASSIGN);
}

tree::TerminalNode* Python3Parser::TypedargslistContext::ASSIGN(size_t i) {
  return getToken(Python3Parser::ASSIGN, i);
}

std::vector<Python3Parser::TestContext *> Python3Parser::TypedargslistContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::TypedargslistContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TypedargslistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::TypedargslistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::TypedargslistContext::getRuleIndex() const {
  return Python3Parser::RuleTypedargslist;
}

void Python3Parser::TypedargslistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedargslist(this);
}

void Python3Parser::TypedargslistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedargslist(this);
}


antlrcpp::Any Python3Parser::TypedargslistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTypedargslist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TypedargslistContext* Python3Parser::typedargslist() {
  TypedargslistContext *_localctx = _tracker.createInstance<TypedargslistContext>(_ctx, getState());
  enterRule(_localctx, 20, Python3Parser::RuleTypedargslist);
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
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NAME: {
        setState(244);
        tfpdef();
        setState(247);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::ASSIGN) {
          setState(245);
          match(Python3Parser::ASSIGN);
          setState(246);
          test();
        }
        setState(257);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(249);
            match(Python3Parser::COMMA);
            setState(250);
            tfpdef();
            setState(253);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::ASSIGN) {
              setState(251);
              match(Python3Parser::ASSIGN);
              setState(252);
              test();
            } 
          }
          setState(259);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
        }
        setState(293);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(260);
          match(Python3Parser::COMMA);
          setState(291);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case Python3Parser::STAR: {
              setState(261);
              match(Python3Parser::STAR);
              setState(263);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::NAME) {
                setState(262);
                tfpdef();
              }
              setState(273);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
              while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                  setState(265);
                  match(Python3Parser::COMMA);
                  setState(266);
                  tfpdef();
                  setState(269);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Python3Parser::ASSIGN) {
                    setState(267);
                    match(Python3Parser::ASSIGN);
                    setState(268);
                    test();
                  } 
                }
                setState(275);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
              }
              setState(284);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::COMMA) {
                setState(276);
                match(Python3Parser::COMMA);
                setState(282);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == Python3Parser::POWER) {
                  setState(277);
                  match(Python3Parser::POWER);
                  setState(278);
                  tfpdef();
                  setState(280);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Python3Parser::COMMA) {
                    setState(279);
                    match(Python3Parser::COMMA);
                  }
                }
              }
              break;
            }

            case Python3Parser::POWER: {
              setState(286);
              match(Python3Parser::POWER);
              setState(287);
              tfpdef();
              setState(289);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::COMMA) {
                setState(288);
                match(Python3Parser::COMMA);
              }
              break;
            }

            case Python3Parser::CLOSE_PAREN: {
              break;
            }

          default:
            break;
          }
        }
        break;
      }

      case Python3Parser::STAR: {
        setState(295);
        match(Python3Parser::STAR);
        setState(297);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::NAME) {
          setState(296);
          tfpdef();
        }
        setState(307);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(299);
            match(Python3Parser::COMMA);
            setState(300);
            tfpdef();
            setState(303);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::ASSIGN) {
              setState(301);
              match(Python3Parser::ASSIGN);
              setState(302);
              test();
            } 
          }
          setState(309);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
        }
        setState(318);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(310);
          match(Python3Parser::COMMA);
          setState(316);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == Python3Parser::POWER) {
            setState(311);
            match(Python3Parser::POWER);
            setState(312);
            tfpdef();
            setState(314);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::COMMA) {
              setState(313);
              match(Python3Parser::COMMA);
            }
          }
        }
        break;
      }

      case Python3Parser::POWER: {
        setState(320);
        match(Python3Parser::POWER);
        setState(321);
        tfpdef();
        setState(323);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(322);
          match(Python3Parser::COMMA);
        }
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

//----------------- TfpdefContext ------------------------------------------------------------------

Python3Parser::TfpdefContext::TfpdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::NameContext* Python3Parser::TfpdefContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}

tree::TerminalNode* Python3Parser::TfpdefContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::TestContext* Python3Parser::TfpdefContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}


size_t Python3Parser::TfpdefContext::getRuleIndex() const {
  return Python3Parser::RuleTfpdef;
}

void Python3Parser::TfpdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTfpdef(this);
}

void Python3Parser::TfpdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTfpdef(this);
}


antlrcpp::Any Python3Parser::TfpdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTfpdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TfpdefContext* Python3Parser::tfpdef() {
  TfpdefContext *_localctx = _tracker.createInstance<TfpdefContext>(_ctx, getState());
  enterRule(_localctx, 22, Python3Parser::RuleTfpdef);
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
    name();
    setState(330);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COLON) {
      setState(328);
      match(Python3Parser::COLON);
      setState(329);
      test();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarargslistContext ------------------------------------------------------------------

Python3Parser::VarargslistContext::VarargslistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::VfpdefContext *> Python3Parser::VarargslistContext::vfpdef() {
  return getRuleContexts<Python3Parser::VfpdefContext>();
}

Python3Parser::VfpdefContext* Python3Parser::VarargslistContext::vfpdef(size_t i) {
  return getRuleContext<Python3Parser::VfpdefContext>(i);
}

tree::TerminalNode* Python3Parser::VarargslistContext::STAR() {
  return getToken(Python3Parser::STAR, 0);
}

tree::TerminalNode* Python3Parser::VarargslistContext::POWER() {
  return getToken(Python3Parser::POWER, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::VarargslistContext::ASSIGN() {
  return getTokens(Python3Parser::ASSIGN);
}

tree::TerminalNode* Python3Parser::VarargslistContext::ASSIGN(size_t i) {
  return getToken(Python3Parser::ASSIGN, i);
}

std::vector<Python3Parser::TestContext *> Python3Parser::VarargslistContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::VarargslistContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::VarargslistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::VarargslistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::VarargslistContext::getRuleIndex() const {
  return Python3Parser::RuleVarargslist;
}

void Python3Parser::VarargslistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarargslist(this);
}

void Python3Parser::VarargslistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarargslist(this);
}


antlrcpp::Any Python3Parser::VarargslistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitVarargslist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::VarargslistContext* Python3Parser::varargslist() {
  VarargslistContext *_localctx = _tracker.createInstance<VarargslistContext>(_ctx, getState());
  enterRule(_localctx, 24, Python3Parser::RuleVarargslist);
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
    setState(413);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NAME: {
        setState(332);
        vfpdef();
        setState(335);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::ASSIGN) {
          setState(333);
          match(Python3Parser::ASSIGN);
          setState(334);
          test();
        }
        setState(345);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(337);
            match(Python3Parser::COMMA);
            setState(338);
            vfpdef();
            setState(341);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::ASSIGN) {
              setState(339);
              match(Python3Parser::ASSIGN);
              setState(340);
              test();
            } 
          }
          setState(347);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
        }
        setState(381);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(348);
          match(Python3Parser::COMMA);
          setState(379);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case Python3Parser::STAR: {
              setState(349);
              match(Python3Parser::STAR);
              setState(351);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::NAME) {
                setState(350);
                vfpdef();
              }
              setState(361);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
              while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                  setState(353);
                  match(Python3Parser::COMMA);
                  setState(354);
                  vfpdef();
                  setState(357);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Python3Parser::ASSIGN) {
                    setState(355);
                    match(Python3Parser::ASSIGN);
                    setState(356);
                    test();
                  } 
                }
                setState(363);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
              }
              setState(372);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::COMMA) {
                setState(364);
                match(Python3Parser::COMMA);
                setState(370);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == Python3Parser::POWER) {
                  setState(365);
                  match(Python3Parser::POWER);
                  setState(366);
                  vfpdef();
                  setState(368);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Python3Parser::COMMA) {
                    setState(367);
                    match(Python3Parser::COMMA);
                  }
                }
              }
              break;
            }

            case Python3Parser::POWER: {
              setState(374);
              match(Python3Parser::POWER);
              setState(375);
              vfpdef();
              setState(377);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::COMMA) {
                setState(376);
                match(Python3Parser::COMMA);
              }
              break;
            }

            case Python3Parser::COLON: {
              break;
            }

          default:
            break;
          }
        }
        break;
      }

      case Python3Parser::STAR: {
        setState(383);
        match(Python3Parser::STAR);
        setState(385);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::NAME) {
          setState(384);
          vfpdef();
        }
        setState(395);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(387);
            match(Python3Parser::COMMA);
            setState(388);
            vfpdef();
            setState(391);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::ASSIGN) {
              setState(389);
              match(Python3Parser::ASSIGN);
              setState(390);
              test();
            } 
          }
          setState(397);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
        }
        setState(406);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(398);
          match(Python3Parser::COMMA);
          setState(404);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == Python3Parser::POWER) {
            setState(399);
            match(Python3Parser::POWER);
            setState(400);
            vfpdef();
            setState(402);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::COMMA) {
              setState(401);
              match(Python3Parser::COMMA);
            }
          }
        }
        break;
      }

      case Python3Parser::POWER: {
        setState(408);
        match(Python3Parser::POWER);
        setState(409);
        vfpdef();
        setState(411);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(410);
          match(Python3Parser::COMMA);
        }
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

//----------------- VfpdefContext ------------------------------------------------------------------

Python3Parser::VfpdefContext::VfpdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::NameContext* Python3Parser::VfpdefContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}


size_t Python3Parser::VfpdefContext::getRuleIndex() const {
  return Python3Parser::RuleVfpdef;
}

void Python3Parser::VfpdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVfpdef(this);
}

void Python3Parser::VfpdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVfpdef(this);
}


antlrcpp::Any Python3Parser::VfpdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitVfpdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::VfpdefContext* Python3Parser::vfpdef() {
  VfpdefContext *_localctx = _tracker.createInstance<VfpdefContext>(_ctx, getState());
  enterRule(_localctx, 26, Python3Parser::RuleVfpdef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

Python3Parser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Simple_stmtContext* Python3Parser::StmtContext::simple_stmt() {
  return getRuleContext<Python3Parser::Simple_stmtContext>(0);
}

Python3Parser::Compound_stmtContext* Python3Parser::StmtContext::compound_stmt() {
  return getRuleContext<Python3Parser::Compound_stmtContext>(0);
}


size_t Python3Parser::StmtContext::getRuleIndex() const {
  return Python3Parser::RuleStmt;
}

void Python3Parser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void Python3Parser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any Python3Parser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::StmtContext* Python3Parser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 28, Python3Parser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(419);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::RETURN:
      case Python3Parser::RAISE:
      case Python3Parser::FROM:
      case Python3Parser::IMPORT:
      case Python3Parser::GLOBAL:
      case Python3Parser::NONLOCAL:
      case Python3Parser::ASSERT:
      case Python3Parser::LAMBDA:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::YIELD:
      case Python3Parser::DEL:
      case Python3Parser::PASS:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::STAR:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(417);
        simple_stmt();
        break;
      }

      case Python3Parser::DEF:
      case Python3Parser::IF:
      case Python3Parser::WHILE:
      case Python3Parser::FOR:
      case Python3Parser::TRY:
      case Python3Parser::WITH:
      case Python3Parser::CLASS:
      case Python3Parser::ASYNC:
      case Python3Parser::AT: {
        enterOuterAlt(_localctx, 2);
        setState(418);
        compound_stmt();
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

//----------------- Simple_stmtContext ------------------------------------------------------------------

Python3Parser::Simple_stmtContext::Simple_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Small_stmtContext *> Python3Parser::Simple_stmtContext::small_stmt() {
  return getRuleContexts<Python3Parser::Small_stmtContext>();
}

Python3Parser::Small_stmtContext* Python3Parser::Simple_stmtContext::small_stmt(size_t i) {
  return getRuleContext<Python3Parser::Small_stmtContext>(i);
}

tree::TerminalNode* Python3Parser::Simple_stmtContext::NEWLINE() {
  return getToken(Python3Parser::NEWLINE, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::Simple_stmtContext::SEMI_COLON() {
  return getTokens(Python3Parser::SEMI_COLON);
}

tree::TerminalNode* Python3Parser::Simple_stmtContext::SEMI_COLON(size_t i) {
  return getToken(Python3Parser::SEMI_COLON, i);
}


size_t Python3Parser::Simple_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleSimple_stmt;
}

void Python3Parser::Simple_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_stmt(this);
}

void Python3Parser::Simple_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_stmt(this);
}


antlrcpp::Any Python3Parser::Simple_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSimple_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Simple_stmtContext* Python3Parser::simple_stmt() {
  Simple_stmtContext *_localctx = _tracker.createInstance<Simple_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, Python3Parser::RuleSimple_stmt);
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
    setState(421);
    small_stmt();
    setState(426);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(422);
        match(Python3Parser::SEMI_COLON);
        setState(423);
        small_stmt(); 
      }
      setState(428);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
    setState(430);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::SEMI_COLON) {
      setState(429);
      match(Python3Parser::SEMI_COLON);
    }
    setState(432);
    match(Python3Parser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Small_stmtContext ------------------------------------------------------------------

Python3Parser::Small_stmtContext::Small_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Expr_stmtContext* Python3Parser::Small_stmtContext::expr_stmt() {
  return getRuleContext<Python3Parser::Expr_stmtContext>(0);
}

Python3Parser::Del_stmtContext* Python3Parser::Small_stmtContext::del_stmt() {
  return getRuleContext<Python3Parser::Del_stmtContext>(0);
}

Python3Parser::Pass_stmtContext* Python3Parser::Small_stmtContext::pass_stmt() {
  return getRuleContext<Python3Parser::Pass_stmtContext>(0);
}

Python3Parser::Flow_stmtContext* Python3Parser::Small_stmtContext::flow_stmt() {
  return getRuleContext<Python3Parser::Flow_stmtContext>(0);
}

Python3Parser::Import_stmtContext* Python3Parser::Small_stmtContext::import_stmt() {
  return getRuleContext<Python3Parser::Import_stmtContext>(0);
}

Python3Parser::Global_stmtContext* Python3Parser::Small_stmtContext::global_stmt() {
  return getRuleContext<Python3Parser::Global_stmtContext>(0);
}

Python3Parser::Nonlocal_stmtContext* Python3Parser::Small_stmtContext::nonlocal_stmt() {
  return getRuleContext<Python3Parser::Nonlocal_stmtContext>(0);
}

Python3Parser::Assert_stmtContext* Python3Parser::Small_stmtContext::assert_stmt() {
  return getRuleContext<Python3Parser::Assert_stmtContext>(0);
}


size_t Python3Parser::Small_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleSmall_stmt;
}

void Python3Parser::Small_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSmall_stmt(this);
}

void Python3Parser::Small_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSmall_stmt(this);
}


antlrcpp::Any Python3Parser::Small_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSmall_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Small_stmtContext* Python3Parser::small_stmt() {
  Small_stmtContext *_localctx = _tracker.createInstance<Small_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, Python3Parser::RuleSmall_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(442);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::LAMBDA:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::STAR:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        setState(434);
        expr_stmt();
        break;
      }

      case Python3Parser::DEL: {
        setState(435);
        del_stmt();
        break;
      }

      case Python3Parser::PASS: {
        setState(436);
        pass_stmt();
        break;
      }

      case Python3Parser::RETURN:
      case Python3Parser::RAISE:
      case Python3Parser::YIELD:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK: {
        setState(437);
        flow_stmt();
        break;
      }

      case Python3Parser::FROM:
      case Python3Parser::IMPORT: {
        setState(438);
        import_stmt();
        break;
      }

      case Python3Parser::GLOBAL: {
        setState(439);
        global_stmt();
        break;
      }

      case Python3Parser::NONLOCAL: {
        setState(440);
        nonlocal_stmt();
        break;
      }

      case Python3Parser::ASSERT: {
        setState(441);
        assert_stmt();
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

//----------------- Expr_stmtContext ------------------------------------------------------------------

Python3Parser::Expr_stmtContext::Expr_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Testlist_star_exprContext *> Python3Parser::Expr_stmtContext::testlist_star_expr() {
  return getRuleContexts<Python3Parser::Testlist_star_exprContext>();
}

Python3Parser::Testlist_star_exprContext* Python3Parser::Expr_stmtContext::testlist_star_expr(size_t i) {
  return getRuleContext<Python3Parser::Testlist_star_exprContext>(i);
}

Python3Parser::AnnassignContext* Python3Parser::Expr_stmtContext::annassign() {
  return getRuleContext<Python3Parser::AnnassignContext>(0);
}

Python3Parser::AugassignContext* Python3Parser::Expr_stmtContext::augassign() {
  return getRuleContext<Python3Parser::AugassignContext>(0);
}

std::vector<Python3Parser::Yield_exprContext *> Python3Parser::Expr_stmtContext::yield_expr() {
  return getRuleContexts<Python3Parser::Yield_exprContext>();
}

Python3Parser::Yield_exprContext* Python3Parser::Expr_stmtContext::yield_expr(size_t i) {
  return getRuleContext<Python3Parser::Yield_exprContext>(i);
}

Python3Parser::TestlistContext* Python3Parser::Expr_stmtContext::testlist() {
  return getRuleContext<Python3Parser::TestlistContext>(0);
}

std::vector<tree::TerminalNode *> Python3Parser::Expr_stmtContext::ASSIGN() {
  return getTokens(Python3Parser::ASSIGN);
}

tree::TerminalNode* Python3Parser::Expr_stmtContext::ASSIGN(size_t i) {
  return getToken(Python3Parser::ASSIGN, i);
}


size_t Python3Parser::Expr_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleExpr_stmt;
}

void Python3Parser::Expr_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_stmt(this);
}

void Python3Parser::Expr_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_stmt(this);
}


antlrcpp::Any Python3Parser::Expr_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitExpr_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Expr_stmtContext* Python3Parser::expr_stmt() {
  Expr_stmtContext *_localctx = _tracker.createInstance<Expr_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, Python3Parser::RuleExpr_stmt);
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
    setState(444);
    testlist_star_expr();
    setState(461);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::COLON: {
        setState(445);
        annassign();
        break;
      }

      case Python3Parser::ADD_ASSIGN:
      case Python3Parser::SUB_ASSIGN:
      case Python3Parser::MULT_ASSIGN:
      case Python3Parser::AT_ASSIGN:
      case Python3Parser::DIV_ASSIGN:
      case Python3Parser::MOD_ASSIGN:
      case Python3Parser::AND_ASSIGN:
      case Python3Parser::OR_ASSIGN:
      case Python3Parser::XOR_ASSIGN:
      case Python3Parser::LEFT_SHIFT_ASSIGN:
      case Python3Parser::RIGHT_SHIFT_ASSIGN:
      case Python3Parser::POWER_ASSIGN:
      case Python3Parser::IDIV_ASSIGN: {
        setState(446);
        augassign();
        setState(449);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Python3Parser::YIELD: {
            setState(447);
            yield_expr();
            break;
          }

          case Python3Parser::STRING:
          case Python3Parser::NUMBER:
          case Python3Parser::LAMBDA:
          case Python3Parser::NOT:
          case Python3Parser::NONE:
          case Python3Parser::TRUE:
          case Python3Parser::FALSE:
          case Python3Parser::AWAIT:
          case Python3Parser::NAME:
          case Python3Parser::ELLIPSIS:
          case Python3Parser::OPEN_PAREN:
          case Python3Parser::OPEN_BRACK:
          case Python3Parser::ADD:
          case Python3Parser::MINUS:
          case Python3Parser::NOT_OP:
          case Python3Parser::OPEN_BRACE: {
            setState(448);
            testlist();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case Python3Parser::NEWLINE:
      case Python3Parser::SEMI_COLON:
      case Python3Parser::ASSIGN: {
        setState(458);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Python3Parser::ASSIGN) {
          setState(451);
          match(Python3Parser::ASSIGN);
          setState(454);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case Python3Parser::YIELD: {
              setState(452);
              yield_expr();
              break;
            }

            case Python3Parser::STRING:
            case Python3Parser::NUMBER:
            case Python3Parser::LAMBDA:
            case Python3Parser::NOT:
            case Python3Parser::NONE:
            case Python3Parser::TRUE:
            case Python3Parser::FALSE:
            case Python3Parser::AWAIT:
            case Python3Parser::NAME:
            case Python3Parser::ELLIPSIS:
            case Python3Parser::STAR:
            case Python3Parser::OPEN_PAREN:
            case Python3Parser::OPEN_BRACK:
            case Python3Parser::ADD:
            case Python3Parser::MINUS:
            case Python3Parser::NOT_OP:
            case Python3Parser::OPEN_BRACE: {
              setState(453);
              testlist_star_expr();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(460);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

//----------------- AnnassignContext ------------------------------------------------------------------

Python3Parser::AnnassignContext::AnnassignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::AnnassignContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

std::vector<Python3Parser::TestContext *> Python3Parser::AnnassignContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::AnnassignContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

tree::TerminalNode* Python3Parser::AnnassignContext::ASSIGN() {
  return getToken(Python3Parser::ASSIGN, 0);
}


size_t Python3Parser::AnnassignContext::getRuleIndex() const {
  return Python3Parser::RuleAnnassign;
}

void Python3Parser::AnnassignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnassign(this);
}

void Python3Parser::AnnassignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnassign(this);
}


antlrcpp::Any Python3Parser::AnnassignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAnnassign(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::AnnassignContext* Python3Parser::annassign() {
  AnnassignContext *_localctx = _tracker.createInstance<AnnassignContext>(_ctx, getState());
  enterRule(_localctx, 36, Python3Parser::RuleAnnassign);
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
    setState(463);
    match(Python3Parser::COLON);
    setState(464);
    test();
    setState(467);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ASSIGN) {
      setState(465);
      match(Python3Parser::ASSIGN);
      setState(466);
      test();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Testlist_star_exprContext ------------------------------------------------------------------

Python3Parser::Testlist_star_exprContext::Testlist_star_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TestContext *> Python3Parser::Testlist_star_exprContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::Testlist_star_exprContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<Python3Parser::Star_exprContext *> Python3Parser::Testlist_star_exprContext::star_expr() {
  return getRuleContexts<Python3Parser::Star_exprContext>();
}

Python3Parser::Star_exprContext* Python3Parser::Testlist_star_exprContext::star_expr(size_t i) {
  return getRuleContext<Python3Parser::Star_exprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Testlist_star_exprContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Testlist_star_exprContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Testlist_star_exprContext::getRuleIndex() const {
  return Python3Parser::RuleTestlist_star_expr;
}

void Python3Parser::Testlist_star_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestlist_star_expr(this);
}

void Python3Parser::Testlist_star_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestlist_star_expr(this);
}


antlrcpp::Any Python3Parser::Testlist_star_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTestlist_star_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Testlist_star_exprContext* Python3Parser::testlist_star_expr() {
  Testlist_star_exprContext *_localctx = _tracker.createInstance<Testlist_star_exprContext>(_ctx, getState());
  enterRule(_localctx, 38, Python3Parser::RuleTestlist_star_expr);
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
    setState(471);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::LAMBDA:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        setState(469);
        test();
        break;
      }

      case Python3Parser::STAR: {
        setState(470);
        star_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(480);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(473);
        match(Python3Parser::COMMA);
        setState(476);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Python3Parser::STRING:
          case Python3Parser::NUMBER:
          case Python3Parser::LAMBDA:
          case Python3Parser::NOT:
          case Python3Parser::NONE:
          case Python3Parser::TRUE:
          case Python3Parser::FALSE:
          case Python3Parser::AWAIT:
          case Python3Parser::NAME:
          case Python3Parser::ELLIPSIS:
          case Python3Parser::OPEN_PAREN:
          case Python3Parser::OPEN_BRACK:
          case Python3Parser::ADD:
          case Python3Parser::MINUS:
          case Python3Parser::NOT_OP:
          case Python3Parser::OPEN_BRACE: {
            setState(474);
            test();
            break;
          }

          case Python3Parser::STAR: {
            setState(475);
            star_expr();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(482);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
    setState(484);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(483);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AugassignContext ------------------------------------------------------------------

Python3Parser::AugassignContext::AugassignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::AugassignContext::ADD_ASSIGN() {
  return getToken(Python3Parser::ADD_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::SUB_ASSIGN() {
  return getToken(Python3Parser::SUB_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::MULT_ASSIGN() {
  return getToken(Python3Parser::MULT_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::AT_ASSIGN() {
  return getToken(Python3Parser::AT_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::DIV_ASSIGN() {
  return getToken(Python3Parser::DIV_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::MOD_ASSIGN() {
  return getToken(Python3Parser::MOD_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::AND_ASSIGN() {
  return getToken(Python3Parser::AND_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::OR_ASSIGN() {
  return getToken(Python3Parser::OR_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::XOR_ASSIGN() {
  return getToken(Python3Parser::XOR_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::LEFT_SHIFT_ASSIGN() {
  return getToken(Python3Parser::LEFT_SHIFT_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::RIGHT_SHIFT_ASSIGN() {
  return getToken(Python3Parser::RIGHT_SHIFT_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::POWER_ASSIGN() {
  return getToken(Python3Parser::POWER_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::IDIV_ASSIGN() {
  return getToken(Python3Parser::IDIV_ASSIGN, 0);
}


size_t Python3Parser::AugassignContext::getRuleIndex() const {
  return Python3Parser::RuleAugassign;
}

void Python3Parser::AugassignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAugassign(this);
}

void Python3Parser::AugassignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAugassign(this);
}


antlrcpp::Any Python3Parser::AugassignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAugassign(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::AugassignContext* Python3Parser::augassign() {
  AugassignContext *_localctx = _tracker.createInstance<AugassignContext>(_ctx, getState());
  enterRule(_localctx, 40, Python3Parser::RuleAugassign);
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
    setState(486);
    _la = _input->LA(1);
    if (!(((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & ((1ULL << (Python3Parser::ADD_ASSIGN - 83))
      | (1ULL << (Python3Parser::SUB_ASSIGN - 83))
      | (1ULL << (Python3Parser::MULT_ASSIGN - 83))
      | (1ULL << (Python3Parser::AT_ASSIGN - 83))
      | (1ULL << (Python3Parser::DIV_ASSIGN - 83))
      | (1ULL << (Python3Parser::MOD_ASSIGN - 83))
      | (1ULL << (Python3Parser::AND_ASSIGN - 83))
      | (1ULL << (Python3Parser::OR_ASSIGN - 83))
      | (1ULL << (Python3Parser::XOR_ASSIGN - 83))
      | (1ULL << (Python3Parser::LEFT_SHIFT_ASSIGN - 83))
      | (1ULL << (Python3Parser::RIGHT_SHIFT_ASSIGN - 83))
      | (1ULL << (Python3Parser::POWER_ASSIGN - 83))
      | (1ULL << (Python3Parser::IDIV_ASSIGN - 83)))) != 0))) {
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

//----------------- Del_stmtContext ------------------------------------------------------------------

Python3Parser::Del_stmtContext::Del_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Del_stmtContext::DEL() {
  return getToken(Python3Parser::DEL, 0);
}

Python3Parser::ExprlistContext* Python3Parser::Del_stmtContext::exprlist() {
  return getRuleContext<Python3Parser::ExprlistContext>(0);
}


size_t Python3Parser::Del_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleDel_stmt;
}

void Python3Parser::Del_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDel_stmt(this);
}

void Python3Parser::Del_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDel_stmt(this);
}


antlrcpp::Any Python3Parser::Del_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitDel_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Del_stmtContext* Python3Parser::del_stmt() {
  Del_stmtContext *_localctx = _tracker.createInstance<Del_stmtContext>(_ctx, getState());
  enterRule(_localctx, 42, Python3Parser::RuleDel_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(488);
    match(Python3Parser::DEL);
    setState(489);
    exprlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pass_stmtContext ------------------------------------------------------------------

Python3Parser::Pass_stmtContext::Pass_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Pass_stmtContext::PASS() {
  return getToken(Python3Parser::PASS, 0);
}


size_t Python3Parser::Pass_stmtContext::getRuleIndex() const {
  return Python3Parser::RulePass_stmt;
}

void Python3Parser::Pass_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_stmt(this);
}

void Python3Parser::Pass_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_stmt(this);
}


antlrcpp::Any Python3Parser::Pass_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitPass_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Pass_stmtContext* Python3Parser::pass_stmt() {
  Pass_stmtContext *_localctx = _tracker.createInstance<Pass_stmtContext>(_ctx, getState());
  enterRule(_localctx, 44, Python3Parser::RulePass_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(491);
    match(Python3Parser::PASS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Flow_stmtContext ------------------------------------------------------------------

Python3Parser::Flow_stmtContext::Flow_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Break_stmtContext* Python3Parser::Flow_stmtContext::break_stmt() {
  return getRuleContext<Python3Parser::Break_stmtContext>(0);
}

Python3Parser::Continue_stmtContext* Python3Parser::Flow_stmtContext::continue_stmt() {
  return getRuleContext<Python3Parser::Continue_stmtContext>(0);
}

Python3Parser::Return_stmtContext* Python3Parser::Flow_stmtContext::return_stmt() {
  return getRuleContext<Python3Parser::Return_stmtContext>(0);
}

Python3Parser::Raise_stmtContext* Python3Parser::Flow_stmtContext::raise_stmt() {
  return getRuleContext<Python3Parser::Raise_stmtContext>(0);
}

Python3Parser::Yield_stmtContext* Python3Parser::Flow_stmtContext::yield_stmt() {
  return getRuleContext<Python3Parser::Yield_stmtContext>(0);
}


size_t Python3Parser::Flow_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleFlow_stmt;
}

void Python3Parser::Flow_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlow_stmt(this);
}

void Python3Parser::Flow_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlow_stmt(this);
}


antlrcpp::Any Python3Parser::Flow_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFlow_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Flow_stmtContext* Python3Parser::flow_stmt() {
  Flow_stmtContext *_localctx = _tracker.createInstance<Flow_stmtContext>(_ctx, getState());
  enterRule(_localctx, 46, Python3Parser::RuleFlow_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(498);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::BREAK: {
        enterOuterAlt(_localctx, 1);
        setState(493);
        break_stmt();
        break;
      }

      case Python3Parser::CONTINUE: {
        enterOuterAlt(_localctx, 2);
        setState(494);
        continue_stmt();
        break;
      }

      case Python3Parser::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(495);
        return_stmt();
        break;
      }

      case Python3Parser::RAISE: {
        enterOuterAlt(_localctx, 4);
        setState(496);
        raise_stmt();
        break;
      }

      case Python3Parser::YIELD: {
        enterOuterAlt(_localctx, 5);
        setState(497);
        yield_stmt();
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

//----------------- Break_stmtContext ------------------------------------------------------------------

Python3Parser::Break_stmtContext::Break_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Break_stmtContext::BREAK() {
  return getToken(Python3Parser::BREAK, 0);
}


size_t Python3Parser::Break_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleBreak_stmt;
}

void Python3Parser::Break_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreak_stmt(this);
}

void Python3Parser::Break_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreak_stmt(this);
}


antlrcpp::Any Python3Parser::Break_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitBreak_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Break_stmtContext* Python3Parser::break_stmt() {
  Break_stmtContext *_localctx = _tracker.createInstance<Break_stmtContext>(_ctx, getState());
  enterRule(_localctx, 48, Python3Parser::RuleBreak_stmt);

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
    match(Python3Parser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Continue_stmtContext ------------------------------------------------------------------

Python3Parser::Continue_stmtContext::Continue_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Continue_stmtContext::CONTINUE() {
  return getToken(Python3Parser::CONTINUE, 0);
}


size_t Python3Parser::Continue_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleContinue_stmt;
}

void Python3Parser::Continue_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinue_stmt(this);
}

void Python3Parser::Continue_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinue_stmt(this);
}


antlrcpp::Any Python3Parser::Continue_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitContinue_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Continue_stmtContext* Python3Parser::continue_stmt() {
  Continue_stmtContext *_localctx = _tracker.createInstance<Continue_stmtContext>(_ctx, getState());
  enterRule(_localctx, 50, Python3Parser::RuleContinue_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    match(Python3Parser::CONTINUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

Python3Parser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Return_stmtContext::RETURN() {
  return getToken(Python3Parser::RETURN, 0);
}

Python3Parser::TestlistContext* Python3Parser::Return_stmtContext::testlist() {
  return getRuleContext<Python3Parser::TestlistContext>(0);
}


size_t Python3Parser::Return_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleReturn_stmt;
}

void Python3Parser::Return_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_stmt(this);
}

void Python3Parser::Return_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_stmt(this);
}


antlrcpp::Any Python3Parser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Return_stmtContext* Python3Parser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 52, Python3Parser::RuleReturn_stmt);
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
    setState(504);
    match(Python3Parser::RETURN);
    setState(506);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::LAMBDA)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::AWAIT)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::ELLIPSIS)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
      | (1ULL << (Python3Parser::MINUS - 66))
      | (1ULL << (Python3Parser::NOT_OP - 66))
      | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
      setState(505);
      testlist();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Yield_stmtContext ------------------------------------------------------------------

Python3Parser::Yield_stmtContext::Yield_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Yield_exprContext* Python3Parser::Yield_stmtContext::yield_expr() {
  return getRuleContext<Python3Parser::Yield_exprContext>(0);
}


size_t Python3Parser::Yield_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleYield_stmt;
}

void Python3Parser::Yield_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYield_stmt(this);
}

void Python3Parser::Yield_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYield_stmt(this);
}


antlrcpp::Any Python3Parser::Yield_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitYield_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Yield_stmtContext* Python3Parser::yield_stmt() {
  Yield_stmtContext *_localctx = _tracker.createInstance<Yield_stmtContext>(_ctx, getState());
  enterRule(_localctx, 54, Python3Parser::RuleYield_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    yield_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Raise_stmtContext ------------------------------------------------------------------

Python3Parser::Raise_stmtContext::Raise_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Raise_stmtContext::RAISE() {
  return getToken(Python3Parser::RAISE, 0);
}

std::vector<Python3Parser::TestContext *> Python3Parser::Raise_stmtContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::Raise_stmtContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

tree::TerminalNode* Python3Parser::Raise_stmtContext::FROM() {
  return getToken(Python3Parser::FROM, 0);
}


size_t Python3Parser::Raise_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleRaise_stmt;
}

void Python3Parser::Raise_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRaise_stmt(this);
}

void Python3Parser::Raise_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRaise_stmt(this);
}


antlrcpp::Any Python3Parser::Raise_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitRaise_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Raise_stmtContext* Python3Parser::raise_stmt() {
  Raise_stmtContext *_localctx = _tracker.createInstance<Raise_stmtContext>(_ctx, getState());
  enterRule(_localctx, 56, Python3Parser::RuleRaise_stmt);
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
    setState(510);
    match(Python3Parser::RAISE);
    setState(516);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::LAMBDA)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::AWAIT)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::ELLIPSIS)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
      | (1ULL << (Python3Parser::MINUS - 66))
      | (1ULL << (Python3Parser::NOT_OP - 66))
      | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
      setState(511);
      test();
      setState(514);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::FROM) {
        setState(512);
        match(Python3Parser::FROM);
        setState(513);
        test();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Import_stmtContext ------------------------------------------------------------------

Python3Parser::Import_stmtContext::Import_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Import_nameContext* Python3Parser::Import_stmtContext::import_name() {
  return getRuleContext<Python3Parser::Import_nameContext>(0);
}

Python3Parser::Import_fromContext* Python3Parser::Import_stmtContext::import_from() {
  return getRuleContext<Python3Parser::Import_fromContext>(0);
}


size_t Python3Parser::Import_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleImport_stmt;
}

void Python3Parser::Import_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImport_stmt(this);
}

void Python3Parser::Import_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImport_stmt(this);
}


antlrcpp::Any Python3Parser::Import_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitImport_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Import_stmtContext* Python3Parser::import_stmt() {
  Import_stmtContext *_localctx = _tracker.createInstance<Import_stmtContext>(_ctx, getState());
  enterRule(_localctx, 58, Python3Parser::RuleImport_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(520);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::IMPORT: {
        enterOuterAlt(_localctx, 1);
        setState(518);
        import_name();
        break;
      }

      case Python3Parser::FROM: {
        enterOuterAlt(_localctx, 2);
        setState(519);
        import_from();
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

//----------------- Import_nameContext ------------------------------------------------------------------

Python3Parser::Import_nameContext::Import_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Import_nameContext::IMPORT() {
  return getToken(Python3Parser::IMPORT, 0);
}

Python3Parser::Dotted_as_namesContext* Python3Parser::Import_nameContext::dotted_as_names() {
  return getRuleContext<Python3Parser::Dotted_as_namesContext>(0);
}


size_t Python3Parser::Import_nameContext::getRuleIndex() const {
  return Python3Parser::RuleImport_name;
}

void Python3Parser::Import_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImport_name(this);
}

void Python3Parser::Import_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImport_name(this);
}


antlrcpp::Any Python3Parser::Import_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitImport_name(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Import_nameContext* Python3Parser::import_name() {
  Import_nameContext *_localctx = _tracker.createInstance<Import_nameContext>(_ctx, getState());
  enterRule(_localctx, 60, Python3Parser::RuleImport_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    match(Python3Parser::IMPORT);
    setState(523);
    dotted_as_names();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Import_fromContext ------------------------------------------------------------------

Python3Parser::Import_fromContext::Import_fromContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Import_fromContext::FROM() {
  return getToken(Python3Parser::FROM, 0);
}

tree::TerminalNode* Python3Parser::Import_fromContext::IMPORT() {
  return getToken(Python3Parser::IMPORT, 0);
}

Python3Parser::Dotted_nameContext* Python3Parser::Import_fromContext::dotted_name() {
  return getRuleContext<Python3Parser::Dotted_nameContext>(0);
}

tree::TerminalNode* Python3Parser::Import_fromContext::STAR() {
  return getToken(Python3Parser::STAR, 0);
}

tree::TerminalNode* Python3Parser::Import_fromContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

Python3Parser::Import_as_namesContext* Python3Parser::Import_fromContext::import_as_names() {
  return getRuleContext<Python3Parser::Import_as_namesContext>(0);
}

tree::TerminalNode* Python3Parser::Import_fromContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::Import_fromContext::DOT() {
  return getTokens(Python3Parser::DOT);
}

tree::TerminalNode* Python3Parser::Import_fromContext::DOT(size_t i) {
  return getToken(Python3Parser::DOT, i);
}

std::vector<tree::TerminalNode *> Python3Parser::Import_fromContext::ELLIPSIS() {
  return getTokens(Python3Parser::ELLIPSIS);
}

tree::TerminalNode* Python3Parser::Import_fromContext::ELLIPSIS(size_t i) {
  return getToken(Python3Parser::ELLIPSIS, i);
}


size_t Python3Parser::Import_fromContext::getRuleIndex() const {
  return Python3Parser::RuleImport_from;
}

void Python3Parser::Import_fromContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImport_from(this);
}

void Python3Parser::Import_fromContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImport_from(this);
}


antlrcpp::Any Python3Parser::Import_fromContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitImport_from(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Import_fromContext* Python3Parser::import_from() {
  Import_fromContext *_localctx = _tracker.createInstance<Import_fromContext>(_ctx, getState());
  enterRule(_localctx, 62, Python3Parser::RuleImport_from);
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
    setState(525);
    match(Python3Parser::FROM);
    setState(538);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      setState(529);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Python3Parser::DOT

      || _la == Python3Parser::ELLIPSIS) {
        setState(526);
        _la = _input->LA(1);
        if (!(_la == Python3Parser::DOT

        || _la == Python3Parser::ELLIPSIS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(531);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(532);
      dotted_name();
      break;
    }

    case 2: {
      setState(534); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(533);
        _la = _input->LA(1);
        if (!(_la == Python3Parser::DOT

        || _la == Python3Parser::ELLIPSIS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(536); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == Python3Parser::DOT

      || _la == Python3Parser::ELLIPSIS);
      break;
    }

    default:
      break;
    }
    setState(540);
    match(Python3Parser::IMPORT);
    setState(547);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STAR: {
        setState(541);
        match(Python3Parser::STAR);
        break;
      }

      case Python3Parser::OPEN_PAREN: {
        setState(542);
        match(Python3Parser::OPEN_PAREN);
        setState(543);
        import_as_names();
        setState(544);
        match(Python3Parser::CLOSE_PAREN);
        break;
      }

      case Python3Parser::NAME: {
        setState(546);
        import_as_names();
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

//----------------- Import_as_nameContext ------------------------------------------------------------------

Python3Parser::Import_as_nameContext::Import_as_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::NameContext *> Python3Parser::Import_as_nameContext::name() {
  return getRuleContexts<Python3Parser::NameContext>();
}

Python3Parser::NameContext* Python3Parser::Import_as_nameContext::name(size_t i) {
  return getRuleContext<Python3Parser::NameContext>(i);
}

tree::TerminalNode* Python3Parser::Import_as_nameContext::AS() {
  return getToken(Python3Parser::AS, 0);
}


size_t Python3Parser::Import_as_nameContext::getRuleIndex() const {
  return Python3Parser::RuleImport_as_name;
}

void Python3Parser::Import_as_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImport_as_name(this);
}

void Python3Parser::Import_as_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImport_as_name(this);
}


antlrcpp::Any Python3Parser::Import_as_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitImport_as_name(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Import_as_nameContext* Python3Parser::import_as_name() {
  Import_as_nameContext *_localctx = _tracker.createInstance<Import_as_nameContext>(_ctx, getState());
  enterRule(_localctx, 64, Python3Parser::RuleImport_as_name);
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
    setState(549);
    name();
    setState(552);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::AS) {
      setState(550);
      match(Python3Parser::AS);
      setState(551);
      name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dotted_as_nameContext ------------------------------------------------------------------

Python3Parser::Dotted_as_nameContext::Dotted_as_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Dotted_nameContext* Python3Parser::Dotted_as_nameContext::dotted_name() {
  return getRuleContext<Python3Parser::Dotted_nameContext>(0);
}

tree::TerminalNode* Python3Parser::Dotted_as_nameContext::AS() {
  return getToken(Python3Parser::AS, 0);
}

Python3Parser::NameContext* Python3Parser::Dotted_as_nameContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}


size_t Python3Parser::Dotted_as_nameContext::getRuleIndex() const {
  return Python3Parser::RuleDotted_as_name;
}

void Python3Parser::Dotted_as_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDotted_as_name(this);
}

void Python3Parser::Dotted_as_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDotted_as_name(this);
}


antlrcpp::Any Python3Parser::Dotted_as_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitDotted_as_name(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Dotted_as_nameContext* Python3Parser::dotted_as_name() {
  Dotted_as_nameContext *_localctx = _tracker.createInstance<Dotted_as_nameContext>(_ctx, getState());
  enterRule(_localctx, 66, Python3Parser::RuleDotted_as_name);
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
    setState(554);
    dotted_name();
    setState(557);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::AS) {
      setState(555);
      match(Python3Parser::AS);
      setState(556);
      name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Import_as_namesContext ------------------------------------------------------------------

Python3Parser::Import_as_namesContext::Import_as_namesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Import_as_nameContext *> Python3Parser::Import_as_namesContext::import_as_name() {
  return getRuleContexts<Python3Parser::Import_as_nameContext>();
}

Python3Parser::Import_as_nameContext* Python3Parser::Import_as_namesContext::import_as_name(size_t i) {
  return getRuleContext<Python3Parser::Import_as_nameContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Import_as_namesContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Import_as_namesContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Import_as_namesContext::getRuleIndex() const {
  return Python3Parser::RuleImport_as_names;
}

void Python3Parser::Import_as_namesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImport_as_names(this);
}

void Python3Parser::Import_as_namesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImport_as_names(this);
}


antlrcpp::Any Python3Parser::Import_as_namesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitImport_as_names(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Import_as_namesContext* Python3Parser::import_as_names() {
  Import_as_namesContext *_localctx = _tracker.createInstance<Import_as_namesContext>(_ctx, getState());
  enterRule(_localctx, 68, Python3Parser::RuleImport_as_names);
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
    setState(559);
    import_as_name();
    setState(564);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(560);
        match(Python3Parser::COMMA);
        setState(561);
        import_as_name(); 
      }
      setState(566);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    }
    setState(568);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(567);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dotted_as_namesContext ------------------------------------------------------------------

Python3Parser::Dotted_as_namesContext::Dotted_as_namesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Dotted_as_nameContext *> Python3Parser::Dotted_as_namesContext::dotted_as_name() {
  return getRuleContexts<Python3Parser::Dotted_as_nameContext>();
}

Python3Parser::Dotted_as_nameContext* Python3Parser::Dotted_as_namesContext::dotted_as_name(size_t i) {
  return getRuleContext<Python3Parser::Dotted_as_nameContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Dotted_as_namesContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Dotted_as_namesContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Dotted_as_namesContext::getRuleIndex() const {
  return Python3Parser::RuleDotted_as_names;
}

void Python3Parser::Dotted_as_namesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDotted_as_names(this);
}

void Python3Parser::Dotted_as_namesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDotted_as_names(this);
}


antlrcpp::Any Python3Parser::Dotted_as_namesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitDotted_as_names(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Dotted_as_namesContext* Python3Parser::dotted_as_names() {
  Dotted_as_namesContext *_localctx = _tracker.createInstance<Dotted_as_namesContext>(_ctx, getState());
  enterRule(_localctx, 70, Python3Parser::RuleDotted_as_names);
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
    setState(570);
    dotted_as_name();
    setState(575);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(571);
      match(Python3Parser::COMMA);
      setState(572);
      dotted_as_name();
      setState(577);
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

//----------------- Dotted_nameContext ------------------------------------------------------------------

Python3Parser::Dotted_nameContext::Dotted_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::NameContext *> Python3Parser::Dotted_nameContext::name() {
  return getRuleContexts<Python3Parser::NameContext>();
}

Python3Parser::NameContext* Python3Parser::Dotted_nameContext::name(size_t i) {
  return getRuleContext<Python3Parser::NameContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Dotted_nameContext::DOT() {
  return getTokens(Python3Parser::DOT);
}

tree::TerminalNode* Python3Parser::Dotted_nameContext::DOT(size_t i) {
  return getToken(Python3Parser::DOT, i);
}


size_t Python3Parser::Dotted_nameContext::getRuleIndex() const {
  return Python3Parser::RuleDotted_name;
}

void Python3Parser::Dotted_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDotted_name(this);
}

void Python3Parser::Dotted_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDotted_name(this);
}


antlrcpp::Any Python3Parser::Dotted_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitDotted_name(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Dotted_nameContext* Python3Parser::dotted_name() {
  Dotted_nameContext *_localctx = _tracker.createInstance<Dotted_nameContext>(_ctx, getState());
  enterRule(_localctx, 72, Python3Parser::RuleDotted_name);
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
    setState(578);
    name();
    setState(583);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::DOT) {
      setState(579);
      match(Python3Parser::DOT);
      setState(580);
      name();
      setState(585);
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

//----------------- Global_stmtContext ------------------------------------------------------------------

Python3Parser::Global_stmtContext::Global_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Global_stmtContext::GLOBAL() {
  return getToken(Python3Parser::GLOBAL, 0);
}

std::vector<Python3Parser::NameContext *> Python3Parser::Global_stmtContext::name() {
  return getRuleContexts<Python3Parser::NameContext>();
}

Python3Parser::NameContext* Python3Parser::Global_stmtContext::name(size_t i) {
  return getRuleContext<Python3Parser::NameContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Global_stmtContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Global_stmtContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Global_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleGlobal_stmt;
}

void Python3Parser::Global_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_stmt(this);
}

void Python3Parser::Global_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_stmt(this);
}


antlrcpp::Any Python3Parser::Global_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitGlobal_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Global_stmtContext* Python3Parser::global_stmt() {
  Global_stmtContext *_localctx = _tracker.createInstance<Global_stmtContext>(_ctx, getState());
  enterRule(_localctx, 74, Python3Parser::RuleGlobal_stmt);
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
    setState(586);
    match(Python3Parser::GLOBAL);
    setState(587);
    name();
    setState(592);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(588);
      match(Python3Parser::COMMA);
      setState(589);
      name();
      setState(594);
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

//----------------- Nonlocal_stmtContext ------------------------------------------------------------------

Python3Parser::Nonlocal_stmtContext::Nonlocal_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Nonlocal_stmtContext::NONLOCAL() {
  return getToken(Python3Parser::NONLOCAL, 0);
}

std::vector<Python3Parser::NameContext *> Python3Parser::Nonlocal_stmtContext::name() {
  return getRuleContexts<Python3Parser::NameContext>();
}

Python3Parser::NameContext* Python3Parser::Nonlocal_stmtContext::name(size_t i) {
  return getRuleContext<Python3Parser::NameContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Nonlocal_stmtContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Nonlocal_stmtContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Nonlocal_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleNonlocal_stmt;
}

void Python3Parser::Nonlocal_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonlocal_stmt(this);
}

void Python3Parser::Nonlocal_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonlocal_stmt(this);
}


antlrcpp::Any Python3Parser::Nonlocal_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitNonlocal_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Nonlocal_stmtContext* Python3Parser::nonlocal_stmt() {
  Nonlocal_stmtContext *_localctx = _tracker.createInstance<Nonlocal_stmtContext>(_ctx, getState());
  enterRule(_localctx, 76, Python3Parser::RuleNonlocal_stmt);
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
    setState(595);
    match(Python3Parser::NONLOCAL);
    setState(596);
    name();
    setState(601);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(597);
      match(Python3Parser::COMMA);
      setState(598);
      name();
      setState(603);
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

//----------------- Assert_stmtContext ------------------------------------------------------------------

Python3Parser::Assert_stmtContext::Assert_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Assert_stmtContext::ASSERT() {
  return getToken(Python3Parser::ASSERT, 0);
}

std::vector<Python3Parser::TestContext *> Python3Parser::Assert_stmtContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::Assert_stmtContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

tree::TerminalNode* Python3Parser::Assert_stmtContext::COMMA() {
  return getToken(Python3Parser::COMMA, 0);
}


size_t Python3Parser::Assert_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleAssert_stmt;
}

void Python3Parser::Assert_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssert_stmt(this);
}

void Python3Parser::Assert_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssert_stmt(this);
}


antlrcpp::Any Python3Parser::Assert_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAssert_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Assert_stmtContext* Python3Parser::assert_stmt() {
  Assert_stmtContext *_localctx = _tracker.createInstance<Assert_stmtContext>(_ctx, getState());
  enterRule(_localctx, 78, Python3Parser::RuleAssert_stmt);
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
    setState(604);
    match(Python3Parser::ASSERT);
    setState(605);
    test();
    setState(608);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(606);
      match(Python3Parser::COMMA);
      setState(607);
      test();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

Python3Parser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::If_stmtContext* Python3Parser::Compound_stmtContext::if_stmt() {
  return getRuleContext<Python3Parser::If_stmtContext>(0);
}

Python3Parser::While_stmtContext* Python3Parser::Compound_stmtContext::while_stmt() {
  return getRuleContext<Python3Parser::While_stmtContext>(0);
}

Python3Parser::For_stmtContext* Python3Parser::Compound_stmtContext::for_stmt() {
  return getRuleContext<Python3Parser::For_stmtContext>(0);
}

Python3Parser::Try_stmtContext* Python3Parser::Compound_stmtContext::try_stmt() {
  return getRuleContext<Python3Parser::Try_stmtContext>(0);
}

Python3Parser::With_stmtContext* Python3Parser::Compound_stmtContext::with_stmt() {
  return getRuleContext<Python3Parser::With_stmtContext>(0);
}

Python3Parser::FuncdefContext* Python3Parser::Compound_stmtContext::funcdef() {
  return getRuleContext<Python3Parser::FuncdefContext>(0);
}

Python3Parser::ClassdefContext* Python3Parser::Compound_stmtContext::classdef() {
  return getRuleContext<Python3Parser::ClassdefContext>(0);
}

Python3Parser::DecoratedContext* Python3Parser::Compound_stmtContext::decorated() {
  return getRuleContext<Python3Parser::DecoratedContext>(0);
}

Python3Parser::Async_stmtContext* Python3Parser::Compound_stmtContext::async_stmt() {
  return getRuleContext<Python3Parser::Async_stmtContext>(0);
}


size_t Python3Parser::Compound_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleCompound_stmt;
}

void Python3Parser::Compound_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_stmt(this);
}

void Python3Parser::Compound_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_stmt(this);
}


antlrcpp::Any Python3Parser::Compound_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitCompound_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Compound_stmtContext* Python3Parser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 80, Python3Parser::RuleCompound_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(619);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(610);
        if_stmt();
        break;
      }

      case Python3Parser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(611);
        while_stmt();
        break;
      }

      case Python3Parser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(612);
        for_stmt();
        break;
      }

      case Python3Parser::TRY: {
        enterOuterAlt(_localctx, 4);
        setState(613);
        try_stmt();
        break;
      }

      case Python3Parser::WITH: {
        enterOuterAlt(_localctx, 5);
        setState(614);
        with_stmt();
        break;
      }

      case Python3Parser::DEF: {
        enterOuterAlt(_localctx, 6);
        setState(615);
        funcdef();
        break;
      }

      case Python3Parser::CLASS: {
        enterOuterAlt(_localctx, 7);
        setState(616);
        classdef();
        break;
      }

      case Python3Parser::AT: {
        enterOuterAlt(_localctx, 8);
        setState(617);
        decorated();
        break;
      }

      case Python3Parser::ASYNC: {
        enterOuterAlt(_localctx, 9);
        setState(618);
        async_stmt();
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

//----------------- Async_stmtContext ------------------------------------------------------------------

Python3Parser::Async_stmtContext::Async_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Async_stmtContext::ASYNC() {
  return getToken(Python3Parser::ASYNC, 0);
}

Python3Parser::FuncdefContext* Python3Parser::Async_stmtContext::funcdef() {
  return getRuleContext<Python3Parser::FuncdefContext>(0);
}

Python3Parser::With_stmtContext* Python3Parser::Async_stmtContext::with_stmt() {
  return getRuleContext<Python3Parser::With_stmtContext>(0);
}

Python3Parser::For_stmtContext* Python3Parser::Async_stmtContext::for_stmt() {
  return getRuleContext<Python3Parser::For_stmtContext>(0);
}


size_t Python3Parser::Async_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleAsync_stmt;
}

void Python3Parser::Async_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsync_stmt(this);
}

void Python3Parser::Async_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsync_stmt(this);
}


antlrcpp::Any Python3Parser::Async_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAsync_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Async_stmtContext* Python3Parser::async_stmt() {
  Async_stmtContext *_localctx = _tracker.createInstance<Async_stmtContext>(_ctx, getState());
  enterRule(_localctx, 82, Python3Parser::RuleAsync_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    match(Python3Parser::ASYNC);
    setState(625);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::DEF: {
        setState(622);
        funcdef();
        break;
      }

      case Python3Parser::WITH: {
        setState(623);
        with_stmt();
        break;
      }

      case Python3Parser::FOR: {
        setState(624);
        for_stmt();
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

//----------------- If_stmtContext ------------------------------------------------------------------

Python3Parser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::If_stmtContext::IF() {
  return getToken(Python3Parser::IF, 0);
}

std::vector<Python3Parser::TestContext *> Python3Parser::If_stmtContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::If_stmtContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::If_stmtContext::COLON() {
  return getTokens(Python3Parser::COLON);
}

tree::TerminalNode* Python3Parser::If_stmtContext::COLON(size_t i) {
  return getToken(Python3Parser::COLON, i);
}

std::vector<Python3Parser::SuiteContext *> Python3Parser::If_stmtContext::suite() {
  return getRuleContexts<Python3Parser::SuiteContext>();
}

Python3Parser::SuiteContext* Python3Parser::If_stmtContext::suite(size_t i) {
  return getRuleContext<Python3Parser::SuiteContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::If_stmtContext::ELIF() {
  return getTokens(Python3Parser::ELIF);
}

tree::TerminalNode* Python3Parser::If_stmtContext::ELIF(size_t i) {
  return getToken(Python3Parser::ELIF, i);
}

tree::TerminalNode* Python3Parser::If_stmtContext::ELSE() {
  return getToken(Python3Parser::ELSE, 0);
}


size_t Python3Parser::If_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleIf_stmt;
}

void Python3Parser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void Python3Parser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}


antlrcpp::Any Python3Parser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::If_stmtContext* Python3Parser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 84, Python3Parser::RuleIf_stmt);
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
    setState(627);
    match(Python3Parser::IF);
    setState(628);
    test();
    setState(629);
    match(Python3Parser::COLON);
    setState(630);
    suite();
    setState(638);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ELIF) {
      setState(631);
      match(Python3Parser::ELIF);
      setState(632);
      test();
      setState(633);
      match(Python3Parser::COLON);
      setState(634);
      suite();
      setState(640);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(644);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(641);
      match(Python3Parser::ELSE);
      setState(642);
      match(Python3Parser::COLON);
      setState(643);
      suite();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

Python3Parser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::While_stmtContext::WHILE() {
  return getToken(Python3Parser::WHILE, 0);
}

Python3Parser::TestContext* Python3Parser::While_stmtContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

std::vector<tree::TerminalNode *> Python3Parser::While_stmtContext::COLON() {
  return getTokens(Python3Parser::COLON);
}

tree::TerminalNode* Python3Parser::While_stmtContext::COLON(size_t i) {
  return getToken(Python3Parser::COLON, i);
}

std::vector<Python3Parser::SuiteContext *> Python3Parser::While_stmtContext::suite() {
  return getRuleContexts<Python3Parser::SuiteContext>();
}

Python3Parser::SuiteContext* Python3Parser::While_stmtContext::suite(size_t i) {
  return getRuleContext<Python3Parser::SuiteContext>(i);
}

tree::TerminalNode* Python3Parser::While_stmtContext::ELSE() {
  return getToken(Python3Parser::ELSE, 0);
}


size_t Python3Parser::While_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleWhile_stmt;
}

void Python3Parser::While_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_stmt(this);
}

void Python3Parser::While_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_stmt(this);
}


antlrcpp::Any Python3Parser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::While_stmtContext* Python3Parser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 86, Python3Parser::RuleWhile_stmt);
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
    setState(646);
    match(Python3Parser::WHILE);
    setState(647);
    test();
    setState(648);
    match(Python3Parser::COLON);
    setState(649);
    suite();
    setState(653);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(650);
      match(Python3Parser::ELSE);
      setState(651);
      match(Python3Parser::COLON);
      setState(652);
      suite();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_stmtContext ------------------------------------------------------------------

Python3Parser::For_stmtContext::For_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::For_stmtContext::FOR() {
  return getToken(Python3Parser::FOR, 0);
}

Python3Parser::ExprlistContext* Python3Parser::For_stmtContext::exprlist() {
  return getRuleContext<Python3Parser::ExprlistContext>(0);
}

tree::TerminalNode* Python3Parser::For_stmtContext::IN() {
  return getToken(Python3Parser::IN, 0);
}

Python3Parser::TestlistContext* Python3Parser::For_stmtContext::testlist() {
  return getRuleContext<Python3Parser::TestlistContext>(0);
}

std::vector<tree::TerminalNode *> Python3Parser::For_stmtContext::COLON() {
  return getTokens(Python3Parser::COLON);
}

tree::TerminalNode* Python3Parser::For_stmtContext::COLON(size_t i) {
  return getToken(Python3Parser::COLON, i);
}

std::vector<Python3Parser::SuiteContext *> Python3Parser::For_stmtContext::suite() {
  return getRuleContexts<Python3Parser::SuiteContext>();
}

Python3Parser::SuiteContext* Python3Parser::For_stmtContext::suite(size_t i) {
  return getRuleContext<Python3Parser::SuiteContext>(i);
}

tree::TerminalNode* Python3Parser::For_stmtContext::ELSE() {
  return getToken(Python3Parser::ELSE, 0);
}


size_t Python3Parser::For_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleFor_stmt;
}

void Python3Parser::For_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_stmt(this);
}

void Python3Parser::For_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_stmt(this);
}


antlrcpp::Any Python3Parser::For_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFor_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::For_stmtContext* Python3Parser::for_stmt() {
  For_stmtContext *_localctx = _tracker.createInstance<For_stmtContext>(_ctx, getState());
  enterRule(_localctx, 88, Python3Parser::RuleFor_stmt);
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
    setState(655);
    match(Python3Parser::FOR);
    setState(656);
    exprlist();
    setState(657);
    match(Python3Parser::IN);
    setState(658);
    testlist();
    setState(659);
    match(Python3Parser::COLON);
    setState(660);
    suite();
    setState(664);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(661);
      match(Python3Parser::ELSE);
      setState(662);
      match(Python3Parser::COLON);
      setState(663);
      suite();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Try_stmtContext ------------------------------------------------------------------

Python3Parser::Try_stmtContext::Try_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Try_stmtContext::TRY() {
  return getToken(Python3Parser::TRY, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::Try_stmtContext::COLON() {
  return getTokens(Python3Parser::COLON);
}

tree::TerminalNode* Python3Parser::Try_stmtContext::COLON(size_t i) {
  return getToken(Python3Parser::COLON, i);
}

std::vector<Python3Parser::SuiteContext *> Python3Parser::Try_stmtContext::suite() {
  return getRuleContexts<Python3Parser::SuiteContext>();
}

Python3Parser::SuiteContext* Python3Parser::Try_stmtContext::suite(size_t i) {
  return getRuleContext<Python3Parser::SuiteContext>(i);
}

tree::TerminalNode* Python3Parser::Try_stmtContext::FINALLY() {
  return getToken(Python3Parser::FINALLY, 0);
}

std::vector<Python3Parser::Except_clauseContext *> Python3Parser::Try_stmtContext::except_clause() {
  return getRuleContexts<Python3Parser::Except_clauseContext>();
}

Python3Parser::Except_clauseContext* Python3Parser::Try_stmtContext::except_clause(size_t i) {
  return getRuleContext<Python3Parser::Except_clauseContext>(i);
}

tree::TerminalNode* Python3Parser::Try_stmtContext::ELSE() {
  return getToken(Python3Parser::ELSE, 0);
}


size_t Python3Parser::Try_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleTry_stmt;
}

void Python3Parser::Try_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTry_stmt(this);
}

void Python3Parser::Try_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTry_stmt(this);
}


antlrcpp::Any Python3Parser::Try_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTry_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Try_stmtContext* Python3Parser::try_stmt() {
  Try_stmtContext *_localctx = _tracker.createInstance<Try_stmtContext>(_ctx, getState());
  enterRule(_localctx, 90, Python3Parser::RuleTry_stmt);
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
    setState(666);
    match(Python3Parser::TRY);
    setState(667);
    match(Python3Parser::COLON);
    setState(668);
    suite();
    setState(690);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::EXCEPT: {
        setState(673); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(669);
          except_clause();
          setState(670);
          match(Python3Parser::COLON);
          setState(671);
          suite();
          setState(675); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Python3Parser::EXCEPT);
        setState(680);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::ELSE) {
          setState(677);
          match(Python3Parser::ELSE);
          setState(678);
          match(Python3Parser::COLON);
          setState(679);
          suite();
        }
        setState(685);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::FINALLY) {
          setState(682);
          match(Python3Parser::FINALLY);
          setState(683);
          match(Python3Parser::COLON);
          setState(684);
          suite();
        }
        break;
      }

      case Python3Parser::FINALLY: {
        setState(687);
        match(Python3Parser::FINALLY);
        setState(688);
        match(Python3Parser::COLON);
        setState(689);
        suite();
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

//----------------- With_stmtContext ------------------------------------------------------------------

Python3Parser::With_stmtContext::With_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::With_stmtContext::WITH() {
  return getToken(Python3Parser::WITH, 0);
}

std::vector<Python3Parser::With_itemContext *> Python3Parser::With_stmtContext::with_item() {
  return getRuleContexts<Python3Parser::With_itemContext>();
}

Python3Parser::With_itemContext* Python3Parser::With_stmtContext::with_item(size_t i) {
  return getRuleContext<Python3Parser::With_itemContext>(i);
}

tree::TerminalNode* Python3Parser::With_stmtContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::SuiteContext* Python3Parser::With_stmtContext::suite() {
  return getRuleContext<Python3Parser::SuiteContext>(0);
}

std::vector<tree::TerminalNode *> Python3Parser::With_stmtContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::With_stmtContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::With_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleWith_stmt;
}

void Python3Parser::With_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWith_stmt(this);
}

void Python3Parser::With_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWith_stmt(this);
}


antlrcpp::Any Python3Parser::With_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitWith_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::With_stmtContext* Python3Parser::with_stmt() {
  With_stmtContext *_localctx = _tracker.createInstance<With_stmtContext>(_ctx, getState());
  enterRule(_localctx, 92, Python3Parser::RuleWith_stmt);
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
    setState(692);
    match(Python3Parser::WITH);
    setState(693);
    with_item();
    setState(698);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(694);
      match(Python3Parser::COMMA);
      setState(695);
      with_item();
      setState(700);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(701);
    match(Python3Parser::COLON);
    setState(702);
    suite();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- With_itemContext ------------------------------------------------------------------

Python3Parser::With_itemContext::With_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::TestContext* Python3Parser::With_itemContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

tree::TerminalNode* Python3Parser::With_itemContext::AS() {
  return getToken(Python3Parser::AS, 0);
}

Python3Parser::ExprContext* Python3Parser::With_itemContext::expr() {
  return getRuleContext<Python3Parser::ExprContext>(0);
}


size_t Python3Parser::With_itemContext::getRuleIndex() const {
  return Python3Parser::RuleWith_item;
}

void Python3Parser::With_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWith_item(this);
}

void Python3Parser::With_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWith_item(this);
}


antlrcpp::Any Python3Parser::With_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitWith_item(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::With_itemContext* Python3Parser::with_item() {
  With_itemContext *_localctx = _tracker.createInstance<With_itemContext>(_ctx, getState());
  enterRule(_localctx, 94, Python3Parser::RuleWith_item);
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
    setState(704);
    test();
    setState(707);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::AS) {
      setState(705);
      match(Python3Parser::AS);
      setState(706);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Except_clauseContext ------------------------------------------------------------------

Python3Parser::Except_clauseContext::Except_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Except_clauseContext::EXCEPT() {
  return getToken(Python3Parser::EXCEPT, 0);
}

Python3Parser::TestContext* Python3Parser::Except_clauseContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

tree::TerminalNode* Python3Parser::Except_clauseContext::AS() {
  return getToken(Python3Parser::AS, 0);
}

Python3Parser::NameContext* Python3Parser::Except_clauseContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}


size_t Python3Parser::Except_clauseContext::getRuleIndex() const {
  return Python3Parser::RuleExcept_clause;
}

void Python3Parser::Except_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExcept_clause(this);
}

void Python3Parser::Except_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExcept_clause(this);
}


antlrcpp::Any Python3Parser::Except_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitExcept_clause(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Except_clauseContext* Python3Parser::except_clause() {
  Except_clauseContext *_localctx = _tracker.createInstance<Except_clauseContext>(_ctx, getState());
  enterRule(_localctx, 96, Python3Parser::RuleExcept_clause);
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
    setState(709);
    match(Python3Parser::EXCEPT);
    setState(715);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::LAMBDA)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::AWAIT)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::ELLIPSIS)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
      | (1ULL << (Python3Parser::MINUS - 66))
      | (1ULL << (Python3Parser::NOT_OP - 66))
      | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
      setState(710);
      test();
      setState(713);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::AS) {
        setState(711);
        match(Python3Parser::AS);
        setState(712);
        name();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuiteContext ------------------------------------------------------------------

Python3Parser::SuiteContext::SuiteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Simple_stmtContext* Python3Parser::SuiteContext::simple_stmt() {
  return getRuleContext<Python3Parser::Simple_stmtContext>(0);
}

tree::TerminalNode* Python3Parser::SuiteContext::NEWLINE() {
  return getToken(Python3Parser::NEWLINE, 0);
}

tree::TerminalNode* Python3Parser::SuiteContext::INDENT() {
  return getToken(Python3Parser::INDENT, 0);
}

tree::TerminalNode* Python3Parser::SuiteContext::DEDENT() {
  return getToken(Python3Parser::DEDENT, 0);
}

std::vector<Python3Parser::StmtContext *> Python3Parser::SuiteContext::stmt() {
  return getRuleContexts<Python3Parser::StmtContext>();
}

Python3Parser::StmtContext* Python3Parser::SuiteContext::stmt(size_t i) {
  return getRuleContext<Python3Parser::StmtContext>(i);
}


size_t Python3Parser::SuiteContext::getRuleIndex() const {
  return Python3Parser::RuleSuite;
}

void Python3Parser::SuiteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuite(this);
}

void Python3Parser::SuiteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuite(this);
}


antlrcpp::Any Python3Parser::SuiteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSuite(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::SuiteContext* Python3Parser::suite() {
  SuiteContext *_localctx = _tracker.createInstance<SuiteContext>(_ctx, getState());
  enterRule(_localctx, 98, Python3Parser::RuleSuite);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(727);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::RETURN:
      case Python3Parser::RAISE:
      case Python3Parser::FROM:
      case Python3Parser::IMPORT:
      case Python3Parser::GLOBAL:
      case Python3Parser::NONLOCAL:
      case Python3Parser::ASSERT:
      case Python3Parser::LAMBDA:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::YIELD:
      case Python3Parser::DEL:
      case Python3Parser::PASS:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::STAR:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(717);
        simple_stmt();
        break;
      }

      case Python3Parser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(718);
        match(Python3Parser::NEWLINE);
        setState(719);
        match(Python3Parser::INDENT);
        setState(721); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(720);
          stmt();
          setState(723); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
          | (1ULL << Python3Parser::NUMBER)
          | (1ULL << Python3Parser::DEF)
          | (1ULL << Python3Parser::RETURN)
          | (1ULL << Python3Parser::RAISE)
          | (1ULL << Python3Parser::FROM)
          | (1ULL << Python3Parser::IMPORT)
          | (1ULL << Python3Parser::GLOBAL)
          | (1ULL << Python3Parser::NONLOCAL)
          | (1ULL << Python3Parser::ASSERT)
          | (1ULL << Python3Parser::IF)
          | (1ULL << Python3Parser::WHILE)
          | (1ULL << Python3Parser::FOR)
          | (1ULL << Python3Parser::TRY)
          | (1ULL << Python3Parser::WITH)
          | (1ULL << Python3Parser::LAMBDA)
          | (1ULL << Python3Parser::NOT)
          | (1ULL << Python3Parser::NONE)
          | (1ULL << Python3Parser::TRUE)
          | (1ULL << Python3Parser::FALSE)
          | (1ULL << Python3Parser::CLASS)
          | (1ULL << Python3Parser::YIELD)
          | (1ULL << Python3Parser::DEL)
          | (1ULL << Python3Parser::PASS)
          | (1ULL << Python3Parser::CONTINUE)
          | (1ULL << Python3Parser::BREAK)
          | (1ULL << Python3Parser::ASYNC)
          | (1ULL << Python3Parser::AWAIT)
          | (1ULL << Python3Parser::NAME)
          | (1ULL << Python3Parser::ELLIPSIS)
          | (1ULL << Python3Parser::STAR)
          | (1ULL << Python3Parser::OPEN_PAREN)
          | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
          | (1ULL << (Python3Parser::MINUS - 66))
          | (1ULL << (Python3Parser::NOT_OP - 66))
          | (1ULL << (Python3Parser::OPEN_BRACE - 66))
          | (1ULL << (Python3Parser::AT - 66)))) != 0));
        setState(725);
        match(Python3Parser::DEDENT);
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

//----------------- TestContext ------------------------------------------------------------------

Python3Parser::TestContext::TestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Or_testContext *> Python3Parser::TestContext::or_test() {
  return getRuleContexts<Python3Parser::Or_testContext>();
}

Python3Parser::Or_testContext* Python3Parser::TestContext::or_test(size_t i) {
  return getRuleContext<Python3Parser::Or_testContext>(i);
}

tree::TerminalNode* Python3Parser::TestContext::IF() {
  return getToken(Python3Parser::IF, 0);
}

tree::TerminalNode* Python3Parser::TestContext::ELSE() {
  return getToken(Python3Parser::ELSE, 0);
}

Python3Parser::TestContext* Python3Parser::TestContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

Python3Parser::LambdefContext* Python3Parser::TestContext::lambdef() {
  return getRuleContext<Python3Parser::LambdefContext>(0);
}


size_t Python3Parser::TestContext::getRuleIndex() const {
  return Python3Parser::RuleTest;
}

void Python3Parser::TestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest(this);
}

void Python3Parser::TestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest(this);
}


antlrcpp::Any Python3Parser::TestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTest(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TestContext* Python3Parser::test() {
  TestContext *_localctx = _tracker.createInstance<TestContext>(_ctx, getState());
  enterRule(_localctx, 100, Python3Parser::RuleTest);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(738);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(729);
        or_test();
        setState(735);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::IF) {
          setState(730);
          match(Python3Parser::IF);
          setState(731);
          or_test();
          setState(732);
          match(Python3Parser::ELSE);
          setState(733);
          test();
        }
        break;
      }

      case Python3Parser::LAMBDA: {
        enterOuterAlt(_localctx, 2);
        setState(737);
        lambdef();
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

//----------------- Test_nocondContext ------------------------------------------------------------------

Python3Parser::Test_nocondContext::Test_nocondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Or_testContext* Python3Parser::Test_nocondContext::or_test() {
  return getRuleContext<Python3Parser::Or_testContext>(0);
}

Python3Parser::Lambdef_nocondContext* Python3Parser::Test_nocondContext::lambdef_nocond() {
  return getRuleContext<Python3Parser::Lambdef_nocondContext>(0);
}


size_t Python3Parser::Test_nocondContext::getRuleIndex() const {
  return Python3Parser::RuleTest_nocond;
}

void Python3Parser::Test_nocondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest_nocond(this);
}

void Python3Parser::Test_nocondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest_nocond(this);
}


antlrcpp::Any Python3Parser::Test_nocondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTest_nocond(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Test_nocondContext* Python3Parser::test_nocond() {
  Test_nocondContext *_localctx = _tracker.createInstance<Test_nocondContext>(_ctx, getState());
  enterRule(_localctx, 102, Python3Parser::RuleTest_nocond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(742);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(740);
        or_test();
        break;
      }

      case Python3Parser::LAMBDA: {
        enterOuterAlt(_localctx, 2);
        setState(741);
        lambdef_nocond();
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

//----------------- LambdefContext ------------------------------------------------------------------

Python3Parser::LambdefContext::LambdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::LambdefContext::LAMBDA() {
  return getToken(Python3Parser::LAMBDA, 0);
}

tree::TerminalNode* Python3Parser::LambdefContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::TestContext* Python3Parser::LambdefContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

Python3Parser::VarargslistContext* Python3Parser::LambdefContext::varargslist() {
  return getRuleContext<Python3Parser::VarargslistContext>(0);
}


size_t Python3Parser::LambdefContext::getRuleIndex() const {
  return Python3Parser::RuleLambdef;
}

void Python3Parser::LambdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdef(this);
}

void Python3Parser::LambdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdef(this);
}


antlrcpp::Any Python3Parser::LambdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitLambdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::LambdefContext* Python3Parser::lambdef() {
  LambdefContext *_localctx = _tracker.createInstance<LambdefContext>(_ctx, getState());
  enterRule(_localctx, 104, Python3Parser::RuleLambdef);
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
    setState(744);
    match(Python3Parser::LAMBDA);
    setState(746);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::STAR)
      | (1ULL << Python3Parser::POWER))) != 0)) {
      setState(745);
      varargslist();
    }
    setState(748);
    match(Python3Parser::COLON);
    setState(749);
    test();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lambdef_nocondContext ------------------------------------------------------------------

Python3Parser::Lambdef_nocondContext::Lambdef_nocondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Lambdef_nocondContext::LAMBDA() {
  return getToken(Python3Parser::LAMBDA, 0);
}

tree::TerminalNode* Python3Parser::Lambdef_nocondContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::Test_nocondContext* Python3Parser::Lambdef_nocondContext::test_nocond() {
  return getRuleContext<Python3Parser::Test_nocondContext>(0);
}

Python3Parser::VarargslistContext* Python3Parser::Lambdef_nocondContext::varargslist() {
  return getRuleContext<Python3Parser::VarargslistContext>(0);
}


size_t Python3Parser::Lambdef_nocondContext::getRuleIndex() const {
  return Python3Parser::RuleLambdef_nocond;
}

void Python3Parser::Lambdef_nocondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdef_nocond(this);
}

void Python3Parser::Lambdef_nocondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdef_nocond(this);
}


antlrcpp::Any Python3Parser::Lambdef_nocondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitLambdef_nocond(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Lambdef_nocondContext* Python3Parser::lambdef_nocond() {
  Lambdef_nocondContext *_localctx = _tracker.createInstance<Lambdef_nocondContext>(_ctx, getState());
  enterRule(_localctx, 106, Python3Parser::RuleLambdef_nocond);
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
    setState(751);
    match(Python3Parser::LAMBDA);
    setState(753);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::STAR)
      | (1ULL << Python3Parser::POWER))) != 0)) {
      setState(752);
      varargslist();
    }
    setState(755);
    match(Python3Parser::COLON);
    setState(756);
    test_nocond();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_testContext ------------------------------------------------------------------

Python3Parser::Or_testContext::Or_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::And_testContext *> Python3Parser::Or_testContext::and_test() {
  return getRuleContexts<Python3Parser::And_testContext>();
}

Python3Parser::And_testContext* Python3Parser::Or_testContext::and_test(size_t i) {
  return getRuleContext<Python3Parser::And_testContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Or_testContext::OR() {
  return getTokens(Python3Parser::OR);
}

tree::TerminalNode* Python3Parser::Or_testContext::OR(size_t i) {
  return getToken(Python3Parser::OR, i);
}


size_t Python3Parser::Or_testContext::getRuleIndex() const {
  return Python3Parser::RuleOr_test;
}

void Python3Parser::Or_testContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_test(this);
}

void Python3Parser::Or_testContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_test(this);
}


antlrcpp::Any Python3Parser::Or_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitOr_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Or_testContext* Python3Parser::or_test() {
  Or_testContext *_localctx = _tracker.createInstance<Or_testContext>(_ctx, getState());
  enterRule(_localctx, 108, Python3Parser::RuleOr_test);
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
    setState(758);
    and_test();
    setState(763);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::OR) {
      setState(759);
      match(Python3Parser::OR);
      setState(760);
      and_test();
      setState(765);
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

//----------------- And_testContext ------------------------------------------------------------------

Python3Parser::And_testContext::And_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Not_testContext *> Python3Parser::And_testContext::not_test() {
  return getRuleContexts<Python3Parser::Not_testContext>();
}

Python3Parser::Not_testContext* Python3Parser::And_testContext::not_test(size_t i) {
  return getRuleContext<Python3Parser::Not_testContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::And_testContext::AND() {
  return getTokens(Python3Parser::AND);
}

tree::TerminalNode* Python3Parser::And_testContext::AND(size_t i) {
  return getToken(Python3Parser::AND, i);
}


size_t Python3Parser::And_testContext::getRuleIndex() const {
  return Python3Parser::RuleAnd_test;
}

void Python3Parser::And_testContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_test(this);
}

void Python3Parser::And_testContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_test(this);
}


antlrcpp::Any Python3Parser::And_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAnd_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::And_testContext* Python3Parser::and_test() {
  And_testContext *_localctx = _tracker.createInstance<And_testContext>(_ctx, getState());
  enterRule(_localctx, 110, Python3Parser::RuleAnd_test);
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
    setState(766);
    not_test();
    setState(771);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::AND) {
      setState(767);
      match(Python3Parser::AND);
      setState(768);
      not_test();
      setState(773);
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

//----------------- Not_testContext ------------------------------------------------------------------

Python3Parser::Not_testContext::Not_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Not_testContext::NOT() {
  return getToken(Python3Parser::NOT, 0);
}

Python3Parser::Not_testContext* Python3Parser::Not_testContext::not_test() {
  return getRuleContext<Python3Parser::Not_testContext>(0);
}

Python3Parser::ComparisonContext* Python3Parser::Not_testContext::comparison() {
  return getRuleContext<Python3Parser::ComparisonContext>(0);
}


size_t Python3Parser::Not_testContext::getRuleIndex() const {
  return Python3Parser::RuleNot_test;
}

void Python3Parser::Not_testContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot_test(this);
}

void Python3Parser::Not_testContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot_test(this);
}


antlrcpp::Any Python3Parser::Not_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitNot_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Not_testContext* Python3Parser::not_test() {
  Not_testContext *_localctx = _tracker.createInstance<Not_testContext>(_ctx, getState());
  enterRule(_localctx, 112, Python3Parser::RuleNot_test);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(777);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(774);
        match(Python3Parser::NOT);
        setState(775);
        not_test();
        break;
      }

      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(776);
        comparison();
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

//----------------- ComparisonContext ------------------------------------------------------------------

Python3Parser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::ExprContext *> Python3Parser::ComparisonContext::expr() {
  return getRuleContexts<Python3Parser::ExprContext>();
}

Python3Parser::ExprContext* Python3Parser::ComparisonContext::expr(size_t i) {
  return getRuleContext<Python3Parser::ExprContext>(i);
}

std::vector<Python3Parser::Comp_opContext *> Python3Parser::ComparisonContext::comp_op() {
  return getRuleContexts<Python3Parser::Comp_opContext>();
}

Python3Parser::Comp_opContext* Python3Parser::ComparisonContext::comp_op(size_t i) {
  return getRuleContext<Python3Parser::Comp_opContext>(i);
}


size_t Python3Parser::ComparisonContext::getRuleIndex() const {
  return Python3Parser::RuleComparison;
}

void Python3Parser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void Python3Parser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}


antlrcpp::Any Python3Parser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ComparisonContext* Python3Parser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 114, Python3Parser::RuleComparison);
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
    setState(779);
    expr();
    setState(785);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 18) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 18)) & ((1ULL << (Python3Parser::IN - 18))
      | (1ULL << (Python3Parser::NOT - 18))
      | (1ULL << (Python3Parser::IS - 18))
      | (1ULL << (Python3Parser::LESS_THAN - 18))
      | (1ULL << (Python3Parser::GREATER_THAN - 18))
      | (1ULL << (Python3Parser::EQUALS - 18))
      | (1ULL << (Python3Parser::GT_EQ - 18))
      | (1ULL << (Python3Parser::LT_EQ - 18))
      | (1ULL << (Python3Parser::NOT_EQ_1 - 18))
      | (1ULL << (Python3Parser::NOT_EQ_2 - 18)))) != 0)) {
      setState(780);
      comp_op();
      setState(781);
      expr();
      setState(787);
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

//----------------- Comp_opContext ------------------------------------------------------------------

Python3Parser::Comp_opContext::Comp_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Comp_opContext::LESS_THAN() {
  return getToken(Python3Parser::LESS_THAN, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::GREATER_THAN() {
  return getToken(Python3Parser::GREATER_THAN, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::EQUALS() {
  return getToken(Python3Parser::EQUALS, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::GT_EQ() {
  return getToken(Python3Parser::GT_EQ, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::LT_EQ() {
  return getToken(Python3Parser::LT_EQ, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::NOT_EQ_1() {
  return getToken(Python3Parser::NOT_EQ_1, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::NOT_EQ_2() {
  return getToken(Python3Parser::NOT_EQ_2, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::IN() {
  return getToken(Python3Parser::IN, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::NOT() {
  return getToken(Python3Parser::NOT, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::IS() {
  return getToken(Python3Parser::IS, 0);
}


size_t Python3Parser::Comp_opContext::getRuleIndex() const {
  return Python3Parser::RuleComp_op;
}

void Python3Parser::Comp_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_op(this);
}

void Python3Parser::Comp_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_op(this);
}


antlrcpp::Any Python3Parser::Comp_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitComp_op(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Comp_opContext* Python3Parser::comp_op() {
  Comp_opContext *_localctx = _tracker.createInstance<Comp_opContext>(_ctx, getState());
  enterRule(_localctx, 116, Python3Parser::RuleComp_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(801);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(788);
      match(Python3Parser::LESS_THAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(789);
      match(Python3Parser::GREATER_THAN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(790);
      match(Python3Parser::EQUALS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(791);
      match(Python3Parser::GT_EQ);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(792);
      match(Python3Parser::LT_EQ);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(793);
      match(Python3Parser::NOT_EQ_1);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(794);
      match(Python3Parser::NOT_EQ_2);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(795);
      match(Python3Parser::IN);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(796);
      match(Python3Parser::NOT);
      setState(797);
      match(Python3Parser::IN);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(798);
      match(Python3Parser::IS);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(799);
      match(Python3Parser::IS);
      setState(800);
      match(Python3Parser::NOT);
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

//----------------- Star_exprContext ------------------------------------------------------------------

Python3Parser::Star_exprContext::Star_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Star_exprContext::STAR() {
  return getToken(Python3Parser::STAR, 0);
}

Python3Parser::ExprContext* Python3Parser::Star_exprContext::expr() {
  return getRuleContext<Python3Parser::ExprContext>(0);
}


size_t Python3Parser::Star_exprContext::getRuleIndex() const {
  return Python3Parser::RuleStar_expr;
}

void Python3Parser::Star_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStar_expr(this);
}

void Python3Parser::Star_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStar_expr(this);
}


antlrcpp::Any Python3Parser::Star_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitStar_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Star_exprContext* Python3Parser::star_expr() {
  Star_exprContext *_localctx = _tracker.createInstance<Star_exprContext>(_ctx, getState());
  enterRule(_localctx, 118, Python3Parser::RuleStar_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(803);
    match(Python3Parser::STAR);
    setState(804);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

Python3Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Xor_exprContext *> Python3Parser::ExprContext::xor_expr() {
  return getRuleContexts<Python3Parser::Xor_exprContext>();
}

Python3Parser::Xor_exprContext* Python3Parser::ExprContext::xor_expr(size_t i) {
  return getRuleContext<Python3Parser::Xor_exprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::ExprContext::OR_OP() {
  return getTokens(Python3Parser::OR_OP);
}

tree::TerminalNode* Python3Parser::ExprContext::OR_OP(size_t i) {
  return getToken(Python3Parser::OR_OP, i);
}


size_t Python3Parser::ExprContext::getRuleIndex() const {
  return Python3Parser::RuleExpr;
}

void Python3Parser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void Python3Parser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


antlrcpp::Any Python3Parser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ExprContext* Python3Parser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 120, Python3Parser::RuleExpr);
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
    setState(806);
    xor_expr();
    setState(811);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::OR_OP) {
      setState(807);
      match(Python3Parser::OR_OP);
      setState(808);
      xor_expr();
      setState(813);
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

//----------------- Xor_exprContext ------------------------------------------------------------------

Python3Parser::Xor_exprContext::Xor_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::And_exprContext *> Python3Parser::Xor_exprContext::and_expr() {
  return getRuleContexts<Python3Parser::And_exprContext>();
}

Python3Parser::And_exprContext* Python3Parser::Xor_exprContext::and_expr(size_t i) {
  return getRuleContext<Python3Parser::And_exprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Xor_exprContext::XOR() {
  return getTokens(Python3Parser::XOR);
}

tree::TerminalNode* Python3Parser::Xor_exprContext::XOR(size_t i) {
  return getToken(Python3Parser::XOR, i);
}


size_t Python3Parser::Xor_exprContext::getRuleIndex() const {
  return Python3Parser::RuleXor_expr;
}

void Python3Parser::Xor_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXor_expr(this);
}

void Python3Parser::Xor_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXor_expr(this);
}


antlrcpp::Any Python3Parser::Xor_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitXor_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Xor_exprContext* Python3Parser::xor_expr() {
  Xor_exprContext *_localctx = _tracker.createInstance<Xor_exprContext>(_ctx, getState());
  enterRule(_localctx, 122, Python3Parser::RuleXor_expr);
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
    setState(814);
    and_expr();
    setState(819);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::XOR) {
      setState(815);
      match(Python3Parser::XOR);
      setState(816);
      and_expr();
      setState(821);
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

//----------------- And_exprContext ------------------------------------------------------------------

Python3Parser::And_exprContext::And_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Shift_exprContext *> Python3Parser::And_exprContext::shift_expr() {
  return getRuleContexts<Python3Parser::Shift_exprContext>();
}

Python3Parser::Shift_exprContext* Python3Parser::And_exprContext::shift_expr(size_t i) {
  return getRuleContext<Python3Parser::Shift_exprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::And_exprContext::AND_OP() {
  return getTokens(Python3Parser::AND_OP);
}

tree::TerminalNode* Python3Parser::And_exprContext::AND_OP(size_t i) {
  return getToken(Python3Parser::AND_OP, i);
}


size_t Python3Parser::And_exprContext::getRuleIndex() const {
  return Python3Parser::RuleAnd_expr;
}

void Python3Parser::And_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_expr(this);
}

void Python3Parser::And_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_expr(this);
}


antlrcpp::Any Python3Parser::And_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAnd_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::And_exprContext* Python3Parser::and_expr() {
  And_exprContext *_localctx = _tracker.createInstance<And_exprContext>(_ctx, getState());
  enterRule(_localctx, 124, Python3Parser::RuleAnd_expr);
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
    setState(822);
    shift_expr();
    setState(827);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::AND_OP) {
      setState(823);
      match(Python3Parser::AND_OP);
      setState(824);
      shift_expr();
      setState(829);
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

//----------------- Shift_exprContext ------------------------------------------------------------------

Python3Parser::Shift_exprContext::Shift_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Arith_exprContext *> Python3Parser::Shift_exprContext::arith_expr() {
  return getRuleContexts<Python3Parser::Arith_exprContext>();
}

Python3Parser::Arith_exprContext* Python3Parser::Shift_exprContext::arith_expr(size_t i) {
  return getRuleContext<Python3Parser::Arith_exprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Shift_exprContext::LEFT_SHIFT() {
  return getTokens(Python3Parser::LEFT_SHIFT);
}

tree::TerminalNode* Python3Parser::Shift_exprContext::LEFT_SHIFT(size_t i) {
  return getToken(Python3Parser::LEFT_SHIFT, i);
}

std::vector<tree::TerminalNode *> Python3Parser::Shift_exprContext::RIGHT_SHIFT() {
  return getTokens(Python3Parser::RIGHT_SHIFT);
}

tree::TerminalNode* Python3Parser::Shift_exprContext::RIGHT_SHIFT(size_t i) {
  return getToken(Python3Parser::RIGHT_SHIFT, i);
}


size_t Python3Parser::Shift_exprContext::getRuleIndex() const {
  return Python3Parser::RuleShift_expr;
}

void Python3Parser::Shift_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift_expr(this);
}

void Python3Parser::Shift_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift_expr(this);
}


antlrcpp::Any Python3Parser::Shift_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitShift_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Shift_exprContext* Python3Parser::shift_expr() {
  Shift_exprContext *_localctx = _tracker.createInstance<Shift_exprContext>(_ctx, getState());
  enterRule(_localctx, 126, Python3Parser::RuleShift_expr);
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
    setState(830);
    arith_expr();
    setState(835);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::LEFT_SHIFT

    || _la == Python3Parser::RIGHT_SHIFT) {
      setState(831);
      _la = _input->LA(1);
      if (!(_la == Python3Parser::LEFT_SHIFT

      || _la == Python3Parser::RIGHT_SHIFT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(832);
      arith_expr();
      setState(837);
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

//----------------- Arith_exprContext ------------------------------------------------------------------

Python3Parser::Arith_exprContext::Arith_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TermContext *> Python3Parser::Arith_exprContext::term() {
  return getRuleContexts<Python3Parser::TermContext>();
}

Python3Parser::TermContext* Python3Parser::Arith_exprContext::term(size_t i) {
  return getRuleContext<Python3Parser::TermContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Arith_exprContext::ADD() {
  return getTokens(Python3Parser::ADD);
}

tree::TerminalNode* Python3Parser::Arith_exprContext::ADD(size_t i) {
  return getToken(Python3Parser::ADD, i);
}

std::vector<tree::TerminalNode *> Python3Parser::Arith_exprContext::MINUS() {
  return getTokens(Python3Parser::MINUS);
}

tree::TerminalNode* Python3Parser::Arith_exprContext::MINUS(size_t i) {
  return getToken(Python3Parser::MINUS, i);
}


size_t Python3Parser::Arith_exprContext::getRuleIndex() const {
  return Python3Parser::RuleArith_expr;
}

void Python3Parser::Arith_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArith_expr(this);
}

void Python3Parser::Arith_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArith_expr(this);
}


antlrcpp::Any Python3Parser::Arith_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitArith_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Arith_exprContext* Python3Parser::arith_expr() {
  Arith_exprContext *_localctx = _tracker.createInstance<Arith_exprContext>(_ctx, getState());
  enterRule(_localctx, 128, Python3Parser::RuleArith_expr);
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
    setState(838);
    term();
    setState(843);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ADD

    || _la == Python3Parser::MINUS) {
      setState(839);
      _la = _input->LA(1);
      if (!(_la == Python3Parser::ADD

      || _la == Python3Parser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(840);
      term();
      setState(845);
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

//----------------- TermContext ------------------------------------------------------------------

Python3Parser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::FactorContext *> Python3Parser::TermContext::factor() {
  return getRuleContexts<Python3Parser::FactorContext>();
}

Python3Parser::FactorContext* Python3Parser::TermContext::factor(size_t i) {
  return getRuleContext<Python3Parser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::STAR() {
  return getTokens(Python3Parser::STAR);
}

tree::TerminalNode* Python3Parser::TermContext::STAR(size_t i) {
  return getToken(Python3Parser::STAR, i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::AT() {
  return getTokens(Python3Parser::AT);
}

tree::TerminalNode* Python3Parser::TermContext::AT(size_t i) {
  return getToken(Python3Parser::AT, i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::DIV() {
  return getTokens(Python3Parser::DIV);
}

tree::TerminalNode* Python3Parser::TermContext::DIV(size_t i) {
  return getToken(Python3Parser::DIV, i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::MOD() {
  return getTokens(Python3Parser::MOD);
}

tree::TerminalNode* Python3Parser::TermContext::MOD(size_t i) {
  return getToken(Python3Parser::MOD, i);
}

std::vector<tree::TerminalNode *> Python3Parser::TermContext::IDIV() {
  return getTokens(Python3Parser::IDIV);
}

tree::TerminalNode* Python3Parser::TermContext::IDIV(size_t i) {
  return getToken(Python3Parser::IDIV, i);
}


size_t Python3Parser::TermContext::getRuleIndex() const {
  return Python3Parser::RuleTerm;
}

void Python3Parser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void Python3Parser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


antlrcpp::Any Python3Parser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TermContext* Python3Parser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 130, Python3Parser::RuleTerm);
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
    setState(846);
    factor();
    setState(851);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 51) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 51)) & ((1ULL << (Python3Parser::STAR - 51))
      | (1ULL << (Python3Parser::DIV - 51))
      | (1ULL << (Python3Parser::MOD - 51))
      | (1ULL << (Python3Parser::IDIV - 51))
      | (1ULL << (Python3Parser::AT - 51)))) != 0)) {
      setState(847);
      _la = _input->LA(1);
      if (!(((((_la - 51) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 51)) & ((1ULL << (Python3Parser::STAR - 51))
        | (1ULL << (Python3Parser::DIV - 51))
        | (1ULL << (Python3Parser::MOD - 51))
        | (1ULL << (Python3Parser::IDIV - 51))
        | (1ULL << (Python3Parser::AT - 51)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(848);
      factor();
      setState(853);
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

//----------------- FactorContext ------------------------------------------------------------------

Python3Parser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::FactorContext* Python3Parser::FactorContext::factor() {
  return getRuleContext<Python3Parser::FactorContext>(0);
}

tree::TerminalNode* Python3Parser::FactorContext::ADD() {
  return getToken(Python3Parser::ADD, 0);
}

tree::TerminalNode* Python3Parser::FactorContext::MINUS() {
  return getToken(Python3Parser::MINUS, 0);
}

tree::TerminalNode* Python3Parser::FactorContext::NOT_OP() {
  return getToken(Python3Parser::NOT_OP, 0);
}

Python3Parser::PowerContext* Python3Parser::FactorContext::power() {
  return getRuleContext<Python3Parser::PowerContext>(0);
}


size_t Python3Parser::FactorContext::getRuleIndex() const {
  return Python3Parser::RuleFactor;
}

void Python3Parser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void Python3Parser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


antlrcpp::Any Python3Parser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FactorContext* Python3Parser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 132, Python3Parser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(857);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP: {
        enterOuterAlt(_localctx, 1);
        setState(854);
        _la = _input->LA(1);
        if (!(((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
          | (1ULL << (Python3Parser::MINUS - 66))
          | (1ULL << (Python3Parser::NOT_OP - 66)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(855);
        factor();
        break;
      }

      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(856);
        power();
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

//----------------- PowerContext ------------------------------------------------------------------

Python3Parser::PowerContext::PowerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Atom_exprContext* Python3Parser::PowerContext::atom_expr() {
  return getRuleContext<Python3Parser::Atom_exprContext>(0);
}

tree::TerminalNode* Python3Parser::PowerContext::POWER() {
  return getToken(Python3Parser::POWER, 0);
}

Python3Parser::FactorContext* Python3Parser::PowerContext::factor() {
  return getRuleContext<Python3Parser::FactorContext>(0);
}


size_t Python3Parser::PowerContext::getRuleIndex() const {
  return Python3Parser::RulePower;
}

void Python3Parser::PowerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPower(this);
}

void Python3Parser::PowerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPower(this);
}


antlrcpp::Any Python3Parser::PowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitPower(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::PowerContext* Python3Parser::power() {
  PowerContext *_localctx = _tracker.createInstance<PowerContext>(_ctx, getState());
  enterRule(_localctx, 134, Python3Parser::RulePower);
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
    setState(859);
    atom_expr();
    setState(862);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::POWER) {
      setState(860);
      match(Python3Parser::POWER);
      setState(861);
      factor();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_exprContext ------------------------------------------------------------------

Python3Parser::Atom_exprContext::Atom_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::AtomContext* Python3Parser::Atom_exprContext::atom() {
  return getRuleContext<Python3Parser::AtomContext>(0);
}

tree::TerminalNode* Python3Parser::Atom_exprContext::AWAIT() {
  return getToken(Python3Parser::AWAIT, 0);
}

std::vector<Python3Parser::TrailerContext *> Python3Parser::Atom_exprContext::trailer() {
  return getRuleContexts<Python3Parser::TrailerContext>();
}

Python3Parser::TrailerContext* Python3Parser::Atom_exprContext::trailer(size_t i) {
  return getRuleContext<Python3Parser::TrailerContext>(i);
}


size_t Python3Parser::Atom_exprContext::getRuleIndex() const {
  return Python3Parser::RuleAtom_expr;
}

void Python3Parser::Atom_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_expr(this);
}

void Python3Parser::Atom_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_expr(this);
}


antlrcpp::Any Python3Parser::Atom_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAtom_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Atom_exprContext* Python3Parser::atom_expr() {
  Atom_exprContext *_localctx = _tracker.createInstance<Atom_exprContext>(_ctx, getState());
  enterRule(_localctx, 136, Python3Parser::RuleAtom_expr);
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
    setState(865);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::AWAIT) {
      setState(864);
      match(Python3Parser::AWAIT);
    }
    setState(867);
    atom();
    setState(871);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::DOT)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::OPEN_BRACK))) != 0)) {
      setState(868);
      trailer();
      setState(873);
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

//----------------- AtomContext ------------------------------------------------------------------

Python3Parser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::AtomContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::OPEN_BRACK() {
  return getToken(Python3Parser::OPEN_BRACK, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::CLOSE_BRACK() {
  return getToken(Python3Parser::CLOSE_BRACK, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::OPEN_BRACE() {
  return getToken(Python3Parser::OPEN_BRACE, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::CLOSE_BRACE() {
  return getToken(Python3Parser::CLOSE_BRACE, 0);
}

Python3Parser::NameContext* Python3Parser::AtomContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}

tree::TerminalNode* Python3Parser::AtomContext::NUMBER() {
  return getToken(Python3Parser::NUMBER, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::ELLIPSIS() {
  return getToken(Python3Parser::ELLIPSIS, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::NONE() {
  return getToken(Python3Parser::NONE, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::TRUE() {
  return getToken(Python3Parser::TRUE, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::FALSE() {
  return getToken(Python3Parser::FALSE, 0);
}

Python3Parser::Yield_exprContext* Python3Parser::AtomContext::yield_expr() {
  return getRuleContext<Python3Parser::Yield_exprContext>(0);
}

Python3Parser::Testlist_compContext* Python3Parser::AtomContext::testlist_comp() {
  return getRuleContext<Python3Parser::Testlist_compContext>(0);
}

Python3Parser::DictorsetmakerContext* Python3Parser::AtomContext::dictorsetmaker() {
  return getRuleContext<Python3Parser::DictorsetmakerContext>(0);
}

std::vector<tree::TerminalNode *> Python3Parser::AtomContext::STRING() {
  return getTokens(Python3Parser::STRING);
}

tree::TerminalNode* Python3Parser::AtomContext::STRING(size_t i) {
  return getToken(Python3Parser::STRING, i);
}


size_t Python3Parser::AtomContext::getRuleIndex() const {
  return Python3Parser::RuleAtom;
}

void Python3Parser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void Python3Parser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any Python3Parser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::AtomContext* Python3Parser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 138, Python3Parser::RuleAtom);
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
    setState(901);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::OPEN_PAREN: {
        setState(874);
        match(Python3Parser::OPEN_PAREN);
        setState(877);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Python3Parser::YIELD: {
            setState(875);
            yield_expr();
            break;
          }

          case Python3Parser::STRING:
          case Python3Parser::NUMBER:
          case Python3Parser::LAMBDA:
          case Python3Parser::NOT:
          case Python3Parser::NONE:
          case Python3Parser::TRUE:
          case Python3Parser::FALSE:
          case Python3Parser::AWAIT:
          case Python3Parser::NAME:
          case Python3Parser::ELLIPSIS:
          case Python3Parser::STAR:
          case Python3Parser::OPEN_PAREN:
          case Python3Parser::OPEN_BRACK:
          case Python3Parser::ADD:
          case Python3Parser::MINUS:
          case Python3Parser::NOT_OP:
          case Python3Parser::OPEN_BRACE: {
            setState(876);
            testlist_comp();
            break;
          }

          case Python3Parser::CLOSE_PAREN: {
            break;
          }

        default:
          break;
        }
        setState(879);
        match(Python3Parser::CLOSE_PAREN);
        break;
      }

      case Python3Parser::OPEN_BRACK: {
        setState(880);
        match(Python3Parser::OPEN_BRACK);
        setState(882);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
          | (1ULL << Python3Parser::NUMBER)
          | (1ULL << Python3Parser::LAMBDA)
          | (1ULL << Python3Parser::NOT)
          | (1ULL << Python3Parser::NONE)
          | (1ULL << Python3Parser::TRUE)
          | (1ULL << Python3Parser::FALSE)
          | (1ULL << Python3Parser::AWAIT)
          | (1ULL << Python3Parser::NAME)
          | (1ULL << Python3Parser::ELLIPSIS)
          | (1ULL << Python3Parser::STAR)
          | (1ULL << Python3Parser::OPEN_PAREN)
          | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
          | (1ULL << (Python3Parser::MINUS - 66))
          | (1ULL << (Python3Parser::NOT_OP - 66))
          | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
          setState(881);
          testlist_comp();
        }
        setState(884);
        match(Python3Parser::CLOSE_BRACK);
        break;
      }

      case Python3Parser::OPEN_BRACE: {
        setState(885);
        match(Python3Parser::OPEN_BRACE);
        setState(887);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
          | (1ULL << Python3Parser::NUMBER)
          | (1ULL << Python3Parser::LAMBDA)
          | (1ULL << Python3Parser::NOT)
          | (1ULL << Python3Parser::NONE)
          | (1ULL << Python3Parser::TRUE)
          | (1ULL << Python3Parser::FALSE)
          | (1ULL << Python3Parser::AWAIT)
          | (1ULL << Python3Parser::NAME)
          | (1ULL << Python3Parser::ELLIPSIS)
          | (1ULL << Python3Parser::STAR)
          | (1ULL << Python3Parser::OPEN_PAREN)
          | (1ULL << Python3Parser::POWER)
          | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
          | (1ULL << (Python3Parser::MINUS - 66))
          | (1ULL << (Python3Parser::NOT_OP - 66))
          | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
          setState(886);
          dictorsetmaker();
        }
        setState(889);
        match(Python3Parser::CLOSE_BRACE);
        break;
      }

      case Python3Parser::NAME: {
        setState(890);
        name();
        break;
      }

      case Python3Parser::NUMBER: {
        setState(891);
        match(Python3Parser::NUMBER);
        break;
      }

      case Python3Parser::STRING: {
        setState(893); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(892);
          match(Python3Parser::STRING);
          setState(895); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Python3Parser::STRING);
        break;
      }

      case Python3Parser::ELLIPSIS: {
        setState(897);
        match(Python3Parser::ELLIPSIS);
        break;
      }

      case Python3Parser::NONE: {
        setState(898);
        match(Python3Parser::NONE);
        break;
      }

      case Python3Parser::TRUE: {
        setState(899);
        match(Python3Parser::TRUE);
        break;
      }

      case Python3Parser::FALSE: {
        setState(900);
        match(Python3Parser::FALSE);
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

//----------------- NameContext ------------------------------------------------------------------

Python3Parser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::NameContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}


size_t Python3Parser::NameContext::getRuleIndex() const {
  return Python3Parser::RuleName;
}

void Python3Parser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void Python3Parser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}


antlrcpp::Any Python3Parser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::NameContext* Python3Parser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 140, Python3Parser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(903);
    match(Python3Parser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Testlist_compContext ------------------------------------------------------------------

Python3Parser::Testlist_compContext::Testlist_compContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TestContext *> Python3Parser::Testlist_compContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::Testlist_compContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<Python3Parser::Star_exprContext *> Python3Parser::Testlist_compContext::star_expr() {
  return getRuleContexts<Python3Parser::Star_exprContext>();
}

Python3Parser::Star_exprContext* Python3Parser::Testlist_compContext::star_expr(size_t i) {
  return getRuleContext<Python3Parser::Star_exprContext>(i);
}

Python3Parser::Comp_forContext* Python3Parser::Testlist_compContext::comp_for() {
  return getRuleContext<Python3Parser::Comp_forContext>(0);
}

std::vector<tree::TerminalNode *> Python3Parser::Testlist_compContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Testlist_compContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Testlist_compContext::getRuleIndex() const {
  return Python3Parser::RuleTestlist_comp;
}

void Python3Parser::Testlist_compContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestlist_comp(this);
}

void Python3Parser::Testlist_compContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestlist_comp(this);
}


antlrcpp::Any Python3Parser::Testlist_compContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTestlist_comp(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Testlist_compContext* Python3Parser::testlist_comp() {
  Testlist_compContext *_localctx = _tracker.createInstance<Testlist_compContext>(_ctx, getState());
  enterRule(_localctx, 142, Python3Parser::RuleTestlist_comp);
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
    setState(907);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::LAMBDA:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        setState(905);
        test();
        break;
      }

      case Python3Parser::STAR: {
        setState(906);
        star_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(923);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::FOR:
      case Python3Parser::ASYNC: {
        setState(909);
        comp_for();
        break;
      }

      case Python3Parser::CLOSE_PAREN:
      case Python3Parser::COMMA:
      case Python3Parser::CLOSE_BRACK: {
        setState(917);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(910);
            match(Python3Parser::COMMA);
            setState(913);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case Python3Parser::STRING:
              case Python3Parser::NUMBER:
              case Python3Parser::LAMBDA:
              case Python3Parser::NOT:
              case Python3Parser::NONE:
              case Python3Parser::TRUE:
              case Python3Parser::FALSE:
              case Python3Parser::AWAIT:
              case Python3Parser::NAME:
              case Python3Parser::ELLIPSIS:
              case Python3Parser::OPEN_PAREN:
              case Python3Parser::OPEN_BRACK:
              case Python3Parser::ADD:
              case Python3Parser::MINUS:
              case Python3Parser::NOT_OP:
              case Python3Parser::OPEN_BRACE: {
                setState(911);
                test();
                break;
              }

              case Python3Parser::STAR: {
                setState(912);
                star_expr();
                break;
              }

            default:
              throw NoViableAltException(this);
            } 
          }
          setState(919);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx);
        }
        setState(921);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(920);
          match(Python3Parser::COMMA);
        }
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

//----------------- TrailerContext ------------------------------------------------------------------

Python3Parser::TrailerContext::TrailerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::TrailerContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::TrailerContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::ArglistContext* Python3Parser::TrailerContext::arglist() {
  return getRuleContext<Python3Parser::ArglistContext>(0);
}

tree::TerminalNode* Python3Parser::TrailerContext::OPEN_BRACK() {
  return getToken(Python3Parser::OPEN_BRACK, 0);
}

Python3Parser::SubscriptlistContext* Python3Parser::TrailerContext::subscriptlist() {
  return getRuleContext<Python3Parser::SubscriptlistContext>(0);
}

tree::TerminalNode* Python3Parser::TrailerContext::CLOSE_BRACK() {
  return getToken(Python3Parser::CLOSE_BRACK, 0);
}

tree::TerminalNode* Python3Parser::TrailerContext::DOT() {
  return getToken(Python3Parser::DOT, 0);
}

Python3Parser::NameContext* Python3Parser::TrailerContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}


size_t Python3Parser::TrailerContext::getRuleIndex() const {
  return Python3Parser::RuleTrailer;
}

void Python3Parser::TrailerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailer(this);
}

void Python3Parser::TrailerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailer(this);
}


antlrcpp::Any Python3Parser::TrailerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTrailer(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TrailerContext* Python3Parser::trailer() {
  TrailerContext *_localctx = _tracker.createInstance<TrailerContext>(_ctx, getState());
  enterRule(_localctx, 144, Python3Parser::RuleTrailer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(936);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::OPEN_PAREN: {
        enterOuterAlt(_localctx, 1);
        setState(925);
        match(Python3Parser::OPEN_PAREN);
        setState(927);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
          | (1ULL << Python3Parser::NUMBER)
          | (1ULL << Python3Parser::LAMBDA)
          | (1ULL << Python3Parser::NOT)
          | (1ULL << Python3Parser::NONE)
          | (1ULL << Python3Parser::TRUE)
          | (1ULL << Python3Parser::FALSE)
          | (1ULL << Python3Parser::AWAIT)
          | (1ULL << Python3Parser::NAME)
          | (1ULL << Python3Parser::ELLIPSIS)
          | (1ULL << Python3Parser::STAR)
          | (1ULL << Python3Parser::OPEN_PAREN)
          | (1ULL << Python3Parser::POWER)
          | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
          | (1ULL << (Python3Parser::MINUS - 66))
          | (1ULL << (Python3Parser::NOT_OP - 66))
          | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
          setState(926);
          arglist();
        }
        setState(929);
        match(Python3Parser::CLOSE_PAREN);
        break;
      }

      case Python3Parser::OPEN_BRACK: {
        enterOuterAlt(_localctx, 2);
        setState(930);
        match(Python3Parser::OPEN_BRACK);
        setState(931);
        subscriptlist();
        setState(932);
        match(Python3Parser::CLOSE_BRACK);
        break;
      }

      case Python3Parser::DOT: {
        enterOuterAlt(_localctx, 3);
        setState(934);
        match(Python3Parser::DOT);
        setState(935);
        name();
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

//----------------- SubscriptlistContext ------------------------------------------------------------------

Python3Parser::SubscriptlistContext::SubscriptlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::SubscriptContext *> Python3Parser::SubscriptlistContext::subscript() {
  return getRuleContexts<Python3Parser::SubscriptContext>();
}

Python3Parser::SubscriptContext* Python3Parser::SubscriptlistContext::subscript(size_t i) {
  return getRuleContext<Python3Parser::SubscriptContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::SubscriptlistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::SubscriptlistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::SubscriptlistContext::getRuleIndex() const {
  return Python3Parser::RuleSubscriptlist;
}

void Python3Parser::SubscriptlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubscriptlist(this);
}

void Python3Parser::SubscriptlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubscriptlist(this);
}


antlrcpp::Any Python3Parser::SubscriptlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSubscriptlist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::SubscriptlistContext* Python3Parser::subscriptlist() {
  SubscriptlistContext *_localctx = _tracker.createInstance<SubscriptlistContext>(_ctx, getState());
  enterRule(_localctx, 146, Python3Parser::RuleSubscriptlist);
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
    setState(938);
    subscript();
    setState(943);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(939);
        match(Python3Parser::COMMA);
        setState(940);
        subscript(); 
      }
      setState(945);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx);
    }
    setState(947);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(946);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubscriptContext ------------------------------------------------------------------

Python3Parser::SubscriptContext::SubscriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TestContext *> Python3Parser::SubscriptContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::SubscriptContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

tree::TerminalNode* Python3Parser::SubscriptContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::SliceopContext* Python3Parser::SubscriptContext::sliceop() {
  return getRuleContext<Python3Parser::SliceopContext>(0);
}


size_t Python3Parser::SubscriptContext::getRuleIndex() const {
  return Python3Parser::RuleSubscript;
}

void Python3Parser::SubscriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubscript(this);
}

void Python3Parser::SubscriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubscript(this);
}


antlrcpp::Any Python3Parser::SubscriptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSubscript(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::SubscriptContext* Python3Parser::subscript() {
  SubscriptContext *_localctx = _tracker.createInstance<SubscriptContext>(_ctx, getState());
  enterRule(_localctx, 148, Python3Parser::RuleSubscript);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(960);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(949);
      test();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(951);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
        | (1ULL << Python3Parser::NUMBER)
        | (1ULL << Python3Parser::LAMBDA)
        | (1ULL << Python3Parser::NOT)
        | (1ULL << Python3Parser::NONE)
        | (1ULL << Python3Parser::TRUE)
        | (1ULL << Python3Parser::FALSE)
        | (1ULL << Python3Parser::AWAIT)
        | (1ULL << Python3Parser::NAME)
        | (1ULL << Python3Parser::ELLIPSIS)
        | (1ULL << Python3Parser::OPEN_PAREN)
        | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
        | (1ULL << (Python3Parser::MINUS - 66))
        | (1ULL << (Python3Parser::NOT_OP - 66))
        | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
        setState(950);
        test();
      }
      setState(953);
      match(Python3Parser::COLON);
      setState(955);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
        | (1ULL << Python3Parser::NUMBER)
        | (1ULL << Python3Parser::LAMBDA)
        | (1ULL << Python3Parser::NOT)
        | (1ULL << Python3Parser::NONE)
        | (1ULL << Python3Parser::TRUE)
        | (1ULL << Python3Parser::FALSE)
        | (1ULL << Python3Parser::AWAIT)
        | (1ULL << Python3Parser::NAME)
        | (1ULL << Python3Parser::ELLIPSIS)
        | (1ULL << Python3Parser::OPEN_PAREN)
        | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
        | (1ULL << (Python3Parser::MINUS - 66))
        | (1ULL << (Python3Parser::NOT_OP - 66))
        | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
        setState(954);
        test();
      }
      setState(958);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::COLON) {
        setState(957);
        sliceop();
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

//----------------- SliceopContext ------------------------------------------------------------------

Python3Parser::SliceopContext::SliceopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::SliceopContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::TestContext* Python3Parser::SliceopContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}


size_t Python3Parser::SliceopContext::getRuleIndex() const {
  return Python3Parser::RuleSliceop;
}

void Python3Parser::SliceopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSliceop(this);
}

void Python3Parser::SliceopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSliceop(this);
}


antlrcpp::Any Python3Parser::SliceopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitSliceop(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::SliceopContext* Python3Parser::sliceop() {
  SliceopContext *_localctx = _tracker.createInstance<SliceopContext>(_ctx, getState());
  enterRule(_localctx, 150, Python3Parser::RuleSliceop);
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
    setState(962);
    match(Python3Parser::COLON);
    setState(964);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::LAMBDA)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::AWAIT)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::ELLIPSIS)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
      | (1ULL << (Python3Parser::MINUS - 66))
      | (1ULL << (Python3Parser::NOT_OP - 66))
      | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
      setState(963);
      test();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprlistContext ------------------------------------------------------------------

Python3Parser::ExprlistContext::ExprlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::ExprContext *> Python3Parser::ExprlistContext::expr() {
  return getRuleContexts<Python3Parser::ExprContext>();
}

Python3Parser::ExprContext* Python3Parser::ExprlistContext::expr(size_t i) {
  return getRuleContext<Python3Parser::ExprContext>(i);
}

std::vector<Python3Parser::Star_exprContext *> Python3Parser::ExprlistContext::star_expr() {
  return getRuleContexts<Python3Parser::Star_exprContext>();
}

Python3Parser::Star_exprContext* Python3Parser::ExprlistContext::star_expr(size_t i) {
  return getRuleContext<Python3Parser::Star_exprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::ExprlistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::ExprlistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::ExprlistContext::getRuleIndex() const {
  return Python3Parser::RuleExprlist;
}

void Python3Parser::ExprlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprlist(this);
}

void Python3Parser::ExprlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprlist(this);
}


antlrcpp::Any Python3Parser::ExprlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitExprlist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ExprlistContext* Python3Parser::exprlist() {
  ExprlistContext *_localctx = _tracker.createInstance<ExprlistContext>(_ctx, getState());
  enterRule(_localctx, 152, Python3Parser::RuleExprlist);
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
    setState(968);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        setState(966);
        expr();
        break;
      }

      case Python3Parser::STAR: {
        setState(967);
        star_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(977);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(970);
        match(Python3Parser::COMMA);
        setState(973);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Python3Parser::STRING:
          case Python3Parser::NUMBER:
          case Python3Parser::NONE:
          case Python3Parser::TRUE:
          case Python3Parser::FALSE:
          case Python3Parser::AWAIT:
          case Python3Parser::NAME:
          case Python3Parser::ELLIPSIS:
          case Python3Parser::OPEN_PAREN:
          case Python3Parser::OPEN_BRACK:
          case Python3Parser::ADD:
          case Python3Parser::MINUS:
          case Python3Parser::NOT_OP:
          case Python3Parser::OPEN_BRACE: {
            setState(971);
            expr();
            break;
          }

          case Python3Parser::STAR: {
            setState(972);
            star_expr();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(979);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx);
    }
    setState(981);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(980);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestlistContext ------------------------------------------------------------------

Python3Parser::TestlistContext::TestlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TestContext *> Python3Parser::TestlistContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::TestlistContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TestlistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::TestlistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::TestlistContext::getRuleIndex() const {
  return Python3Parser::RuleTestlist;
}

void Python3Parser::TestlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestlist(this);
}

void Python3Parser::TestlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestlist(this);
}


antlrcpp::Any Python3Parser::TestlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitTestlist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TestlistContext* Python3Parser::testlist() {
  TestlistContext *_localctx = _tracker.createInstance<TestlistContext>(_ctx, getState());
  enterRule(_localctx, 154, Python3Parser::RuleTestlist);
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
    setState(983);
    test();
    setState(988);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(984);
        match(Python3Parser::COMMA);
        setState(985);
        test(); 
      }
      setState(990);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
    }
    setState(992);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(991);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictorsetmakerContext ------------------------------------------------------------------

Python3Parser::DictorsetmakerContext::DictorsetmakerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TestContext *> Python3Parser::DictorsetmakerContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::DictorsetmakerContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::DictorsetmakerContext::COLON() {
  return getTokens(Python3Parser::COLON);
}

tree::TerminalNode* Python3Parser::DictorsetmakerContext::COLON(size_t i) {
  return getToken(Python3Parser::COLON, i);
}

std::vector<tree::TerminalNode *> Python3Parser::DictorsetmakerContext::POWER() {
  return getTokens(Python3Parser::POWER);
}

tree::TerminalNode* Python3Parser::DictorsetmakerContext::POWER(size_t i) {
  return getToken(Python3Parser::POWER, i);
}

std::vector<Python3Parser::ExprContext *> Python3Parser::DictorsetmakerContext::expr() {
  return getRuleContexts<Python3Parser::ExprContext>();
}

Python3Parser::ExprContext* Python3Parser::DictorsetmakerContext::expr(size_t i) {
  return getRuleContext<Python3Parser::ExprContext>(i);
}

Python3Parser::Comp_forContext* Python3Parser::DictorsetmakerContext::comp_for() {
  return getRuleContext<Python3Parser::Comp_forContext>(0);
}

std::vector<Python3Parser::Star_exprContext *> Python3Parser::DictorsetmakerContext::star_expr() {
  return getRuleContexts<Python3Parser::Star_exprContext>();
}

Python3Parser::Star_exprContext* Python3Parser::DictorsetmakerContext::star_expr(size_t i) {
  return getRuleContext<Python3Parser::Star_exprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::DictorsetmakerContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::DictorsetmakerContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::DictorsetmakerContext::getRuleIndex() const {
  return Python3Parser::RuleDictorsetmaker;
}

void Python3Parser::DictorsetmakerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictorsetmaker(this);
}

void Python3Parser::DictorsetmakerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictorsetmaker(this);
}


antlrcpp::Any Python3Parser::DictorsetmakerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitDictorsetmaker(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::DictorsetmakerContext* Python3Parser::dictorsetmaker() {
  DictorsetmakerContext *_localctx = _tracker.createInstance<DictorsetmakerContext>(_ctx, getState());
  enterRule(_localctx, 156, Python3Parser::RuleDictorsetmaker);
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
    setState(1042);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      setState(1000);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::STRING:
        case Python3Parser::NUMBER:
        case Python3Parser::LAMBDA:
        case Python3Parser::NOT:
        case Python3Parser::NONE:
        case Python3Parser::TRUE:
        case Python3Parser::FALSE:
        case Python3Parser::AWAIT:
        case Python3Parser::NAME:
        case Python3Parser::ELLIPSIS:
        case Python3Parser::OPEN_PAREN:
        case Python3Parser::OPEN_BRACK:
        case Python3Parser::ADD:
        case Python3Parser::MINUS:
        case Python3Parser::NOT_OP:
        case Python3Parser::OPEN_BRACE: {
          setState(994);
          test();
          setState(995);
          match(Python3Parser::COLON);
          setState(996);
          test();
          break;
        }

        case Python3Parser::POWER: {
          setState(998);
          match(Python3Parser::POWER);
          setState(999);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1020);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::FOR:
        case Python3Parser::ASYNC: {
          setState(1002);
          comp_for();
          break;
        }

        case Python3Parser::COMMA:
        case Python3Parser::CLOSE_BRACE: {
          setState(1014);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(1003);
              match(Python3Parser::COMMA);
              setState(1010);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case Python3Parser::STRING:
                case Python3Parser::NUMBER:
                case Python3Parser::LAMBDA:
                case Python3Parser::NOT:
                case Python3Parser::NONE:
                case Python3Parser::TRUE:
                case Python3Parser::FALSE:
                case Python3Parser::AWAIT:
                case Python3Parser::NAME:
                case Python3Parser::ELLIPSIS:
                case Python3Parser::OPEN_PAREN:
                case Python3Parser::OPEN_BRACK:
                case Python3Parser::ADD:
                case Python3Parser::MINUS:
                case Python3Parser::NOT_OP:
                case Python3Parser::OPEN_BRACE: {
                  setState(1004);
                  test();
                  setState(1005);
                  match(Python3Parser::COLON);
                  setState(1006);
                  test();
                  break;
                }

                case Python3Parser::POWER: {
                  setState(1008);
                  match(Python3Parser::POWER);
                  setState(1009);
                  expr();
                  break;
                }

              default:
                throw NoViableAltException(this);
              } 
            }
            setState(1016);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
          }
          setState(1018);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == Python3Parser::COMMA) {
            setState(1017);
            match(Python3Parser::COMMA);
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      setState(1024);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::STRING:
        case Python3Parser::NUMBER:
        case Python3Parser::LAMBDA:
        case Python3Parser::NOT:
        case Python3Parser::NONE:
        case Python3Parser::TRUE:
        case Python3Parser::FALSE:
        case Python3Parser::AWAIT:
        case Python3Parser::NAME:
        case Python3Parser::ELLIPSIS:
        case Python3Parser::OPEN_PAREN:
        case Python3Parser::OPEN_BRACK:
        case Python3Parser::ADD:
        case Python3Parser::MINUS:
        case Python3Parser::NOT_OP:
        case Python3Parser::OPEN_BRACE: {
          setState(1022);
          test();
          break;
        }

        case Python3Parser::STAR: {
          setState(1023);
          star_expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1040);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::FOR:
        case Python3Parser::ASYNC: {
          setState(1026);
          comp_for();
          break;
        }

        case Python3Parser::COMMA:
        case Python3Parser::CLOSE_BRACE: {
          setState(1034);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(1027);
              match(Python3Parser::COMMA);
              setState(1030);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case Python3Parser::STRING:
                case Python3Parser::NUMBER:
                case Python3Parser::LAMBDA:
                case Python3Parser::NOT:
                case Python3Parser::NONE:
                case Python3Parser::TRUE:
                case Python3Parser::FALSE:
                case Python3Parser::AWAIT:
                case Python3Parser::NAME:
                case Python3Parser::ELLIPSIS:
                case Python3Parser::OPEN_PAREN:
                case Python3Parser::OPEN_BRACK:
                case Python3Parser::ADD:
                case Python3Parser::MINUS:
                case Python3Parser::NOT_OP:
                case Python3Parser::OPEN_BRACE: {
                  setState(1028);
                  test();
                  break;
                }

                case Python3Parser::STAR: {
                  setState(1029);
                  star_expr();
                  break;
                }

              default:
                throw NoViableAltException(this);
              } 
            }
            setState(1036);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
          }
          setState(1038);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == Python3Parser::COMMA) {
            setState(1037);
            match(Python3Parser::COMMA);
          }
          break;
        }

      default:
        throw NoViableAltException(this);
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

//----------------- ClassdefContext ------------------------------------------------------------------

Python3Parser::ClassdefContext::ClassdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::ClassdefContext::CLASS() {
  return getToken(Python3Parser::CLASS, 0);
}

Python3Parser::NameContext* Python3Parser::ClassdefContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}

tree::TerminalNode* Python3Parser::ClassdefContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::SuiteContext* Python3Parser::ClassdefContext::suite() {
  return getRuleContext<Python3Parser::SuiteContext>(0);
}

tree::TerminalNode* Python3Parser::ClassdefContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::ClassdefContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::ArglistContext* Python3Parser::ClassdefContext::arglist() {
  return getRuleContext<Python3Parser::ArglistContext>(0);
}


size_t Python3Parser::ClassdefContext::getRuleIndex() const {
  return Python3Parser::RuleClassdef;
}

void Python3Parser::ClassdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassdef(this);
}

void Python3Parser::ClassdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassdef(this);
}


antlrcpp::Any Python3Parser::ClassdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitClassdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ClassdefContext* Python3Parser::classdef() {
  ClassdefContext *_localctx = _tracker.createInstance<ClassdefContext>(_ctx, getState());
  enterRule(_localctx, 158, Python3Parser::RuleClassdef);
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
    setState(1044);
    match(Python3Parser::CLASS);
    setState(1045);
    name();
    setState(1051);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::OPEN_PAREN) {
      setState(1046);
      match(Python3Parser::OPEN_PAREN);
      setState(1048);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
        | (1ULL << Python3Parser::NUMBER)
        | (1ULL << Python3Parser::LAMBDA)
        | (1ULL << Python3Parser::NOT)
        | (1ULL << Python3Parser::NONE)
        | (1ULL << Python3Parser::TRUE)
        | (1ULL << Python3Parser::FALSE)
        | (1ULL << Python3Parser::AWAIT)
        | (1ULL << Python3Parser::NAME)
        | (1ULL << Python3Parser::ELLIPSIS)
        | (1ULL << Python3Parser::STAR)
        | (1ULL << Python3Parser::OPEN_PAREN)
        | (1ULL << Python3Parser::POWER)
        | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
        | (1ULL << (Python3Parser::MINUS - 66))
        | (1ULL << (Python3Parser::NOT_OP - 66))
        | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
        setState(1047);
        arglist();
      }
      setState(1050);
      match(Python3Parser::CLOSE_PAREN);
    }
    setState(1053);
    match(Python3Parser::COLON);
    setState(1054);
    suite();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArglistContext ------------------------------------------------------------------

Python3Parser::ArglistContext::ArglistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::ArgumentContext *> Python3Parser::ArglistContext::argument() {
  return getRuleContexts<Python3Parser::ArgumentContext>();
}

Python3Parser::ArgumentContext* Python3Parser::ArglistContext::argument(size_t i) {
  return getRuleContext<Python3Parser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::ArglistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::ArglistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::ArglistContext::getRuleIndex() const {
  return Python3Parser::RuleArglist;
}

void Python3Parser::ArglistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArglist(this);
}

void Python3Parser::ArglistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArglist(this);
}


antlrcpp::Any Python3Parser::ArglistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitArglist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ArglistContext* Python3Parser::arglist() {
  ArglistContext *_localctx = _tracker.createInstance<ArglistContext>(_ctx, getState());
  enterRule(_localctx, 160, Python3Parser::RuleArglist);
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
    setState(1056);
    argument();
    setState(1061);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1057);
        match(Python3Parser::COMMA);
        setState(1058);
        argument(); 
      }
      setState(1063);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx);
    }
    setState(1065);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(1064);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

Python3Parser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TestContext *> Python3Parser::ArgumentContext::test() {
  return getRuleContexts<Python3Parser::TestContext>();
}

Python3Parser::TestContext* Python3Parser::ArgumentContext::test(size_t i) {
  return getRuleContext<Python3Parser::TestContext>(i);
}

tree::TerminalNode* Python3Parser::ArgumentContext::ASSIGN() {
  return getToken(Python3Parser::ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::ArgumentContext::POWER() {
  return getToken(Python3Parser::POWER, 0);
}

tree::TerminalNode* Python3Parser::ArgumentContext::STAR() {
  return getToken(Python3Parser::STAR, 0);
}

Python3Parser::Comp_forContext* Python3Parser::ArgumentContext::comp_for() {
  return getRuleContext<Python3Parser::Comp_forContext>(0);
}


size_t Python3Parser::ArgumentContext::getRuleIndex() const {
  return Python3Parser::RuleArgument;
}

void Python3Parser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void Python3Parser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any Python3Parser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ArgumentContext* Python3Parser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 162, Python3Parser::RuleArgument);
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
    setState(1079);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      setState(1067);
      test();
      setState(1069);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::FOR

      || _la == Python3Parser::ASYNC) {
        setState(1068);
        comp_for();
      }
      break;
    }

    case 2: {
      setState(1071);
      test();
      setState(1072);
      match(Python3Parser::ASSIGN);
      setState(1073);
      test();
      break;
    }

    case 3: {
      setState(1075);
      match(Python3Parser::POWER);
      setState(1076);
      test();
      break;
    }

    case 4: {
      setState(1077);
      match(Python3Parser::STAR);
      setState(1078);
      test();
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

//----------------- Comp_iterContext ------------------------------------------------------------------

Python3Parser::Comp_iterContext::Comp_iterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Comp_forContext* Python3Parser::Comp_iterContext::comp_for() {
  return getRuleContext<Python3Parser::Comp_forContext>(0);
}

Python3Parser::Comp_ifContext* Python3Parser::Comp_iterContext::comp_if() {
  return getRuleContext<Python3Parser::Comp_ifContext>(0);
}


size_t Python3Parser::Comp_iterContext::getRuleIndex() const {
  return Python3Parser::RuleComp_iter;
}

void Python3Parser::Comp_iterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_iter(this);
}

void Python3Parser::Comp_iterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_iter(this);
}


antlrcpp::Any Python3Parser::Comp_iterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitComp_iter(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Comp_iterContext* Python3Parser::comp_iter() {
  Comp_iterContext *_localctx = _tracker.createInstance<Comp_iterContext>(_ctx, getState());
  enterRule(_localctx, 164, Python3Parser::RuleComp_iter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1083);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::FOR:
      case Python3Parser::ASYNC: {
        enterOuterAlt(_localctx, 1);
        setState(1081);
        comp_for();
        break;
      }

      case Python3Parser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(1082);
        comp_if();
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

//----------------- Comp_forContext ------------------------------------------------------------------

Python3Parser::Comp_forContext::Comp_forContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Comp_forContext::FOR() {
  return getToken(Python3Parser::FOR, 0);
}

Python3Parser::ExprlistContext* Python3Parser::Comp_forContext::exprlist() {
  return getRuleContext<Python3Parser::ExprlistContext>(0);
}

tree::TerminalNode* Python3Parser::Comp_forContext::IN() {
  return getToken(Python3Parser::IN, 0);
}

Python3Parser::Or_testContext* Python3Parser::Comp_forContext::or_test() {
  return getRuleContext<Python3Parser::Or_testContext>(0);
}

tree::TerminalNode* Python3Parser::Comp_forContext::ASYNC() {
  return getToken(Python3Parser::ASYNC, 0);
}

Python3Parser::Comp_iterContext* Python3Parser::Comp_forContext::comp_iter() {
  return getRuleContext<Python3Parser::Comp_iterContext>(0);
}


size_t Python3Parser::Comp_forContext::getRuleIndex() const {
  return Python3Parser::RuleComp_for;
}

void Python3Parser::Comp_forContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_for(this);
}

void Python3Parser::Comp_forContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_for(this);
}


antlrcpp::Any Python3Parser::Comp_forContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitComp_for(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Comp_forContext* Python3Parser::comp_for() {
  Comp_forContext *_localctx = _tracker.createInstance<Comp_forContext>(_ctx, getState());
  enterRule(_localctx, 166, Python3Parser::RuleComp_for);
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
    setState(1086);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ASYNC) {
      setState(1085);
      match(Python3Parser::ASYNC);
    }
    setState(1088);
    match(Python3Parser::FOR);
    setState(1089);
    exprlist();
    setState(1090);
    match(Python3Parser::IN);
    setState(1091);
    or_test();
    setState(1093);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::IF)
      | (1ULL << Python3Parser::FOR)
      | (1ULL << Python3Parser::ASYNC))) != 0)) {
      setState(1092);
      comp_iter();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comp_ifContext ------------------------------------------------------------------

Python3Parser::Comp_ifContext::Comp_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Comp_ifContext::IF() {
  return getToken(Python3Parser::IF, 0);
}

Python3Parser::Test_nocondContext* Python3Parser::Comp_ifContext::test_nocond() {
  return getRuleContext<Python3Parser::Test_nocondContext>(0);
}

Python3Parser::Comp_iterContext* Python3Parser::Comp_ifContext::comp_iter() {
  return getRuleContext<Python3Parser::Comp_iterContext>(0);
}


size_t Python3Parser::Comp_ifContext::getRuleIndex() const {
  return Python3Parser::RuleComp_if;
}

void Python3Parser::Comp_ifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_if(this);
}

void Python3Parser::Comp_ifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_if(this);
}


antlrcpp::Any Python3Parser::Comp_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitComp_if(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Comp_ifContext* Python3Parser::comp_if() {
  Comp_ifContext *_localctx = _tracker.createInstance<Comp_ifContext>(_ctx, getState());
  enterRule(_localctx, 168, Python3Parser::RuleComp_if);
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
    setState(1095);
    match(Python3Parser::IF);
    setState(1096);
    test_nocond();
    setState(1098);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::IF)
      | (1ULL << Python3Parser::FOR)
      | (1ULL << Python3Parser::ASYNC))) != 0)) {
      setState(1097);
      comp_iter();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Encoding_declContext ------------------------------------------------------------------

Python3Parser::Encoding_declContext::Encoding_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::NameContext* Python3Parser::Encoding_declContext::name() {
  return getRuleContext<Python3Parser::NameContext>(0);
}


size_t Python3Parser::Encoding_declContext::getRuleIndex() const {
  return Python3Parser::RuleEncoding_decl;
}

void Python3Parser::Encoding_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEncoding_decl(this);
}

void Python3Parser::Encoding_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEncoding_decl(this);
}


antlrcpp::Any Python3Parser::Encoding_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitEncoding_decl(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Encoding_declContext* Python3Parser::encoding_decl() {
  Encoding_declContext *_localctx = _tracker.createInstance<Encoding_declContext>(_ctx, getState());
  enterRule(_localctx, 170, Python3Parser::RuleEncoding_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1100);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Yield_exprContext ------------------------------------------------------------------

Python3Parser::Yield_exprContext::Yield_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Yield_exprContext::YIELD() {
  return getToken(Python3Parser::YIELD, 0);
}

Python3Parser::Yield_argContext* Python3Parser::Yield_exprContext::yield_arg() {
  return getRuleContext<Python3Parser::Yield_argContext>(0);
}


size_t Python3Parser::Yield_exprContext::getRuleIndex() const {
  return Python3Parser::RuleYield_expr;
}

void Python3Parser::Yield_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYield_expr(this);
}

void Python3Parser::Yield_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYield_expr(this);
}


antlrcpp::Any Python3Parser::Yield_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitYield_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Yield_exprContext* Python3Parser::yield_expr() {
  Yield_exprContext *_localctx = _tracker.createInstance<Yield_exprContext>(_ctx, getState());
  enterRule(_localctx, 172, Python3Parser::RuleYield_expr);
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
    setState(1102);
    match(Python3Parser::YIELD);
    setState(1104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::STRING)
      | (1ULL << Python3Parser::NUMBER)
      | (1ULL << Python3Parser::FROM)
      | (1ULL << Python3Parser::LAMBDA)
      | (1ULL << Python3Parser::NOT)
      | (1ULL << Python3Parser::NONE)
      | (1ULL << Python3Parser::TRUE)
      | (1ULL << Python3Parser::FALSE)
      | (1ULL << Python3Parser::AWAIT)
      | (1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::ELLIPSIS)
      | (1ULL << Python3Parser::OPEN_PAREN)
      | (1ULL << Python3Parser::OPEN_BRACK))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Python3Parser::ADD - 66))
      | (1ULL << (Python3Parser::MINUS - 66))
      | (1ULL << (Python3Parser::NOT_OP - 66))
      | (1ULL << (Python3Parser::OPEN_BRACE - 66)))) != 0)) {
      setState(1103);
      yield_arg();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Yield_argContext ------------------------------------------------------------------

Python3Parser::Yield_argContext::Yield_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Yield_argContext::FROM() {
  return getToken(Python3Parser::FROM, 0);
}

Python3Parser::TestContext* Python3Parser::Yield_argContext::test() {
  return getRuleContext<Python3Parser::TestContext>(0);
}

Python3Parser::TestlistContext* Python3Parser::Yield_argContext::testlist() {
  return getRuleContext<Python3Parser::TestlistContext>(0);
}


size_t Python3Parser::Yield_argContext::getRuleIndex() const {
  return Python3Parser::RuleYield_arg;
}

void Python3Parser::Yield_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYield_arg(this);
}

void Python3Parser::Yield_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYield_arg(this);
}


antlrcpp::Any Python3Parser::Yield_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitYield_arg(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Yield_argContext* Python3Parser::yield_arg() {
  Yield_argContext *_localctx = _tracker.createInstance<Yield_argContext>(_ctx, getState());
  enterRule(_localctx, 174, Python3Parser::RuleYield_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::FROM: {
        enterOuterAlt(_localctx, 1);
        setState(1106);
        match(Python3Parser::FROM);
        setState(1107);
        test();
        break;
      }

      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::LAMBDA:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::AWAIT:
      case Python3Parser::NAME:
      case Python3Parser::ELLIPSIS:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::OPEN_BRACK:
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP:
      case Python3Parser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(1108);
        testlist();
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

// Static vars and initialization.
std::vector<dfa::DFA> Python3Parser::_decisionToDFA;
atn::PredictionContextCache Python3Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Python3Parser::_atn;
std::vector<uint16_t> Python3Parser::_serializedATN;

std::vector<std::string> Python3Parser::_ruleNames = {
  "single_input", "file_input", "eval_input", "decorator", "decorators", 
  "decorated", "async_funcdef", "funcdef", "funcbody", "parameters", "typedargslist", 
  "tfpdef", "varargslist", "vfpdef", "stmt", "simple_stmt", "small_stmt", 
  "expr_stmt", "annassign", "testlist_star_expr", "augassign", "del_stmt", 
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", 
  "yield_stmt", "raise_stmt", "import_stmt", "import_name", "import_from", 
  "import_as_name", "dotted_as_name", "import_as_names", "dotted_as_names", 
  "dotted_name", "global_stmt", "nonlocal_stmt", "assert_stmt", "compound_stmt", 
  "async_stmt", "if_stmt", "while_stmt", "for_stmt", "try_stmt", "with_stmt", 
  "with_item", "except_clause", "suite", "test", "test_nocond", "lambdef", 
  "lambdef_nocond", "or_test", "and_test", "not_test", "comparison", "comp_op", 
  "star_expr", "expr", "xor_expr", "and_expr", "shift_expr", "arith_expr", 
  "term", "factor", "power", "atom_expr", "atom", "name", "testlist_comp", 
  "trailer", "subscriptlist", "subscript", "sliceop", "exprlist", "testlist", 
  "dictorsetmaker", "classdef", "arglist", "argument", "comp_iter", "comp_for", 
  "comp_if", "encoding_decl", "yield_expr", "yield_arg"
};

std::vector<std::string> Python3Parser::_literalNames = {
  "", "", "", "", "'def'", "'return'", "'raise'", "'from'", "'import'", 
  "'as'", "'global'", "'nonlocal'", "'assert'", "'if'", "'elif'", "'else'", 
  "'while'", "'for'", "'in'", "'try'", "'finally'", "'with'", "'except'", 
  "'lambda'", "'or'", "'and'", "'not'", "'is'", "'None'", "'True'", "'False'", 
  "'class'", "'yield'", "'del'", "'pass'", "'continue'", "'break'", "'async'", 
  "'await'", "", "", "", "", "", "", "", "", "", "", "'.'", "'...'", "'*'", 
  "'('", "')'", "','", "':'", "';'", "'**'", "'='", "'['", "']'", "'|'", 
  "'^'", "'&'", "'<<'", "'>>'", "'+'", "'-'", "'/'", "'%'", "'//'", "'~'", 
  "'{'", "'}'", "'<'", "'>'", "'=='", "'>='", "'<='", "'<>'", "'!='", "'@'", 
  "'->'", "'+='", "'-='", "'*='", "'@='", "'/='", "'%='", "'&='", "'|='", 
  "'^='", "'<<='", "'>>='", "'**='", "'//='"
};

std::vector<std::string> Python3Parser::_symbolicNames = {
  "", "STRING", "NUMBER", "INTEGER", "DEF", "RETURN", "RAISE", "FROM", "IMPORT", 
  "AS", "GLOBAL", "NONLOCAL", "ASSERT", "IF", "ELIF", "ELSE", "WHILE", "FOR", 
  "IN", "TRY", "FINALLY", "WITH", "EXCEPT", "LAMBDA", "OR", "AND", "NOT", 
  "IS", "NONE", "TRUE", "FALSE", "CLASS", "YIELD", "DEL", "PASS", "CONTINUE", 
  "BREAK", "ASYNC", "AWAIT", "NEWLINE", "NAME", "STRING_LITERAL", "BYTES_LITERAL", 
  "DECIMAL_INTEGER", "OCT_INTEGER", "HEX_INTEGER", "BIN_INTEGER", "FLOAT_NUMBER", 
  "IMAG_NUMBER", "DOT", "ELLIPSIS", "STAR", "OPEN_PAREN", "CLOSE_PAREN", 
  "COMMA", "COLON", "SEMI_COLON", "POWER", "ASSIGN", "OPEN_BRACK", "CLOSE_BRACK", 
  "OR_OP", "XOR", "AND_OP", "LEFT_SHIFT", "RIGHT_SHIFT", "ADD", "MINUS", 
  "DIV", "MOD", "IDIV", "NOT_OP", "OPEN_BRACE", "CLOSE_BRACE", "LESS_THAN", 
  "GREATER_THAN", "EQUALS", "GT_EQ", "LT_EQ", "NOT_EQ_1", "NOT_EQ_2", "AT", 
  "ARROW", "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN", "AT_ASSIGN", "DIV_ASSIGN", 
  "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "LEFT_SHIFT_ASSIGN", 
  "RIGHT_SHIFT_ASSIGN", "POWER_ASSIGN", "IDIV_ASSIGN", "SKIP_", "UNKNOWN_CHAR", 
  "INDENT", "DEDENT"
};

dfa::Vocabulary Python3Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Python3Parser::_tokenNames;

Python3Parser::Initializer::Initializer() {
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
       0x3, 0x65, 0x45a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x59, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 
       0x2, 0xb8, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0xbc, 0xa, 0x3, 
       0xc, 0x3, 0xe, 0x3, 0xbf, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
       0x3, 0x4, 0x7, 0x4, 0xc5, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xc8, 0xb, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x5, 0x5, 0xd0, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0xd3, 0xa, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0xd8, 0xa, 0x6, 0xd, 0x6, 0xe, 
       0x6, 0xd9, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xe0, 
       0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xea, 0xa, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 
       0xf3, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0xfa, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0x100, 0xa, 0xc, 0x7, 0xc, 0x102, 0xa, 0xc, 0xc, 0xc, 0xe, 
       0xc, 0x105, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x10a, 
       0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x110, 
       0xa, 0xc, 0x7, 0xc, 0x112, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x115, 0xb, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x11b, 0xa, 
       0xc, 0x5, 0xc, 0x11d, 0xa, 0xc, 0x5, 0xc, 0x11f, 0xa, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x124, 0xa, 0xc, 0x5, 0xc, 0x126, 0xa, 
       0xc, 0x5, 0xc, 0x128, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x12c, 
       0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x132, 
       0xa, 0xc, 0x7, 0xc, 0x134, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x137, 0xb, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x13d, 0xa, 
       0xc, 0x5, 0xc, 0x13f, 0xa, 0xc, 0x5, 0xc, 0x141, 0xa, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x146, 0xa, 0xc, 0x5, 0xc, 0x148, 0xa, 
       0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x14d, 0xa, 0xd, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x152, 0xa, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x158, 0xa, 0xe, 0x7, 0xe, 0x15a, 
       0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x15d, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x5, 0xe, 0x162, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x5, 0xe, 0x168, 0xa, 0xe, 0x7, 0xe, 0x16a, 0xa, 0xe, 0xc, 
       0xe, 0xe, 0xe, 0x16d, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x5, 0xe, 0x173, 0xa, 0xe, 0x5, 0xe, 0x175, 0xa, 0xe, 0x5, 0xe, 
       0x177, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x17c, 0xa, 
       0xe, 0x5, 0xe, 0x17e, 0xa, 0xe, 0x5, 0xe, 0x180, 0xa, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x5, 0xe, 0x184, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x5, 0xe, 0x18a, 0xa, 0xe, 0x7, 0xe, 0x18c, 0xa, 0xe, 0xc, 
       0xe, 0xe, 0xe, 0x18f, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x5, 0xe, 0x195, 0xa, 0xe, 0x5, 0xe, 0x197, 0xa, 0xe, 0x5, 0xe, 
       0x199, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x19e, 0xa, 
       0xe, 0x5, 0xe, 0x1a0, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
       0x10, 0x5, 0x10, 0x1a6, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x7, 0x11, 0x1ab, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x1ae, 0xb, 0x11, 
       0x3, 0x11, 0x5, 0x11, 0x1b1, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x5, 0x12, 0x1bd, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x1c4, 0xa, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x1c9, 0xa, 0x13, 0x7, 0x13, 
       0x1cb, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1ce, 0xb, 0x13, 0x5, 0x13, 
       0x1d0, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 
       0x14, 0x1d6, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1da, 0xa, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1df, 0xa, 0x15, 
       0x7, 0x15, 0x1e1, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1e4, 0xb, 0x15, 
       0x3, 0x15, 0x5, 0x15, 0x1e7, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1f5, 0xa, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
       0x5, 0x1c, 0x1fd, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x205, 0xa, 0x1e, 0x5, 0x1e, 
       0x207, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x20b, 0xa, 0x1f, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 
       0x212, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x215, 0xb, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x6, 0x21, 0x219, 0xa, 0x21, 0xd, 0x21, 0xe, 0x21, 0x21a, 
       0x5, 0x21, 0x21d, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x226, 0xa, 0x21, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x22b, 0xa, 0x22, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x230, 0xa, 0x23, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x235, 0xa, 0x24, 0xc, 0x24, 0xe, 
       0x24, 0x238, 0xb, 0x24, 0x3, 0x24, 0x5, 0x24, 0x23b, 0xa, 0x24, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x240, 0xa, 0x25, 0xc, 0x25, 
       0xe, 0x25, 0x243, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 
       0x26, 0x248, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x24b, 0xb, 0x26, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x251, 0xa, 0x27, 
       0xc, 0x27, 0xe, 0x27, 0x254, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x7, 0x28, 0x25a, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 
       0x25d, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 
       0x29, 0x263, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
       0x26e, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 
       0x2b, 0x274, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 
       0x27f, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x282, 0xb, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x287, 0xa, 0x2c, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 
       0x2d, 0x290, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 
       0x29b, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x6, 0x2f, 0x2a4, 0xa, 0x2f, 0xd, 0x2f, 
       0xe, 0x2f, 0x2a5, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x2ab, 
       0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x2b0, 0xa, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x2b5, 0xa, 0x2f, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 0x2bb, 0xa, 
       0x30, 0xc, 0x30, 0xe, 0x30, 0x2be, 0xb, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x2c6, 0xa, 
       0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2cc, 
       0xa, 0x32, 0x5, 0x32, 0x2ce, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x6, 0x33, 0x2d4, 0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 
       0x2d5, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x2da, 0xa, 0x33, 0x3, 0x34, 
       0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 
       0x2e2, 0xa, 0x34, 0x3, 0x34, 0x5, 0x34, 0x2e5, 0xa, 0x34, 0x3, 0x35, 
       0x3, 0x35, 0x5, 0x35, 0x2e9, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x5, 
       0x36, 0x2ed, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 
       0x3, 0x37, 0x5, 0x37, 0x2f4, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x2fc, 0xa, 0x38, 
       0xc, 0x38, 0xe, 0x38, 0x2ff, 0xb, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x7, 0x39, 0x304, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x307, 0xb, 
       0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x30c, 0xa, 0x3a, 
       0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x312, 0xa, 
       0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x315, 0xb, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 
       0x324, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x7, 0x3e, 0x32c, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 
       0x32f, 0xb, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x334, 
       0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x337, 0xb, 0x3f, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x7, 0x40, 0x33c, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 
       0x33f, 0xb, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x344, 
       0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x347, 0xb, 0x41, 0x3, 0x42, 0x3, 
       0x42, 0x3, 0x42, 0x7, 0x42, 0x34c, 0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 
       0x34f, 0xb, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x354, 
       0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x357, 0xb, 0x43, 0x3, 0x44, 0x3, 
       0x44, 0x3, 0x44, 0x5, 0x44, 0x35c, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 
       0x3, 0x45, 0x5, 0x45, 0x361, 0xa, 0x45, 0x3, 0x46, 0x5, 0x46, 0x364, 
       0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x7, 0x46, 0x368, 0xa, 0x46, 0xc, 
       0x46, 0xe, 0x46, 0x36b, 0xb, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x5, 0x47, 0x370, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 
       0x47, 0x375, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 
       0x37a, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x6, 
       0x47, 0x380, 0xa, 0x47, 0xd, 0x47, 0xe, 0x47, 0x381, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x388, 0xa, 0x47, 0x3, 0x48, 
       0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x38e, 0xa, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x394, 0xa, 0x49, 
       0x7, 0x49, 0x396, 0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x399, 0xb, 0x49, 
       0x3, 0x49, 0x5, 0x49, 0x39c, 0xa, 0x49, 0x5, 0x49, 0x39e, 0xa, 0x49, 
       0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x3a2, 0xa, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 
       0x4a, 0x3ab, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 
       0x3b0, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x3b3, 0xb, 0x4b, 0x3, 0x4b, 
       0x5, 0x4b, 0x3b6, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x3ba, 
       0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x3be, 0xa, 0x4c, 0x3, 
       0x4c, 0x5, 0x4c, 0x3c1, 0xa, 0x4c, 0x5, 0x4c, 0x3c3, 0xa, 0x4c, 0x3, 
       0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x3c7, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 
       0x5, 0x4e, 0x3cb, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
       0x4e, 0x3d0, 0xa, 0x4e, 0x7, 0x4e, 0x3d2, 0xa, 0x4e, 0xc, 0x4e, 0xe, 
       0x4e, 0x3d5, 0xb, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x3d8, 0xa, 0x4e, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x7, 0x4f, 0x3dd, 0xa, 0x4f, 0xc, 0x4f, 
       0xe, 0x4f, 0x3e0, 0xb, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3e3, 0xa, 0x4f, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x5, 0x50, 0x3eb, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x3f5, 
       0xa, 0x50, 0x7, 0x50, 0x3f7, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x3fa, 
       0xb, 0x50, 0x3, 0x50, 0x5, 0x50, 0x3fd, 0xa, 0x50, 0x5, 0x50, 0x3ff, 
       0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x403, 0xa, 0x50, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x409, 0xa, 0x50, 
       0x7, 0x50, 0x40b, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x40e, 0xb, 0x50, 
       0x3, 0x50, 0x5, 0x50, 0x411, 0xa, 0x50, 0x5, 0x50, 0x413, 0xa, 0x50, 
       0x5, 0x50, 0x415, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 
       0x51, 0x5, 0x51, 0x41b, 0xa, 0x51, 0x3, 0x51, 0x5, 0x51, 0x41e, 0xa, 
       0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 
       0x52, 0x7, 0x52, 0x426, 0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x429, 0xb, 
       0x52, 0x3, 0x52, 0x5, 0x52, 0x42c, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 
       0x5, 0x53, 0x430, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x43a, 
       0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x43e, 0xa, 0x54, 0x3, 
       0x55, 0x5, 0x55, 0x441, 0xa, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x448, 0xa, 0x55, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x5, 0x56, 0x44d, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x453, 0xa, 0x58, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x5, 0x59, 0x458, 0xa, 0x59, 0x3, 0x59, 0x2, 0x2, 
       0x5a, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
       0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
       0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
       0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
       0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
       0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
       0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 
       0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 
       0x2, 0x8, 0x3, 0x2, 0x55, 0x61, 0x3, 0x2, 0x33, 0x34, 0x3, 0x2, 0x42, 
       0x43, 0x3, 0x2, 0x44, 0x45, 0x5, 0x2, 0x35, 0x35, 0x46, 0x48, 0x53, 
       0x53, 0x4, 0x2, 0x44, 0x45, 0x49, 0x49, 0x2, 0x4d5, 0x2, 0xb7, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x6, 0xc2, 0x3, 0x2, 
       0x2, 0x2, 0x8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd7, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xe, 0xe1, 0x3, 0x2, 0x2, 0x2, 
       0x10, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x12, 0xee, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0xf0, 0x3, 0x2, 0x2, 0x2, 0x16, 0x147, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x149, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x1a7, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0x1be, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x1d9, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x1ea, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x1f4, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x1f8, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x1fe, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x200, 0x3, 0x2, 0x2, 0x2, 0x3c, 
       0x20a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x20f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x227, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x22c, 0x3, 0x2, 0x2, 0x2, 0x46, 0x231, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x23c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x244, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x24c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x255, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x25e, 0x3, 0x2, 0x2, 0x2, 0x52, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x26f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x275, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x288, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x291, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x29c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x2c2, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0x2d9, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x68, 
       0x2e8, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x2f1, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x70, 
       0x300, 0x3, 0x2, 0x2, 0x2, 0x72, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x30d, 0x3, 0x2, 0x2, 0x2, 0x76, 0x323, 0x3, 0x2, 0x2, 0x2, 0x78, 
       0x325, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x328, 0x3, 0x2, 0x2, 0x2, 0x7c, 
       0x330, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x338, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x340, 0x3, 0x2, 0x2, 0x2, 0x82, 0x348, 0x3, 0x2, 0x2, 0x2, 0x84, 
       0x350, 0x3, 0x2, 0x2, 0x2, 0x86, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x88, 
       0x35d, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x363, 0x3, 0x2, 0x2, 0x2, 0x8c, 
       0x387, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x389, 0x3, 0x2, 0x2, 0x2, 0x90, 
       0x38d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x94, 
       0x3ac, 0x3, 0x2, 0x2, 0x2, 0x96, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x98, 
       0x3c4, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x9c, 
       0x3d9, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x414, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0x416, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x422, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0x439, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x43d, 0x3, 0x2, 0x2, 0x2, 0xa8, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x449, 0x3, 0x2, 0x2, 0x2, 0xac, 
       0x44e, 0x3, 0x2, 0x2, 0x2, 0xae, 0x450, 0x3, 0x2, 0x2, 0x2, 0xb0, 
       0x457, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb8, 0x7, 0x29, 0x2, 0x2, 0xb3, 
       0xb8, 0x5, 0x20, 0x11, 0x2, 0xb4, 0xb5, 0x5, 0x52, 0x2a, 0x2, 0xb5, 
       0xb6, 0x7, 0x29, 0x2, 0x2, 0xb6, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb7, 
       0xb2, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb4, 
       0x3, 0x2, 0x2, 0x2, 0xb8, 0x3, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbc, 0x7, 
       0x29, 0x2, 0x2, 0xba, 0xbc, 0x5, 0x1e, 0x10, 0x2, 0xbb, 0xb9, 0x3, 
       0x2, 0x2, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbf, 0x3, 0x2, 
       0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 
       0x2, 0xbe, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 
       0xc0, 0xc1, 0x7, 0x2, 0x2, 0x3, 0xc1, 0x5, 0x3, 0x2, 0x2, 0x2, 0xc2, 
       0xc6, 0x5, 0x9c, 0x4f, 0x2, 0xc3, 0xc5, 0x7, 0x29, 0x2, 0x2, 0xc4, 
       0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 
       0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc9, 0x3, 
       0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x2, 
       0x2, 0x3, 0xca, 0x7, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x53, 0x2, 
       0x2, 0xcc, 0xd2, 0x5, 0x4a, 0x26, 0x2, 0xcd, 0xcf, 0x7, 0x36, 0x2, 
       0x2, 0xce, 0xd0, 0x5, 0xa2, 0x52, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 
       0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 
       0xd1, 0xd3, 0x7, 0x37, 0x2, 0x2, 0xd2, 0xcd, 0x3, 0x2, 0x2, 0x2, 
       0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0xd5, 0x7, 0x29, 0x2, 0x2, 0xd5, 0x9, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 
       0x5, 0x8, 0x5, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 
       0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 
       0x2, 0x2, 0xda, 0xb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdf, 0x5, 0xa, 0x6, 
       0x2, 0xdc, 0xe0, 0x5, 0xa0, 0x51, 0x2, 0xdd, 0xe0, 0x5, 0x10, 0x9, 
       0x2, 0xde, 0xe0, 0x5, 0xe, 0x8, 0x2, 0xdf, 0xdc, 0x3, 0x2, 0x2, 0x2, 
       0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 
       0xd, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x27, 0x2, 0x2, 0xe2, 0xe3, 
       0x5, 0x10, 0x9, 0x2, 0xe3, 0xf, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x7, 
       0x6, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x8e, 0x48, 0x2, 0xe6, 0xe9, 0x5, 
       0x14, 0xb, 0x2, 0xe7, 0xe8, 0x7, 0x54, 0x2, 0x2, 0xe8, 0xea, 0x5, 
       0x66, 0x34, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 
       0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x39, 
       0x2, 0x2, 0xec, 0xed, 0x5, 0x12, 0xa, 0x2, 0xed, 0x11, 0x3, 0x2, 
       0x2, 0x2, 0xee, 0xef, 0x5, 0x64, 0x33, 0x2, 0xef, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0xf0, 0xf2, 0x7, 0x36, 0x2, 0x2, 0xf1, 0xf3, 0x5, 0x16, 
       0xc, 0x2, 0xf2, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 
       0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x37, 0x2, 
       0x2, 0xf5, 0x15, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf9, 0x5, 0x18, 0xd, 
       0x2, 0xf7, 0xf8, 0x7, 0x3c, 0x2, 0x2, 0xf8, 0xfa, 0x5, 0x66, 0x34, 
       0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 
       0xfa, 0x103, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x38, 0x2, 0x2, 
       0xfc, 0xff, 0x5, 0x18, 0xd, 0x2, 0xfd, 0xfe, 0x7, 0x3c, 0x2, 0x2, 
       0xfe, 0x100, 0x5, 0x66, 0x34, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 
       0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 
       0x101, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x3, 0x2, 0x2, 0x2, 
       0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 
       0x104, 0x127, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 
       0x106, 0x125, 0x7, 0x38, 0x2, 0x2, 0x107, 0x109, 0x7, 0x35, 0x2, 
       0x2, 0x108, 0x10a, 0x5, 0x18, 0xd, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 
       0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x113, 0x3, 0x2, 0x2, 
       0x2, 0x10b, 0x10c, 0x7, 0x38, 0x2, 0x2, 0x10c, 0x10f, 0x5, 0x18, 
       0xd, 0x2, 0x10d, 0x10e, 0x7, 0x3c, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x66, 
       0x34, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 
       0x2, 0x2, 0x110, 0x112, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10b, 0x3, 0x2, 
       0x2, 0x2, 0x112, 0x115, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 
       0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x11e, 0x3, 0x2, 
       0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x116, 0x11c, 0x7, 0x38, 
       0x2, 0x2, 0x117, 0x118, 0x7, 0x3b, 0x2, 0x2, 0x118, 0x11a, 0x5, 0x18, 
       0xd, 0x2, 0x119, 0x11b, 0x7, 0x38, 0x2, 0x2, 0x11a, 0x119, 0x3, 0x2, 
       0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 
       0x2, 0x2, 0x11c, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 
       0x2, 0x2, 0x11d, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x116, 0x3, 0x2, 
       0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x126, 0x3, 0x2, 
       0x2, 0x2, 0x120, 0x121, 0x7, 0x3b, 0x2, 0x2, 0x121, 0x123, 0x5, 0x18, 
       0xd, 0x2, 0x122, 0x124, 0x7, 0x38, 0x2, 0x2, 0x123, 0x122, 0x3, 0x2, 
       0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x126, 0x3, 0x2, 
       0x2, 0x2, 0x125, 0x107, 0x3, 0x2, 0x2, 0x2, 0x125, 0x120, 0x3, 0x2, 
       0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x3, 0x2, 
       0x2, 0x2, 0x127, 0x106, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 
       0x2, 0x2, 0x128, 0x148, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x7, 0x35, 
       0x2, 0x2, 0x12a, 0x12c, 0x5, 0x18, 0xd, 0x2, 0x12b, 0x12a, 0x3, 0x2, 
       0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x135, 0x3, 0x2, 
       0x2, 0x2, 0x12d, 0x12e, 0x7, 0x38, 0x2, 0x2, 0x12e, 0x131, 0x5, 0x18, 
       0xd, 0x2, 0x12f, 0x130, 0x7, 0x3c, 0x2, 0x2, 0x130, 0x132, 0x5, 0x66, 
       0x34, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 
       0x2, 0x2, 0x132, 0x134, 0x3, 0x2, 0x2, 0x2, 0x133, 0x12d, 0x3, 0x2, 
       0x2, 0x2, 0x134, 0x137, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 
       0x2, 0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x140, 0x3, 0x2, 
       0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13e, 0x7, 0x38, 
       0x2, 0x2, 0x139, 0x13a, 0x7, 0x3b, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x18, 
       0xd, 0x2, 0x13b, 0x13d, 0x7, 0x38, 0x2, 0x2, 0x13c, 0x13b, 0x3, 0x2, 
       0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13f, 0x3, 0x2, 
       0x2, 0x2, 0x13e, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 0x2, 
       0x2, 0x2, 0x13f, 0x141, 0x3, 0x2, 0x2, 0x2, 0x140, 0x138, 0x3, 0x2, 
       0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x148, 0x3, 0x2, 
       0x2, 0x2, 0x142, 0x143, 0x7, 0x3b, 0x2, 0x2, 0x143, 0x145, 0x5, 0x18, 
       0xd, 0x2, 0x144, 0x146, 0x7, 0x38, 0x2, 0x2, 0x145, 0x144, 0x3, 0x2, 
       0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x148, 0x3, 0x2, 
       0x2, 0x2, 0x147, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x147, 0x129, 0x3, 0x2, 
       0x2, 0x2, 0x147, 0x142, 0x3, 0x2, 0x2, 0x2, 0x148, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0x149, 0x14c, 0x5, 0x8e, 0x48, 0x2, 0x14a, 0x14b, 0x7, 
       0x39, 0x2, 0x2, 0x14b, 0x14d, 0x5, 0x66, 0x34, 0x2, 0x14c, 0x14a, 
       0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0x14e, 0x151, 0x5, 0x1c, 0xf, 0x2, 0x14f, 0x150, 
       0x7, 0x3c, 0x2, 0x2, 0x150, 0x152, 0x5, 0x66, 0x34, 0x2, 0x151, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x7, 0x38, 0x2, 0x2, 0x154, 0x157, 
       0x5, 0x1c, 0xf, 0x2, 0x155, 0x156, 0x7, 0x3c, 0x2, 0x2, 0x156, 0x158, 
       0x5, 0x66, 0x34, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 
       0x3, 0x2, 0x2, 0x2, 0x158, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x159, 0x153, 
       0x3, 0x2, 0x2, 0x2, 0x15a, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x17f, 
       0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x17d, 
       0x7, 0x38, 0x2, 0x2, 0x15f, 0x161, 0x7, 0x35, 0x2, 0x2, 0x160, 0x162, 
       0x5, 0x1c, 0xf, 0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 
       0x3, 0x2, 0x2, 0x2, 0x162, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 
       0x7, 0x38, 0x2, 0x2, 0x164, 0x167, 0x5, 0x1c, 0xf, 0x2, 0x165, 0x166, 
       0x7, 0x3c, 0x2, 0x2, 0x166, 0x168, 0x5, 0x66, 0x34, 0x2, 0x167, 0x165, 
       0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 
       0x3, 0x2, 0x2, 0x2, 0x169, 0x163, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16d, 
       0x3, 0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 
       0x3, 0x2, 0x2, 0x2, 0x16c, 0x176, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16b, 
       0x3, 0x2, 0x2, 0x2, 0x16e, 0x174, 0x7, 0x38, 0x2, 0x2, 0x16f, 0x170, 
       0x7, 0x3b, 0x2, 0x2, 0x170, 0x172, 0x5, 0x1c, 0xf, 0x2, 0x171, 0x173, 
       0x7, 0x38, 0x2, 0x2, 0x172, 0x171, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x175, 0x3, 0x2, 0x2, 0x2, 0x174, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x177, 
       0x3, 0x2, 0x2, 0x2, 0x176, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 
       0x3, 0x2, 0x2, 0x2, 0x177, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 
       0x7, 0x3b, 0x2, 0x2, 0x179, 0x17b, 0x5, 0x1c, 0xf, 0x2, 0x17a, 0x17c, 
       0x7, 0x38, 0x2, 0x2, 0x17b, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 
       0x3, 0x2, 0x2, 0x2, 0x17c, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x15f, 
       0x3, 0x2, 0x2, 0x2, 0x17d, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x180, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x15e, 
       0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 0x180, 0x1a0, 
       0x3, 0x2, 0x2, 0x2, 0x181, 0x183, 0x7, 0x35, 0x2, 0x2, 0x182, 0x184, 
       0x5, 0x1c, 0xf, 0x2, 0x183, 0x182, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x184, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 
       0x7, 0x38, 0x2, 0x2, 0x186, 0x189, 0x5, 0x1c, 0xf, 0x2, 0x187, 0x188, 
       0x7, 0x3c, 0x2, 0x2, 0x188, 0x18a, 0x5, 0x66, 0x34, 0x2, 0x189, 0x187, 
       0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18c, 
       0x3, 0x2, 0x2, 0x2, 0x18b, 0x185, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18f, 
       0x3, 0x2, 0x2, 0x2, 0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 
       0x3, 0x2, 0x2, 0x2, 0x18e, 0x198, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18d, 
       0x3, 0x2, 0x2, 0x2, 0x190, 0x196, 0x7, 0x38, 0x2, 0x2, 0x191, 0x192, 
       0x7, 0x3b, 0x2, 0x2, 0x192, 0x194, 0x5, 0x1c, 0xf, 0x2, 0x193, 0x195, 
       0x7, 0x38, 0x2, 0x2, 0x194, 0x193, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 
       0x3, 0x2, 0x2, 0x2, 0x195, 0x197, 0x3, 0x2, 0x2, 0x2, 0x196, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x198, 0x190, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x199, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 
       0x7, 0x3b, 0x2, 0x2, 0x19b, 0x19d, 0x5, 0x1c, 0xf, 0x2, 0x19c, 0x19e, 
       0x7, 0x38, 0x2, 0x2, 0x19d, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 
       0x3, 0x2, 0x2, 0x2, 0x19e, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x19f, 0x181, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19a, 
       0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 
       0x5, 0x8e, 0x48, 0x2, 0x1a2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a6, 
       0x5, 0x20, 0x11, 0x2, 0x1a4, 0x1a6, 0x5, 0x52, 0x2a, 0x2, 0x1a5, 
       0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1ac, 0x5, 0x22, 0x12, 0x2, 0x1a8, 
       0x1a9, 0x7, 0x3a, 0x2, 0x2, 0x1a9, 0x1ab, 0x5, 0x22, 0x12, 0x2, 0x1aa, 
       0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
       0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 
       0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1af, 
       0x1b1, 0x7, 0x3a, 0x2, 0x2, 0x1b0, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b0, 
       0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 
       0x1b3, 0x7, 0x29, 0x2, 0x2, 0x1b3, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1b4, 
       0x1bd, 0x5, 0x24, 0x13, 0x2, 0x1b5, 0x1bd, 0x5, 0x2c, 0x17, 0x2, 
       0x1b6, 0x1bd, 0x5, 0x2e, 0x18, 0x2, 0x1b7, 0x1bd, 0x5, 0x30, 0x19, 
       0x2, 0x1b8, 0x1bd, 0x5, 0x3c, 0x1f, 0x2, 0x1b9, 0x1bd, 0x5, 0x4c, 
       0x27, 0x2, 0x1ba, 0x1bd, 0x5, 0x4e, 0x28, 0x2, 0x1bb, 0x1bd, 0x5, 
       0x50, 0x29, 0x2, 0x1bc, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1b5, 
       0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1b7, 
       0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1b9, 
       0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bb, 
       0x3, 0x2, 0x2, 0x2, 0x1bd, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1cf, 
       0x5, 0x28, 0x15, 0x2, 0x1bf, 0x1d0, 0x5, 0x26, 0x14, 0x2, 0x1c0, 
       0x1c3, 0x5, 0x2a, 0x16, 0x2, 0x1c1, 0x1c4, 0x5, 0xae, 0x58, 0x2, 
       0x1c2, 0x1c4, 0x5, 0x9c, 0x4f, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 
       0x2, 0x1c3, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1d0, 0x3, 0x2, 0x2, 
       0x2, 0x1c5, 0x1c8, 0x7, 0x3c, 0x2, 0x2, 0x1c6, 0x1c9, 0x5, 0xae, 
       0x58, 0x2, 0x1c7, 0x1c9, 0x5, 0x28, 0x15, 0x2, 0x1c8, 0x1c6, 0x3, 
       0x2, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1cb, 0x3, 
       0x2, 0x2, 0x2, 0x1ca, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1ce, 0x3, 
       0x2, 0x2, 0x2, 0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x3, 
       0x2, 0x2, 0x2, 0x1cd, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cc, 0x3, 
       0x2, 0x2, 0x2, 0x1cf, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1c0, 0x3, 
       0x2, 0x2, 0x2, 0x1cf, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x25, 0x3, 
       0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x7, 0x39, 0x2, 0x2, 0x1d2, 0x1d5, 0x5, 
       0x66, 0x34, 0x2, 0x1d3, 0x1d4, 0x7, 0x3c, 0x2, 0x2, 0x1d4, 0x1d6, 
       0x5, 0x66, 0x34, 0x2, 0x1d5, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1da, 
       0x5, 0x66, 0x34, 0x2, 0x1d8, 0x1da, 0x5, 0x78, 0x3d, 0x2, 0x1d9, 
       0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 
       0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1de, 0x7, 0x38, 0x2, 0x2, 0x1dc, 
       0x1df, 0x5, 0x66, 0x34, 0x2, 0x1dd, 0x1df, 0x5, 0x78, 0x3d, 0x2, 
       0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
       0x1df, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1db, 0x3, 0x2, 0x2, 0x2, 
       0x1e1, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 
       0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e6, 0x3, 0x2, 0x2, 0x2, 
       0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e7, 0x7, 0x38, 0x2, 0x2, 
       0x1e6, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 
       0x1e7, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x9, 0x2, 0x2, 0x2, 
       0x1e9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x23, 0x2, 0x2, 
       0x1eb, 0x1ec, 0x5, 0x9a, 0x4e, 0x2, 0x1ec, 0x2d, 0x3, 0x2, 0x2, 0x2, 
       0x1ed, 0x1ee, 0x7, 0x24, 0x2, 0x2, 0x1ee, 0x2f, 0x3, 0x2, 0x2, 0x2, 
       0x1ef, 0x1f5, 0x5, 0x32, 0x1a, 0x2, 0x1f0, 0x1f5, 0x5, 0x34, 0x1b, 
       0x2, 0x1f1, 0x1f5, 0x5, 0x36, 0x1c, 0x2, 0x1f2, 0x1f5, 0x5, 0x3a, 
       0x1e, 0x2, 0x1f3, 0x1f5, 0x5, 0x38, 0x1d, 0x2, 0x1f4, 0x1ef, 0x3, 
       0x2, 0x2, 0x2, 0x1f4, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f1, 0x3, 
       0x2, 0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f3, 0x3, 
       0x2, 0x2, 0x2, 0x1f5, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x7, 
       0x26, 0x2, 0x2, 0x1f7, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x7, 
       0x25, 0x2, 0x2, 0x1f9, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 0x7, 
       0x7, 0x2, 0x2, 0x1fb, 0x1fd, 0x5, 0x9c, 0x4f, 0x2, 0x1fc, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x5, 0xae, 0x58, 0x2, 0x1ff, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x200, 0x206, 0x7, 0x8, 0x2, 0x2, 0x201, 0x204, 
       0x5, 0x66, 0x34, 0x2, 0x202, 0x203, 0x7, 0x9, 0x2, 0x2, 0x203, 0x205, 
       0x5, 0x66, 0x34, 0x2, 0x204, 0x202, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 
       0x3, 0x2, 0x2, 0x2, 0x205, 0x207, 0x3, 0x2, 0x2, 0x2, 0x206, 0x201, 
       0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x208, 0x20b, 0x5, 0x3e, 0x20, 0x2, 0x209, 0x20b, 
       0x5, 0x40, 0x21, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x209, 
       0x3, 0x2, 0x2, 0x2, 0x20b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 
       0x7, 0xa, 0x2, 0x2, 0x20d, 0x20e, 0x5, 0x48, 0x25, 0x2, 0x20e, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x20f, 0x21c, 0x7, 0x9, 0x2, 0x2, 0x210, 0x212, 
       0x9, 0x3, 0x2, 0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 0x215, 
       0x3, 0x2, 0x2, 0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x3, 0x2, 0x2, 0x2, 0x215, 0x213, 
       0x3, 0x2, 0x2, 0x2, 0x216, 0x21d, 0x5, 0x4a, 0x26, 0x2, 0x217, 0x219, 
       0x9, 0x3, 0x2, 0x2, 0x218, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 
       0x3, 0x2, 0x2, 0x2, 0x21b, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x213, 
       0x3, 0x2, 0x2, 0x2, 0x21c, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 
       0x3, 0x2, 0x2, 0x2, 0x21e, 0x225, 0x7, 0xa, 0x2, 0x2, 0x21f, 0x226, 
       0x7, 0x35, 0x2, 0x2, 0x220, 0x221, 0x7, 0x36, 0x2, 0x2, 0x221, 0x222, 
       0x5, 0x46, 0x24, 0x2, 0x222, 0x223, 0x7, 0x37, 0x2, 0x2, 0x223, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x226, 0x5, 0x46, 0x24, 0x2, 0x225, 0x21f, 
       0x3, 0x2, 0x2, 0x2, 0x225, 0x220, 0x3, 0x2, 0x2, 0x2, 0x225, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x41, 0x3, 0x2, 0x2, 0x2, 0x227, 0x22a, 
       0x5, 0x8e, 0x48, 0x2, 0x228, 0x229, 0x7, 0xb, 0x2, 0x2, 0x229, 0x22b, 
       0x5, 0x8e, 0x48, 0x2, 0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x43, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22f, 
       0x5, 0x4a, 0x26, 0x2, 0x22d, 0x22e, 0x7, 0xb, 0x2, 0x2, 0x22e, 0x230, 
       0x5, 0x8e, 0x48, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 
       0x3, 0x2, 0x2, 0x2, 0x230, 0x45, 0x3, 0x2, 0x2, 0x2, 0x231, 0x236, 
       0x5, 0x42, 0x22, 0x2, 0x232, 0x233, 0x7, 0x38, 0x2, 0x2, 0x233, 0x235, 
       0x5, 0x42, 0x22, 0x2, 0x234, 0x232, 0x3, 0x2, 0x2, 0x2, 0x235, 0x238, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x238, 0x236, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x23b, 0x7, 0x38, 0x2, 0x2, 0x23a, 0x239, 
       0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x23c, 0x241, 0x5, 0x44, 0x23, 0x2, 0x23d, 0x23e, 
       0x7, 0x38, 0x2, 0x2, 0x23e, 0x240, 0x5, 0x44, 0x23, 0x2, 0x23f, 0x23d, 
       0x3, 0x2, 0x2, 0x2, 0x240, 0x243, 0x3, 0x2, 0x2, 0x2, 0x241, 0x23f, 
       0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 0x244, 0x249, 
       0x5, 0x8e, 0x48, 0x2, 0x245, 0x246, 0x7, 0x33, 0x2, 0x2, 0x246, 0x248, 
       0x5, 0x8e, 0x48, 0x2, 0x247, 0x245, 0x3, 0x2, 0x2, 0x2, 0x248, 0x24b, 
       0x3, 0x2, 0x2, 0x2, 0x249, 0x247, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 
       0x3, 0x2, 0x2, 0x2, 0x24a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x249, 
       0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x7, 0xc, 0x2, 0x2, 0x24d, 0x252, 
       0x5, 0x8e, 0x48, 0x2, 0x24e, 0x24f, 0x7, 0x38, 0x2, 0x2, 0x24f, 0x251, 
       0x5, 0x8e, 0x48, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x251, 0x254, 
       0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 
       0x3, 0x2, 0x2, 0x2, 0x253, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x254, 0x252, 
       0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x7, 0xd, 0x2, 0x2, 0x256, 0x25b, 
       0x5, 0x8e, 0x48, 0x2, 0x257, 0x258, 0x7, 0x38, 0x2, 0x2, 0x258, 0x25a, 
       0x5, 0x8e, 0x48, 0x2, 0x259, 0x257, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25d, 
       0x3, 0x2, 0x2, 0x2, 0x25b, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 
       0x3, 0x2, 0x2, 0x2, 0x25c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25b, 
       0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 0xe, 0x2, 0x2, 0x25f, 0x262, 
       0x5, 0x66, 0x34, 0x2, 0x260, 0x261, 0x7, 0x38, 0x2, 0x2, 0x261, 0x263, 
       0x5, 0x66, 0x34, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 
       0x3, 0x2, 0x2, 0x2, 0x263, 0x51, 0x3, 0x2, 0x2, 0x2, 0x264, 0x26e, 
       0x5, 0x56, 0x2c, 0x2, 0x265, 0x26e, 0x5, 0x58, 0x2d, 0x2, 0x266, 
       0x26e, 0x5, 0x5a, 0x2e, 0x2, 0x267, 0x26e, 0x5, 0x5c, 0x2f, 0x2, 
       0x268, 0x26e, 0x5, 0x5e, 0x30, 0x2, 0x269, 0x26e, 0x5, 0x10, 0x9, 
       0x2, 0x26a, 0x26e, 0x5, 0xa0, 0x51, 0x2, 0x26b, 0x26e, 0x5, 0xc, 
       0x7, 0x2, 0x26c, 0x26e, 0x5, 0x54, 0x2b, 0x2, 0x26d, 0x264, 0x3, 
       0x2, 0x2, 0x2, 0x26d, 0x265, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x266, 0x3, 
       0x2, 0x2, 0x2, 0x26d, 0x267, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x268, 0x3, 
       0x2, 0x2, 0x2, 0x26d, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26a, 0x3, 
       0x2, 0x2, 0x2, 0x26d, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26c, 0x3, 
       0x2, 0x2, 0x2, 0x26e, 0x53, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x273, 0x7, 
       0x27, 0x2, 0x2, 0x270, 0x274, 0x5, 0x10, 0x9, 0x2, 0x271, 0x274, 
       0x5, 0x5e, 0x30, 0x2, 0x272, 0x274, 0x5, 0x5a, 0x2e, 0x2, 0x273, 
       0x270, 0x3, 0x2, 0x2, 0x2, 0x273, 0x271, 0x3, 0x2, 0x2, 0x2, 0x273, 
       0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x55, 0x3, 0x2, 0x2, 0x2, 0x275, 
       0x276, 0x7, 0xf, 0x2, 0x2, 0x276, 0x277, 0x5, 0x66, 0x34, 0x2, 0x277, 
       0x278, 0x7, 0x39, 0x2, 0x2, 0x278, 0x280, 0x5, 0x64, 0x33, 0x2, 0x279, 
       0x27a, 0x7, 0x10, 0x2, 0x2, 0x27a, 0x27b, 0x5, 0x66, 0x34, 0x2, 0x27b, 
       0x27c, 0x7, 0x39, 0x2, 0x2, 0x27c, 0x27d, 0x5, 0x64, 0x33, 0x2, 0x27d, 
       0x27f, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27f, 
       0x282, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 
       0x281, 0x3, 0x2, 0x2, 0x2, 0x281, 0x286, 0x3, 0x2, 0x2, 0x2, 0x282, 
       0x280, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x7, 0x11, 0x2, 0x2, 0x284, 
       0x285, 0x7, 0x39, 0x2, 0x2, 0x285, 0x287, 0x5, 0x64, 0x33, 0x2, 0x286, 
       0x283, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 
       0x57, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 0x7, 0x12, 0x2, 0x2, 0x289, 
       0x28a, 0x5, 0x66, 0x34, 0x2, 0x28a, 0x28b, 0x7, 0x39, 0x2, 0x2, 0x28b, 
       0x28f, 0x5, 0x64, 0x33, 0x2, 0x28c, 0x28d, 0x7, 0x11, 0x2, 0x2, 0x28d, 
       0x28e, 0x7, 0x39, 0x2, 0x2, 0x28e, 0x290, 0x5, 0x64, 0x33, 0x2, 0x28f, 
       0x28c, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 0x2, 0x2, 0x290, 
       0x59, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x7, 0x13, 0x2, 0x2, 0x292, 
       0x293, 0x5, 0x9a, 0x4e, 0x2, 0x293, 0x294, 0x7, 0x14, 0x2, 0x2, 0x294, 
       0x295, 0x5, 0x9c, 0x4f, 0x2, 0x295, 0x296, 0x7, 0x39, 0x2, 0x2, 0x296, 
       0x29a, 0x5, 0x64, 0x33, 0x2, 0x297, 0x298, 0x7, 0x11, 0x2, 0x2, 0x298, 
       0x299, 0x7, 0x39, 0x2, 0x2, 0x299, 0x29b, 0x5, 0x64, 0x33, 0x2, 0x29a, 
       0x297, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 
       0x5b, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x7, 0x15, 0x2, 0x2, 0x29d, 
       0x29e, 0x7, 0x39, 0x2, 0x2, 0x29e, 0x2b4, 0x5, 0x64, 0x33, 0x2, 0x29f, 
       0x2a0, 0x5, 0x62, 0x32, 0x2, 0x2a0, 0x2a1, 0x7, 0x39, 0x2, 0x2, 0x2a1, 
       0x2a2, 0x5, 0x64, 0x33, 0x2, 0x2a2, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 
       0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a6, 
       0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 0x7, 0x11, 0x2, 0x2, 0x2a8, 
       0x2a9, 0x7, 0x39, 0x2, 0x2, 0x2a9, 0x2ab, 0x5, 0x64, 0x33, 0x2, 0x2aa, 
       0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ab, 
       0x2af, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x16, 0x2, 0x2, 0x2ad, 
       0x2ae, 0x7, 0x39, 0x2, 0x2, 0x2ae, 0x2b0, 0x5, 0x64, 0x33, 0x2, 0x2af, 
       0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b0, 
       0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x7, 0x16, 0x2, 0x2, 0x2b2, 
       0x2b3, 0x7, 0x39, 0x2, 0x2, 0x2b3, 0x2b5, 0x5, 0x64, 0x33, 0x2, 0x2b4, 
       0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b5, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x17, 0x2, 0x2, 0x2b7, 
       0x2bc, 0x5, 0x60, 0x31, 0x2, 0x2b8, 0x2b9, 0x7, 0x38, 0x2, 0x2, 0x2b9, 
       0x2bb, 0x5, 0x60, 0x31, 0x2, 0x2ba, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
       0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
       0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2be, 
       0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x7, 0x39, 0x2, 0x2, 0x2c0, 
       0x2c1, 0x5, 0x64, 0x33, 0x2, 0x2c1, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x2c2, 
       0x2c5, 0x5, 0x66, 0x34, 0x2, 0x2c3, 0x2c4, 0x7, 0xb, 0x2, 0x2, 0x2c4, 
       0x2c6, 0x5, 0x7a, 0x3e, 0x2, 0x2c5, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c5, 
       0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2c7, 
       0x2cd, 0x7, 0x18, 0x2, 0x2, 0x2c8, 0x2cb, 0x5, 0x66, 0x34, 0x2, 0x2c9, 
       0x2ca, 0x7, 0xb, 0x2, 0x2, 0x2ca, 0x2cc, 0x5, 0x8e, 0x48, 0x2, 0x2cb, 
       0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
       0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2cd, 
       0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x63, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
       0x2da, 0x5, 0x20, 0x11, 0x2, 0x2d0, 0x2d1, 0x7, 0x29, 0x2, 0x2, 0x2d1, 
       0x2d3, 0x7, 0x64, 0x2, 0x2, 0x2d2, 0x2d4, 0x5, 0x1e, 0x10, 0x2, 0x2d3, 
       0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 
       0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d6, 
       0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x7, 0x65, 0x2, 0x2, 0x2d8, 
       0x2da, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d9, 
       0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2e1, 0x5, 0x6e, 0x38, 0x2, 0x2dc, 0x2dd, 0x7, 0xf, 0x2, 0x2, 0x2dd, 
       0x2de, 0x5, 0x6e, 0x38, 0x2, 0x2de, 0x2df, 0x7, 0x11, 0x2, 0x2, 0x2df, 
       0x2e0, 0x5, 0x66, 0x34, 0x2, 0x2e0, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e1, 
       0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e2, 
       0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e5, 0x5, 0x6a, 0x36, 0x2, 0x2e4, 
       0x2db, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e9, 0x5, 0x6e, 0x38, 0x2, 0x2e7, 
       0x2e9, 0x5, 0x6c, 0x37, 0x2, 0x2e8, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e8, 
       0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x69, 0x3, 0x2, 0x2, 0x2, 0x2ea, 
       0x2ec, 0x7, 0x19, 0x2, 0x2, 0x2eb, 0x2ed, 0x5, 0x1a, 0xe, 0x2, 0x2ec, 
       0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ed, 
       0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ef, 0x7, 0x39, 0x2, 0x2, 0x2ef, 
       0x2f0, 0x5, 0x66, 0x34, 0x2, 0x2f0, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2f1, 
       0x2f3, 0x7, 0x19, 0x2, 0x2, 0x2f2, 0x2f4, 0x5, 0x1a, 0xe, 0x2, 0x2f3, 
       0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f4, 
       0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f6, 0x7, 0x39, 0x2, 0x2, 0x2f6, 
       0x2f7, 0x5, 0x68, 0x35, 0x2, 0x2f7, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2f8, 
       0x2fd, 0x5, 0x70, 0x39, 0x2, 0x2f9, 0x2fa, 0x7, 0x1a, 0x2, 0x2, 0x2fa, 
       0x2fc, 0x5, 0x70, 0x39, 0x2, 0x2fb, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2fc, 
       0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fd, 
       0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2ff, 
       0x2fd, 0x3, 0x2, 0x2, 0x2, 0x300, 0x305, 0x5, 0x72, 0x3a, 0x2, 0x301, 
       0x302, 0x7, 0x1b, 0x2, 0x2, 0x302, 0x304, 0x5, 0x72, 0x3a, 0x2, 0x303, 
       0x301, 0x3, 0x2, 0x2, 0x2, 0x304, 0x307, 0x3, 0x2, 0x2, 0x2, 0x305, 
       0x303, 0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 0x3, 0x2, 0x2, 0x2, 0x306, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x307, 0x305, 0x3, 0x2, 0x2, 0x2, 0x308, 
       0x309, 0x7, 0x1c, 0x2, 0x2, 0x309, 0x30c, 0x5, 0x72, 0x3a, 0x2, 0x30a, 
       0x30c, 0x5, 0x74, 0x3b, 0x2, 0x30b, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30b, 
       0x30a, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x73, 0x3, 0x2, 0x2, 0x2, 0x30d, 
       0x313, 0x5, 0x7a, 0x3e, 0x2, 0x30e, 0x30f, 0x5, 0x76, 0x3c, 0x2, 
       0x30f, 0x310, 0x5, 0x7a, 0x3e, 0x2, 0x310, 0x312, 0x3, 0x2, 0x2, 
       0x2, 0x311, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x312, 0x315, 0x3, 0x2, 0x2, 
       0x2, 0x313, 0x311, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x3, 0x2, 0x2, 
       0x2, 0x314, 0x75, 0x3, 0x2, 0x2, 0x2, 0x315, 0x313, 0x3, 0x2, 0x2, 
       0x2, 0x316, 0x324, 0x7, 0x4c, 0x2, 0x2, 0x317, 0x324, 0x7, 0x4d, 
       0x2, 0x2, 0x318, 0x324, 0x7, 0x4e, 0x2, 0x2, 0x319, 0x324, 0x7, 0x4f, 
       0x2, 0x2, 0x31a, 0x324, 0x7, 0x50, 0x2, 0x2, 0x31b, 0x324, 0x7, 0x51, 
       0x2, 0x2, 0x31c, 0x324, 0x7, 0x52, 0x2, 0x2, 0x31d, 0x324, 0x7, 0x14, 
       0x2, 0x2, 0x31e, 0x31f, 0x7, 0x1c, 0x2, 0x2, 0x31f, 0x324, 0x7, 0x14, 
       0x2, 0x2, 0x320, 0x324, 0x7, 0x1d, 0x2, 0x2, 0x321, 0x322, 0x7, 0x1d, 
       0x2, 0x2, 0x322, 0x324, 0x7, 0x1c, 0x2, 0x2, 0x323, 0x316, 0x3, 0x2, 
       0x2, 0x2, 0x323, 0x317, 0x3, 0x2, 0x2, 0x2, 0x323, 0x318, 0x3, 0x2, 
       0x2, 0x2, 0x323, 0x319, 0x3, 0x2, 0x2, 0x2, 0x323, 0x31a, 0x3, 0x2, 
       0x2, 0x2, 0x323, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x323, 0x31c, 0x3, 0x2, 
       0x2, 0x2, 0x323, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x323, 0x31e, 0x3, 0x2, 
       0x2, 0x2, 0x323, 0x320, 0x3, 0x2, 0x2, 0x2, 0x323, 0x321, 0x3, 0x2, 
       0x2, 0x2, 0x324, 0x77, 0x3, 0x2, 0x2, 0x2, 0x325, 0x326, 0x7, 0x35, 
       0x2, 0x2, 0x326, 0x327, 0x5, 0x7a, 0x3e, 0x2, 0x327, 0x79, 0x3, 0x2, 
       0x2, 0x2, 0x328, 0x32d, 0x5, 0x7c, 0x3f, 0x2, 0x329, 0x32a, 0x7, 
       0x3f, 0x2, 0x2, 0x32a, 0x32c, 0x5, 0x7c, 0x3f, 0x2, 0x32b, 0x329, 
       0x3, 0x2, 0x2, 0x2, 0x32c, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x32f, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x330, 0x335, 
       0x5, 0x7e, 0x40, 0x2, 0x331, 0x332, 0x7, 0x40, 0x2, 0x2, 0x332, 0x334, 
       0x5, 0x7e, 0x40, 0x2, 0x333, 0x331, 0x3, 0x2, 0x2, 0x2, 0x334, 0x337, 
       0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 
       0x3, 0x2, 0x2, 0x2, 0x336, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x337, 0x335, 
       0x3, 0x2, 0x2, 0x2, 0x338, 0x33d, 0x5, 0x80, 0x41, 0x2, 0x339, 0x33a, 
       0x7, 0x41, 0x2, 0x2, 0x33a, 0x33c, 0x5, 0x80, 0x41, 0x2, 0x33b, 0x339, 
       0x3, 0x2, 0x2, 0x2, 0x33c, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33b, 
       0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x33f, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x340, 0x345, 
       0x5, 0x82, 0x42, 0x2, 0x341, 0x342, 0x9, 0x4, 0x2, 0x2, 0x342, 0x344, 
       0x5, 0x82, 0x42, 0x2, 0x343, 0x341, 0x3, 0x2, 0x2, 0x2, 0x344, 0x347, 
       0x3, 0x2, 0x2, 0x2, 0x345, 0x343, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 
       0x3, 0x2, 0x2, 0x2, 0x346, 0x81, 0x3, 0x2, 0x2, 0x2, 0x347, 0x345, 
       0x3, 0x2, 0x2, 0x2, 0x348, 0x34d, 0x5, 0x84, 0x43, 0x2, 0x349, 0x34a, 
       0x9, 0x5, 0x2, 0x2, 0x34a, 0x34c, 0x5, 0x84, 0x43, 0x2, 0x34b, 0x349, 
       0x3, 0x2, 0x2, 0x2, 0x34c, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34b, 
       0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x34f, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x350, 0x355, 
       0x5, 0x86, 0x44, 0x2, 0x351, 0x352, 0x9, 0x6, 0x2, 0x2, 0x352, 0x354, 
       0x5, 0x86, 0x44, 0x2, 0x353, 0x351, 0x3, 0x2, 0x2, 0x2, 0x354, 0x357, 
       0x3, 0x2, 0x2, 0x2, 0x355, 0x353, 0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 
       0x3, 0x2, 0x2, 0x2, 0x356, 0x85, 0x3, 0x2, 0x2, 0x2, 0x357, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x9, 0x7, 0x2, 0x2, 0x359, 0x35c, 
       0x5, 0x86, 0x44, 0x2, 0x35a, 0x35c, 0x5, 0x88, 0x45, 0x2, 0x35b, 
       0x358, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35c, 
       0x87, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x360, 0x5, 0x8a, 0x46, 0x2, 0x35e, 
       0x35f, 0x7, 0x3b, 0x2, 0x2, 0x35f, 0x361, 0x5, 0x86, 0x44, 0x2, 0x360, 
       0x35e, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x3, 0x2, 0x2, 0x2, 0x361, 
       0x89, 0x3, 0x2, 0x2, 0x2, 0x362, 0x364, 0x7, 0x28, 0x2, 0x2, 0x363, 
       0x362, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x3, 0x2, 0x2, 0x2, 0x364, 
       0x365, 0x3, 0x2, 0x2, 0x2, 0x365, 0x369, 0x5, 0x8c, 0x47, 0x2, 0x366, 
       0x368, 0x5, 0x92, 0x4a, 0x2, 0x367, 0x366, 0x3, 0x2, 0x2, 0x2, 0x368, 
       0x36b, 0x3, 0x2, 0x2, 0x2, 0x369, 0x367, 0x3, 0x2, 0x2, 0x2, 0x369, 
       0x36a, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x36b, 
       0x369, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36f, 0x7, 0x36, 0x2, 0x2, 0x36d, 
       0x370, 0x5, 0xae, 0x58, 0x2, 0x36e, 0x370, 0x5, 0x90, 0x49, 0x2, 
       0x36f, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x36e, 0x3, 0x2, 0x2, 0x2, 
       0x36f, 0x370, 0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 0x3, 0x2, 0x2, 0x2, 
       0x371, 0x388, 0x7, 0x37, 0x2, 0x2, 0x372, 0x374, 0x7, 0x3d, 0x2, 
       0x2, 0x373, 0x375, 0x5, 0x90, 0x49, 0x2, 0x374, 0x373, 0x3, 0x2, 
       0x2, 0x2, 0x374, 0x375, 0x3, 0x2, 0x2, 0x2, 0x375, 0x376, 0x3, 0x2, 
       0x2, 0x2, 0x376, 0x388, 0x7, 0x3e, 0x2, 0x2, 0x377, 0x379, 0x7, 0x4a, 
       0x2, 0x2, 0x378, 0x37a, 0x5, 0x9e, 0x50, 0x2, 0x379, 0x378, 0x3, 
       0x2, 0x2, 0x2, 0x379, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x3, 
       0x2, 0x2, 0x2, 0x37b, 0x388, 0x7, 0x4b, 0x2, 0x2, 0x37c, 0x388, 0x5, 
       0x8e, 0x48, 0x2, 0x37d, 0x388, 0x7, 0x4, 0x2, 0x2, 0x37e, 0x380, 
       0x7, 0x3, 0x2, 0x2, 0x37f, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 
       0x3, 0x2, 0x2, 0x2, 0x381, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x381, 0x382, 
       0x3, 0x2, 0x2, 0x2, 0x382, 0x388, 0x3, 0x2, 0x2, 0x2, 0x383, 0x388, 
       0x7, 0x34, 0x2, 0x2, 0x384, 0x388, 0x7, 0x1e, 0x2, 0x2, 0x385, 0x388, 
       0x7, 0x1f, 0x2, 0x2, 0x386, 0x388, 0x7, 0x20, 0x2, 0x2, 0x387, 0x36c, 
       0x3, 0x2, 0x2, 0x2, 0x387, 0x372, 0x3, 0x2, 0x2, 0x2, 0x387, 0x377, 
       0x3, 0x2, 0x2, 0x2, 0x387, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x387, 0x37d, 
       0x3, 0x2, 0x2, 0x2, 0x387, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x387, 0x383, 
       0x3, 0x2, 0x2, 0x2, 0x387, 0x384, 0x3, 0x2, 0x2, 0x2, 0x387, 0x385, 
       0x3, 0x2, 0x2, 0x2, 0x387, 0x386, 0x3, 0x2, 0x2, 0x2, 0x388, 0x8d, 
       0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x7, 0x2a, 0x2, 0x2, 0x38a, 0x8f, 
       0x3, 0x2, 0x2, 0x2, 0x38b, 0x38e, 0x5, 0x66, 0x34, 0x2, 0x38c, 0x38e, 
       0x5, 0x78, 0x3d, 0x2, 0x38d, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38c, 
       0x3, 0x2, 0x2, 0x2, 0x38e, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x39e, 
       0x5, 0xa8, 0x55, 0x2, 0x390, 0x393, 0x7, 0x38, 0x2, 0x2, 0x391, 0x394, 
       0x5, 0x66, 0x34, 0x2, 0x392, 0x394, 0x5, 0x78, 0x3d, 0x2, 0x393, 
       0x391, 0x3, 0x2, 0x2, 0x2, 0x393, 0x392, 0x3, 0x2, 0x2, 0x2, 0x394, 
       0x396, 0x3, 0x2, 0x2, 0x2, 0x395, 0x390, 0x3, 0x2, 0x2, 0x2, 0x396, 
       0x399, 0x3, 0x2, 0x2, 0x2, 0x397, 0x395, 0x3, 0x2, 0x2, 0x2, 0x397, 
       0x398, 0x3, 0x2, 0x2, 0x2, 0x398, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x399, 
       0x397, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39c, 0x7, 0x38, 0x2, 0x2, 0x39b, 
       0x39a, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x39c, 
       0x39e, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x39d, 
       0x397, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x39f, 
       0x3a1, 0x7, 0x36, 0x2, 0x2, 0x3a0, 0x3a2, 0x5, 0xa2, 0x52, 0x2, 0x3a1, 
       0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a2, 
       0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3ab, 0x7, 0x37, 0x2, 0x2, 0x3a4, 
       0x3a5, 0x7, 0x3d, 0x2, 0x2, 0x3a5, 0x3a6, 0x5, 0x94, 0x4b, 0x2, 0x3a6, 
       0x3a7, 0x7, 0x3e, 0x2, 0x2, 0x3a7, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3a8, 
       0x3a9, 0x7, 0x33, 0x2, 0x2, 0x3a9, 0x3ab, 0x5, 0x8e, 0x48, 0x2, 0x3aa, 
       0x39f, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3aa, 
       0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x93, 0x3, 0x2, 0x2, 0x2, 0x3ac, 
       0x3b1, 0x5, 0x96, 0x4c, 0x2, 0x3ad, 0x3ae, 0x7, 0x38, 0x2, 0x2, 0x3ae, 
       0x3b0, 0x5, 0x96, 0x4c, 0x2, 0x3af, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3b0, 
       0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 
       0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b3, 
       0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x7, 0x38, 0x2, 0x2, 0x3b5, 
       0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 
       0x95, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3c3, 0x5, 0x66, 0x34, 0x2, 0x3b8, 
       0x3ba, 0x5, 0x66, 0x34, 0x2, 0x3b9, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
       0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bb, 
       0x3bd, 0x7, 0x39, 0x2, 0x2, 0x3bc, 0x3be, 0x5, 0x66, 0x34, 0x2, 0x3bd, 
       0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3be, 
       0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c1, 0x5, 0x98, 0x4d, 0x2, 0x3c0, 
       0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c1, 
       0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3c2, 
       0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x97, 0x3, 0x2, 0x2, 0x2, 0x3c4, 
       0x3c6, 0x7, 0x39, 0x2, 0x2, 0x3c5, 0x3c7, 0x5, 0x66, 0x34, 0x2, 0x3c6, 
       0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3c7, 
       0x99, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3cb, 0x5, 0x7a, 0x3e, 0x2, 0x3c9, 
       0x3cb, 0x5, 0x78, 0x3d, 0x2, 0x3ca, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3ca, 
       0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3cc, 
       0x3cf, 0x7, 0x38, 0x2, 0x2, 0x3cd, 0x3d0, 0x5, 0x7a, 0x3e, 0x2, 0x3ce, 
       0x3d0, 0x5, 0x78, 0x3d, 0x2, 0x3cf, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cf, 
       0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d1, 
       0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d3, 
       0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
       0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d6, 
       0x3d8, 0x7, 0x38, 0x2, 0x2, 0x3d7, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d7, 
       0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x3d9, 
       0x3de, 0x5, 0x66, 0x34, 0x2, 0x3da, 0x3db, 0x7, 0x38, 0x2, 0x2, 0x3db, 
       0x3dd, 0x5, 0x66, 0x34, 0x2, 0x3dc, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3dd, 
       0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3de, 
       0x3df, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
       0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e3, 0x7, 0x38, 0x2, 0x2, 0x3e2, 
       0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
       0x9d, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e5, 0x5, 0x66, 0x34, 0x2, 0x3e5, 
       0x3e6, 0x7, 0x39, 0x2, 0x2, 0x3e6, 0x3e7, 0x5, 0x66, 0x34, 0x2, 0x3e7, 
       0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e9, 0x7, 0x3b, 0x2, 0x2, 0x3e9, 
       0x3eb, 0x5, 0x7a, 0x3e, 0x2, 0x3ea, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3ea, 
       0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3ec, 
       0x3ff, 0x5, 0xa8, 0x55, 0x2, 0x3ed, 0x3f4, 0x7, 0x38, 0x2, 0x2, 0x3ee, 
       0x3ef, 0x5, 0x66, 0x34, 0x2, 0x3ef, 0x3f0, 0x7, 0x39, 0x2, 0x2, 0x3f0, 
       0x3f1, 0x5, 0x66, 0x34, 0x2, 0x3f1, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
       0x3f3, 0x7, 0x3b, 0x2, 0x2, 0x3f3, 0x3f5, 0x5, 0x7a, 0x3e, 0x2, 0x3f4, 
       0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f5, 
       0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
       0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f8, 
       0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fa, 
       0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fd, 0x7, 0x38, 0x2, 0x2, 0x3fc, 
       0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fd, 
       0x3ff, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3fe, 
       0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x415, 0x3, 0x2, 0x2, 0x2, 0x400, 
       0x403, 0x5, 0x66, 0x34, 0x2, 0x401, 0x403, 0x5, 0x78, 0x3d, 0x2, 
       0x402, 0x400, 0x3, 0x2, 0x2, 0x2, 0x402, 0x401, 0x3, 0x2, 0x2, 0x2, 
       0x403, 0x412, 0x3, 0x2, 0x2, 0x2, 0x404, 0x413, 0x5, 0xa8, 0x55, 
       0x2, 0x405, 0x408, 0x7, 0x38, 0x2, 0x2, 0x406, 0x409, 0x5, 0x66, 
       0x34, 0x2, 0x407, 0x409, 0x5, 0x78, 0x3d, 0x2, 0x408, 0x406, 0x3, 
       0x2, 0x2, 0x2, 0x408, 0x407, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40b, 0x3, 
       0x2, 0x2, 0x2, 0x40a, 0x405, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40e, 0x3, 
       0x2, 0x2, 0x2, 0x40c, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 0x3, 
       0x2, 0x2, 0x2, 0x40d, 0x410, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40c, 0x3, 
       0x2, 0x2, 0x2, 0x40f, 0x411, 0x7, 0x38, 0x2, 0x2, 0x410, 0x40f, 0x3, 
       0x2, 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 0x2, 0x2, 0x411, 0x413, 0x3, 
       0x2, 0x2, 0x2, 0x412, 0x404, 0x3, 0x2, 0x2, 0x2, 0x412, 0x40c, 0x3, 
       0x2, 0x2, 0x2, 0x413, 0x415, 0x3, 0x2, 0x2, 0x2, 0x414, 0x3ea, 0x3, 
       0x2, 0x2, 0x2, 0x414, 0x402, 0x3, 0x2, 0x2, 0x2, 0x415, 0x9f, 0x3, 
       0x2, 0x2, 0x2, 0x416, 0x417, 0x7, 0x21, 0x2, 0x2, 0x417, 0x41d, 0x5, 
       0x8e, 0x48, 0x2, 0x418, 0x41a, 0x7, 0x36, 0x2, 0x2, 0x419, 0x41b, 
       0x5, 0xa2, 0x52, 0x2, 0x41a, 0x419, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 
       0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41e, 
       0x7, 0x37, 0x2, 0x2, 0x41d, 0x418, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x41e, 
       0x3, 0x2, 0x2, 0x2, 0x41e, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 
       0x7, 0x39, 0x2, 0x2, 0x420, 0x421, 0x5, 0x64, 0x33, 0x2, 0x421, 0xa1, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x427, 0x5, 0xa4, 0x53, 0x2, 0x423, 0x424, 
       0x7, 0x38, 0x2, 0x2, 0x424, 0x426, 0x5, 0xa4, 0x53, 0x2, 0x425, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x426, 0x429, 0x3, 0x2, 0x2, 0x2, 0x427, 0x425, 
       0x3, 0x2, 0x2, 0x2, 0x427, 0x428, 0x3, 0x2, 0x2, 0x2, 0x428, 0x42b, 
       0x3, 0x2, 0x2, 0x2, 0x429, 0x427, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x42c, 
       0x7, 0x38, 0x2, 0x2, 0x42b, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42c, 
       0x3, 0x2, 0x2, 0x2, 0x42c, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x42f, 
       0x5, 0x66, 0x34, 0x2, 0x42e, 0x430, 0x5, 0xa8, 0x55, 0x2, 0x42f, 
       0x42e, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 0x3, 0x2, 0x2, 0x2, 0x430, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 0x5, 0x66, 0x34, 0x2, 0x432, 
       0x433, 0x7, 0x3c, 0x2, 0x2, 0x433, 0x434, 0x5, 0x66, 0x34, 0x2, 0x434, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x435, 0x436, 0x7, 0x3b, 0x2, 0x2, 0x436, 
       0x43a, 0x5, 0x66, 0x34, 0x2, 0x437, 0x438, 0x7, 0x35, 0x2, 0x2, 0x438, 
       0x43a, 0x5, 0x66, 0x34, 0x2, 0x439, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x439, 
       0x431, 0x3, 0x2, 0x2, 0x2, 0x439, 0x435, 0x3, 0x2, 0x2, 0x2, 0x439, 
       0x437, 0x3, 0x2, 0x2, 0x2, 0x43a, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x43b, 
       0x43e, 0x5, 0xa8, 0x55, 0x2, 0x43c, 0x43e, 0x5, 0xaa, 0x56, 0x2, 
       0x43d, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43c, 0x3, 0x2, 0x2, 0x2, 
       0x43e, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x441, 0x7, 0x27, 0x2, 0x2, 
       0x440, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x440, 0x441, 0x3, 0x2, 0x2, 0x2, 
       0x441, 0x442, 0x3, 0x2, 0x2, 0x2, 0x442, 0x443, 0x7, 0x13, 0x2, 0x2, 
       0x443, 0x444, 0x5, 0x9a, 0x4e, 0x2, 0x444, 0x445, 0x7, 0x14, 0x2, 
       0x2, 0x445, 0x447, 0x5, 0x6e, 0x38, 0x2, 0x446, 0x448, 0x5, 0xa6, 
       0x54, 0x2, 0x447, 0x446, 0x3, 0x2, 0x2, 0x2, 0x447, 0x448, 0x3, 0x2, 
       0x2, 0x2, 0x448, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x449, 0x44a, 0x7, 0xf, 
       0x2, 0x2, 0x44a, 0x44c, 0x5, 0x68, 0x35, 0x2, 0x44b, 0x44d, 0x5, 
       0xa6, 0x54, 0x2, 0x44c, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44d, 
       0x3, 0x2, 0x2, 0x2, 0x44d, 0xab, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 
       0x5, 0x8e, 0x48, 0x2, 0x44f, 0xad, 0x3, 0x2, 0x2, 0x2, 0x450, 0x452, 
       0x7, 0x22, 0x2, 0x2, 0x451, 0x453, 0x5, 0xb0, 0x59, 0x2, 0x452, 0x451, 
       0x3, 0x2, 0x2, 0x2, 0x452, 0x453, 0x3, 0x2, 0x2, 0x2, 0x453, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0x454, 0x455, 0x7, 0x9, 0x2, 0x2, 0x455, 0x458, 
       0x5, 0x66, 0x34, 0x2, 0x456, 0x458, 0x5, 0x9c, 0x4f, 0x2, 0x457, 
       0x454, 0x3, 0x2, 0x2, 0x2, 0x457, 0x456, 0x3, 0x2, 0x2, 0x2, 0x458, 
       0xb1, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xb7, 0xbb, 0xbd, 0xc6, 0xcf, 0xd2, 
       0xd9, 0xdf, 0xe9, 0xf2, 0xf9, 0xff, 0x103, 0x109, 0x10f, 0x113, 0x11a, 
       0x11c, 0x11e, 0x123, 0x125, 0x127, 0x12b, 0x131, 0x135, 0x13c, 0x13e, 
       0x140, 0x145, 0x147, 0x14c, 0x151, 0x157, 0x15b, 0x161, 0x167, 0x16b, 
       0x172, 0x174, 0x176, 0x17b, 0x17d, 0x17f, 0x183, 0x189, 0x18d, 0x194, 
       0x196, 0x198, 0x19d, 0x19f, 0x1a5, 0x1ac, 0x1b0, 0x1bc, 0x1c3, 0x1c8, 
       0x1cc, 0x1cf, 0x1d5, 0x1d9, 0x1de, 0x1e2, 0x1e6, 0x1f4, 0x1fc, 0x204, 
       0x206, 0x20a, 0x213, 0x21a, 0x21c, 0x225, 0x22a, 0x22f, 0x236, 0x23a, 
       0x241, 0x249, 0x252, 0x25b, 0x262, 0x26d, 0x273, 0x280, 0x286, 0x28f, 
       0x29a, 0x2a5, 0x2aa, 0x2af, 0x2b4, 0x2bc, 0x2c5, 0x2cb, 0x2cd, 0x2d5, 
       0x2d9, 0x2e1, 0x2e4, 0x2e8, 0x2ec, 0x2f3, 0x2fd, 0x305, 0x30b, 0x313, 
       0x323, 0x32d, 0x335, 0x33d, 0x345, 0x34d, 0x355, 0x35b, 0x360, 0x363, 
       0x369, 0x36f, 0x374, 0x379, 0x381, 0x387, 0x38d, 0x393, 0x397, 0x39b, 
       0x39d, 0x3a1, 0x3aa, 0x3b1, 0x3b5, 0x3b9, 0x3bd, 0x3c0, 0x3c2, 0x3c6, 
       0x3ca, 0x3cf, 0x3d3, 0x3d7, 0x3de, 0x3e2, 0x3ea, 0x3f4, 0x3f8, 0x3fc, 
       0x3fe, 0x402, 0x408, 0x40c, 0x410, 0x412, 0x414, 0x41a, 0x41d, 0x427, 
       0x42b, 0x42f, 0x439, 0x43d, 0x440, 0x447, 0x44c, 0x452, 0x457, 
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

Python3Parser::Initializer Python3Parser::_init;
