//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 176.0.2.0.0
//
#ifndef TDMTestServer_h
#define TDMTestServer_h
@import Foundation;

@class _TtC16CryptoKitPrivate9TDMServer;

@interface TDMTestServer : NSObject

@property (readonly, nonatomic) CryptoKitPrivate.TDMServer *tdmServer;

/* instance methods */
- (id)publicKey;
- (id)init;
- (id)evaluate:(id)evaluate error:(id *)error;
- (id)FSR;
- (BOOL)validateOutput:(id)output TID:(id)tid;
@end

#endif /* TDMTestServer_h */
