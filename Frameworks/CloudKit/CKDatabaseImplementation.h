//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDatabaseImplementation_h
#define CKDatabaseImplementation_h
@import Foundation;

#include "CKContainerImplementation.h"

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CKDatabaseImplementation : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

/* instance methods */
- (id)initInternalWithContainerImplementation:(id)implementation scope:(long long)scope;
- (id)CKPropertiesDescription;
- (id)description;
- (void)_addOperation:(id)operation wrappingDatabase:(id)database convenienceConfiguration:(id)configuration isConvenience:(BOOL)convenience;
- (void)addOperation:(id)operation wrappingDatabase:(id)database convenienceConfiguration:(id)configuration;
- (unsigned long long)countAssetCacheItems;
- (void)clearAssetCache;
- (void)showAssetCache;
- (void)clearRecordCache;
- (void)clearAuthTokensForRecordWithID:(id)id;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)handler;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)handler;
- (void)clearCachesWithOptions:(unsigned long long)options completionHandler:(id /* block */)handler;
- (void)clearCacheEntriesForRecord:(id)record completionHandler:(id /* block */)handler;
- (void)clearCacheEntriesForZone:(id)zone completionHandler:(id /* block */)handler;
- (void)fetchPCSFromCacheForZoneWithID:(id)id completionHandler:(id /* block */)handler;
- (void)fetchPCSFromCacheForShareWithID:(id)id completionHandler:(id /* block */)handler;
- (void)fetchPCSFromCacheForRecordWithID:(id)id completionHandler:(id /* block */)handler;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (id)CKStatusReportArray;
- (void)_scheduleConvenienceOperation:(id)operation wrappingDatabase:(id)database convenienceConfiguration:(id)configuration;
- (void)fetchRecordWithID:(id)id wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)saveRecord:(id)record wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)deleteRecordWithID:(id)id wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)performQuery:(id)query inZoneWithID:(id)id wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)fetchAllRecordZonesWithWrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)fetchRecordZoneWithID:(id)id wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)saveRecordZone:(id)zone wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)deleteRecordZoneWithID:(id)id wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)saveSubscription:(id)subscription wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)deleteSubscriptionWithID:(id)id wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)fetchSubscriptionWithID:(id)id wrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)fetchAllSubscriptionsWithWrappingDatabase:(id)database convenienceConfiguration:(id)configuration completionHandler:(id /* block */)handler;
@end

#endif /* CKDatabaseImplementation_h */
