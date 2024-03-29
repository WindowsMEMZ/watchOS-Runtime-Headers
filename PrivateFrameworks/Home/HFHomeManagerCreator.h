//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFHomeManagerCreator_h
#define HFHomeManagerCreator_h
@import Foundation;

#include "HFHomeConfigurationStatus-Protocol.h"
#include "HFHomeManagerCreatorDelegate-Protocol.h"

@class HMHomeManagerConfiguration;

@interface HFHomeManagerCreator : NSObject

@property (nonatomic) long long hostProcessType;
@property (nonatomic) unsigned long long creationPolicy;
@property (retain, nonatomic) NSObject<HFHomeConfigurationStatus> *homeStatus;
@property (weak, nonatomic) NSObject<HFHomeManagerCreatorDelegate> *delegate;
@property (copy, nonatomic) HMHomeManagerConfiguration *configuration;

/* class methods */
+ (BOOL)allowCreationInTest;
+ (void)setAllowCreationInTest:(BOOL)test;

/* instance methods */
- (id)initWithHostProcess:(long long)process configuration:(id)configuration homeStatus:(id)status delegate:(id)delegate;
- (id)init;
- (BOOL)canCreateHomeManager;
- (id)createHomeManagerIfNeeded;
- (id)_createHomeManager;
- (void)_createHomeManagerOnQueue;
- (BOOL)_shouldCreateHomeManager;
- (unsigned long long)_homeManagerCreationPolicy;
@end

#endif /* HFHomeManagerCreator_h */
