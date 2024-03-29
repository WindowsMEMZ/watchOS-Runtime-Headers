//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDModifyRecordZonesOperation_h
#define CKDModifyRecordZonesOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"
#include "CKDPCSKeySyncCoreAnalytics.h"

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
  /* instance variables */
  BOOL _hasZoneSaves;
  BOOL _hasZoneDeletes;
}

@property (@dynamic, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID;
@property (nonatomic) BOOL allowDefaultZoneSave;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) BOOL dontFetchFromServer;
@property (nonatomic) BOOL didSynchronizeUserKeyRegistry;
@property (retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;
@property (retain, @dynamic, nonatomic) NSObject<CKModifyRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

/* class methods */
+ (id)nameForState:(unsigned long long)state;
+ (long long)isPredominatelyDownload;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)relevantZoneIDs;
- (BOOL)supportsClearAssetEncryption;
- (void)_synchronizeUserKeyRegistryIfNeeded;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_sendErrorForFailedZones;
- (void)_handleRecordZoneSaved:(id)saved responseCode:(id)code serverCapabilities:(unsigned long long)capabilities expirationDate:(id)date expired:(BOOL)expired;
- (void)_handleRecordZoneDeleted:(id)deleted responseCode:(id)code;
- (BOOL)_saveZonesToServer;
- (int)operationType;
- (BOOL)isOperationType:(int)type;
- (void)_createNewPCSForZone:(id)zone completionHandler:(id /* block */)handler;
- (void)_fetchPCSDataForZone:(id)zone fromServer:(BOOL)server;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)server;
- (void)_checkAndPrepareZones;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)error;
@end

#endif /* CKDModifyRecordZonesOperation_h */
