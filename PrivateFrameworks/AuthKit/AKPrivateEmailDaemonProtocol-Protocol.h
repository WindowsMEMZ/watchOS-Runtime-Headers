//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKPrivateEmailDaemonProtocol_Protocol_h
#define AKPrivateEmailDaemonProtocol_Protocol_h
@import Foundation;

@protocol AKPrivateEmailDaemonProtocol <NSObject>
/* instance methods */
- (void)lookupPrivateEmailForAltDSID:(id)dsid withKey:(id)key completion:(id /* block */)completion;
- (void)lookupPrivateEmailWithContext:(id)context completion:(id /* block */)completion;
- (void)fetchPrivateEmailForAltDSID:(id)dsid withKey:(id)key completion:(id /* block */)completion;
- (void)fetchPrivateEmailWithContext:(id)context completion:(id /* block */)completion;
- (void)registerPrivateEmailForAltDSID:(id)dsid withKey:(id)key completion:(id /* block */)completion;
- (void)registerPrivateEmailWithContext:(id)context completion:(id /* block */)completion;
- (void)getContextForRequestContext:(id)context completion:(id /* block */)completion;
- (void)deletePrivateEmailDatabaseWithCompletion:(id /* block */)completion;
- (void)privateEmailListVersionWithCompletion:(id /* block */)completion;
- (void)removePrivateEmailKey:(id)key completion:(id /* block */)completion;
- (void)listAllPrivateEmailsForAltDSID:(id)dsid completion:(id /* block */)completion;
- (void)fetchSignInWithApplePrivateEmailWithContext:(id)context completion:(id /* block */)completion;
@end

#endif /* AKPrivateEmailDaemonProtocol_Protocol_h */
