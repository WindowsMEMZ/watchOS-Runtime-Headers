//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WPXMLRPCDecoder_h
#define WPXMLRPCDecoder_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"
#include "WPXMLRPCDecoderDelegate.h"

@class NSData, NSMutableString, NSString, NSXMLParser;

@interface WPXMLRPCDecoder : NSObject<NSXMLParserDelegate> {
  /* instance variables */
  NSXMLParser *_parser;
  WPXMLRPCDecoderDelegate *_delegate;
  BOOL _isFault;
  NSData *_body;
  NSData *_originalData;
  id _object;
  NSMutableString *_methodName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
- (id)initWithData:(id)data;
- (void)parse;
- (void)abortParsing;
- (BOOL)isFault;
- (long long)faultCode;
- (id)faultString;
- (id)error;
- (id)object;
@end

#endif /* WPXMLRPCDecoder_h */
