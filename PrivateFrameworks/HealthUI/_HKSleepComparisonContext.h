//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKSleepComparisonContext_h
#define _HKSleepComparisonContext_h
@import Foundation;

#include "HKOverlayRoomStackedContext.h"
#include "HKOverlaySleepRoomContextChangeDelegate-Protocol.h"

@interface _HKSleepComparisonContext : HKOverlayRoomStackedContext

@property (readonly, weak, nonatomic) NSObject<HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;

/* instance methods */
- (id)initWithStackedSampleType:(id)type currentCalendarOverride:(id)override overlayChartController:(id)controller applicationItems:(id)items contextChangeDelegate:(id)delegate primarySleepDisplayType:(id)type;
- (void)overlayStateWillChange:(BOOL)change contextItem:(id)item chartController:(id)controller;
- (void)stackedOverlayStateWillChange:(BOOL)change contextItem:(id)item chartController:(id)controller;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (id)_generateSleepDistributionDisplayTypeForStackedSampleType:(id)type currentCalendarOverride:(id)override overlayChartController:(id)controller applicationItems:(id)items;
- (id)_defaultStackedInteractiveChartDisplayTypeForSampleType:(id)type overlayChartController:(id)controller applicationItems:(id)items formatterTimeScope:(long long)scope;
- (BOOL)_sampleTypeShouldUseSleepQuantityDistribution:(id)distribution;
@end

#endif /* _HKSleepComparisonContext_h */
