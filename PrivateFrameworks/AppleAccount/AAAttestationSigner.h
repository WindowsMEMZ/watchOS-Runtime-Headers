//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAAttestationSigner_h
#define AAAttestationSigner_h
@import Foundation;

@interface AAAttestationSigner : NSObject
/* class methods */
+ (id)sharedSigner;

/* instance methods */
- (id)init;
- (void)signatureForData:(id)data options:(id)options completion:(id /* block */)completion;
- (void)signaturesForDatas:(id)datas options:(id)options completion:(id /* block */)completion;
@end

#endif /* AAAttestationSigner_h */
