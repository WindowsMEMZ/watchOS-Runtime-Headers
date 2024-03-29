//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMXMLReparser_h
#define IMXMLReparser_h
@import Foundation;

#include "IMXMLReparserContext.h"
#include "NSXMLParserDelegate-Protocol.h"

@class NSError, NSMutableString, NSString, NSXMLParser;

@interface IMXMLReparser : NSObject<NSXMLParserDelegate> {
  /* instance variables */
  NSXMLParser *_parser;
  NSMutableString *_output;
  IMXMLReparserContext *_context;
  NSError *_error;
  unsigned long long _depth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)parseWithContext:(id)context;
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
@end

#endif /* IMXMLReparser_h */
