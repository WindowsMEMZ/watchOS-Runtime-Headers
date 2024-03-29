//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKRecordFetchAggregatorOperationInfo_h
#define CKRecordFetchAggregatorOperationInfo_h
@import Foundation;

#include "CKDatabaseOperationInfo.h"

@class NSDictionary, NSSet;

@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo

@property (nonatomic) BOOL fetchAssetContents;
@property (nonatomic) BOOL fetchMergeableValues;
@property (nonatomic) BOOL preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL forceDecryptionAttempt;

/* instance methods */
- (id)init;
@end

#endif /* CKRecordFetchAggregatorOperationInfo_h */
