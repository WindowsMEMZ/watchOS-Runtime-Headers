//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPAnalyticsCompoundEventMatcher_h
#define CPAnalyticsCompoundEventMatcher_h
@import Foundation;

#include "CPAnalyticsEventMatcher.h"

@class NSArray;

@interface CPAnalyticsCompoundEventMatcher : CPAnalyticsEventMatcher

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *subEventMatchers;

/* class methods */
+ (id)andEventMatcherWithSubEventMatchers:(id)matchers;
+ (id)orEventMatcherWithSubEventMatchers:(id)matchers;
+ (id)notEventMatcherWithSubEventMatcher:(id)matcher;

/* instance methods */
- (id)init;
- (id)initWithType:(unsigned long long)type subEventMatchers:(id)matchers;
- (BOOL)doesMatch:(id)match;
@end

#endif /* CPAnalyticsCompoundEventMatcher_h */
