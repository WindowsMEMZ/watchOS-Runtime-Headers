//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAppleIDSigningDaemonProtocol_Protocol_h
#define AKAppleIDSigningDaemonProtocol_Protocol_h
@import Foundation;

@protocol AKAppleIDSigningDaemonProtocol <NSObject>
/* instance methods */
- (void)absintheSignatureForData:(id)data completion:(id /* block */)completion;
- (void)signaturesForData:(id)data options:(id)options completion:(id /* block */)completion;
@end

#endif /* AKAppleIDSigningDaemonProtocol_Protocol_h */
