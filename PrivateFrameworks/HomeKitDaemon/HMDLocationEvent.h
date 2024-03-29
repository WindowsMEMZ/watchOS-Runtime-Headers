//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLocationEvent_h
#define HMDLocationEvent_h
@import Foundation;

#include "HMDEvent.h"
#include "HMDLocationDelegate-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CLRegion, NSString, NSUUID;

@interface HMDLocationEvent : HMDEvent<HMDLocationDelegate, NSSecureCoding>

@property (retain, nonatomic) CLRegion *region;
@property (readonly, copy, nonatomic) CLRegion *uniqueRegion;
@property (retain, nonatomic) NSUUID *userUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithModel:(id)model home:(id)home;
- (BOOL)isActive;
- (id)emptyModelObject;
- (void)_registerForMessages;
- (void)fmfStatusUpdateNotification:(id)notification;
- (BOOL)doesThisTargetCurrentUser;
- (void)checkFMFStatus:(id)fmfstatus;
- (void)_handleUpdateRequest:(id)request;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)trigger;
- (id)dumpState;
- (id)createPayload;
- (BOOL)isCompatibleWithEvent:(id)event;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)modelObjectWithChangeType:(unsigned long long)type;
- (void)_transactionObjectUpdated:(id)updated newValues:(id)values message:(id)message;
- (void)_transactionObjectRemoved:(id)removed message:(id)message;
- (BOOL)_activate:(unsigned long long)_activate completionHandler:(id /* block */)handler;
- (void)locationEventOccured;
- (void)_handleLocationEventOccured:(id)occured;
- (void)informLocationEventOccuranceToResident;
- (void)didEnterRegion:(id)region;
- (void)didExitRegion:(id)region;
- (id)analyticsTriggerEventData;
@end

#endif /* HMDLocationEvent_h */
