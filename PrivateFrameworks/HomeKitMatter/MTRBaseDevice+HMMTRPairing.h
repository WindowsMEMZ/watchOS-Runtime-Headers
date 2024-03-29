//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MTRBaseDevice_HMMTRPairing_h
#define MTRBaseDevice_HMMTRPairing_h
@import Foundation;

#include ".h"

@interface MTRBaseDevice (HMMTRPairing)
/* instance methods */
- (id)_retrieveFabricClusterWithQueue:(id)queue;
- (void)removePairing:(id)pairing callbackQueue:(id)queue vendorMetadataStore:(id)store completionHandler:(id /* block */)handler;
- (void)_removeFabricWithIndex:(id)index callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)unpairDevice:(id)device completionHandler:(id /* block */)handler;
- (void)fetchCurrentFabricIndexWithCallbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)updateFabricLabel:(id)label callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)removeAllPairingsForCallbackQueue:(id)queue vendorMetadataStore:(id)store completionHandler:(id /* block */)handler;
- (void)fetchSerialNumberWithCallbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)fetchPairingsWithCallbackQueue:(id)queue vendorMetadataStore:(id)store completionHandler:(id /* block */)handler;
- (void)fetchCurrentPairingWithCallbackQueue:(id)queue vendorMetadataStore:(id)store completionHandler:(id /* block */)handler;
- (void)fetchFabricDescriptorsWithCallbackQueue:(id)queue filtered:(BOOL)filtered completionHandler:(id /* block */)handler;
- (void)_fetchPairingsWithCallbackQueue:(id)queue filtered:(BOOL)filtered vendorMetadataStore:(id)store completionHandler:(id /* block */)handler;
- (id)_vendorNameForVendorID:(id)id vendorMetadataStore:(id)store;
@end

#endif /* MTRBaseDevice_HMMTRPairing_h */
