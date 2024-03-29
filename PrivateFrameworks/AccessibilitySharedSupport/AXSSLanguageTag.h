//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSLanguageTag_h
#define AXSSLanguageTag_h
@import Foundation;

#include "AXSSDialectMap.h"

@class NSMutableOrderedSet, NSString;

@interface AXSSLanguageTag : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } taggedRange;
@property (readonly, copy, nonatomic) NSString *taggedString;
@property (nonatomic) long long offsetToInitialLocation;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) AXSSDialectMap *dialect;
@property (readonly, nonatomic) BOOL createdFromNewline;
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects;

/* instance methods */
- (id)initWithDialect:(id)dialect range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range content:(id)content createdFromNewline:(BOOL)newline;
- (id)description;
- (void)addPredictedSecondaryDialects:(id)dialects;
@end

#endif /* AXSSLanguageTag_h */
