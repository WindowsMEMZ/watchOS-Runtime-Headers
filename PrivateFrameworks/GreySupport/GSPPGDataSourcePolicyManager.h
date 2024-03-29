//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSPPGDataSourcePolicyManager_h
#define GSPPGDataSourcePolicyManager_h
@import Foundation;

#include "GSApplicationMonitor.h"

@protocol CSLSSystemStateInterface;

@interface GSPPGDataSourcePolicyManager : NSObject

@property (retain, nonatomic) GSApplicationMonitor *healthStudyAppMonitor;
@property (retain, nonatomic) GSApplicationMonitor *healthStudyDistributionAppMonitor;
@property (retain, nonatomic) GSApplicationMonitor *userStudyAppMonitor;
@property (retain, nonatomic) NSObject<CSLSSystemStateInterface> *depthStateMonitor;
@property (readonly, nonatomic) BOOL ppgDataSourceAllowed;
@property (nonatomic) BOOL enrolledInHealthStudy;
@property (nonatomic) BOOL overrideAllowPPGDataSource;
@property (nonatomic) BOOL userDisabledPPGInSettings;
@property (nonatomic) BOOL quickActionsV2EnabledExclusively;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
@end

#endif /* GSPPGDataSourcePolicyManager_h */
