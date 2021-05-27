
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
    setState(191);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NEWLINE: {
        enterOuterAlt(_localctx, 1);
        setState(186);
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
        setState(187);
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
        setState(188);
        compound_stmt();
        setState(189);
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
    setState(197);
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
      setState(195);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::NEWLINE: {
          setState(193);
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
          setState(194);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(200);
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
    setState(202);
    testlist();
    setState(206);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::NEWLINE) {
      setState(203);
      match(Python3Parser::NEWLINE);
      setState(208);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(209);
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
    setState(211);
    match(Python3Parser::AT);
    setState(212);
    dotted_name();
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::OPEN_PAREN) {
      setState(213);
      match(Python3Parser::OPEN_PAREN);
      setState(215);
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
        setState(214);
        arglist();
      }
      setState(217);
      match(Python3Parser::CLOSE_PAREN);
    }
    setState(220);
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
    setState(223); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(222);
      decorator();
      setState(225); 
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
    setState(227);
    decorators();
    setState(231);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::CLASS: {
        setState(228);
        classdef();
        break;
      }

      case Python3Parser::DEF: {
        setState(229);
        funcdef();
        break;
      }

      case Python3Parser::ASYNC: {
        setState(230);
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
    setState(233);
    match(Python3Parser::ASYNC);
    setState(234);
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
    setState(236);
    match(Python3Parser::DEF);
    setState(237);
    name();
    setState(238);
    parameters();
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ARROW) {
      setState(239);
      match(Python3Parser::ARROW);
      setState(240);
      test();
    }
    setState(243);
    match(Python3Parser::COLON);
    setState(244);
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
    setState(246);
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
    setState(248);
    match(Python3Parser::OPEN_PAREN);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::STAR)
      | (1ULL << Python3Parser::POWER))) != 0)) {
      setState(249);
      typedargslist();
    }
    setState(252);
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
    setState(335);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NAME: {
        setState(254);
        tfpdef();
        setState(257);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::ASSIGN) {
          setState(255);
          match(Python3Parser::ASSIGN);
          setState(256);
          test();
        }
        setState(267);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(259);
            match(Python3Parser::COMMA);
            setState(260);
            tfpdef();
            setState(263);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::ASSIGN) {
              setState(261);
              match(Python3Parser::ASSIGN);
              setState(262);
              test();
            } 
          }
          setState(269);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
        }
        setState(303);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(270);
          match(Python3Parser::COMMA);
          setState(301);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case Python3Parser::STAR: {
              setState(271);
              match(Python3Parser::STAR);
              setState(273);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::NAME) {
                setState(272);
                tfpdef();
              }
              setState(283);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
              while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                  setState(275);
                  match(Python3Parser::COMMA);
                  setState(276);
                  tfpdef();
                  setState(279);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Python3Parser::ASSIGN) {
                    setState(277);
                    match(Python3Parser::ASSIGN);
                    setState(278);
                    test();
                  } 
                }
                setState(285);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
              }
              setState(294);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::COMMA) {
                setState(286);
                match(Python3Parser::COMMA);
                setState(292);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == Python3Parser::POWER) {
                  setState(287);
                  match(Python3Parser::POWER);
                  setState(288);
                  tfpdef();
                  setState(290);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Python3Parser::COMMA) {
                    setState(289);
                    match(Python3Parser::COMMA);
                  }
                }
              }
              break;
            }

            case Python3Parser::POWER: {
              setState(296);
              match(Python3Parser::POWER);
              setState(297);
              tfpdef();
              setState(299);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::COMMA) {
                setState(298);
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
        setState(305);
        match(Python3Parser::STAR);
        setState(307);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::NAME) {
          setState(306);
          tfpdef();
        }
        setState(317);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(309);
            match(Python3Parser::COMMA);
            setState(310);
            tfpdef();
            setState(313);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::ASSIGN) {
              setState(311);
              match(Python3Parser::ASSIGN);
              setState(312);
              test();
            } 
          }
          setState(319);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
        }
        setState(328);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(320);
          match(Python3Parser::COMMA);
          setState(326);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == Python3Parser::POWER) {
            setState(321);
            match(Python3Parser::POWER);
            setState(322);
            tfpdef();
            setState(324);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::COMMA) {
              setState(323);
              match(Python3Parser::COMMA);
            }
          }
        }
        break;
      }

      case Python3Parser::POWER: {
        setState(330);
        match(Python3Parser::POWER);
        setState(331);
        tfpdef();
        setState(333);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(332);
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
    setState(337);
    name();
    setState(340);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COLON) {
      setState(338);
      match(Python3Parser::COLON);
      setState(339);
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
    setState(423);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NAME: {
        setState(342);
        vfpdef();
        setState(345);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::ASSIGN) {
          setState(343);
          match(Python3Parser::ASSIGN);
          setState(344);
          test();
        }
        setState(355);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(347);
            match(Python3Parser::COMMA);
            setState(348);
            vfpdef();
            setState(351);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::ASSIGN) {
              setState(349);
              match(Python3Parser::ASSIGN);
              setState(350);
              test();
            } 
          }
          setState(357);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
        }
        setState(391);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(358);
          match(Python3Parser::COMMA);
          setState(389);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case Python3Parser::STAR: {
              setState(359);
              match(Python3Parser::STAR);
              setState(361);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::NAME) {
                setState(360);
                vfpdef();
              }
              setState(371);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
              while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                  setState(363);
                  match(Python3Parser::COMMA);
                  setState(364);
                  vfpdef();
                  setState(367);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Python3Parser::ASSIGN) {
                    setState(365);
                    match(Python3Parser::ASSIGN);
                    setState(366);
                    test();
                  } 
                }
                setState(373);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
              }
              setState(382);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::COMMA) {
                setState(374);
                match(Python3Parser::COMMA);
                setState(380);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == Python3Parser::POWER) {
                  setState(375);
                  match(Python3Parser::POWER);
                  setState(376);
                  vfpdef();
                  setState(378);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Python3Parser::COMMA) {
                    setState(377);
                    match(Python3Parser::COMMA);
                  }
                }
              }
              break;
            }

            case Python3Parser::POWER: {
              setState(384);
              match(Python3Parser::POWER);
              setState(385);
              vfpdef();
              setState(387);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == Python3Parser::COMMA) {
                setState(386);
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
        setState(393);
        match(Python3Parser::STAR);
        setState(395);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::NAME) {
          setState(394);
          vfpdef();
        }
        setState(405);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(397);
            match(Python3Parser::COMMA);
            setState(398);
            vfpdef();
            setState(401);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::ASSIGN) {
              setState(399);
              match(Python3Parser::ASSIGN);
              setState(400);
              test();
            } 
          }
          setState(407);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
        }
        setState(416);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(408);
          match(Python3Parser::COMMA);
          setState(414);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == Python3Parser::POWER) {
            setState(409);
            match(Python3Parser::POWER);
            setState(410);
            vfpdef();
            setState(412);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == Python3Parser::COMMA) {
              setState(411);
              match(Python3Parser::COMMA);
            }
          }
        }
        break;
      }

      case Python3Parser::POWER: {
        setState(418);
        match(Python3Parser::POWER);
        setState(419);
        vfpdef();
        setState(421);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(420);
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
    setState(425);
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
    setState(429);
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
        setState(427);
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
        setState(428);
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
    setState(431);
    small_stmt();
    setState(436);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(432);
        match(Python3Parser::SEMI_COLON);
        setState(433);
        small_stmt(); 
      }
      setState(438);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::SEMI_COLON) {
      setState(439);
      match(Python3Parser::SEMI_COLON);
    }
    setState(442);
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
    setState(452);
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
        setState(444);
        expr_stmt();
        break;
      }

      case Python3Parser::DEL: {
        setState(445);
        del_stmt();
        break;
      }

      case Python3Parser::PASS: {
        setState(446);
        pass_stmt();
        break;
      }

      case Python3Parser::RETURN:
      case Python3Parser::RAISE:
      case Python3Parser::YIELD:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK: {
        setState(447);
        flow_stmt();
        break;
      }

      case Python3Parser::FROM:
      case Python3Parser::IMPORT: {
        setState(448);
        import_stmt();
        break;
      }

      case Python3Parser::GLOBAL: {
        setState(449);
        global_stmt();
        break;
      }

      case Python3Parser::NONLOCAL: {
        setState(450);
        nonlocal_stmt();
        break;
      }

      case Python3Parser::ASSERT: {
        setState(451);
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

Python3Parser::Expr_stmt_singleContext* Python3Parser::Expr_stmtContext::expr_stmt_single() {
  return getRuleContext<Python3Parser::Expr_stmt_singleContext>(0);
}

Python3Parser::Expr_stmt_multiContext* Python3Parser::Expr_stmtContext::expr_stmt_multi() {
  return getRuleContext<Python3Parser::Expr_stmt_multiContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(456);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(454);
      expr_stmt_single();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(455);
      expr_stmt_multi();
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

//----------------- Expr_stmt_singleContext ------------------------------------------------------------------

Python3Parser::Expr_stmt_singleContext::Expr_stmt_singleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Testlist_star_exprContext* Python3Parser::Expr_stmt_singleContext::testlist_star_expr() {
  return getRuleContext<Python3Parser::Testlist_star_exprContext>(0);
}


size_t Python3Parser::Expr_stmt_singleContext::getRuleIndex() const {
  return Python3Parser::RuleExpr_stmt_single;
}

void Python3Parser::Expr_stmt_singleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_stmt_single(this);
}

void Python3Parser::Expr_stmt_singleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_stmt_single(this);
}


antlrcpp::Any Python3Parser::Expr_stmt_singleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitExpr_stmt_single(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Expr_stmt_singleContext* Python3Parser::expr_stmt_single() {
  Expr_stmt_singleContext *_localctx = _tracker.createInstance<Expr_stmt_singleContext>(_ctx, getState());
  enterRule(_localctx, 36, Python3Parser::RuleExpr_stmt_single);

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
    testlist_star_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_stmt_multiContext ------------------------------------------------------------------

Python3Parser::Expr_stmt_multiContext::Expr_stmt_multiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Testlist_star_exprContext *> Python3Parser::Expr_stmt_multiContext::testlist_star_expr() {
  return getRuleContexts<Python3Parser::Testlist_star_exprContext>();
}

Python3Parser::Testlist_star_exprContext* Python3Parser::Expr_stmt_multiContext::testlist_star_expr(size_t i) {
  return getRuleContext<Python3Parser::Testlist_star_exprContext>(i);
}

Python3Parser::AnnassignContext* Python3Parser::Expr_stmt_multiContext::annassign() {
  return getRuleContext<Python3Parser::AnnassignContext>(0);
}

Python3Parser::AugassignContext* Python3Parser::Expr_stmt_multiContext::augassign() {
  return getRuleContext<Python3Parser::AugassignContext>(0);
}

std::vector<Python3Parser::Yield_exprContext *> Python3Parser::Expr_stmt_multiContext::yield_expr() {
  return getRuleContexts<Python3Parser::Yield_exprContext>();
}

Python3Parser::Yield_exprContext* Python3Parser::Expr_stmt_multiContext::yield_expr(size_t i) {
  return getRuleContext<Python3Parser::Yield_exprContext>(i);
}

Python3Parser::TestlistContext* Python3Parser::Expr_stmt_multiContext::testlist() {
  return getRuleContext<Python3Parser::TestlistContext>(0);
}

std::vector<tree::TerminalNode *> Python3Parser::Expr_stmt_multiContext::ASSIGN() {
  return getTokens(Python3Parser::ASSIGN);
}

tree::TerminalNode* Python3Parser::Expr_stmt_multiContext::ASSIGN(size_t i) {
  return getToken(Python3Parser::ASSIGN, i);
}


size_t Python3Parser::Expr_stmt_multiContext::getRuleIndex() const {
  return Python3Parser::RuleExpr_stmt_multi;
}

void Python3Parser::Expr_stmt_multiContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_stmt_multi(this);
}

void Python3Parser::Expr_stmt_multiContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_stmt_multi(this);
}


antlrcpp::Any Python3Parser::Expr_stmt_multiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitExpr_stmt_multi(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Expr_stmt_multiContext* Python3Parser::expr_stmt_multi() {
  Expr_stmt_multiContext *_localctx = _tracker.createInstance<Expr_stmt_multiContext>(_ctx, getState());
  enterRule(_localctx, 38, Python3Parser::RuleExpr_stmt_multi);
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
    setState(460);
    testlist_star_expr();
    setState(476);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::COLON: {
        setState(461);
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
        setState(462);
        augassign();
        setState(465);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Python3Parser::YIELD: {
            setState(463);
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
            setState(464);
            testlist();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case Python3Parser::ASSIGN: {
        setState(472); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(467);
          match(Python3Parser::ASSIGN);
          setState(470);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case Python3Parser::YIELD: {
              setState(468);
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
              setState(469);
              testlist_star_expr();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(474); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Python3Parser::ASSIGN);
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
  enterRule(_localctx, 40, Python3Parser::RuleAnnassign);
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
    setState(478);
    match(Python3Parser::COLON);
    setState(479);
    test();
    setState(482);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ASSIGN) {
      setState(480);
      match(Python3Parser::ASSIGN);
      setState(481);
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
  enterRule(_localctx, 42, Python3Parser::RuleTestlist_star_expr);
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
    setState(486);
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
        setState(484);
        test();
        break;
      }

      case Python3Parser::STAR: {
        setState(485);
        star_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(495);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(488);
        match(Python3Parser::COMMA);
        setState(491);
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
            setState(489);
            test();
            break;
          }

          case Python3Parser::STAR: {
            setState(490);
            star_expr();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(497);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
    setState(499);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(498);
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
  enterRule(_localctx, 44, Python3Parser::RuleAugassign);
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
    setState(501);
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
  enterRule(_localctx, 46, Python3Parser::RuleDel_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    match(Python3Parser::DEL);
    setState(504);
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
  enterRule(_localctx, 48, Python3Parser::RulePass_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(506);
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
  enterRule(_localctx, 50, Python3Parser::RuleFlow_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(513);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::BREAK: {
        enterOuterAlt(_localctx, 1);
        setState(508);
        break_stmt();
        break;
      }

      case Python3Parser::CONTINUE: {
        enterOuterAlt(_localctx, 2);
        setState(509);
        continue_stmt();
        break;
      }

      case Python3Parser::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(510);
        return_stmt();
        break;
      }

      case Python3Parser::RAISE: {
        enterOuterAlt(_localctx, 4);
        setState(511);
        raise_stmt();
        break;
      }

      case Python3Parser::YIELD: {
        enterOuterAlt(_localctx, 5);
        setState(512);
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
  enterRule(_localctx, 52, Python3Parser::RuleBreak_stmt);

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
  enterRule(_localctx, 54, Python3Parser::RuleContinue_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(517);
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
  enterRule(_localctx, 56, Python3Parser::RuleReturn_stmt);
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
    setState(519);
    match(Python3Parser::RETURN);
    setState(521);
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
      setState(520);
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
  enterRule(_localctx, 58, Python3Parser::RuleYield_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
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
  enterRule(_localctx, 60, Python3Parser::RuleRaise_stmt);
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
    match(Python3Parser::RAISE);
    setState(531);
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
      setState(526);
      test();
      setState(529);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::FROM) {
        setState(527);
        match(Python3Parser::FROM);
        setState(528);
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
  enterRule(_localctx, 62, Python3Parser::RuleImport_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(535);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::IMPORT: {
        enterOuterAlt(_localctx, 1);
        setState(533);
        import_name();
        break;
      }

      case Python3Parser::FROM: {
        enterOuterAlt(_localctx, 2);
        setState(534);
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
  enterRule(_localctx, 64, Python3Parser::RuleImport_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(537);
    match(Python3Parser::IMPORT);
    setState(538);
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
  enterRule(_localctx, 66, Python3Parser::RuleImport_from);
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
    setState(540);
    match(Python3Parser::FROM);
    setState(553);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      setState(544);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Python3Parser::DOT

      || _la == Python3Parser::ELLIPSIS) {
        setState(541);
        _la = _input->LA(1);
        if (!(_la == Python3Parser::DOT

        || _la == Python3Parser::ELLIPSIS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(546);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(547);
      dotted_name();
      break;
    }

    case 2: {
      setState(549); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(548);
        _la = _input->LA(1);
        if (!(_la == Python3Parser::DOT

        || _la == Python3Parser::ELLIPSIS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(551); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == Python3Parser::DOT

      || _la == Python3Parser::ELLIPSIS);
      break;
    }

    default:
      break;
    }
    setState(555);
    match(Python3Parser::IMPORT);
    setState(562);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STAR: {
        setState(556);
        match(Python3Parser::STAR);
        break;
      }

      case Python3Parser::OPEN_PAREN: {
        setState(557);
        match(Python3Parser::OPEN_PAREN);
        setState(558);
        import_as_names();
        setState(559);
        match(Python3Parser::CLOSE_PAREN);
        break;
      }

      case Python3Parser::NAME: {
        setState(561);
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
  enterRule(_localctx, 68, Python3Parser::RuleImport_as_name);
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
    setState(564);
    name();
    setState(567);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::AS) {
      setState(565);
      match(Python3Parser::AS);
      setState(566);
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
  enterRule(_localctx, 70, Python3Parser::RuleDotted_as_name);
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
    setState(569);
    dotted_name();
    setState(572);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::AS) {
      setState(570);
      match(Python3Parser::AS);
      setState(571);
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
  enterRule(_localctx, 72, Python3Parser::RuleImport_as_names);
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
    setState(574);
    import_as_name();
    setState(579);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(575);
        match(Python3Parser::COMMA);
        setState(576);
        import_as_name(); 
      }
      setState(581);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    }
    setState(583);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(582);
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
  enterRule(_localctx, 74, Python3Parser::RuleDotted_as_names);
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
    setState(585);
    dotted_as_name();
    setState(590);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(586);
      match(Python3Parser::COMMA);
      setState(587);
      dotted_as_name();
      setState(592);
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
  enterRule(_localctx, 76, Python3Parser::RuleDotted_name);
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
    setState(593);
    name();
    setState(598);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::DOT) {
      setState(594);
      match(Python3Parser::DOT);
      setState(595);
      name();
      setState(600);
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
  enterRule(_localctx, 78, Python3Parser::RuleGlobal_stmt);
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
    setState(601);
    match(Python3Parser::GLOBAL);
    setState(602);
    name();
    setState(607);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(603);
      match(Python3Parser::COMMA);
      setState(604);
      name();
      setState(609);
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
  enterRule(_localctx, 80, Python3Parser::RuleNonlocal_stmt);
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
    setState(610);
    match(Python3Parser::NONLOCAL);
    setState(611);
    name();
    setState(616);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(612);
      match(Python3Parser::COMMA);
      setState(613);
      name();
      setState(618);
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
  enterRule(_localctx, 82, Python3Parser::RuleAssert_stmt);
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
    setState(619);
    match(Python3Parser::ASSERT);
    setState(620);
    test();
    setState(623);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(621);
      match(Python3Parser::COMMA);
      setState(622);
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
  enterRule(_localctx, 84, Python3Parser::RuleCompound_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(634);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(625);
        if_stmt();
        break;
      }

      case Python3Parser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(626);
        while_stmt();
        break;
      }

      case Python3Parser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(627);
        for_stmt();
        break;
      }

      case Python3Parser::TRY: {
        enterOuterAlt(_localctx, 4);
        setState(628);
        try_stmt();
        break;
      }

      case Python3Parser::WITH: {
        enterOuterAlt(_localctx, 5);
        setState(629);
        with_stmt();
        break;
      }

      case Python3Parser::DEF: {
        enterOuterAlt(_localctx, 6);
        setState(630);
        funcdef();
        break;
      }

      case Python3Parser::CLASS: {
        enterOuterAlt(_localctx, 7);
        setState(631);
        classdef();
        break;
      }

      case Python3Parser::AT: {
        enterOuterAlt(_localctx, 8);
        setState(632);
        decorated();
        break;
      }

      case Python3Parser::ASYNC: {
        enterOuterAlt(_localctx, 9);
        setState(633);
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
  enterRule(_localctx, 86, Python3Parser::RuleAsync_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(636);
    match(Python3Parser::ASYNC);
    setState(640);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::DEF: {
        setState(637);
        funcdef();
        break;
      }

      case Python3Parser::WITH: {
        setState(638);
        with_stmt();
        break;
      }

      case Python3Parser::FOR: {
        setState(639);
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
  enterRule(_localctx, 88, Python3Parser::RuleIf_stmt);
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
    setState(642);
    match(Python3Parser::IF);
    setState(643);
    test();
    setState(644);
    match(Python3Parser::COLON);
    setState(645);
    suite();
    setState(653);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ELIF) {
      setState(646);
      match(Python3Parser::ELIF);
      setState(647);
      test();
      setState(648);
      match(Python3Parser::COLON);
      setState(649);
      suite();
      setState(655);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(659);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(656);
      match(Python3Parser::ELSE);
      setState(657);
      match(Python3Parser::COLON);
      setState(658);
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
  enterRule(_localctx, 90, Python3Parser::RuleWhile_stmt);
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
    setState(661);
    match(Python3Parser::WHILE);
    setState(662);
    test();
    setState(663);
    match(Python3Parser::COLON);
    setState(664);
    suite();
    setState(668);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(665);
      match(Python3Parser::ELSE);
      setState(666);
      match(Python3Parser::COLON);
      setState(667);
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
  enterRule(_localctx, 92, Python3Parser::RuleFor_stmt);
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
    setState(670);
    match(Python3Parser::FOR);
    setState(671);
    exprlist();
    setState(672);
    match(Python3Parser::IN);
    setState(673);
    testlist();
    setState(674);
    match(Python3Parser::COLON);
    setState(675);
    suite();
    setState(679);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(676);
      match(Python3Parser::ELSE);
      setState(677);
      match(Python3Parser::COLON);
      setState(678);
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
  enterRule(_localctx, 94, Python3Parser::RuleTry_stmt);
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
    setState(681);
    match(Python3Parser::TRY);
    setState(682);
    match(Python3Parser::COLON);
    setState(683);
    suite();
    setState(705);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::EXCEPT: {
        setState(688); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(684);
          except_clause();
          setState(685);
          match(Python3Parser::COLON);
          setState(686);
          suite();
          setState(690); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Python3Parser::EXCEPT);
        setState(695);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::ELSE) {
          setState(692);
          match(Python3Parser::ELSE);
          setState(693);
          match(Python3Parser::COLON);
          setState(694);
          suite();
        }
        setState(700);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::FINALLY) {
          setState(697);
          match(Python3Parser::FINALLY);
          setState(698);
          match(Python3Parser::COLON);
          setState(699);
          suite();
        }
        break;
      }

      case Python3Parser::FINALLY: {
        setState(702);
        match(Python3Parser::FINALLY);
        setState(703);
        match(Python3Parser::COLON);
        setState(704);
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
  enterRule(_localctx, 96, Python3Parser::RuleWith_stmt);
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
    setState(707);
    match(Python3Parser::WITH);
    setState(708);
    with_item();
    setState(713);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(709);
      match(Python3Parser::COMMA);
      setState(710);
      with_item();
      setState(715);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(716);
    match(Python3Parser::COLON);
    setState(717);
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
  enterRule(_localctx, 98, Python3Parser::RuleWith_item);
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
    setState(719);
    test();
    setState(722);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::AS) {
      setState(720);
      match(Python3Parser::AS);
      setState(721);
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
  enterRule(_localctx, 100, Python3Parser::RuleExcept_clause);
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
    setState(724);
    match(Python3Parser::EXCEPT);
    setState(730);
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
      setState(725);
      test();
      setState(728);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::AS) {
        setState(726);
        match(Python3Parser::AS);
        setState(727);
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
  enterRule(_localctx, 102, Python3Parser::RuleSuite);
  size_t _la = 0;

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
        setState(732);
        simple_stmt();
        break;
      }

      case Python3Parser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(733);
        match(Python3Parser::NEWLINE);
        setState(734);
        match(Python3Parser::INDENT);
        setState(736); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(735);
          stmt();
          setState(738); 
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
        setState(740);
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
  enterRule(_localctx, 104, Python3Parser::RuleTest);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(753);
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
        setState(744);
        or_test();
        setState(750);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::IF) {
          setState(745);
          match(Python3Parser::IF);
          setState(746);
          or_test();
          setState(747);
          match(Python3Parser::ELSE);
          setState(748);
          test();
        }
        break;
      }

      case Python3Parser::LAMBDA: {
        enterOuterAlt(_localctx, 2);
        setState(752);
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
  enterRule(_localctx, 106, Python3Parser::RuleTest_nocond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(757);
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
        setState(755);
        or_test();
        break;
      }

      case Python3Parser::LAMBDA: {
        enterOuterAlt(_localctx, 2);
        setState(756);
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
  enterRule(_localctx, 108, Python3Parser::RuleLambdef);
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
    setState(759);
    match(Python3Parser::LAMBDA);
    setState(761);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::STAR)
      | (1ULL << Python3Parser::POWER))) != 0)) {
      setState(760);
      varargslist();
    }
    setState(763);
    match(Python3Parser::COLON);
    setState(764);
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
  enterRule(_localctx, 110, Python3Parser::RuleLambdef_nocond);
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
    match(Python3Parser::LAMBDA);
    setState(768);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::NAME)
      | (1ULL << Python3Parser::STAR)
      | (1ULL << Python3Parser::POWER))) != 0)) {
      setState(767);
      varargslist();
    }
    setState(770);
    match(Python3Parser::COLON);
    setState(771);
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
  enterRule(_localctx, 112, Python3Parser::RuleOr_test);
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
    setState(773);
    and_test();
    setState(778);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::OR) {
      setState(774);
      match(Python3Parser::OR);
      setState(775);
      and_test();
      setState(780);
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
  enterRule(_localctx, 114, Python3Parser::RuleAnd_test);
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
    setState(781);
    not_test();
    setState(786);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::AND) {
      setState(782);
      match(Python3Parser::AND);
      setState(783);
      not_test();
      setState(788);
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
  enterRule(_localctx, 116, Python3Parser::RuleNot_test);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(792);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(789);
        match(Python3Parser::NOT);
        setState(790);
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
        setState(791);
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
  enterRule(_localctx, 118, Python3Parser::RuleComparison);
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
    setState(794);
    expr();
    setState(800);
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
      setState(795);
      comp_op();
      setState(796);
      expr();
      setState(802);
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
  enterRule(_localctx, 120, Python3Parser::RuleComp_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(816);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(803);
      match(Python3Parser::LESS_THAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(804);
      match(Python3Parser::GREATER_THAN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(805);
      match(Python3Parser::EQUALS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(806);
      match(Python3Parser::GT_EQ);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(807);
      match(Python3Parser::LT_EQ);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(808);
      match(Python3Parser::NOT_EQ_1);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(809);
      match(Python3Parser::NOT_EQ_2);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(810);
      match(Python3Parser::IN);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(811);
      match(Python3Parser::NOT);
      setState(812);
      match(Python3Parser::IN);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(813);
      match(Python3Parser::IS);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(814);
      match(Python3Parser::IS);
      setState(815);
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
  enterRule(_localctx, 122, Python3Parser::RuleStar_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(818);
    match(Python3Parser::STAR);
    setState(819);
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
  enterRule(_localctx, 124, Python3Parser::RuleExpr);
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
    setState(821);
    xor_expr();
    setState(826);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::OR_OP) {
      setState(822);
      match(Python3Parser::OR_OP);
      setState(823);
      xor_expr();
      setState(828);
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
  enterRule(_localctx, 126, Python3Parser::RuleXor_expr);
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
    setState(829);
    and_expr();
    setState(834);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::XOR) {
      setState(830);
      match(Python3Parser::XOR);
      setState(831);
      and_expr();
      setState(836);
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
  enterRule(_localctx, 128, Python3Parser::RuleAnd_expr);
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
    setState(837);
    shift_expr();
    setState(842);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::AND_OP) {
      setState(838);
      match(Python3Parser::AND_OP);
      setState(839);
      shift_expr();
      setState(844);
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
  enterRule(_localctx, 130, Python3Parser::RuleShift_expr);
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
    setState(845);
    arith_expr();
    setState(850);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::LEFT_SHIFT

    || _la == Python3Parser::RIGHT_SHIFT) {
      setState(846);
      _la = _input->LA(1);
      if (!(_la == Python3Parser::LEFT_SHIFT

      || _la == Python3Parser::RIGHT_SHIFT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(847);
      arith_expr();
      setState(852);
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
  enterRule(_localctx, 132, Python3Parser::RuleArith_expr);
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
    setState(853);
    term();
    setState(858);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ADD

    || _la == Python3Parser::MINUS) {
      setState(854);
      _la = _input->LA(1);
      if (!(_la == Python3Parser::ADD

      || _la == Python3Parser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(855);
      term();
      setState(860);
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
  enterRule(_localctx, 134, Python3Parser::RuleTerm);
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
    setState(861);
    factor();
    setState(866);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 51) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 51)) & ((1ULL << (Python3Parser::STAR - 51))
      | (1ULL << (Python3Parser::DIV - 51))
      | (1ULL << (Python3Parser::MOD - 51))
      | (1ULL << (Python3Parser::IDIV - 51))
      | (1ULL << (Python3Parser::AT - 51)))) != 0)) {
      setState(862);
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
      setState(863);
      factor();
      setState(868);
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
  enterRule(_localctx, 136, Python3Parser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(872);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::ADD:
      case Python3Parser::MINUS:
      case Python3Parser::NOT_OP: {
        enterOuterAlt(_localctx, 1);
        setState(869);
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
        setState(870);
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
        setState(871);
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
  enterRule(_localctx, 138, Python3Parser::RulePower);
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
    setState(874);
    atom_expr();
    setState(877);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::POWER) {
      setState(875);
      match(Python3Parser::POWER);
      setState(876);
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

Python3Parser::FunccallContext* Python3Parser::Atom_exprContext::funccall() {
  return getRuleContext<Python3Parser::FunccallContext>(0);
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
  enterRule(_localctx, 140, Python3Parser::RuleAtom_expr);
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
    setState(880);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::AWAIT) {
      setState(879);
      match(Python3Parser::AWAIT);
    }
    setState(884);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      setState(882);
      funccall();
      break;
    }

    case 2: {
      setState(883);
      atom();
      break;
    }

    default:
      break;
    }
    setState(889);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::DOT

    || _la == Python3Parser::OPEN_BRACK) {
      setState(886);
      trailer();
      setState(891);
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

//----------------- FunccallContext ------------------------------------------------------------------

Python3Parser::FunccallContext::FunccallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::FunccallnameContext* Python3Parser::FunccallContext::funccallname() {
  return getRuleContext<Python3Parser::FunccallnameContext>(0);
}

tree::TerminalNode* Python3Parser::FunccallContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::FunccallContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::ArglistContext* Python3Parser::FunccallContext::arglist() {
  return getRuleContext<Python3Parser::ArglistContext>(0);
}


size_t Python3Parser::FunccallContext::getRuleIndex() const {
  return Python3Parser::RuleFunccall;
}

void Python3Parser::FunccallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunccall(this);
}

void Python3Parser::FunccallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunccall(this);
}


antlrcpp::Any Python3Parser::FunccallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFunccall(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FunccallContext* Python3Parser::funccall() {
  FunccallContext *_localctx = _tracker.createInstance<FunccallContext>(_ctx, getState());
  enterRule(_localctx, 142, Python3Parser::RuleFunccall);
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
    setState(892);
    funccallname();
    setState(893);
    match(Python3Parser::OPEN_PAREN);
    setState(895);
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
      setState(894);
      arglist();
    }
    setState(897);
    match(Python3Parser::CLOSE_PAREN);
   
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

std::vector<Python3Parser::StringContext *> Python3Parser::AtomContext::string() {
  return getRuleContexts<Python3Parser::StringContext>();
}

Python3Parser::StringContext* Python3Parser::AtomContext::string(size_t i) {
  return getRuleContext<Python3Parser::StringContext>(i);
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
  enterRule(_localctx, 144, Python3Parser::RuleAtom);
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
    setState(926);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::OPEN_PAREN: {
        setState(899);
        match(Python3Parser::OPEN_PAREN);
        setState(902);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Python3Parser::YIELD: {
            setState(900);
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
            setState(901);
            testlist_comp();
            break;
          }

          case Python3Parser::CLOSE_PAREN: {
            break;
          }

        default:
          break;
        }
        setState(904);
        match(Python3Parser::CLOSE_PAREN);
        break;
      }

      case Python3Parser::OPEN_BRACK: {
        setState(905);
        match(Python3Parser::OPEN_BRACK);
        setState(907);
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
          setState(906);
          testlist_comp();
        }
        setState(909);
        match(Python3Parser::CLOSE_BRACK);
        break;
      }

      case Python3Parser::OPEN_BRACE: {
        setState(910);
        match(Python3Parser::OPEN_BRACE);
        setState(912);
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
          setState(911);
          dictorsetmaker();
        }
        setState(914);
        match(Python3Parser::CLOSE_BRACE);
        break;
      }

      case Python3Parser::NAME: {
        setState(915);
        name();
        break;
      }

      case Python3Parser::NUMBER: {
        setState(916);
        match(Python3Parser::NUMBER);
        break;
      }

      case Python3Parser::STRING: {
        setState(918); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(917);
          string();
          setState(920); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Python3Parser::STRING);
        break;
      }

      case Python3Parser::ELLIPSIS: {
        setState(922);
        match(Python3Parser::ELLIPSIS);
        break;
      }

      case Python3Parser::NONE: {
        setState(923);
        match(Python3Parser::NONE);
        break;
      }

      case Python3Parser::TRUE: {
        setState(924);
        match(Python3Parser::TRUE);
        break;
      }

      case Python3Parser::FALSE: {
        setState(925);
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

//----------------- StringContext ------------------------------------------------------------------

Python3Parser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::StringContext::STRING() {
  return getToken(Python3Parser::STRING, 0);
}


size_t Python3Parser::StringContext::getRuleIndex() const {
  return Python3Parser::RuleString;
}

void Python3Parser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void Python3Parser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any Python3Parser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::StringContext* Python3Parser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 146, Python3Parser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(928);
    match(Python3Parser::STRING);
   
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
  enterRule(_localctx, 148, Python3Parser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    match(Python3Parser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunccallnameContext ------------------------------------------------------------------

Python3Parser::FunccallnameContext::FunccallnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::FunccallnameContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}


size_t Python3Parser::FunccallnameContext::getRuleIndex() const {
  return Python3Parser::RuleFunccallname;
}

void Python3Parser::FunccallnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunccallname(this);
}

void Python3Parser::FunccallnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Python3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunccallname(this);
}


antlrcpp::Any Python3Parser::FunccallnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3Visitor*>(visitor))
    return parserVisitor->visitFunccallname(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FunccallnameContext* Python3Parser::funccallname() {
  FunccallnameContext *_localctx = _tracker.createInstance<FunccallnameContext>(_ctx, getState());
  enterRule(_localctx, 150, Python3Parser::RuleFunccallname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(932);
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
  enterRule(_localctx, 152, Python3Parser::RuleTestlist_comp);
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
    setState(936);
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
        setState(934);
        test();
        break;
      }

      case Python3Parser::STAR: {
        setState(935);
        star_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(952);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::FOR:
      case Python3Parser::ASYNC: {
        setState(938);
        comp_for();
        break;
      }

      case Python3Parser::CLOSE_PAREN:
      case Python3Parser::COMMA:
      case Python3Parser::CLOSE_BRACK: {
        setState(946);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(939);
            match(Python3Parser::COMMA);
            setState(942);
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
                setState(940);
                test();
                break;
              }

              case Python3Parser::STAR: {
                setState(941);
                star_expr();
                break;
              }

            default:
              throw NoViableAltException(this);
            } 
          }
          setState(948);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx);
        }
        setState(950);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Python3Parser::COMMA) {
          setState(949);
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

tree::TerminalNode* Python3Parser::TrailerContext::DOT() {
  return getToken(Python3Parser::DOT, 0);
}

Python3Parser::FunccallContext* Python3Parser::TrailerContext::funccall() {
  return getRuleContext<Python3Parser::FunccallContext>(0);
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
  enterRule(_localctx, 154, Python3Parser::RuleTrailer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(962);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(954);
      match(Python3Parser::DOT);
      setState(955);
      funccall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(956);
      match(Python3Parser::OPEN_BRACK);
      setState(957);
      subscriptlist();
      setState(958);
      match(Python3Parser::CLOSE_BRACK);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(960);
      match(Python3Parser::DOT);
      setState(961);
      name();
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
  enterRule(_localctx, 156, Python3Parser::RuleSubscriptlist);
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
    setState(964);
    subscript();
    setState(969);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(965);
        match(Python3Parser::COMMA);
        setState(966);
        subscript(); 
      }
      setState(971);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx);
    }
    setState(973);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(972);
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
  enterRule(_localctx, 158, Python3Parser::RuleSubscript);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(986);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(975);
      test();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(977);
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
        setState(976);
        test();
      }
      setState(979);
      match(Python3Parser::COLON);
      setState(981);
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
        setState(980);
        test();
      }
      setState(984);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::COLON) {
        setState(983);
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
  enterRule(_localctx, 160, Python3Parser::RuleSliceop);
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
    setState(988);
    match(Python3Parser::COLON);
    setState(990);
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
      setState(989);
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
  enterRule(_localctx, 162, Python3Parser::RuleExprlist);
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
    setState(994);
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
        setState(992);
        expr();
        break;
      }

      case Python3Parser::STAR: {
        setState(993);
        star_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1003);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(996);
        match(Python3Parser::COMMA);
        setState(999);
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
            setState(997);
            expr();
            break;
          }

          case Python3Parser::STAR: {
            setState(998);
            star_expr();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(1005);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
    }
    setState(1007);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(1006);
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
  enterRule(_localctx, 164, Python3Parser::RuleTestlist);
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
    setState(1009);
    test();
    setState(1014);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1010);
        match(Python3Parser::COMMA);
        setState(1011);
        test(); 
      }
      setState(1016);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx);
    }
    setState(1018);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(1017);
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
  enterRule(_localctx, 166, Python3Parser::RuleDictorsetmaker);
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
    setState(1068);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
    case 1: {
      setState(1026);
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
          setState(1020);
          test();
          setState(1021);
          match(Python3Parser::COLON);
          setState(1022);
          test();
          break;
        }

        case Python3Parser::POWER: {
          setState(1024);
          match(Python3Parser::POWER);
          setState(1025);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1046);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::FOR:
        case Python3Parser::ASYNC: {
          setState(1028);
          comp_for();
          break;
        }

        case Python3Parser::COMMA:
        case Python3Parser::CLOSE_BRACE: {
          setState(1040);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(1029);
              match(Python3Parser::COMMA);
              setState(1036);
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
                  setState(1030);
                  test();
                  setState(1031);
                  match(Python3Parser::COLON);
                  setState(1032);
                  test();
                  break;
                }

                case Python3Parser::POWER: {
                  setState(1034);
                  match(Python3Parser::POWER);
                  setState(1035);
                  expr();
                  break;
                }

              default:
                throw NoViableAltException(this);
              } 
            }
            setState(1042);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
          }
          setState(1044);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == Python3Parser::COMMA) {
            setState(1043);
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
      setState(1050);
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
          setState(1048);
          test();
          break;
        }

        case Python3Parser::STAR: {
          setState(1049);
          star_expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1066);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::FOR:
        case Python3Parser::ASYNC: {
          setState(1052);
          comp_for();
          break;
        }

        case Python3Parser::COMMA:
        case Python3Parser::CLOSE_BRACE: {
          setState(1060);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(1053);
              match(Python3Parser::COMMA);
              setState(1056);
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
                  setState(1054);
                  test();
                  break;
                }

                case Python3Parser::STAR: {
                  setState(1055);
                  star_expr();
                  break;
                }

              default:
                throw NoViableAltException(this);
              } 
            }
            setState(1062);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
          }
          setState(1064);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == Python3Parser::COMMA) {
            setState(1063);
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
  enterRule(_localctx, 168, Python3Parser::RuleClassdef);
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
    setState(1070);
    match(Python3Parser::CLASS);
    setState(1071);
    name();
    setState(1077);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::OPEN_PAREN) {
      setState(1072);
      match(Python3Parser::OPEN_PAREN);
      setState(1074);
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
        setState(1073);
        arglist();
      }
      setState(1076);
      match(Python3Parser::CLOSE_PAREN);
    }
    setState(1079);
    match(Python3Parser::COLON);
    setState(1080);
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
  enterRule(_localctx, 170, Python3Parser::RuleArglist);
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
    setState(1082);
    argument();
    setState(1087);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1083);
        match(Python3Parser::COMMA);
        setState(1084);
        argument(); 
      }
      setState(1089);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx);
    }
    setState(1091);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(1090);
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
  enterRule(_localctx, 172, Python3Parser::RuleArgument);
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
    setState(1105);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
    case 1: {
      setState(1093);
      test();
      setState(1095);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::FOR

      || _la == Python3Parser::ASYNC) {
        setState(1094);
        comp_for();
      }
      break;
    }

    case 2: {
      setState(1097);
      test();
      setState(1098);
      match(Python3Parser::ASSIGN);
      setState(1099);
      test();
      break;
    }

    case 3: {
      setState(1101);
      match(Python3Parser::POWER);
      setState(1102);
      test();
      break;
    }

    case 4: {
      setState(1103);
      match(Python3Parser::STAR);
      setState(1104);
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
  enterRule(_localctx, 174, Python3Parser::RuleComp_iter);

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
      case Python3Parser::FOR:
      case Python3Parser::ASYNC: {
        enterOuterAlt(_localctx, 1);
        setState(1107);
        comp_for();
        break;
      }

      case Python3Parser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(1108);
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
  enterRule(_localctx, 176, Python3Parser::RuleComp_for);
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
    setState(1112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ASYNC) {
      setState(1111);
      match(Python3Parser::ASYNC);
    }
    setState(1114);
    match(Python3Parser::FOR);
    setState(1115);
    exprlist();
    setState(1116);
    match(Python3Parser::IN);
    setState(1117);
    or_test();
    setState(1119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::IF)
      | (1ULL << Python3Parser::FOR)
      | (1ULL << Python3Parser::ASYNC))) != 0)) {
      setState(1118);
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
  enterRule(_localctx, 178, Python3Parser::RuleComp_if);
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
    setState(1121);
    match(Python3Parser::IF);
    setState(1122);
    test_nocond();
    setState(1124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Python3Parser::IF)
      | (1ULL << Python3Parser::FOR)
      | (1ULL << Python3Parser::ASYNC))) != 0)) {
      setState(1123);
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
  enterRule(_localctx, 180, Python3Parser::RuleEncoding_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1126);
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
  enterRule(_localctx, 182, Python3Parser::RuleYield_expr);
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
    setState(1128);
    match(Python3Parser::YIELD);
    setState(1130);
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
      setState(1129);
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
  enterRule(_localctx, 184, Python3Parser::RuleYield_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::FROM: {
        enterOuterAlt(_localctx, 1);
        setState(1132);
        match(Python3Parser::FROM);
        setState(1133);
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
        setState(1134);
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
  "expr_stmt", "expr_stmt_single", "expr_stmt_multi", "annassign", "testlist_star_expr", 
  "augassign", "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", 
  "return_stmt", "yield_stmt", "raise_stmt", "import_stmt", "import_name", 
  "import_from", "import_as_name", "dotted_as_name", "import_as_names", 
  "dotted_as_names", "dotted_name", "global_stmt", "nonlocal_stmt", "assert_stmt", 
  "compound_stmt", "async_stmt", "if_stmt", "while_stmt", "for_stmt", "try_stmt", 
  "with_stmt", "with_item", "except_clause", "suite", "test", "test_nocond", 
  "lambdef", "lambdef_nocond", "or_test", "and_test", "not_test", "comparison", 
  "comp_op", "star_expr", "expr", "xor_expr", "and_expr", "shift_expr", 
  "arith_expr", "term", "factor", "power", "atom_expr", "funccall", "atom", 
  "string", "name", "funccallname", "testlist_comp", "trailer", "subscriptlist", 
  "subscript", "sliceop", "exprlist", "testlist", "dictorsetmaker", "classdef", 
  "arglist", "argument", "comp_iter", "comp_for", "comp_if", "encoding_decl", 
  "yield_expr", "yield_arg"
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
       0x3, 0x65, 0x474, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xc2, 0xa, 0x2, 
       0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0xc6, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
       0xc9, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 
       0xcf, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xd2, 0xb, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xda, 0xa, 
       0x5, 0x3, 0x5, 0x5, 0x5, 0xdd, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x6, 0x6, 0x6, 0xe2, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0xe3, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xea, 0xa, 0x7, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x5, 0x9, 0xf4, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xfd, 0xa, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x104, 0xa, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x10a, 0xa, 
       0xc, 0x7, 0xc, 0x10c, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x10f, 0xb, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x114, 0xa, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x11a, 0xa, 0xc, 0x7, 0xc, 
       0x11c, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x11f, 0xb, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x125, 0xa, 0xc, 0x5, 0xc, 0x127, 
       0xa, 0xc, 0x5, 0xc, 0x129, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0x12e, 0xa, 0xc, 0x5, 0xc, 0x130, 0xa, 0xc, 0x5, 0xc, 0x132, 
       0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x136, 0xa, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x13c, 0xa, 0xc, 0x7, 0xc, 
       0x13e, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x141, 0xb, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x147, 0xa, 0xc, 0x5, 0xc, 0x149, 
       0xa, 0xc, 0x5, 0xc, 0x14b, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0x150, 0xa, 0xc, 0x5, 0xc, 0x152, 0xa, 0xc, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x5, 0xd, 0x157, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x5, 0xe, 0x15c, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x5, 0xe, 0x162, 0xa, 0xe, 0x7, 0xe, 0x164, 0xa, 0xe, 0xc, 0xe, 
       0xe, 0xe, 0x167, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
       0x16c, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
       0x172, 0xa, 0xe, 0x7, 0xe, 0x174, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x177, 
       0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x17d, 
       0xa, 0xe, 0x5, 0xe, 0x17f, 0xa, 0xe, 0x5, 0xe, 0x181, 0xa, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x186, 0xa, 0xe, 0x5, 0xe, 0x188, 
       0xa, 0xe, 0x5, 0xe, 0x18a, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
       0x18e, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
       0x194, 0xa, 0xe, 0x7, 0xe, 0x196, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x199, 
       0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x19f, 
       0xa, 0xe, 0x5, 0xe, 0x1a1, 0xa, 0xe, 0x5, 0xe, 0x1a3, 0xa, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1a8, 0xa, 0xe, 0x5, 0xe, 0x1aa, 
       0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1b0, 
       0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x1b5, 0xa, 
       0x11, 0xc, 0x11, 0xe, 0x11, 0x1b8, 0xb, 0x11, 0x3, 0x11, 0x5, 0x11, 
       0x1bb, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
       0x12, 0x1c7, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x1cb, 0xa, 
       0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x5, 0x15, 0x1d4, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x5, 0x15, 0x1d9, 0xa, 0x15, 0x6, 0x15, 0x1db, 0xa, 0x15, 
       0xd, 0x15, 0xe, 0x15, 0x1dc, 0x5, 0x15, 0x1df, 0xa, 0x15, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1e5, 0xa, 0x16, 0x3, 
       0x17, 0x3, 0x17, 0x5, 0x17, 0x1e9, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x5, 0x17, 0x1ee, 0xa, 0x17, 0x7, 0x17, 0x1f0, 0xa, 0x17, 
       0xc, 0x17, 0xe, 0x17, 0x1f3, 0xb, 0x17, 0x3, 0x17, 0x5, 0x17, 0x1f6, 
       0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x5, 0x1b, 0x204, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x20c, 0xa, 0x1e, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x5, 0x20, 0x214, 0xa, 0x20, 0x5, 0x20, 0x216, 0xa, 0x20, 0x3, 0x21, 
       0x3, 0x21, 0x5, 0x21, 0x21a, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x221, 0xa, 0x23, 0xc, 0x23, 
       0xe, 0x23, 0x224, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x6, 0x23, 0x228, 
       0xa, 0x23, 0xd, 0x23, 0xe, 0x23, 0x229, 0x5, 0x23, 0x22c, 0xa, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x5, 0x23, 0x235, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x5, 0x24, 0x23a, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x5, 0x25, 0x23f, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 
       0x26, 0x244, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x247, 0xb, 0x26, 0x3, 
       0x26, 0x5, 0x26, 0x24a, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x7, 0x27, 0x24f, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x252, 0xb, 0x27, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x257, 0xa, 0x28, 0xc, 
       0x28, 0xe, 0x28, 0x25a, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x7, 0x29, 0x260, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x263, 
       0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 
       0x269, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x26c, 0xb, 0x2a, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x272, 0xa, 0x2b, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x27d, 0xa, 0x2c, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x283, 0xa, 0x2d, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x28e, 0xa, 0x2e, 0xc, 0x2e, 
       0xe, 0x2e, 0x291, 0xb, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 
       0x2e, 0x296, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x29f, 0xa, 0x2f, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x2aa, 0xa, 0x30, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x6, 0x31, 0x2b3, 0xa, 0x31, 0xd, 0x31, 0xe, 0x31, 0x2b4, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x2ba, 0xa, 0x31, 0x3, 0x31, 0x3, 
       0x31, 0x3, 0x31, 0x5, 0x31, 0x2bf, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x5, 0x31, 0x2c4, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x32, 0x7, 0x32, 0x2ca, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 
       0x2cd, 0xb, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x5, 0x33, 0x2d5, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 
       0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x2db, 0xa, 0x34, 0x5, 0x34, 0x2dd, 
       0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x6, 0x35, 
       0x2e3, 0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 0x2e4, 0x3, 0x35, 0x3, 0x35, 
       0x5, 0x35, 0x2e9, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x2f1, 0xa, 0x36, 0x3, 0x36, 
       0x5, 0x36, 0x2f4, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2f8, 
       0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x2fc, 0xa, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x303, 
       0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 
       0x3, 0x3a, 0x7, 0x3a, 0x30b, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 0x30e, 
       0xb, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x313, 0xa, 
       0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x316, 0xb, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x5, 0x3c, 0x31b, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x321, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 
       0x324, 0xb, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x333, 0xa, 0x3e, 0x3, 0x3f, 
       0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 
       0x33b, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x33e, 0xb, 0x40, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x343, 0xa, 0x41, 0xc, 0x41, 0xe, 
       0x41, 0x346, 0xb, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 
       0x34b, 0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 0x34e, 0xb, 0x42, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x353, 0xa, 0x43, 0xc, 0x43, 0xe, 
       0x43, 0x356, 0xb, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 
       0x35b, 0xa, 0x44, 0xc, 0x44, 0xe, 0x44, 0x35e, 0xb, 0x44, 0x3, 0x45, 
       0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x363, 0xa, 0x45, 0xc, 0x45, 0xe, 
       0x45, 0x366, 0xb, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 
       0x36b, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x370, 
       0xa, 0x47, 0x3, 0x48, 0x5, 0x48, 0x373, 0xa, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x5, 0x48, 0x377, 0xa, 0x48, 0x3, 0x48, 0x7, 0x48, 0x37a, 0xa, 
       0x48, 0xc, 0x48, 0xe, 0x48, 0x37d, 0xb, 0x48, 0x3, 0x49, 0x3, 0x49, 
       0x3, 0x49, 0x5, 0x49, 0x382, 0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x389, 0xa, 0x4a, 0x3, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x38e, 0xa, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x393, 0xa, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x6, 0x4a, 0x399, 0xa, 0x4a, 0xd, 0x4a, 0xe, 
       0x4a, 0x39a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 
       0x3a1, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
       0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x3ab, 0xa, 0x4e, 
       0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x3b1, 0xa, 
       0x4e, 0x7, 0x4e, 0x3b3, 0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x3b6, 0xb, 
       0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x3b9, 0xa, 0x4e, 0x5, 0x4e, 0x3bb, 0xa, 
       0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3c5, 0xa, 0x4f, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x3ca, 0xa, 0x50, 0xc, 0x50, 0xe, 
       0x50, 0x3cd, 0xb, 0x50, 0x3, 0x50, 0x5, 0x50, 0x3d0, 0xa, 0x50, 0x3, 
       0x51, 0x3, 0x51, 0x5, 0x51, 0x3d4, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 
       0x5, 0x51, 0x3d8, 0xa, 0x51, 0x3, 0x51, 0x5, 0x51, 0x3db, 0xa, 0x51, 
       0x5, 0x51, 0x3dd, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x3e1, 
       0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x3e5, 0xa, 0x53, 0x3, 
       0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x3ea, 0xa, 0x53, 0x7, 0x53, 
       0x3ec, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x3ef, 0xb, 0x53, 0x3, 0x53, 
       0x5, 0x53, 0x3f2, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x7, 
       0x54, 0x3f7, 0xa, 0x54, 0xc, 0x54, 0xe, 0x54, 0x3fa, 0xb, 0x54, 0x3, 
       0x54, 0x5, 0x54, 0x3fd, 0xa, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x405, 0xa, 0x55, 0x3, 
       0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
       0x55, 0x3, 0x55, 0x5, 0x55, 0x40f, 0xa, 0x55, 0x7, 0x55, 0x411, 0xa, 
       0x55, 0xc, 0x55, 0xe, 0x55, 0x414, 0xb, 0x55, 0x3, 0x55, 0x5, 0x55, 
       0x417, 0xa, 0x55, 0x5, 0x55, 0x419, 0xa, 0x55, 0x3, 0x55, 0x3, 0x55, 
       0x5, 0x55, 0x41d, 0xa, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
       0x55, 0x5, 0x55, 0x423, 0xa, 0x55, 0x7, 0x55, 0x425, 0xa, 0x55, 0xc, 
       0x55, 0xe, 0x55, 0x428, 0xb, 0x55, 0x3, 0x55, 0x5, 0x55, 0x42b, 0xa, 
       0x55, 0x5, 0x55, 0x42d, 0xa, 0x55, 0x5, 0x55, 0x42f, 0xa, 0x55, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x435, 0xa, 0x56, 
       0x3, 0x56, 0x5, 0x56, 0x438, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x7, 0x57, 0x440, 0xa, 0x57, 
       0xc, 0x57, 0xe, 0x57, 0x443, 0xb, 0x57, 0x3, 0x57, 0x5, 0x57, 0x446, 
       0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x44a, 0xa, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x5, 0x58, 0x454, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 
       0x5, 0x59, 0x458, 0xa, 0x59, 0x3, 0x5a, 0x5, 0x5a, 0x45b, 0xa, 0x5a, 
       0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 
       0x462, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x467, 
       0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 
       0x46d, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x472, 
       0xa, 0x5e, 0x3, 0x5e, 0x2, 0x2, 0x5f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
       0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
       0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 
       0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 
       0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
       0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 
       0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0x2, 
       0x8, 0x3, 0x2, 0x55, 0x61, 0x3, 0x2, 0x33, 0x34, 0x3, 0x2, 0x42, 
       0x43, 0x3, 0x2, 0x44, 0x45, 0x5, 0x2, 0x35, 0x35, 0x46, 0x48, 0x53, 
       0x53, 0x4, 0x2, 0x44, 0x45, 0x49, 0x49, 0x2, 0x4ec, 0x2, 0xc1, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x6, 0xcc, 0x3, 0x2, 
       0x2, 0x2, 0x8, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xa, 0xe1, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe, 0xeb, 0x3, 0x2, 0x2, 0x2, 
       0x10, 0xee, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0xfa, 0x3, 0x2, 0x2, 0x2, 0x16, 0x151, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x153, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x1b1, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0x1ca, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x1ce, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x1e8, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x1f9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x203, 0x3, 0x2, 0x2, 0x2, 0x36, 0x205, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x209, 0x3, 0x2, 0x2, 0x2, 0x3c, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x219, 0x3, 0x2, 0x2, 0x2, 0x42, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x21e, 0x3, 0x2, 0x2, 0x2, 0x46, 0x236, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x23b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x240, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x24b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x253, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x25b, 0x3, 0x2, 0x2, 0x2, 0x52, 0x264, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x26d, 0x3, 0x2, 0x2, 0x2, 0x56, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x27e, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x284, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x297, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x2ab, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0x2d1, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x68, 
       0x2e8, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x2f7, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x70, 
       0x300, 0x3, 0x2, 0x2, 0x2, 0x72, 0x307, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x30f, 0x3, 0x2, 0x2, 0x2, 0x76, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x78, 
       0x31c, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x332, 0x3, 0x2, 0x2, 0x2, 0x7c, 
       0x334, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x337, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x33f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x347, 0x3, 0x2, 0x2, 0x2, 0x84, 
       0x34f, 0x3, 0x2, 0x2, 0x2, 0x86, 0x357, 0x3, 0x2, 0x2, 0x2, 0x88, 
       0x35f, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x8c, 
       0x36c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x372, 0x3, 0x2, 0x2, 0x2, 0x90, 
       0x37e, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x94, 
       0x3a2, 0x3, 0x2, 0x2, 0x2, 0x96, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x98, 
       0x3a6, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x9c, 
       0x3c4, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0x3dc, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3de, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0x3e4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0xa8, 
       0x42e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x430, 0x3, 0x2, 0x2, 0x2, 0xac, 
       0x43c, 0x3, 0x2, 0x2, 0x2, 0xae, 0x453, 0x3, 0x2, 0x2, 0x2, 0xb0, 
       0x457, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x45a, 0x3, 0x2, 0x2, 0x2, 0xb4, 
       0x463, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x468, 0x3, 0x2, 0x2, 0x2, 0xb8, 
       0x46a, 0x3, 0x2, 0x2, 0x2, 0xba, 0x471, 0x3, 0x2, 0x2, 0x2, 0xbc, 
       0xc2, 0x7, 0x29, 0x2, 0x2, 0xbd, 0xc2, 0x5, 0x20, 0x11, 0x2, 0xbe, 
       0xbf, 0x5, 0x56, 0x2c, 0x2, 0xbf, 0xc0, 0x7, 0x29, 0x2, 0x2, 0xc0, 
       0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbd, 
       0x3, 0x2, 0x2, 0x2, 0xc1, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0xc3, 0xc6, 0x7, 0x29, 0x2, 0x2, 0xc4, 0xc6, 0x5, 
       0x1e, 0x10, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc4, 0x3, 
       0x2, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 
       0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0x3, 0x2, 0x2, 
       0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x2, 0x2, 0x3, 
       0xcb, 0x5, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xd0, 0x5, 0xa6, 0x54, 0x2, 
       0xcd, 0xcf, 0x7, 0x29, 0x2, 0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 
       0xcf, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 
       0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x2, 0x2, 0x3, 0xd4, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x53, 0x2, 0x2, 0xd6, 0xdc, 0x5, 
       0x4e, 0x28, 0x2, 0xd7, 0xd9, 0x7, 0x36, 0x2, 0x2, 0xd8, 0xda, 0x5, 
       0xac, 0x57, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 
       0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdd, 0x7, 0x37, 
       0x2, 0x2, 0xdc, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 
       0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x29, 0x2, 
       0x2, 0xdf, 0x9, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x5, 0x8, 0x5, 0x2, 
       0xe1, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 
       0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xb, 
       0x3, 0x2, 0x2, 0x2, 0xe5, 0xe9, 0x5, 0xa, 0x6, 0x2, 0xe6, 0xea, 0x5, 
       0xaa, 0x56, 0x2, 0xe7, 0xea, 0x5, 0x10, 0x9, 0x2, 0xe8, 0xea, 0x5, 
       0xe, 0x8, 0x2, 0xe9, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 
       0x2, 0x2, 0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0xeb, 0xec, 0x7, 0x27, 0x2, 0x2, 0xec, 0xed, 0x5, 0x10, 0x9, 
       0x2, 0xed, 0xf, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0x6, 0x2, 0x2, 
       0xef, 0xf0, 0x5, 0x96, 0x4c, 0x2, 0xf0, 0xf3, 0x5, 0x14, 0xb, 0x2, 
       0xf1, 0xf2, 0x7, 0x54, 0x2, 0x2, 0xf2, 0xf4, 0x5, 0x6a, 0x36, 0x2, 
       0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 
       0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x39, 0x2, 0x2, 0xf6, 
       0xf7, 0x5, 0x12, 0xa, 0x2, 0xf7, 0x11, 0x3, 0x2, 0x2, 0x2, 0xf8, 
       0xf9, 0x5, 0x68, 0x35, 0x2, 0xf9, 0x13, 0x3, 0x2, 0x2, 0x2, 0xfa, 
       0xfc, 0x7, 0x36, 0x2, 0x2, 0xfb, 0xfd, 0x5, 0x16, 0xc, 0x2, 0xfc, 
       0xfb, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 
       0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x37, 0x2, 0x2, 0xff, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0x103, 0x5, 0x18, 0xd, 0x2, 0x101, 0x102, 
       0x7, 0x3c, 0x2, 0x2, 0x102, 0x104, 0x5, 0x6a, 0x36, 0x2, 0x103, 0x101, 
       0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x10d, 
       0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x38, 0x2, 0x2, 0x106, 0x109, 
       0x5, 0x18, 0xd, 0x2, 0x107, 0x108, 0x7, 0x3c, 0x2, 0x2, 0x108, 0x10a, 
       0x5, 0x6a, 0x36, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
       0x3, 0x2, 0x2, 0x2, 0x10a, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x105, 
       0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 
       0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x131, 
       0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x12f, 
       0x7, 0x38, 0x2, 0x2, 0x111, 0x113, 0x7, 0x35, 0x2, 0x2, 0x112, 0x114, 
       0x5, 0x18, 0xd, 0x2, 0x113, 0x112, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 
       0x3, 0x2, 0x2, 0x2, 0x114, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 
       0x7, 0x38, 0x2, 0x2, 0x116, 0x119, 0x5, 0x18, 0xd, 0x2, 0x117, 0x118, 
       0x7, 0x3c, 0x2, 0x2, 0x118, 0x11a, 0x5, 0x6a, 0x36, 0x2, 0x119, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11c, 
       0x3, 0x2, 0x2, 0x2, 0x11b, 0x115, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 
       0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 
       0x3, 0x2, 0x2, 0x2, 0x11e, 0x128, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 
       0x3, 0x2, 0x2, 0x2, 0x120, 0x126, 0x7, 0x38, 0x2, 0x2, 0x121, 0x122, 
       0x7, 0x3b, 0x2, 0x2, 0x122, 0x124, 0x5, 0x18, 0xd, 0x2, 0x123, 0x125, 
       0x7, 0x38, 0x2, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 
       0x3, 0x2, 0x2, 0x2, 0x125, 0x127, 0x3, 0x2, 0x2, 0x2, 0x126, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x129, 
       0x3, 0x2, 0x2, 0x2, 0x128, 0x120, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 
       0x7, 0x3b, 0x2, 0x2, 0x12b, 0x12d, 0x5, 0x18, 0xd, 0x2, 0x12c, 0x12e, 
       0x7, 0x38, 0x2, 0x2, 0x12d, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 
       0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x111, 
       0x3, 0x2, 0x2, 0x2, 0x12f, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 
       0x3, 0x2, 0x2, 0x2, 0x130, 0x132, 0x3, 0x2, 0x2, 0x2, 0x131, 0x110, 
       0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x152, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x135, 0x7, 0x35, 0x2, 0x2, 0x134, 0x136, 
       0x5, 0x18, 0xd, 0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 
       0x3, 0x2, 0x2, 0x2, 0x136, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 
       0x7, 0x38, 0x2, 0x2, 0x138, 0x13b, 0x5, 0x18, 0xd, 0x2, 0x139, 0x13a, 
       0x7, 0x3c, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x6a, 0x36, 0x2, 0x13b, 0x139, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13e, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 
       0x3, 0x2, 0x2, 0x2, 0x140, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 
       0x3, 0x2, 0x2, 0x2, 0x142, 0x148, 0x7, 0x38, 0x2, 0x2, 0x143, 0x144, 
       0x7, 0x3b, 0x2, 0x2, 0x144, 0x146, 0x5, 0x18, 0xd, 0x2, 0x145, 0x147, 
       0x7, 0x38, 0x2, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x149, 0x3, 0x2, 0x2, 0x2, 0x148, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0x14a, 0x142, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0x14b, 0x152, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 
       0x7, 0x3b, 0x2, 0x2, 0x14d, 0x14f, 0x5, 0x18, 0xd, 0x2, 0x14e, 0x150, 
       0x7, 0x38, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 
       0x3, 0x2, 0x2, 0x2, 0x150, 0x152, 0x3, 0x2, 0x2, 0x2, 0x151, 0x100, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x133, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14c, 
       0x3, 0x2, 0x2, 0x2, 0x152, 0x17, 0x3, 0x2, 0x2, 0x2, 0x153, 0x156, 
       0x5, 0x96, 0x4c, 0x2, 0x154, 0x155, 0x7, 0x39, 0x2, 0x2, 0x155, 0x157, 
       0x5, 0x6a, 0x36, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
       0x3, 0x2, 0x2, 0x2, 0x157, 0x19, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15b, 
       0x5, 0x1c, 0xf, 0x2, 0x159, 0x15a, 0x7, 0x3c, 0x2, 0x2, 0x15a, 0x15c, 
       0x5, 0x6a, 0x36, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 
       0x3, 0x2, 0x2, 0x2, 0x15c, 0x165, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 
       0x7, 0x38, 0x2, 0x2, 0x15e, 0x161, 0x5, 0x1c, 0xf, 0x2, 0x15f, 0x160, 
       0x7, 0x3c, 0x2, 0x2, 0x160, 0x162, 0x5, 0x6a, 0x36, 0x2, 0x161, 0x15f, 
       0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x164, 
       0x3, 0x2, 0x2, 0x2, 0x163, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x164, 0x167, 
       0x3, 0x2, 0x2, 0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 
       0x3, 0x2, 0x2, 0x2, 0x166, 0x189, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 
       0x3, 0x2, 0x2, 0x2, 0x168, 0x187, 0x7, 0x38, 0x2, 0x2, 0x169, 0x16b, 
       0x7, 0x35, 0x2, 0x2, 0x16a, 0x16c, 0x5, 0x1c, 0xf, 0x2, 0x16b, 0x16a, 
       0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x175, 
       0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x7, 0x38, 0x2, 0x2, 0x16e, 0x171, 
       0x5, 0x1c, 0xf, 0x2, 0x16f, 0x170, 0x7, 0x3c, 0x2, 0x2, 0x170, 0x172, 
       0x5, 0x6a, 0x36, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x174, 0x3, 0x2, 0x2, 0x2, 0x173, 0x16d, 
       0x3, 0x2, 0x2, 0x2, 0x174, 0x177, 0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 0x180, 
       0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 0x178, 0x17e, 
       0x7, 0x38, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x3b, 0x2, 0x2, 0x17a, 0x17c, 
       0x5, 0x1c, 0xf, 0x2, 0x17b, 0x17d, 0x7, 0x38, 0x2, 0x2, 0x17c, 0x17b, 
       0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17f, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 
       0x3, 0x2, 0x2, 0x2, 0x17f, 0x181, 0x3, 0x2, 0x2, 0x2, 0x180, 0x178, 
       0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 0x181, 0x188, 
       0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x7, 0x3b, 0x2, 0x2, 0x183, 0x185, 
       0x5, 0x1c, 0xf, 0x2, 0x184, 0x186, 0x7, 0x38, 0x2, 0x2, 0x185, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 0x188, 
       0x3, 0x2, 0x2, 0x2, 0x187, 0x169, 0x3, 0x2, 0x2, 0x2, 0x187, 0x182, 
       0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18a, 
       0x3, 0x2, 0x2, 0x2, 0x189, 0x168, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 
       0x3, 0x2, 0x2, 0x2, 0x18a, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18d, 
       0x7, 0x35, 0x2, 0x2, 0x18c, 0x18e, 0x5, 0x1c, 0xf, 0x2, 0x18d, 0x18c, 
       0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x197, 
       0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x38, 0x2, 0x2, 0x190, 0x193, 
       0x5, 0x1c, 0xf, 0x2, 0x191, 0x192, 0x7, 0x3c, 0x2, 0x2, 0x192, 0x194, 
       0x5, 0x6a, 0x36, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 
       0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x3, 0x2, 0x2, 0x2, 0x195, 0x18f, 
       0x3, 0x2, 0x2, 0x2, 0x196, 0x199, 0x3, 0x2, 0x2, 0x2, 0x197, 0x195, 
       0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x3, 0x2, 0x2, 0x2, 0x198, 0x1a2, 
       0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x1a0, 
       0x7, 0x38, 0x2, 0x2, 0x19b, 0x19c, 0x7, 0x3b, 0x2, 0x2, 0x19c, 0x19e, 
       0x5, 0x1c, 0xf, 0x2, 0x19d, 0x19f, 0x7, 0x38, 0x2, 0x2, 0x19e, 0x19d, 
       0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a1, 
       0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 
       0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x19a, 
       0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1aa, 
       0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x3b, 0x2, 0x2, 0x1a5, 0x1a7, 
       0x5, 0x1c, 0xf, 0x2, 0x1a6, 0x1a8, 0x7, 0x38, 0x2, 0x2, 0x1a7, 0x1a6, 
       0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1aa, 
       0x3, 0x2, 0x2, 0x2, 0x1a9, 0x158, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x18b, 
       0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x5, 0x96, 0x4c, 0x2, 0x1ac, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b0, 0x5, 0x20, 0x11, 0x2, 0x1ae, 0x1b0, 
       0x5, 0x56, 0x2c, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1ae, 
       0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b6, 
       0x5, 0x22, 0x12, 0x2, 0x1b2, 0x1b3, 0x7, 0x3a, 0x2, 0x2, 0x1b3, 0x1b5, 
       0x5, 0x22, 0x12, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b8, 
       0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 
       0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b6, 
       0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bb, 0x7, 0x3a, 0x2, 0x2, 0x1ba, 0x1b9, 
       0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 
       0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0x29, 0x2, 0x2, 0x1bd, 0x21, 
       0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c7, 0x5, 0x24, 0x13, 0x2, 0x1bf, 0x1c7, 
       0x5, 0x30, 0x19, 0x2, 0x1c0, 0x1c7, 0x5, 0x32, 0x1a, 0x2, 0x1c1, 
       0x1c7, 0x5, 0x34, 0x1b, 0x2, 0x1c2, 0x1c7, 0x5, 0x40, 0x21, 0x2, 
       0x1c3, 0x1c7, 0x5, 0x50, 0x29, 0x2, 0x1c4, 0x1c7, 0x5, 0x52, 0x2a, 
       0x2, 0x1c5, 0x1c7, 0x5, 0x54, 0x2b, 0x2, 0x1c6, 0x1be, 0x3, 0x2, 
       0x2, 0x2, 0x1c6, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c0, 0x3, 0x2, 
       0x2, 0x2, 0x1c6, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c2, 0x3, 0x2, 
       0x2, 0x2, 0x1c6, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c4, 0x3, 0x2, 
       0x2, 0x2, 0x1c6, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0x1c8, 0x1cb, 0x5, 0x26, 0x14, 0x2, 0x1c9, 0x1cb, 0x5, 
       0x28, 0x15, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c9, 
       0x3, 0x2, 0x2, 0x2, 0x1cb, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 
       0x5, 0x2c, 0x17, 0x2, 0x1cd, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1de, 
       0x5, 0x2c, 0x17, 0x2, 0x1cf, 0x1df, 0x5, 0x2a, 0x16, 0x2, 0x1d0, 
       0x1d3, 0x5, 0x2e, 0x18, 0x2, 0x1d1, 0x1d4, 0x5, 0xb8, 0x5d, 0x2, 
       0x1d2, 0x1d4, 0x5, 0xa6, 0x54, 0x2, 0x1d3, 0x1d1, 0x3, 0x2, 0x2, 
       0x2, 0x1d3, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1df, 0x3, 0x2, 0x2, 
       0x2, 0x1d5, 0x1d8, 0x7, 0x3c, 0x2, 0x2, 0x1d6, 0x1d9, 0x5, 0xb8, 
       0x5d, 0x2, 0x1d7, 0x1d9, 0x5, 0x2c, 0x17, 0x2, 0x1d8, 0x1d6, 0x3, 
       0x2, 0x2, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1db, 0x3, 
       0x2, 0x2, 0x2, 0x1da, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 
       0x2, 0x2, 0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 
       0x2, 0x2, 0x2, 0x1dd, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1cf, 0x3, 
       0x2, 0x2, 0x2, 0x1de, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1da, 0x3, 
       0x2, 0x2, 0x2, 0x1df, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 
       0x39, 0x2, 0x2, 0x1e1, 0x1e4, 0x5, 0x6a, 0x36, 0x2, 0x1e2, 0x1e3, 
       0x7, 0x3c, 0x2, 0x2, 0x1e3, 0x1e5, 0x5, 0x6a, 0x36, 0x2, 0x1e4, 0x1e2, 
       0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e9, 0x5, 0x6a, 0x36, 0x2, 0x1e7, 0x1e9, 
       0x5, 0x7c, 0x3f, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e7, 
       0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1ed, 
       0x7, 0x38, 0x2, 0x2, 0x1eb, 0x1ee, 0x5, 0x6a, 0x36, 0x2, 0x1ec, 0x1ee, 
       0x5, 0x7c, 0x3f, 0x2, 0x1ed, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ec, 
       0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ea, 
       0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1ef, 
       0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f5, 
       0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f6, 
       0x7, 0x38, 0x2, 0x2, 0x1f5, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x1f6, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 
       0x9, 0x2, 0x2, 0x2, 0x1f8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 
       0x7, 0x23, 0x2, 0x2, 0x1fa, 0x1fb, 0x5, 0xa4, 0x53, 0x2, 0x1fb, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x24, 0x2, 0x2, 0x1fd, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x1fe, 0x204, 0x5, 0x36, 0x1c, 0x2, 0x1ff, 0x204, 
       0x5, 0x38, 0x1d, 0x2, 0x200, 0x204, 0x5, 0x3a, 0x1e, 0x2, 0x201, 
       0x204, 0x5, 0x3e, 0x20, 0x2, 0x202, 0x204, 0x5, 0x3c, 0x1f, 0x2, 
       0x203, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x203, 0x1ff, 0x3, 0x2, 0x2, 0x2, 
       0x203, 0x200, 0x3, 0x2, 0x2, 0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 
       0x203, 0x202, 0x3, 0x2, 0x2, 0x2, 0x204, 0x35, 0x3, 0x2, 0x2, 0x2, 
       0x205, 0x206, 0x7, 0x26, 0x2, 0x2, 0x206, 0x37, 0x3, 0x2, 0x2, 0x2, 
       0x207, 0x208, 0x7, 0x25, 0x2, 0x2, 0x208, 0x39, 0x3, 0x2, 0x2, 0x2, 
       0x209, 0x20b, 0x7, 0x7, 0x2, 0x2, 0x20a, 0x20c, 0x5, 0xa6, 0x54, 
       0x2, 0x20b, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 0x2, 
       0x2, 0x20c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x5, 0xb8, 0x5d, 
       0x2, 0x20e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x215, 0x7, 0x8, 0x2, 
       0x2, 0x210, 0x213, 0x5, 0x6a, 0x36, 0x2, 0x211, 0x212, 0x7, 0x9, 
       0x2, 0x2, 0x212, 0x214, 0x5, 0x6a, 0x36, 0x2, 0x213, 0x211, 0x3, 
       0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x3, 
       0x2, 0x2, 0x2, 0x215, 0x210, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x3, 
       0x2, 0x2, 0x2, 0x216, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x217, 0x21a, 0x5, 
       0x42, 0x22, 0x2, 0x218, 0x21a, 0x5, 0x44, 0x23, 0x2, 0x219, 0x217, 
       0x3, 0x2, 0x2, 0x2, 0x219, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0xa, 0x2, 0x2, 0x21c, 0x21d, 
       0x5, 0x4c, 0x27, 0x2, 0x21d, 0x43, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x22b, 
       0x7, 0x9, 0x2, 0x2, 0x21f, 0x221, 0x9, 0x3, 0x2, 0x2, 0x220, 0x21f, 
       0x3, 0x2, 0x2, 0x2, 0x221, 0x224, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 
       0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x225, 0x22c, 
       0x5, 0x4e, 0x28, 0x2, 0x226, 0x228, 0x9, 0x3, 0x2, 0x2, 0x227, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 0x2, 0x2, 0x2, 0x229, 0x227, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22c, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x222, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x227, 
       0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x234, 
       0x7, 0xa, 0x2, 0x2, 0x22e, 0x235, 0x7, 0x35, 0x2, 0x2, 0x22f, 0x230, 
       0x7, 0x36, 0x2, 0x2, 0x230, 0x231, 0x5, 0x4a, 0x26, 0x2, 0x231, 0x232, 
       0x7, 0x37, 0x2, 0x2, 0x232, 0x235, 0x3, 0x2, 0x2, 0x2, 0x233, 0x235, 
       0x5, 0x4a, 0x26, 0x2, 0x234, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x234, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x239, 0x5, 0x96, 0x4c, 0x2, 0x237, 0x238, 
       0x7, 0xb, 0x2, 0x2, 0x238, 0x23a, 0x5, 0x96, 0x4c, 0x2, 0x239, 0x237, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x23b, 0x23e, 0x5, 0x4e, 0x28, 0x2, 0x23c, 0x23d, 
       0x7, 0xb, 0x2, 0x2, 0x23d, 0x23f, 0x5, 0x96, 0x4c, 0x2, 0x23e, 0x23c, 
       0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x240, 0x245, 0x5, 0x46, 0x24, 0x2, 0x241, 0x242, 
       0x7, 0x38, 0x2, 0x2, 0x242, 0x244, 0x5, 0x46, 0x24, 0x2, 0x243, 0x241, 
       0x3, 0x2, 0x2, 0x2, 0x244, 0x247, 0x3, 0x2, 0x2, 0x2, 0x245, 0x243, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 0x2, 0x246, 0x249, 
       0x3, 0x2, 0x2, 0x2, 0x247, 0x245, 0x3, 0x2, 0x2, 0x2, 0x248, 0x24a, 
       0x7, 0x38, 0x2, 0x2, 0x249, 0x248, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 
       0x3, 0x2, 0x2, 0x2, 0x24a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x250, 
       0x5, 0x48, 0x25, 0x2, 0x24c, 0x24d, 0x7, 0x38, 0x2, 0x2, 0x24d, 0x24f, 
       0x5, 0x48, 0x25, 0x2, 0x24e, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x252, 
       0x3, 0x2, 0x2, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 
       0x3, 0x2, 0x2, 0x2, 0x251, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 
       0x3, 0x2, 0x2, 0x2, 0x253, 0x258, 0x5, 0x96, 0x4c, 0x2, 0x254, 0x255, 
       0x7, 0x33, 0x2, 0x2, 0x255, 0x257, 0x5, 0x96, 0x4c, 0x2, 0x256, 0x254, 
       0x3, 0x2, 0x2, 0x2, 0x257, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 
       0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 
       0x7, 0xc, 0x2, 0x2, 0x25c, 0x261, 0x5, 0x96, 0x4c, 0x2, 0x25d, 0x25e, 
       0x7, 0x38, 0x2, 0x2, 0x25e, 0x260, 0x5, 0x96, 0x4c, 0x2, 0x25f, 0x25d, 
       0x3, 0x2, 0x2, 0x2, 0x260, 0x263, 0x3, 0x2, 0x2, 0x2, 0x261, 0x25f, 
       0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x3, 0x2, 0x2, 0x2, 0x262, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x263, 0x261, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 
       0x7, 0xd, 0x2, 0x2, 0x265, 0x26a, 0x5, 0x96, 0x4c, 0x2, 0x266, 0x267, 
       0x7, 0x38, 0x2, 0x2, 0x267, 0x269, 0x5, 0x96, 0x4c, 0x2, 0x268, 0x266, 
       0x3, 0x2, 0x2, 0x2, 0x269, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x268, 
       0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x26c, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 
       0x7, 0xe, 0x2, 0x2, 0x26e, 0x271, 0x5, 0x6a, 0x36, 0x2, 0x26f, 0x270, 
       0x7, 0x38, 0x2, 0x2, 0x270, 0x272, 0x5, 0x6a, 0x36, 0x2, 0x271, 0x26f, 
       0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x273, 0x27d, 0x5, 0x5a, 0x2e, 0x2, 0x274, 0x27d, 
       0x5, 0x5c, 0x2f, 0x2, 0x275, 0x27d, 0x5, 0x5e, 0x30, 0x2, 0x276, 
       0x27d, 0x5, 0x60, 0x31, 0x2, 0x277, 0x27d, 0x5, 0x62, 0x32, 0x2, 
       0x278, 0x27d, 0x5, 0x10, 0x9, 0x2, 0x279, 0x27d, 0x5, 0xaa, 0x56, 
       0x2, 0x27a, 0x27d, 0x5, 0xc, 0x7, 0x2, 0x27b, 0x27d, 0x5, 0x58, 0x2d, 
       0x2, 0x27c, 0x273, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x274, 0x3, 0x2, 0x2, 
       0x2, 0x27c, 0x275, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x276, 0x3, 0x2, 0x2, 
       0x2, 0x27c, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x278, 0x3, 0x2, 0x2, 
       0x2, 0x27c, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27a, 0x3, 0x2, 0x2, 
       0x2, 0x27c, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x57, 0x3, 0x2, 0x2, 
       0x2, 0x27e, 0x282, 0x7, 0x27, 0x2, 0x2, 0x27f, 0x283, 0x5, 0x10, 
       0x9, 0x2, 0x280, 0x283, 0x5, 0x62, 0x32, 0x2, 0x281, 0x283, 0x5, 
       0x5e, 0x30, 0x2, 0x282, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 
       0x3, 0x2, 0x2, 0x2, 0x282, 0x281, 0x3, 0x2, 0x2, 0x2, 0x283, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x7, 0xf, 0x2, 0x2, 0x285, 0x286, 
       0x5, 0x6a, 0x36, 0x2, 0x286, 0x287, 0x7, 0x39, 0x2, 0x2, 0x287, 0x28f, 
       0x5, 0x68, 0x35, 0x2, 0x288, 0x289, 0x7, 0x10, 0x2, 0x2, 0x289, 0x28a, 
       0x5, 0x6a, 0x36, 0x2, 0x28a, 0x28b, 0x7, 0x39, 0x2, 0x2, 0x28b, 0x28c, 
       0x5, 0x68, 0x35, 0x2, 0x28c, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x288, 
       0x3, 0x2, 0x2, 0x2, 0x28e, 0x291, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x28d, 
       0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 0x2, 0x2, 0x290, 0x295, 
       0x3, 0x2, 0x2, 0x2, 0x291, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 
       0x7, 0x11, 0x2, 0x2, 0x293, 0x294, 0x7, 0x39, 0x2, 0x2, 0x294, 0x296, 
       0x5, 0x68, 0x35, 0x2, 0x295, 0x292, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 
       0x3, 0x2, 0x2, 0x2, 0x296, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 
       0x7, 0x12, 0x2, 0x2, 0x298, 0x299, 0x5, 0x6a, 0x36, 0x2, 0x299, 0x29a, 
       0x7, 0x39, 0x2, 0x2, 0x29a, 0x29e, 0x5, 0x68, 0x35, 0x2, 0x29b, 0x29c, 
       0x7, 0x11, 0x2, 0x2, 0x29c, 0x29d, 0x7, 0x39, 0x2, 0x2, 0x29d, 0x29f, 
       0x5, 0x68, 0x35, 0x2, 0x29e, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 
       0x3, 0x2, 0x2, 0x2, 0x29f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 
       0x7, 0x13, 0x2, 0x2, 0x2a1, 0x2a2, 0x5, 0xa4, 0x53, 0x2, 0x2a2, 0x2a3, 
       0x7, 0x14, 0x2, 0x2, 0x2a3, 0x2a4, 0x5, 0xa6, 0x54, 0x2, 0x2a4, 0x2a5, 
       0x7, 0x39, 0x2, 0x2, 0x2a5, 0x2a9, 0x5, 0x68, 0x35, 0x2, 0x2a6, 0x2a7, 
       0x7, 0x11, 0x2, 0x2, 0x2a7, 0x2a8, 0x7, 0x39, 0x2, 0x2, 0x2a8, 0x2aa, 
       0x5, 0x68, 0x35, 0x2, 0x2a9, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 
       0x3, 0x2, 0x2, 0x2, 0x2aa, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 
       0x7, 0x15, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x39, 0x2, 0x2, 0x2ad, 0x2c3, 
       0x5, 0x68, 0x35, 0x2, 0x2ae, 0x2af, 0x5, 0x66, 0x34, 0x2, 0x2af, 
       0x2b0, 0x7, 0x39, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0x68, 0x35, 0x2, 0x2b1, 
       0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b3, 
       0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
       0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b6, 
       0x2b7, 0x7, 0x11, 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0x39, 0x2, 0x2, 0x2b8, 
       0x2ba, 0x5, 0x68, 0x35, 0x2, 0x2b9, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
       0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
       0x2bc, 0x7, 0x16, 0x2, 0x2, 0x2bc, 0x2bd, 0x7, 0x39, 0x2, 0x2, 0x2bd, 
       0x2bf, 0x5, 0x68, 0x35, 0x2, 0x2be, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2be, 
       0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
       0x2c1, 0x7, 0x16, 0x2, 0x2, 0x2c1, 0x2c2, 0x7, 0x39, 0x2, 0x2, 0x2c2, 
       0x2c4, 0x5, 0x68, 0x35, 0x2, 0x2c3, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2c3, 
       0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2c5, 
       0x2c6, 0x7, 0x17, 0x2, 0x2, 0x2c6, 0x2cb, 0x5, 0x64, 0x33, 0x2, 0x2c7, 
       0x2c8, 0x7, 0x38, 0x2, 0x2, 0x2c8, 0x2ca, 0x5, 0x64, 0x33, 0x2, 0x2c9, 
       0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cb, 
       0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
       0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2cf, 0x7, 0x39, 0x2, 0x2, 0x2cf, 0x2d0, 0x5, 0x68, 0x35, 0x2, 0x2d0, 
       0x63, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d4, 0x5, 0x6a, 0x36, 0x2, 0x2d2, 
       0x2d3, 0x7, 0xb, 0x2, 0x2, 0x2d3, 0x2d5, 0x5, 0x7e, 0x40, 0x2, 0x2d4, 
       0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 
       0x65, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2dc, 0x7, 0x18, 0x2, 0x2, 0x2d7, 
       0x2da, 0x5, 0x6a, 0x36, 0x2, 0x2d8, 0x2d9, 0x7, 0xb, 0x2, 0x2, 0x2d9, 
       0x2db, 0x5, 0x96, 0x4c, 0x2, 0x2da, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2da, 
       0x2db, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2dc, 
       0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2e9, 0x5, 0x20, 0x11, 0x2, 0x2df, 
       0x2e0, 0x7, 0x29, 0x2, 0x2, 0x2e0, 0x2e2, 0x7, 0x64, 0x2, 0x2, 0x2e1, 
       0x2e3, 0x5, 0x1e, 0x10, 0x2, 0x2e2, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 
       0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e4, 
       0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 
       0x2e7, 0x7, 0x65, 0x2, 0x2, 0x2e7, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e8, 
       0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e9, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2f0, 0x5, 0x72, 0x3a, 0x2, 0x2eb, 
       0x2ec, 0x7, 0xf, 0x2, 0x2, 0x2ec, 0x2ed, 0x5, 0x72, 0x3a, 0x2, 0x2ed, 
       0x2ee, 0x7, 0x11, 0x2, 0x2, 0x2ee, 0x2ef, 0x5, 0x6a, 0x36, 0x2, 0x2ef, 
       0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2f0, 
       0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f2, 
       0x2f4, 0x5, 0x6e, 0x38, 0x2, 0x2f3, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2f3, 
       0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2f5, 
       0x2f8, 0x5, 0x72, 0x3a, 0x2, 0x2f6, 0x2f8, 0x5, 0x70, 0x39, 0x2, 
       0x2f7, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f6, 0x3, 0x2, 0x2, 0x2, 
       0x2f8, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fb, 0x7, 0x19, 0x2, 0x2, 
       0x2fa, 0x2fc, 0x5, 0x1a, 0xe, 0x2, 0x2fb, 0x2fa, 0x3, 0x2, 0x2, 0x2, 
       0x2fb, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 0x2, 
       0x2fd, 0x2fe, 0x7, 0x39, 0x2, 0x2, 0x2fe, 0x2ff, 0x5, 0x6a, 0x36, 
       0x2, 0x2ff, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x300, 0x302, 0x7, 0x19, 0x2, 
       0x2, 0x301, 0x303, 0x5, 0x1a, 0xe, 0x2, 0x302, 0x301, 0x3, 0x2, 0x2, 
       0x2, 0x302, 0x303, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x3, 0x2, 0x2, 
       0x2, 0x304, 0x305, 0x7, 0x39, 0x2, 0x2, 0x305, 0x306, 0x5, 0x6c, 
       0x37, 0x2, 0x306, 0x71, 0x3, 0x2, 0x2, 0x2, 0x307, 0x30c, 0x5, 0x74, 
       0x3b, 0x2, 0x308, 0x309, 0x7, 0x1a, 0x2, 0x2, 0x309, 0x30b, 0x5, 
       0x74, 0x3b, 0x2, 0x30a, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30e, 
       0x3, 0x2, 0x2, 0x2, 0x30c, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 
       0x3, 0x2, 0x2, 0x2, 0x30d, 0x73, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30c, 
       0x3, 0x2, 0x2, 0x2, 0x30f, 0x314, 0x5, 0x76, 0x3c, 0x2, 0x310, 0x311, 
       0x7, 0x1b, 0x2, 0x2, 0x311, 0x313, 0x5, 0x76, 0x3c, 0x2, 0x312, 0x310, 
       0x3, 0x2, 0x2, 0x2, 0x313, 0x316, 0x3, 0x2, 0x2, 0x2, 0x314, 0x312, 
       0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 
       0x7, 0x1c, 0x2, 0x2, 0x318, 0x31b, 0x5, 0x76, 0x3c, 0x2, 0x319, 0x31b, 
       0x5, 0x78, 0x3d, 0x2, 0x31a, 0x317, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x319, 
       0x3, 0x2, 0x2, 0x2, 0x31b, 0x77, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x322, 
       0x5, 0x7e, 0x40, 0x2, 0x31d, 0x31e, 0x5, 0x7a, 0x3e, 0x2, 0x31e, 
       0x31f, 0x5, 0x7e, 0x40, 0x2, 0x31f, 0x321, 0x3, 0x2, 0x2, 0x2, 0x320, 
       0x31d, 0x3, 0x2, 0x2, 0x2, 0x321, 0x324, 0x3, 0x2, 0x2, 0x2, 0x322, 
       0x320, 0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x3, 0x2, 0x2, 0x2, 0x323, 
       0x79, 0x3, 0x2, 0x2, 0x2, 0x324, 0x322, 0x3, 0x2, 0x2, 0x2, 0x325, 
       0x333, 0x7, 0x4c, 0x2, 0x2, 0x326, 0x333, 0x7, 0x4d, 0x2, 0x2, 0x327, 
       0x333, 0x7, 0x4e, 0x2, 0x2, 0x328, 0x333, 0x7, 0x4f, 0x2, 0x2, 0x329, 
       0x333, 0x7, 0x50, 0x2, 0x2, 0x32a, 0x333, 0x7, 0x51, 0x2, 0x2, 0x32b, 
       0x333, 0x7, 0x52, 0x2, 0x2, 0x32c, 0x333, 0x7, 0x14, 0x2, 0x2, 0x32d, 
       0x32e, 0x7, 0x1c, 0x2, 0x2, 0x32e, 0x333, 0x7, 0x14, 0x2, 0x2, 0x32f, 
       0x333, 0x7, 0x1d, 0x2, 0x2, 0x330, 0x331, 0x7, 0x1d, 0x2, 0x2, 0x331, 
       0x333, 0x7, 0x1c, 0x2, 0x2, 0x332, 0x325, 0x3, 0x2, 0x2, 0x2, 0x332, 
       0x326, 0x3, 0x2, 0x2, 0x2, 0x332, 0x327, 0x3, 0x2, 0x2, 0x2, 0x332, 
       0x328, 0x3, 0x2, 0x2, 0x2, 0x332, 0x329, 0x3, 0x2, 0x2, 0x2, 0x332, 
       0x32a, 0x3, 0x2, 0x2, 0x2, 0x332, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x332, 
       0x32c, 0x3, 0x2, 0x2, 0x2, 0x332, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x332, 
       0x32f, 0x3, 0x2, 0x2, 0x2, 0x332, 0x330, 0x3, 0x2, 0x2, 0x2, 0x333, 
       0x7b, 0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 0x7, 0x35, 0x2, 0x2, 0x335, 
       0x336, 0x5, 0x7e, 0x40, 0x2, 0x336, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x337, 
       0x33c, 0x5, 0x80, 0x41, 0x2, 0x338, 0x339, 0x7, 0x3f, 0x2, 0x2, 0x339, 
       0x33b, 0x5, 0x80, 0x41, 0x2, 0x33a, 0x338, 0x3, 0x2, 0x2, 0x2, 0x33b, 
       0x33e, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33c, 
       0x33d, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x33c, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x344, 0x5, 0x82, 0x42, 0x2, 0x340, 
       0x341, 0x7, 0x40, 0x2, 0x2, 0x341, 0x343, 0x5, 0x82, 0x42, 0x2, 0x342, 
       0x340, 0x3, 0x2, 0x2, 0x2, 0x343, 0x346, 0x3, 0x2, 0x2, 0x2, 0x344, 
       0x342, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0x3, 0x2, 0x2, 0x2, 0x345, 
       0x81, 0x3, 0x2, 0x2, 0x2, 0x346, 0x344, 0x3, 0x2, 0x2, 0x2, 0x347, 
       0x34c, 0x5, 0x84, 0x43, 0x2, 0x348, 0x349, 0x7, 0x41, 0x2, 0x2, 0x349, 
       0x34b, 0x5, 0x84, 0x43, 0x2, 0x34a, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34b, 
       0x34e, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34c, 
       0x34d, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x83, 0x3, 0x2, 0x2, 0x2, 0x34e, 
       0x34c, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x354, 0x5, 0x86, 0x44, 0x2, 0x350, 
       0x351, 0x9, 0x4, 0x2, 0x2, 0x351, 0x353, 0x5, 0x86, 0x44, 0x2, 0x352, 
       0x350, 0x3, 0x2, 0x2, 0x2, 0x353, 0x356, 0x3, 0x2, 0x2, 0x2, 0x354, 
       0x352, 0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 0x3, 0x2, 0x2, 0x2, 0x355, 
       0x85, 0x3, 0x2, 0x2, 0x2, 0x356, 0x354, 0x3, 0x2, 0x2, 0x2, 0x357, 
       0x35c, 0x5, 0x88, 0x45, 0x2, 0x358, 0x359, 0x9, 0x5, 0x2, 0x2, 0x359, 
       0x35b, 0x5, 0x88, 0x45, 0x2, 0x35a, 0x358, 0x3, 0x2, 0x2, 0x2, 0x35b, 
       0x35e, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35c, 
       0x35d, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x87, 0x3, 0x2, 0x2, 0x2, 0x35e, 
       0x35c, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x364, 0x5, 0x8a, 0x46, 0x2, 0x360, 
       0x361, 0x9, 0x6, 0x2, 0x2, 0x361, 0x363, 0x5, 0x8a, 0x46, 0x2, 0x362, 
       0x360, 0x3, 0x2, 0x2, 0x2, 0x363, 0x366, 0x3, 0x2, 0x2, 0x2, 0x364, 
       0x362, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 0x3, 0x2, 0x2, 0x2, 0x365, 
       0x89, 0x3, 0x2, 0x2, 0x2, 0x366, 0x364, 0x3, 0x2, 0x2, 0x2, 0x367, 
       0x368, 0x9, 0x7, 0x2, 0x2, 0x368, 0x36b, 0x5, 0x8a, 0x46, 0x2, 0x369, 
       0x36b, 0x5, 0x8c, 0x47, 0x2, 0x36a, 0x367, 0x3, 0x2, 0x2, 0x2, 0x36a, 
       0x369, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x36c, 
       0x36f, 0x5, 0x8e, 0x48, 0x2, 0x36d, 0x36e, 0x7, 0x3b, 0x2, 0x2, 0x36e, 
       0x370, 0x5, 0x8a, 0x46, 0x2, 0x36f, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36f, 
       0x370, 0x3, 0x2, 0x2, 0x2, 0x370, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x371, 
       0x373, 0x7, 0x28, 0x2, 0x2, 0x372, 0x371, 0x3, 0x2, 0x2, 0x2, 0x372, 
       0x373, 0x3, 0x2, 0x2, 0x2, 0x373, 0x376, 0x3, 0x2, 0x2, 0x2, 0x374, 
       0x377, 0x5, 0x90, 0x49, 0x2, 0x375, 0x377, 0x5, 0x92, 0x4a, 0x2, 
       0x376, 0x374, 0x3, 0x2, 0x2, 0x2, 0x376, 0x375, 0x3, 0x2, 0x2, 0x2, 
       0x377, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x378, 0x37a, 0x5, 0x9c, 0x4f, 
       0x2, 0x379, 0x378, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37d, 0x3, 0x2, 0x2, 
       0x2, 0x37b, 0x379, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x3, 0x2, 0x2, 
       0x2, 0x37c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37b, 0x3, 0x2, 0x2, 
       0x2, 0x37e, 0x37f, 0x5, 0x98, 0x4d, 0x2, 0x37f, 0x381, 0x7, 0x36, 
       0x2, 0x2, 0x380, 0x382, 0x5, 0xac, 0x57, 0x2, 0x381, 0x380, 0x3, 
       0x2, 0x2, 0x2, 0x381, 0x382, 0x3, 0x2, 0x2, 0x2, 0x382, 0x383, 0x3, 
       0x2, 0x2, 0x2, 0x383, 0x384, 0x7, 0x37, 0x2, 0x2, 0x384, 0x91, 0x3, 
       0x2, 0x2, 0x2, 0x385, 0x388, 0x7, 0x36, 0x2, 0x2, 0x386, 0x389, 0x5, 
       0xb8, 0x5d, 0x2, 0x387, 0x389, 0x5, 0x9a, 0x4e, 0x2, 0x388, 0x386, 
       0x3, 0x2, 0x2, 0x2, 0x388, 0x387, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 
       0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x3a1, 
       0x7, 0x37, 0x2, 0x2, 0x38b, 0x38d, 0x7, 0x3d, 0x2, 0x2, 0x38c, 0x38e, 
       0x5, 0x9a, 0x4e, 0x2, 0x38d, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 
       0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x3a1, 
       0x7, 0x3e, 0x2, 0x2, 0x390, 0x392, 0x7, 0x4a, 0x2, 0x2, 0x391, 0x393, 
       0x5, 0xa8, 0x55, 0x2, 0x392, 0x391, 0x3, 0x2, 0x2, 0x2, 0x392, 0x393, 
       0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x3, 0x2, 0x2, 0x2, 0x394, 0x3a1, 
       0x7, 0x4b, 0x2, 0x2, 0x395, 0x3a1, 0x5, 0x96, 0x4c, 0x2, 0x396, 0x3a1, 
       0x7, 0x4, 0x2, 0x2, 0x397, 0x399, 0x5, 0x94, 0x4b, 0x2, 0x398, 0x397, 
       0x3, 0x2, 0x2, 0x2, 0x399, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x3a1, 
       0x3, 0x2, 0x2, 0x2, 0x39c, 0x3a1, 0x7, 0x34, 0x2, 0x2, 0x39d, 0x3a1, 
       0x7, 0x1e, 0x2, 0x2, 0x39e, 0x3a1, 0x7, 0x1f, 0x2, 0x2, 0x39f, 0x3a1, 
       0x7, 0x20, 0x2, 0x2, 0x3a0, 0x385, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x38b, 
       0x3, 0x2, 0x2, 0x2, 0x3a0, 0x390, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x395, 
       0x3, 0x2, 0x2, 0x2, 0x3a0, 0x396, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39d, 
       0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39f, 
       0x3, 0x2, 0x2, 0x2, 0x3a1, 0x93, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 
       0x7, 0x3, 0x2, 0x2, 0x3a3, 0x95, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 
       0x7, 0x2a, 0x2, 0x2, 0x3a5, 0x97, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a7, 
       0x7, 0x2a, 0x2, 0x2, 0x3a7, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3ab, 
       0x5, 0x6a, 0x36, 0x2, 0x3a9, 0x3ab, 0x5, 0x7c, 0x3f, 0x2, 0x3aa, 
       0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
       0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3bb, 0x5, 0xb2, 0x5a, 0x2, 0x3ad, 
       0x3b0, 0x7, 0x38, 0x2, 0x2, 0x3ae, 0x3b1, 0x5, 0x6a, 0x36, 0x2, 0x3af, 
       0x3b1, 0x5, 0x7c, 0x3f, 0x2, 0x3b0, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3b0, 
       0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b2, 
       0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b4, 
       0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b5, 
       0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
       0x3b9, 0x7, 0x38, 0x2, 0x2, 0x3b8, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b8, 
       0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3ba, 
       0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3bb, 
       0x9b, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x7, 0x33, 0x2, 0x2, 0x3bd, 
       0x3c5, 0x5, 0x90, 0x49, 0x2, 0x3be, 0x3bf, 0x7, 0x3d, 0x2, 0x2, 0x3bf, 
       0x3c0, 0x5, 0x9e, 0x50, 0x2, 0x3c0, 0x3c1, 0x7, 0x3e, 0x2, 0x2, 0x3c1, 
       0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c3, 0x7, 0x33, 0x2, 0x2, 0x3c3, 
       0x3c5, 0x5, 0x96, 0x4c, 0x2, 0x3c4, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3c4, 
       0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c5, 
       0x9d, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3cb, 0x5, 0xa0, 0x51, 0x2, 0x3c7, 
       0x3c8, 0x7, 0x38, 0x2, 0x2, 0x3c8, 0x3ca, 0x5, 0xa0, 0x51, 0x2, 0x3c9, 
       0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cb, 
       0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cc, 
       0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3ce, 
       0x3d0, 0x7, 0x38, 0x2, 0x2, 0x3cf, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3cf, 
       0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x3d1, 
       0x3dd, 0x5, 0x6a, 0x36, 0x2, 0x3d2, 0x3d4, 0x5, 0x6a, 0x36, 0x2, 
       0x3d3, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x3, 0x2, 0x2, 0x2, 
       0x3d4, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d7, 0x7, 0x39, 0x2, 0x2, 
       0x3d6, 0x3d8, 0x5, 0x6a, 0x36, 0x2, 0x3d7, 0x3d6, 0x3, 0x2, 0x2, 
       0x2, 0x3d7, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3da, 0x3, 0x2, 0x2, 
       0x2, 0x3d9, 0x3db, 0x5, 0xa2, 0x52, 0x2, 0x3da, 0x3d9, 0x3, 0x2, 
       0x2, 0x2, 0x3da, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dd, 0x3, 0x2, 
       0x2, 0x2, 0x3dc, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3d3, 0x3, 0x2, 
       0x2, 0x2, 0x3dd, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3e0, 0x7, 0x39, 
       0x2, 0x2, 0x3df, 0x3e1, 0x5, 0x6a, 0x36, 0x2, 0x3e0, 0x3df, 0x3, 
       0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0xa3, 0x3, 
       0x2, 0x2, 0x2, 0x3e2, 0x3e5, 0x5, 0x7e, 0x40, 0x2, 0x3e3, 0x3e5, 
       0x5, 0x7c, 0x3f, 0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e3, 
       0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e9, 
       0x7, 0x38, 0x2, 0x2, 0x3e7, 0x3ea, 0x5, 0x7e, 0x40, 0x2, 0x3e8, 0x3ea, 
       0x5, 0x7c, 0x3f, 0x2, 0x3e9, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3e8, 
       0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3e6, 
       0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3eb, 
       0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3f1, 
       0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f2, 
       0x7, 0x38, 0x2, 0x2, 0x3f1, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 
       0x3, 0x2, 0x2, 0x2, 0x3f2, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f8, 
       0x5, 0x6a, 0x36, 0x2, 0x3f4, 0x3f5, 0x7, 0x38, 0x2, 0x2, 0x3f5, 0x3f7, 
       0x5, 0x6a, 0x36, 0x2, 0x3f6, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3fa, 
       0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f9, 
       0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3f8, 
       0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fd, 0x7, 0x38, 0x2, 0x2, 0x3fc, 0x3fb, 
       0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0xa7, 
       0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x5, 0x6a, 0x36, 0x2, 0x3ff, 0x400, 
       0x7, 0x39, 0x2, 0x2, 0x400, 0x401, 0x5, 0x6a, 0x36, 0x2, 0x401, 0x405, 
       0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 0x7, 0x3b, 0x2, 0x2, 0x403, 0x405, 
       0x5, 0x7e, 0x40, 0x2, 0x404, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x404, 0x402, 
       0x3, 0x2, 0x2, 0x2, 0x405, 0x418, 0x3, 0x2, 0x2, 0x2, 0x406, 0x419, 
       0x5, 0xb2, 0x5a, 0x2, 0x407, 0x40e, 0x7, 0x38, 0x2, 0x2, 0x408, 0x409, 
       0x5, 0x6a, 0x36, 0x2, 0x409, 0x40a, 0x7, 0x39, 0x2, 0x2, 0x40a, 0x40b, 
       0x5, 0x6a, 0x36, 0x2, 0x40b, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 
       0x7, 0x3b, 0x2, 0x2, 0x40d, 0x40f, 0x5, 0x7e, 0x40, 0x2, 0x40e, 0x408, 
       0x3, 0x2, 0x2, 0x2, 0x40e, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x411, 
       0x3, 0x2, 0x2, 0x2, 0x410, 0x407, 0x3, 0x2, 0x2, 0x2, 0x411, 0x414, 
       0x3, 0x2, 0x2, 0x2, 0x412, 0x410, 0x3, 0x2, 0x2, 0x2, 0x412, 0x413, 
       0x3, 0x2, 0x2, 0x2, 0x413, 0x416, 0x3, 0x2, 0x2, 0x2, 0x414, 0x412, 
       0x3, 0x2, 0x2, 0x2, 0x415, 0x417, 0x7, 0x38, 0x2, 0x2, 0x416, 0x415, 
       0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x3, 0x2, 0x2, 0x2, 0x417, 0x419, 
       0x3, 0x2, 0x2, 0x2, 0x418, 0x406, 0x3, 0x2, 0x2, 0x2, 0x418, 0x412, 
       0x3, 0x2, 0x2, 0x2, 0x419, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41d, 
       0x5, 0x6a, 0x36, 0x2, 0x41b, 0x41d, 0x5, 0x7c, 0x3f, 0x2, 0x41c, 
       0x41a, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x41d, 
       0x42c, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x42d, 0x5, 0xb2, 0x5a, 0x2, 0x41f, 
       0x422, 0x7, 0x38, 0x2, 0x2, 0x420, 0x423, 0x5, 0x6a, 0x36, 0x2, 0x421, 
       0x423, 0x5, 0x7c, 0x3f, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x422, 
       0x421, 0x3, 0x2, 0x2, 0x2, 0x423, 0x425, 0x3, 0x2, 0x2, 0x2, 0x424, 
       0x41f, 0x3, 0x2, 0x2, 0x2, 0x425, 0x428, 0x3, 0x2, 0x2, 0x2, 0x426, 
       0x424, 0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x3, 0x2, 0x2, 0x2, 0x427, 
       0x42a, 0x3, 0x2, 0x2, 0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 0x2, 0x429, 
       0x42b, 0x7, 0x38, 0x2, 0x2, 0x42a, 0x429, 0x3, 0x2, 0x2, 0x2, 0x42a, 
       0x42b, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x42c, 
       0x41e, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x426, 0x3, 0x2, 0x2, 0x2, 0x42d, 
       0x42f, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x404, 0x3, 0x2, 0x2, 0x2, 0x42e, 
       0x41c, 0x3, 0x2, 0x2, 0x2, 0x42f, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x430, 
       0x431, 0x7, 0x21, 0x2, 0x2, 0x431, 0x437, 0x5, 0x96, 0x4c, 0x2, 0x432, 
       0x434, 0x7, 0x36, 0x2, 0x2, 0x433, 0x435, 0x5, 0xac, 0x57, 0x2, 0x434, 
       0x433, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x3, 0x2, 0x2, 0x2, 0x435, 
       0x436, 0x3, 0x2, 0x2, 0x2, 0x436, 0x438, 0x7, 0x37, 0x2, 0x2, 0x437, 
       0x432, 0x3, 0x2, 0x2, 0x2, 0x437, 0x438, 0x3, 0x2, 0x2, 0x2, 0x438, 
       0x439, 0x3, 0x2, 0x2, 0x2, 0x439, 0x43a, 0x7, 0x39, 0x2, 0x2, 0x43a, 
       0x43b, 0x5, 0x68, 0x35, 0x2, 0x43b, 0xab, 0x3, 0x2, 0x2, 0x2, 0x43c, 
       0x441, 0x5, 0xae, 0x58, 0x2, 0x43d, 0x43e, 0x7, 0x38, 0x2, 0x2, 0x43e, 
       0x440, 0x5, 0xae, 0x58, 0x2, 0x43f, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x440, 
       0x443, 0x3, 0x2, 0x2, 0x2, 0x441, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x441, 
       0x442, 0x3, 0x2, 0x2, 0x2, 0x442, 0x445, 0x3, 0x2, 0x2, 0x2, 0x443, 
       0x441, 0x3, 0x2, 0x2, 0x2, 0x444, 0x446, 0x7, 0x38, 0x2, 0x2, 0x445, 
       0x444, 0x3, 0x2, 0x2, 0x2, 0x445, 0x446, 0x3, 0x2, 0x2, 0x2, 0x446, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x447, 0x449, 0x5, 0x6a, 0x36, 0x2, 0x448, 
       0x44a, 0x5, 0xb2, 0x5a, 0x2, 0x449, 0x448, 0x3, 0x2, 0x2, 0x2, 0x449, 
       0x44a, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x454, 0x3, 0x2, 0x2, 0x2, 0x44b, 
       0x44c, 0x5, 0x6a, 0x36, 0x2, 0x44c, 0x44d, 0x7, 0x3c, 0x2, 0x2, 0x44d, 
       0x44e, 0x5, 0x6a, 0x36, 0x2, 0x44e, 0x454, 0x3, 0x2, 0x2, 0x2, 0x44f, 
       0x450, 0x7, 0x3b, 0x2, 0x2, 0x450, 0x454, 0x5, 0x6a, 0x36, 0x2, 0x451, 
       0x452, 0x7, 0x35, 0x2, 0x2, 0x452, 0x454, 0x5, 0x6a, 0x36, 0x2, 0x453, 
       0x447, 0x3, 0x2, 0x2, 0x2, 0x453, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x453, 
       0x44f, 0x3, 0x2, 0x2, 0x2, 0x453, 0x451, 0x3, 0x2, 0x2, 0x2, 0x454, 
       0xaf, 0x3, 0x2, 0x2, 0x2, 0x455, 0x458, 0x5, 0xb2, 0x5a, 0x2, 0x456, 
       0x458, 0x5, 0xb4, 0x5b, 0x2, 0x457, 0x455, 0x3, 0x2, 0x2, 0x2, 0x457, 
       0x456, 0x3, 0x2, 0x2, 0x2, 0x458, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x459, 
       0x45b, 0x7, 0x27, 0x2, 0x2, 0x45a, 0x459, 0x3, 0x2, 0x2, 0x2, 0x45a, 
       0x45b, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45c, 
       0x45d, 0x7, 0x13, 0x2, 0x2, 0x45d, 0x45e, 0x5, 0xa4, 0x53, 0x2, 0x45e, 
       0x45f, 0x7, 0x14, 0x2, 0x2, 0x45f, 0x461, 0x5, 0x72, 0x3a, 0x2, 0x460, 
       0x462, 0x5, 0xb0, 0x59, 0x2, 0x461, 0x460, 0x3, 0x2, 0x2, 0x2, 0x461, 
       0x462, 0x3, 0x2, 0x2, 0x2, 0x462, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x463, 
       0x464, 0x7, 0xf, 0x2, 0x2, 0x464, 0x466, 0x5, 0x6c, 0x37, 0x2, 0x465, 
       0x467, 0x5, 0xb0, 0x59, 0x2, 0x466, 0x465, 0x3, 0x2, 0x2, 0x2, 0x466, 
       0x467, 0x3, 0x2, 0x2, 0x2, 0x467, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x468, 
       0x469, 0x5, 0x96, 0x4c, 0x2, 0x469, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x46a, 
       0x46c, 0x7, 0x22, 0x2, 0x2, 0x46b, 0x46d, 0x5, 0xba, 0x5e, 0x2, 0x46c, 
       0x46b, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x46d, 
       0xb9, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x46f, 0x7, 0x9, 0x2, 0x2, 0x46f, 
       0x472, 0x5, 0x6a, 0x36, 0x2, 0x470, 0x472, 0x5, 0xa6, 0x54, 0x2, 
       0x471, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x471, 0x470, 0x3, 0x2, 0x2, 0x2, 
       0x472, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xc1, 0xc5, 0xc7, 0xd0, 0xd9, 
       0xdc, 0xe3, 0xe9, 0xf3, 0xfc, 0x103, 0x109, 0x10d, 0x113, 0x119, 
       0x11d, 0x124, 0x126, 0x128, 0x12d, 0x12f, 0x131, 0x135, 0x13b, 0x13f, 
       0x146, 0x148, 0x14a, 0x14f, 0x151, 0x156, 0x15b, 0x161, 0x165, 0x16b, 
       0x171, 0x175, 0x17c, 0x17e, 0x180, 0x185, 0x187, 0x189, 0x18d, 0x193, 
       0x197, 0x19e, 0x1a0, 0x1a2, 0x1a7, 0x1a9, 0x1af, 0x1b6, 0x1ba, 0x1c6, 
       0x1ca, 0x1d3, 0x1d8, 0x1dc, 0x1de, 0x1e4, 0x1e8, 0x1ed, 0x1f1, 0x1f5, 
       0x203, 0x20b, 0x213, 0x215, 0x219, 0x222, 0x229, 0x22b, 0x234, 0x239, 
       0x23e, 0x245, 0x249, 0x250, 0x258, 0x261, 0x26a, 0x271, 0x27c, 0x282, 
       0x28f, 0x295, 0x29e, 0x2a9, 0x2b4, 0x2b9, 0x2be, 0x2c3, 0x2cb, 0x2d4, 
       0x2da, 0x2dc, 0x2e4, 0x2e8, 0x2f0, 0x2f3, 0x2f7, 0x2fb, 0x302, 0x30c, 
       0x314, 0x31a, 0x322, 0x332, 0x33c, 0x344, 0x34c, 0x354, 0x35c, 0x364, 
       0x36a, 0x36f, 0x372, 0x376, 0x37b, 0x381, 0x388, 0x38d, 0x392, 0x39a, 
       0x3a0, 0x3aa, 0x3b0, 0x3b4, 0x3b8, 0x3ba, 0x3c4, 0x3cb, 0x3cf, 0x3d3, 
       0x3d7, 0x3da, 0x3dc, 0x3e0, 0x3e4, 0x3e9, 0x3ed, 0x3f1, 0x3f8, 0x3fc, 
       0x404, 0x40e, 0x412, 0x416, 0x418, 0x41c, 0x422, 0x426, 0x42a, 0x42c, 
       0x42e, 0x434, 0x437, 0x441, 0x445, 0x449, 0x453, 0x457, 0x45a, 0x461, 
       0x466, 0x46c, 0x471, 
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
