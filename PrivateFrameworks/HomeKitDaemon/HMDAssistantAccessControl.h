//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAssistantAccessControl_h
#define HMDAssistantAccessControl_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAssistantAccessControlModel.h"
#include "HMDBackingStoreObjectProtocol-Protocol.h"
#include "HMDUser.h"
#include "HMDUserAccessorySettingsDataController-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFObject-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantAccessControl : HMFObject<HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMutableSet *_appleMediaAccessories;
  NSMutableSet *_hapAccessoryIdentifiers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long cachedHash;
@property (weak, nonatomic) NSObject<HMDUserAccessorySettingsDataController> *settingsController;
@property (readonly, copy) NSUUID *modelID;
@property (readonly, copy) HMDAssistantAccessControlModel *model;
@property unsigned long long options;
@property BOOL activityNotificationsEnabledForPersonalRequests;
@property (weak) HMDUser *user;
@property (readonly) BOOL enabled;
@property (readonly, copy) NSArray *accessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

/* class methods */
+ (BOOL)isAccessorySupported:(id)supported;
+ (id)accessControlWithMessage:(id)message user:(id)user currentAccessories:(id)accessories error:(id *)error;
+ (id)modelIDNamespace;
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithUser:(id)user model:(id)model;
- (id)initWithUser:(id)user appleAccessories:(id)accessories enabled:(BOOL)enabled;
- (id)initWithUser:(id)user appleAccessories:(id)accessories hapAccessoryIdentifiers:(id)identifiers enabled:(BOOL)enabled activityNotificationsEnabledForPersonalRequests:(BOOL)requests;
- (id)initWithUser:(id)user;
- (void)configureWithSettingsController:(id)controller;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEnabled;
- (BOOL)areActivityNotificationsEnabledForPersonalRequests;
- (void)setHapAccessoryIdentifiers:(id)identifiers;
- (void)setAppleMediaAccessories:(id)accessories;
- (void)addAccessory:(id)accessory;
- (void)removeAccessory:(id)accessory;
- (void)handleRemovedAccessory:(id)accessory;
- (void)removeAccessoriesAddedByOldController:(id)controller;
- (void)notifyClientOfUpdateWithMessage:(id)message;
- (id)transactionWithObjectChangeType:(unsigned long long)type;
- (void)transactionObjectUpdated:(id)updated newValues:(id)values message:(id)message;
- (void)transactionObjectRemoved:(id)removed message:(id)message;
- (id)assistantAccessControlModelWithRemovedAccessories:(id)accessories;
- (id)logIdentifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDAssistantAccessControl_h */
