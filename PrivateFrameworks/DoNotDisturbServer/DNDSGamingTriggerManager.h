//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSGamingTriggerManager_h
#define DNDSGamingTriggerManager_h
@import Foundation;

#include "DNDSBiomeTriggerManager-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol DNDSGamingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource, OS_dispatch_queue;

@interface DNDSGamingTriggerManager : NSObject<DNDSBiomeTriggerManager> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_biomeQueue;
  NSMutableDictionary *_sinks;
}

@property (weak, nonatomic) NSObject<DNDSGamingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)refresh;
- (void)_refreshWithMode:(id)mode event:(id)event;
- (void)_configureTriggerWithMode:(id)mode;
- (BOOL)_featureEnabled;
@end

#endif /* DNDSGamingTriggerManager_h */
