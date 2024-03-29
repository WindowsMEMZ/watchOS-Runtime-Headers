//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessoryProfile_h
#define HMAccessoryProfile_h
@import Foundation;

#include "HMAccessory.h"
#include "HMObjectMerge-Protocol.h"
#include "_HMAccessoryProfile.h"

@class NSArray, NSString, NSUUID;

@interface HMAccessoryProfile : NSObject<HMObjectMerge>

@property (readonly, nonatomic) _HMAccessoryProfile *accessoryProfile;
@property (readonly, copy, @dynamic, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccessoryProfile:(id)profile;
- (BOOL)mergeFromNewObject:(id)object;
- (BOOL)isEqual:(id)equal;
- (void)handleRuntimeStateUpdate:(id)update;
- (void)recomputeAssistantIdentifier;
- (id)assistantIdentifier;
- (void)refreshStateWithCompletionHandler:(id /* block */)handler;
@end

#endif /* HMAccessoryProfile_h */
