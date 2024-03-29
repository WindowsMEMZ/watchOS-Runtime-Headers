//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFZone_h
#define _MKFZone_h
@import Foundation;

#include "_MKFModel.h"
#include "HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h"
#include "MKFHome-Protocol.h"
#include "MKFZone-Protocol.h"
#include "MKFZoneDatabaseID.h"
#include "MKFZonePrivateExtensions-Protocol.h"

@class NSArray, NSDate, NSSet, NSString, NSUUID;

@interface _MKFZone : _MKFModel<HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFZone, MKFZonePrivateExtensions>

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, @dynamic, nonatomic) NSUUID *modelID;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (retain, @dynamic, nonatomic) _MKFHome *home;
@property (retain, @dynamic, nonatomic) NSSet *rooms_;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFHome> *home;
@property (readonly, retain, nonatomic) NSArray *rooms;
@property (readonly, copy, nonatomic) MKFZoneDatabaseID *databaseID;
@property (readonly, copy, @dynamic, nonatomic) NSUUID *modelID;
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
- (id)castIfZone;
- (void)addRoomsObject:(id)object;
- (void)removeRoomsObject:(id)object;
@end

#endif /* _MKFZone_h */
