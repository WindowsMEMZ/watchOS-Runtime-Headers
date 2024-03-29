//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRXMLParser_h
#define XRXMLParser_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"
#include "XRIssueResponder-Protocol.h"
#include "XRXMLElementParser.h"
#include "XRXMLParserDelegate-Protocol.h"

@class NSString, NSXMLParser;

@interface XRXMLParser : NSObject<NSXMLParserDelegate> {
  /* instance variables */
  NSXMLParser *_parser;
  XRXMLElementParser *_workingElement;
  XRXMLElementParser *_topLevelElementParser;
  BOOL _delegateWantsFinishedCB;
}

@property (weak, nonatomic) NSObject<XRXMLParserDelegate> *delegate;
@property (retain, nonatomic) NSObject<XRIssueResponder> *issueResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)commonXMLSchemaRepositoryURL;
+ (BOOL)parseStream:(id)stream topLevelParser:(id)parser delegate:(id)delegate;

/* instance methods */
- (id)init;
- (id)initWithTopLevelParser:(id)parser;
- (BOOL)parseData:(id)data;
- (void)finishedParsing;
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
@end

#endif /* XRXMLParser_h */
