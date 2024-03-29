//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPQuotedTextViewStyle_h
#define LPQuotedTextViewStyle_h
@import Foundation;

#include "LPTextViewStyle.h"
#include "LPTextViewStyle.h"
#include "NSCopying-Protocol.h"

@class UIFont;

@interface LPQuotedTextViewStyle : LPTextViewStyle<NSCopying>

@property (retain, nonatomic) UIFont *longPullQuoteFont;
@property (nonatomic) unsigned int maximumLinesToConsiderShort;
@property (nonatomic) BOOL showQuoteIndicator;
@property (nonatomic) BOOL showCharacterLimitIndicator;
@property (readonly, retain, nonatomic) LPTextViewStyle *characterLimitIndicatorStyle;

/* instance methods */
- (id)initWithPlatform:(long long)platform sizeClass:(unsigned long long)class fontScalingFactor:(double)factor;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)adjustedForString:(id)string;
@end

#endif /* LPQuotedTextViewStyle_h */
