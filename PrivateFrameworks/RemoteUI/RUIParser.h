//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIParser_h
#define RUIParser_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"
#include "RUIActionSignal.h"
#include "RUIAlertView.h"
#include "RUIObjectModel.h"
#include "RUIParserDelegate-Protocol.h"

@class NSData, NSDictionary, NSError, NSMutableArray, NSMutableString, NSString, NSURL, NSXMLParser, RUIXMLParserDelegate;

@interface RUIParser : NSObject<NSXMLParserDelegate> {
  /* instance variables */
  NSMutableString *_accumulator;
  NSDictionary *_currentElementAttributes;
  RUIAlertView *_currentAlert;
  NSXMLParser *_parser;
  RUIObjectModel *_uiObjectModel;
  NSMutableArray *_pages;
  NSMutableArray *_currentPageStack;
  RUIActionSignal *_actionSignal;
  RUIXMLParserDelegate *_swiftUIParserDelegate;
  int _parserState;
  NSMutableArray *_elementStack;
  BOOL _foundXMLUI;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSData *xmlData;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSError *error;
@property (weak, nonatomic) NSObject<RUIParserDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)textAlignmentForString:(id)string;
+ (id)textStyleForString:(id)string;
+ (id)tableRowClassForElementName:(id)name;
+ (id)rowWithAttributeDict:(id)dict delegate:(id)delegate parent:(id)parent;

/* instance methods */
- (id)initWithXML:(id)xml baseURL:(id)url style:(id)style delegate:(id)delegate;
- (id)initWithXML:(id)xml baseURL:(id)url delegate:(id)delegate;
- (id)initWithXML:(id)xml;
- (void)dealloc;
- (id)uiObjectModel;
- (id)actionSignal;
- (id)_createPageWithName:(id)name attributes:(id)attributes;
- (id)_createAndAddPageWithAttributes:(id)attributes;
- (id)_newRowWithAttributeDict:(id)dict;
- (id)_lastPageCreateIfNeeded;
- (id)_lastRow;
- (void)_addNavigationBarWithAttributes:(id)attributes;
- (void)_addSectionWithAttributes:(id)attributes;
- (void)_logDeprecation:(id)deprecation value:(id)value;
- (void)_finalizePinView;
- (void)_finalizeSection;
- (void)_finalizeElement:(id)element;
- (BOOL)parseActionSignalWithElementName:(id)name;
- (BOOL)_isParsingTable;
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (BOOL)_isParsingSwiftUI;
- (void)_validateDocumentContent;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser foundCDATA:(id)cdata;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
- (void)parser:(id)parser validationErrorOccurred:(id)occurred;
@end

#endif /* RUIParser_h */
