//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef OTClique_h
#define OTClique_h
@import Foundation;

#include "OTConfigurationContext.h"

@class NSString;

@interface OTClique : NSObject

@property (copy, nonatomic) NSString *cliqueMemberIdentifier;
@property (readonly, nonatomic) OTConfigurationContext *ctx;

/* class methods */
+ (BOOL)platformSupportsSOS;
+ (id)newFriendsWithContextData:(id)data error:(id *)error;
+ (id)newFriendsWithContextData:(id)data resetReason:(long long)reason error:(id *)error;
+ (BOOL)isCloudServicesAvailable;
+ (id)performEscrowRecoveryWithContextData:(id)data escrowArguments:(id)arguments error:(id *)error;
+ (id)fetchEscrowRecordsInternal:(id)internal error:(id *)error;
+ (id)findOptimalBottleIDsWithContextData:(id)data error:(id *)error;
+ (id)recoverWithContextData:(id)data bottleID:(id)id escrowedEntropy:(id)entropy error:(id *)error;
+ (void)setNewRecoveryKeyWithData:(id)data recoveryKey:(id)key reply:(id /* block */)reply;
+ (void)createCustodianRecoveryKey:(id)key uuid:(id)uuid reply:(id /* block */)reply;
+ (void)recoverOctagonUsingCustodianRecoveryKey:(id)key custodianRecoveryKey:(id)key reply:(id /* block */)reply;
+ (void)preflightRecoverOctagonUsingCustodianRecoveryKey:(id)key custodianRecoveryKey:(id)key reply:(id /* block */)reply;
+ (void)removeCustodianRecoveryKey:(id)key custodianRecoveryKeyUUID:(id)uuid reply:(id /* block */)reply;
+ (void)checkCustodianRecoveryKey:(id)key custodianRecoveryKeyUUID:(id)uuid reply:(id /* block */)reply;
+ (void)createInheritanceKey:(id)key uuid:(id)uuid reply:(id /* block */)reply;
+ (void)generateInheritanceKey:(id)key uuid:(id)uuid reply:(id /* block */)reply;
+ (void)storeInheritanceKey:(id)key ik:(id)ik reply:(id /* block */)reply;
+ (void)recoverOctagonUsingInheritanceKey:(id)key inheritanceKey:(id)key reply:(id /* block */)reply;
+ (void)preflightRecoverOctagonUsingInheritanceKey:(id)key inheritanceKey:(id)key reply:(id /* block */)reply;
+ (void)removeInheritanceKey:(id)key inheritanceKeyUUID:(id)uuid reply:(id /* block */)reply;
+ (void)checkInheritanceKey:(id)key inheritanceKeyUUID:(id)uuid reply:(id /* block */)reply;
+ (BOOL)setCDPEnabled:(id)cdpenabled error:(id *)error;
+ (long long)getCDPStatus:(id)cdpstatus error:(id *)error;
+ (id)resetProtectedData:(id)data error:(id *)error;
+ (id)resetProtectedData:(id)data idmsTargetContext:(id)context idmsCuttlefishPassword:(id)password notifyIdMS:(BOOL)ms error:(id *)error;
+ (BOOL)resetAcountData:(id)data error:(id *)error;

/* instance methods */
- (id)initWithContextData:(id)data;
- (id)description;
- (id)makeOTControl:(id *)otcontrol;
- (BOOL)establish:(id *)establish;
- (BOOL)resetAndEstablish:(long long)establish idmsTargetContext:(id)context idmsCuttlefishPassword:(id)password notifyIdMS:(BOOL)ms accountSettings:(id)settings error:(id *)error;
- (id)setupPairingChannelAsInitiator:(id)initiator;
- (id)setupPairingChannelAsInitator:(id)initator error:(id *)error;
- (id)setupPairingChannelAsAcceptor:(id)acceptor;
- (id)setupPairingChannelAsAcceptor:(id)acceptor error:(id *)error;
- (long long)_fetchCliqueStatus:(id)status error:(id *)error;
- (long long)fetchCliqueStatus:(id)status error:(id *)error;
- (long long)fetchCliqueStatus:(id *)status;
- (long long)cachedCliqueStatus:(BOOL)status error:(id *)error;
- (BOOL)removeFriendsInClique:(id)clique error:(id *)error;
- (BOOL)leaveClique:(id *)clique;
- (id)peerDeviceNamesByPeerID:(id *)id;
- (BOOL)joinAfterRestore:(id *)restore;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)status error:(id *)error;
- (BOOL)setOctagonUserControllableViewsSyncEnabled:(BOOL)enabled error:(id *)error;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)enabled;
- (BOOL)waitForInitialSync:(id *)sync;
- (id)copyViewUnawarePeerInfo:(id *)info;
- (BOOL)setUserCredentialsWithLabel:(id)label password:(id)password dsid:(id)dsid error:(id *)error;
- (BOOL)setUserCredentialsAndDSID:(id)dsid password:(id)password error:(id *)error;
- (BOOL)tryUserCredentialsWithLabel:(id)label password:(id)password dsid:(id)dsid error:(id *)error;
- (BOOL)tryUserCredentialsAndDSID:(id)dsid password:(id)password error:(id *)error;
- (id)copyPeerPeerInfo:(id *)info;
- (BOOL)peersHaveViewsEnabled:(id)enabled error:(id *)error;
- (BOOL)requestToJoinCircle:(id *)circle;
- (BOOL)accountUserKeyAvailable;
- (void)fetchEscrowContents:(id /* block */)contents;
- (void)performedCDPStateMachineRun:(id)run success:(BOOL)success error:(id)error reply:(id /* block */)reply;
- (BOOL)waitForOctagonUpgrade:(id *)upgrade;
- (void)performedFailureCDPStateMachineRun:(id)run error:(id)error reply:(id /* block */)reply;
- (void)performedSuccessfulCDPStateMachineRun:(id)run reply:(id /* block */)reply;
@end

#endif /* OTClique_h */
