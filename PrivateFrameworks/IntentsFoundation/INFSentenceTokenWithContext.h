//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INFSentenceTokenWithContext_h
#define INFSentenceTokenWithContext_h
@import Foundation;

#include "INFSentenceContext.h"
#include "INFSentenceToken.h"

@class NSString;

@interface INFSentenceTokenWithContext : NSObject

@property (nonatomic) BOOL resolved;
@property (copy, nonatomic) NSString *placeholderName;
@property (retain, nonatomic) INFSentenceContext *context;
@property (retain, nonatomic) INFSentenceToken *originalToken;

/* class methods */
+ (id)sentenceResolvedTokenWithOriginalToken:(id)token placeholderName:(id)name;

/* instance methods */
- (id)initWithToken:(id)token variableName:(id)name;
- (BOOL)isResolved;
@end

#endif /* INFSentenceTokenWithContext_h */
