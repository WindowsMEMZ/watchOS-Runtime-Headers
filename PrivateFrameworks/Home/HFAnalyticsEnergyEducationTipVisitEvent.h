//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAnalyticsEnergyEducationTipVisitEvent_h
#define HFAnalyticsEnergyEducationTipVisitEvent_h
@import Foundation;

#include "HFAnalyticsEvent.h"

@class NSNumber;

@interface HFAnalyticsEnergyEducationTipVisitEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *viewState;

/* instance methods */
- (id)initWithData:(id)data;
- (id)payload;
@end

#endif /* HFAnalyticsEnergyEducationTipVisitEvent_h */
