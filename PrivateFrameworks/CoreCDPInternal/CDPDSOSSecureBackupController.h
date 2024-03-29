//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDSOSSecureBackupController_h
#define CDPDSOSSecureBackupController_h
@import Foundation;

#include "CDPDSecureBackupConfiguration.h"
#include "CDPDSecureBackupControl-Protocol.h"
#include "CDPDSecureBackupDelegate-Protocol.h"
#include "CDPDSecureBackupProxy-Protocol.h"

@class CDPContext, NSDictionary, NSString;
@protocol CDPStateUIProviderInternal;

@interface CDPDSOSSecureBackupController : NSObject<CDPDSecureBackupControl>

@property (retain, nonatomic) NSDictionary *cachedAccountInfo;
@property (weak, nonatomic) NSObject<CDPDSecureBackupDelegate> *delegate;
@property (retain, nonatomic) CDPDSecureBackupConfiguration *configuration;
@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) NSObject<CDPStateUIProviderInternal> *uiProvider;
@property (retain, nonatomic) NSObject<CDPDSecureBackupProxy> *secureBackupProxy;
@property (nonatomic) BOOL fakeNearlyDepletedRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_sanitizedInfoDictionary:(id)dictionary;

/* instance methods */
- (id)initWithContext:(id)context uiProvider:(id)provider delegate:(id)delegate;
- (void)synchronizeKeyValueStoreWithCompletion:(id /* block */)completion;
- (void)accountInfoWithCompletion:(id /* block */)completion;
- (void)clearAccountInfoCache;
- (id)_accountInfo:(id *)info;
- (void)isEligibleForCDPWithCompletion:(id /* block */)completion;
- (void)backupRecordsArePresentWithCompletion:(id /* block */)completion;
- (void)getBackupRecordDevicesWithOptionForceFetch:(BOOL)fetch completion:(id /* block */)completion;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(BOOL)records completion:(id /* block */)completion;
- (id)_dateWithSecureBackupDateString:(id)string;
- (void)checkForExistingRecord:(id /* block */)record;
- (void)checkForExistingRecordWithPeerId:(id)id completion:(id /* block */)completion;
- (void)checkForExistingRecordMatchingPredicate:(id)predicate forceFetch:(BOOL)fetch completion:(id /* block */)completion;
- (id)_clientMetadataWithSecretType:(unsigned long long)type length:(unsigned long long)length;
- (void)performEscrowRecoveryWithRecoveryContext:(id)context completion:(id /* block */)completion;
- (void)recoverSecureBackupWithContext:(id)context completion:(id /* block */)completion;
- (id)_recoverBackupDictionaryWithContext:(id)context error:(id *)error;
- (id)_recoveryInfoDictionaryFromContext:(id)context;
@end

#endif /* CDPDSOSSecureBackupController_h */
