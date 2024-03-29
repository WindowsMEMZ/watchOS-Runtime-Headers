//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPRecoveryKeyValidator_Protocol_h
#define CDPRecoveryKeyValidator_Protocol_h
@import Foundation;

@protocol CDPRecoveryKeyValidator <NSObject>
/* instance methods */
- (void)confirmRecoveryKey:(id)key completion:(id /* block */)completion;
- (void)generateRecoveryKey:(id /* block */)key;
- (id)generateRecoveryKeyWithError:(id *)error;
- (BOOL)confirmRecoveryKey:(id)key error:(id *)error;
@end

#endif /* CDPRecoveryKeyValidator_Protocol_h */
