//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDSecureBackupControl_Protocol_h
#define CDPDSecureBackupControl_Protocol_h
@import Foundation;

@protocol CDPDSecureBackupControl <NSObject>

@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) NSObject<CDPStateUIProviderInternal> *uiProvider;
@property (retain, nonatomic) NSObject<CDPDSecureBackupProxy> *secureBackupProxy;
@property (readonly, weak, nonatomic) NSObject<CDPDSecureBackupDelegate> *delegate;
@property (nonatomic) BOOL fakeNearlyDepletedRecords;

/* instance methods */
- (id)initWithContext:(id)context uiProvider:(id)provider delegate:(id)delegate;
- (id)init;
- (void)synchronizeKeyValueStoreWithCompletion:(id /* block */)completion;
- (void)isEligibleForCDPWithCompletion:(id /* block */)completion;
- (void)backupRecordsArePresentWithCompletion:(id /* block */)completion;
- (void)clearAccountInfoCache;
- (void)getBackupRecordDevicesWithOptionForceFetch:(BOOL)fetch completion:(id /* block */)completion;
- (void)recoverSecureBackupWithContext:(id)context completion:(id /* block */)completion;
- (void)performEscrowRecoveryWithRecoveryContext:(id)context completion:(id /* block */)completion;
- (void)checkForExistingRecord:(id /* block */)record;
- (void)checkForExistingRecordWithPeerId:(id)id completion:(id /* block */)completion;
- (void)checkForExistingRecordMatchingPredicate:(id)predicate forceFetch:(BOOL)fetch completion:(id /* block */)completion;
@optional
/* instance methods */
- (BOOL)supportsRecoveryKeyWithError:(id *)error;
@end

#endif /* CDPDSecureBackupControl_Protocol_h */
