//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAnisetteProvisioningClientProtocol_Protocol_h
#define AKAnisetteProvisioningClientProtocol_Protocol_h
@import Foundation;

@protocol AKAnisetteProvisioningClientProtocol <NSObject>
/* instance methods */
- (void)provisionAnisetteForContext:(id)context withCompletion:(id /* block */)completion;
- (void)syncAnisetteForContext:(id)context withSIMData:(id)simdata completion:(id /* block */)completion;
- (void)eraseAnisetteForContext:(id)context withCompletion:(id /* block */)completion;
- (void)fetchAnisetteDataForContext:(id)context provisionIfNecessary:(BOOL)necessary withCompletion:(id /* block */)completion;
- (void)legacyAnisetteDataForContext:(id)context DSID:(id)dsid withCompletion:(id /* block */)completion;
- (void)fetchPeerAttestationDataForContext:(id)context withRequest:(id)request completion:(id /* block */)completion;
@end

#endif /* AKAnisetteProvisioningClientProtocol_Protocol_h */
