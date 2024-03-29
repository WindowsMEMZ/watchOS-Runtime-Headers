//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFEventTrigger_h
#define _MKFEventTrigger_h
@import Foundation;

#include "_MKFTrigger.h"
#include "HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h"
#include "MKFEventTrigger-Protocol.h"
#include "MKFEventTriggerDatabaseID.h"
#include "MKFEventTriggerPrivateExtensions-Protocol.h"
#include "MKFHome-Protocol.h"
#include "MKFUser-Protocol.h"

@class NSArray, NSData, NSDate, NSNumber, NSPredicate, NSSet, NSString, NSUUID;

@interface _MKFEventTrigger : _MKFTrigger<HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventTrigger, MKFEventTriggerPrivateExtensions>

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) NSPredicate *evaluationCondition;
@property (copy, @dynamic, nonatomic) NSNumber *executeOnce;
@property (copy, @dynamic, nonatomic) NSNumber *recurrenceDays;
@property (retain, @dynamic, nonatomic) NSData *recurrences;
@property (retain, @dynamic, nonatomic) NSSet *events_;
@property (retain, @dynamic, nonatomic) NSData *recurrences;
@property (retain, @dynamic, nonatomic) NSPredicate *evaluationCondition;
@property (copy, @dynamic, nonatomic) NSNumber *executeOnce;
@property (copy, @dynamic, nonatomic) NSNumber *recurrenceDays;
@property (readonly, retain, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) MKFEventTriggerDatabaseID *databaseID;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) NSArray *actionSets;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (retain, nonatomic) NSObject<MKFUser> *owner;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;
+ (Class)cd_modelClass;
+ (id)modelIDForParentRelationshipTo:(id)to;
+ (id)homeRelation;
+ (id)backingModelProtocol;

/* instance methods */
- (void)residentSyncContextualizeConditions:(id)conditions userContext:(id)context;
- (id)residentSyncAttributeValueForKey:(id)key userContext:(id)context;
- (void)awakeFromFetch;
- (id)castIfEventTrigger;
- (id)materializeOrCreateEventsRelationOfType:(id)type modelID:(id)id createdNew:(BOOL *)new;
- (id)createEventsRelationOfType:(id)type modelID:(id)id;
- (id)materializeOrCreateEventsRelationOfTypeCalendarEventWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createEventsRelationOfTypeCalendarEventWithModelID:(id)id;
- (id)findEventsRelationOfTypeCalendarEventWithModelID:(id)id;
- (id)materializeOrCreateEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)id;
- (id)findEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)id;
- (id)materializeOrCreateEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)id;
- (id)findEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)id;
- (id)materializeOrCreateEventsRelationOfTypeDurationEventWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createEventsRelationOfTypeDurationEventWithModelID:(id)id;
- (id)findEventsRelationOfTypeDurationEventWithModelID:(id)id;
- (id)materializeOrCreateEventsRelationOfTypeLocationEventWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createEventsRelationOfTypeLocationEventWithModelID:(id)id;
- (id)findEventsRelationOfTypeLocationEventWithModelID:(id)id;
- (id)materializeOrCreateEventsRelationOfTypePresenceEventWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createEventsRelationOfTypePresenceEventWithModelID:(id)id;
- (id)findEventsRelationOfTypePresenceEventWithModelID:(id)id;
- (id)materializeOrCreateEventsRelationOfTypeSignificantTimeEventWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createEventsRelationOfTypeSignificantTimeEventWithModelID:(id)id;
- (id)findEventsRelationOfTypeSignificantTimeEventWithModelID:(id)id;
@end

#endif /* _MKFEventTrigger_h */
