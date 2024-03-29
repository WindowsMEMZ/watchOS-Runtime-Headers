//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef ASDOctaneAdNetworkProtocol_Protocol_h
#define ASDOctaneAdNetworkProtocol_Protocol_h
@import Foundation;

@protocol ASDOctaneAdNetworkProtocol 
/* instance methods */
- (void)validateSKAdNetworkImpression:(id)impression withPublicKey:(id)key forBundleID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)addPostbacksFromDictionaries:(id)dictionaries forBundleID:(id)id completion:(id /* block */)completion;
- (void)retrieveTestPostbacksForBundleID:(id)id completion:(id /* block */)completion;
- (void)sendTestPingbackForBundleID:(id)id completion:(id /* block */)completion;
- (void)developerPostbackURLForBundleID:(id)id completion:(id /* block */)completion;
- (void)configureSourceForTestPostbackDictionaries:(id)dictionaries forBundleID:(id)id completion:(id /* block */)completion;
@end

#endif /* ASDOctaneAdNetworkProtocol_Protocol_h */
