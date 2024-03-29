//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVItem_Protocol_h
#define CoreDAVItem_Protocol_h
@import Foundation;

#include "CoreDAVItem-Protocol.h"

@class NSData, NSMutableArray, NSMutableSet, NSString;

@protocol CoreDAVItem <NSObject>
/* class methods */
+ (id)copyParseRules;
+ (id)parseRuleCache;
/* instance methods */
- (void)parserFoundAttributes:(id)attributes;
- (void)parserFoundPayload:(id)payload;
- (void)parserFoundUnrecognizedElement:(id)element;
- (id)copyParseRules;
- (void)write:(id)write;
- (BOOL)validate;
- (void)parserSuggestsBaseURL:(id)url;
@end

#endif /* CoreDAVItem_Protocol_h */
