//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _HMAccessorySettingGroup_h
#define _HMAccessorySettingGroup_h
@import Foundation;

#include "HMAccessorySettings.h"
#include "HMFLogging-Protocol.h"
#include "HMFMerging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_HMAccessorySettingGroupDelegate-Protocol.h"
#include "_HMContext.h"

@class NSArray, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface _HMAccessorySettingGroup : NSObject<HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) HMAccessorySettings *accessorySettings;
@property (retain, nonatomic) _HMContext *context;
@property (weak) NSObject<_HMAccessorySettingGroupDelegate> *delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)shortDescription;
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)supportedSettingsClasses;
+ (id)supportedGroupsClasses;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name;
- (BOOL)isEqual:(id)equal;
- (id)shortDescription;
- (id)descriptionWithPointer:(BOOL)pointer;
- (id)clientQueue;
- (void)configureWithAccessorySettings:(id)settings context:(id)context;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (void)resetSettings;
- (void)addSetting:(id)setting;
- (void)notifyDelegateOfAddedSetting:(id)setting;
- (void)removeSetting:(id)setting;
- (void)notifyDelegateOfRemovedSetting:(id)setting;
- (void)resetGroups;
- (void)addGroup:(id)group;
- (void)notifyDelegateOfAddedGroup:(id)group;
- (void)removeGroup:(id)group;
- (void)notifyDelegateOfRemovedGroup:(id)group;
- (id)logIdentifier;
- (BOOL)mergeObject:(id)object;
- (BOOL)mergeSettings:(id)settings;
- (BOOL)mergeGroups:(id)groups;
- (id)messageDestination;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _HMAccessorySettingGroup_h */
