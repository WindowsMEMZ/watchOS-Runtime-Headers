//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKSleepDurationAmountContext_h
#define _HKSleepDurationAmountContext_h
@import Foundation;

#include "HKDisplayType.h"
#include "HKDisplayTypeContextItem.h"
#include "HKInteractiveChartOverlayViewController.h"
#include "HKOverlayContext-Protocol.h"
#include "HKOverlaySleepRoomContextChangeDelegate-Protocol.h"

@class NSString;

@interface _HKSleepDurationAmountContext : NSObject<HKOverlayContext>

@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly, weak, nonatomic) NSObject<HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBaseDisplayType:(id)type overlayChartController:(id)controller contextChangeDelegate:(id)delegate;
- (id)_contextItemWithAmountString:(id)string;
- (id)_daysWithSleepDataFromChartPoints:(id)points;
- (id)_amountStringFromCounts:(id)counts timeScope:(long long)scope;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)scope;
- (void)updateContextItemForDateInterval:(id)interval overlayController:(id)controller timeScope:(long long)scope resolution:(long long)resolution completion:(id /* block */)completion;
- (long long)resolutionForTimeScope:(long long)scope traitResolution:(long long)resolution;
- (id)contextItemForLastUpdate;
- (id)baseDisplayTypeForOverlay:(long long)overlay;
- (BOOL)unselectedContextShouldUseContextBaseType;
@end

#endif /* _HKSleepDurationAmountContext_h */
