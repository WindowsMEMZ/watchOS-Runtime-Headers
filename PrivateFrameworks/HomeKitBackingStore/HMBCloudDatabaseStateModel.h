//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBCloudDatabaseStateModel_h
#define HMBCloudDatabaseStateModel_h
@import Foundation;

#include "HMBCloudStateModel.h"
#include "HMBCloudID.h"

@class CKDatabase, NAFuture, NSData, NSDate, NSSet;

@interface HMBCloudDatabaseStateModel : HMBCloudStateModel

@property (retain, @dynamic, nonatomic) NSData *subscriptionsData;
@property (retain, @dynamic, nonatomic) HMBCloudID *cloudID;
@property (retain, @dynamic, nonatomic) NSDate *lastAdministrativeFetch;
@property (copy, nonatomic) NSSet *subscriptions;
@property (weak, nonatomic) CKDatabase *database;
@property (retain) NAFuture *queuedCloudPullFuture;

/* class methods */
+ (id)hmbProperties;

/* instance methods */
- (id)initWithModelID:(id)id parentModelID:(id)id;
@end

#endif /* HMBCloudDatabaseStateModel_h */
