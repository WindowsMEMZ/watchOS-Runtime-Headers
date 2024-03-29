//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPAnalyticsCoreDuetEventMatcher_h
#define CPAnalyticsCoreDuetEventMatcher_h
@import Foundation;

#include "CPAnalyticsEventMatcher.h"
#include "CPAnalyticsEventMatcher.h"

@class NSObject, NSString;

@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {
  /* instance variables */
  CPAnalyticsEventMatcher *_eventMatcher;
}

@property (readonly, nonatomic) NSString *datasetName;
@property (readonly, nonatomic) NSString *identifierPropertyName;
@property (readonly, nonatomic) NSString *subsetPropertyName;
@property (readonly, nonatomic) NSObject *subsetPropertyValue;
@property (readonly, nonatomic) BOOL matchNextEvent;

/* instance methods */
- (id)init;
- (id)initWithConfig:(id)config;
- (BOOL)doesMatch:(id)match;
@end

#endif /* CPAnalyticsCoreDuetEventMatcher_h */
