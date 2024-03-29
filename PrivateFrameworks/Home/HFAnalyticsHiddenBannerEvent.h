//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAnalyticsHiddenBannerEvent_h
#define HFAnalyticsHiddenBannerEvent_h
@import Foundation;

#include "HFAnalyticsEvent.h"

@class NSNumber, NSString;

@interface HFAnalyticsHiddenBannerEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *hiddenBannerItemClassName;
@property (retain, nonatomic) NSString *tappedBannerItemClassName;
@property (retain, nonatomic) NSNumber *hiddenBannerCount;

/* instance methods */
- (id)initWithData:(id)data;
- (id)payload;
@end

#endif /* HFAnalyticsHiddenBannerEvent_h */
