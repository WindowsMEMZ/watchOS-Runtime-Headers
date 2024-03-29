//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 611.60.5.0.0
//
#ifndef SecureBackupConcurrentProtocol_Protocol_h
#define SecureBackupConcurrentProtocol_Protocol_h
@import Foundation;

@protocol SecureBackupConcurrentProtocol <NSObject>
/* instance methods */
- (void)daemonPasscodeRequestOpinion:(id /* block */)opinion;
- (void)saveTermsAcceptance:(id)acceptance reply:(id /* block */)reply;
- (void)getAcceptedTermsForAltDSID:(id)dsid reply:(id /* block */)reply;
- (void)moveToFederationAllowed:(id)allowed altDSID:(id)dsid reply:(id /* block */)reply;
- (void)knownICDPFederations:(id /* block */)icdpfederations;
@end

#endif /* SecureBackupConcurrentProtocol_Protocol_h */
