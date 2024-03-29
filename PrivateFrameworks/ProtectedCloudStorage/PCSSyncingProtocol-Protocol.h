//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 976.40.4.0.0
//
#ifndef PCSSyncingProtocol_Protocol_h
#define PCSSyncingProtocol_Protocol_h
@import Foundation;

@protocol PCSSyncingProtocol 
/* instance methods */
- (void)getAllClients:(id /* block */)clients;
- (void)syncKeys:(id)keys withReply:(id /* block */)reply;
- (void)requestKeys:(id)keys withReply:(id /* block */)reply;
- (void)triggerDaily:(id)daily withReply:(id /* block */)reply;
- (void)triggerWatchSyncing:(id /* block */)syncing;
- (void)triggerSyncingWithEscrowProxy:(id)proxy dsid:(id)dsid publicKeys:(id)keys accountIdentifier:(id)identifier settingsKeyExpirationDate:(id)date settingsKeyIdentifier:(id)identifier complete:(id /* block */)complete;
- (void)setupIdentitiesForAccount:(id)account withParameters:(id)parameters optional:(BOOL)optional;
- (void)migrateToiCDPForAccount:(id)account withParameters:(id)parameters complete:(id /* block */)complete;
- (void)enableWalrusForAccount:(id)account withParameters:(id)parameters complete:(id /* block */)complete;
- (void)disableWalrusForAccount:(id)account withParameters:(id)parameters complete:(id /* block */)complete;
- (void)createIdentity:(id)identity dsid:(id)dsid roll:(BOOL)roll sync:(BOOL)sync forceSync:(BOOL)sync complete:(id /* block */)complete;
- (void)manateeStatus:(id)status complete:(id /* block */)complete;
- (void)keyRollPending:(id)pending complete:(id /* block */)complete;
- (void)fetchAllDeviceKeys:(id)keys withReply:(id /* block */)reply;
- (void)triggerUserRegistryCheck:(id)check withReply:(id /* block */)reply;
- (void)mobileBackupRecordIDsWithReply:(id /* block */)reply;
- (void)userDBBackupRecordIDsWithReply:(id /* block */)reply;
- (void)restoreMobileBackup:(BOOL)backup dsid:(id)dsid withReply:(id /* block */)reply;
- (void)fetchStats:(id /* block */)stats;
- (void)mobileBackupStatus:(id /* block */)status;
- (void)triggerKeyRolling;
- (void)checkForBackupStateChange;
- (BOOL)shouldRoll;
- (void)getHealthSummary:(id /* block */)summary;
@end

#endif /* PCSSyncingProtocol_Protocol_h */
