//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFUserAccessCode_h
#define _MKFUserAccessCode_h
@import Foundation;

#include "_MKFHomeAccessCode.h"
#include "HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h"
#include "MKFHome-Protocol.h"
#include "MKFUser-Protocol.h"
#include "MKFUserAccessCode-Protocol.h"
#include "MKFUserAccessCodeDatabaseID.h"
#include "MKFUserAccessCodePrivateExtensions-Protocol.h"

@class NSDate, NSString, NSUUID;

@interface _MKFUserAccessCode : _MKFHomeAccessCode<HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUserAccessCode, MKFUserAccessCodePrivateExtensions>

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) _MKFUser *user;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFUser> *user;
@property (readonly, copy, nonatomic) MKFUserAccessCodeDatabaseID *databaseID;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;
+ (Class)cd_modelClass;
+ (id)homeRelation;
+ (id)backingModelProtocol;

/* instance methods */
- (id)castIfUserAccessCode;
@end

#endif /* _MKFUserAccessCode_h */
