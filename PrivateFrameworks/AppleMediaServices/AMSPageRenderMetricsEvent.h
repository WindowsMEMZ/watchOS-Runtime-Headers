//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPageRenderMetricsEvent_h
#define AMSPageRenderMetricsEvent_h
@import Foundation;

#include "AMSMetricsEvent.h"

@class NSNumber, NSString;

@interface AMSPageRenderMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSNumber *pageAppearTime;
@property (retain, nonatomic) NSNumber *pageEndTime;
@property (retain, nonatomic) NSNumber *pageInterruptTime;
@property (retain, nonatomic) NSNumber *pageReappearTime;
@property (retain, nonatomic) NSNumber *pageRequestTime;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSNumber *pageUserInteractiveTime;
@property (retain, nonatomic) NSString *pageUrl;
@property (retain, nonatomic) NSString *placement;
@property (retain, nonatomic) NSNumber *resourceRequestEndTime;
@property (retain, nonatomic) NSNumber *resourceRequestStartTime;

/* instance methods */
- (id)init;
@end

#endif /* AMSPageRenderMetricsEvent_h */
