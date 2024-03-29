//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NSMutableAttributedString_CLKTextProvider_h
#define NSMutableAttributedString_CLKTextProvider_h
@import Foundation;

#include "CLKClockTimerToken.h"
#include "CLKComplicationTritiumCopyable-Protocol.h"
#include "CLKTextProviderCache.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIColor;

@interface NSMutableAttributedString (CLKTextProvider)
/* instance methods */
- (void)addAttributesPreservingOriginals:(id)originals range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
@end

#endif /* NSMutableAttributedString_CLKTextProvider_h */
