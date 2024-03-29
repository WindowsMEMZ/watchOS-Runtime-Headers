//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef DESTrialEventManager_h
#define DESTrialEventManager_h
@import Foundation;

#include "DESEventManager.h"

@interface DESTrialEventManager : DESEventManager
/* class methods */
+ (void)initialize;
+ (void)_sendTrialMetrics:(id)metrics dimensions:(id)dimensions factorsState:(id)state;
+ (void)sendEventTaskFetchedForBundleID:(id)id factorsState:(id)state;
+ (void)sendEventTaskScheduledStatusForBundleID:(id)id factorsState:(id)state success:(BOOL)success;
+ (void)sendEventTaskCompletedForBundleID:(id)id factorsState:(id)state duration:(float)duration error:(id)error;
@end

#endif /* DESTrialEventManager_h */
