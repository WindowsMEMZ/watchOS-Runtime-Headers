//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFStringCharacteristic_h
#define _MKFStringCharacteristic_h
@import Foundation;

#include "_MKFCharacteristic.h"
#include "HMDCharacteristicMetadata.h"
#include "MKFHome-Protocol.h"
#include "MKFService-Protocol.h"
#include "MKFStringCharacteristic-Protocol.h"
#include "MKFStringCharacteristicDatabaseID.h"
#include "MKFStringCharacteristicPrivateExtensions-Protocol.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@interface _MKFStringCharacteristic : _MKFCharacteristic<MKFStringCharacteristic, MKFStringCharacteristicPrivateExtensions>

@property (copy, @dynamic, nonatomic) NSNumber *maximumLength;
@property (copy, @dynamic, nonatomic) NSNumber *maximumLength;
@property (readonly, copy, nonatomic) MKFStringCharacteristicDatabaseID *databaseID;
@property (readonly) NSObject<MKFHome> *home;
@property (retain, nonatomic) NSData *authorizationData;
@property (copy, nonatomic) NSString *format;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSUUID *type;
@property (copy, nonatomic) NSString *units;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *notificationRegistrations;
@property (readonly, retain, nonatomic) NSObject<MKFService> *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;
@property (readonly, copy) NSDictionary *pr_dictionaryRepresentation;

/* class methods */
+ (id)fetchRequest;
+ (id)backingModelProtocol;

/* instance methods */
- (void)pr_updateWithHAPMetadata:(id)hapmetadata;
- (id)castIfStringCharacteristic;
@end

#endif /* _MKFStringCharacteristic_h */
