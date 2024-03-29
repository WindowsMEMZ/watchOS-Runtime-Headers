//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutPluginDaemonExtension_h
#define HDWorkoutPluginDaemonExtension_h
@import Foundation;

#include "HDAlertSuppressor.h"
#include "HDAppLauncher.h"
#include "HDBackgroundWorkoutRunner.h"
#include "HDCarouselServicesManager.h"
#include "HDCoreMotionWorkoutInterface.h"
#include "HDDaemon.h"
#include "HDHealthDaemonExtension-Protocol.h"
#include "HDHeartRateRecoveryManager.h"

@class NSString;

@interface HDWorkoutPluginDaemonExtension : NSObject<HDHealthDaemonExtension>

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) HDAlertSuppressor *alertSuppressor;
@property (readonly, nonatomic) HDAppLauncher *appLauncher;
@property (readonly, nonatomic) HDBackgroundWorkoutRunner *backgroundWorkoutRunner;
@property (readonly, nonatomic) HDCarouselServicesManager *carouselServicesManager;
@property (readonly, nonatomic) HDCoreMotionWorkoutInterface *coreMotionWorkoutInterface;
@property (readonly, nonatomic) HDHeartRateRecoveryManager *heartRateRecoveryManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDaemon:(id)daemon;
@end

#endif /* HDWorkoutPluginDaemonExtension_h */
