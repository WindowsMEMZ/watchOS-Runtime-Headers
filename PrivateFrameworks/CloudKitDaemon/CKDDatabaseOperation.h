//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDDatabaseOperation_h
#define CKDDatabaseOperation_h
@import Foundation;

#include "CKDOperation.h"

@interface CKDDatabaseOperation : CKDOperation

@property long long databaseScope;

/* instance methods */
- (void)_encryptMergeableDeltas:(id)deltas completionHandler:(id /* block */)handler;
- (void)setPCSData:(id)pcsdata forFetchedRecordID:(id)id;
- (void)setPCSData:(id)pcsdata forFetchedZoneID:(id)id;
- (void)setPCSData:(id)pcsdata forFetchedShareID:(id)id;
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (void)spawnAndRunOperationOfClass:(Class)class operationInfo:(id)info spawnQueue:(id)queue container:(id)container operationConfigurationBlock:(id /* block */)block;
- (id)CKStatusReportProperties;
- (id)analyticsPayload;
- (BOOL)supportsClearAssetEncryption;
@end

#endif /* CKDDatabaseOperation_h */
