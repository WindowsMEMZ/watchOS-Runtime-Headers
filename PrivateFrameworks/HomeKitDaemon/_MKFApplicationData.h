//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFApplicationData_h
#define _MKFApplicationData_h
@import Foundation;

#include "_MKFModel.h"
#include "HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h"
#include "MKFAccessory-Protocol.h"
#include "MKFActionSet-Protocol.h"
#include "MKFApplicationData-Protocol.h"
#include "MKFApplicationDataDatabaseID.h"
#include "MKFApplicationDataPrivateExtensions-Protocol.h"
#include "MKFHome-Protocol.h"
#include "MKFRoom-Protocol.h"
#include "MKFService-Protocol.h"
#include "MKFServiceGroup-Protocol.h"

@class NSDate, NSDictionary, NSString, NSUUID;

@interface _MKFApplicationData : _MKFModel<HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFApplicationData, MKFApplicationDataPrivateExtensions>

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) NSDictionary *appDataDictionary;
@property (copy, @dynamic, nonatomic) NSUUID *modelID;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (retain, @dynamic, nonatomic) _MKFAccessory *accessory;
@property (retain, @dynamic, nonatomic) _MKFActionSet *actionSet;
@property (retain, @dynamic, nonatomic) _MKFHome *home;
@property (retain, @dynamic, nonatomic) _MKFRoom *room;
@property (retain, @dynamic, nonatomic) _MKFService *service;
@property (retain, @dynamic, nonatomic) _MKFServiceGroup *serviceGroup;
@property (retain, @dynamic, nonatomic) NSDictionary *appDataDictionary;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFAccessory> *accessory;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFActionSet> *actionSet;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFHome> *home;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFRoom> *room;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFService> *service;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFServiceGroup> *serviceGroup;
@property (readonly, copy, nonatomic) MKFApplicationDataDatabaseID *databaseID;
@property (readonly, copy, @dynamic, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;
+ (Class)cd_modelClass;
+ (id)appDataDictionaryForContainer:(id)container;
+ (void)setAppDataDictionary:(id)dictionary forContainer:(id)container;
+ (id)modelIDForContainerUUID:(id)uuid;
+ (id)modelIDForParentRelationshipTo:(id)to;
+ (id)castIfApplicationDataContainer:(id)container;
+ (id)hmd_parentAttributeKeyPaths;
+ (id)backingModelProtocol;

/* instance methods */
- (BOOL)validateForInsertOrUpdate:(id *)update;
- (BOOL)hasValidContainer;
- (id)castIfApplicationData;
@end

#endif /* _MKFApplicationData_h */
