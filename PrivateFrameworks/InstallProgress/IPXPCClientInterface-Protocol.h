//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPXPCClientInterface_Protocol_h
#define IPXPCClientInterface_Protocol_h
@import Foundation;

@protocol IPXPCClientInterface <NSObject>
/* instance methods */
- (void)installableForIdentity:(id)identity progressChanged:(id)changed;
- (void)installableForIdentity:(id)identity progressEndedForReason:(unsigned long long)reason;
@end

#endif /* IPXPCClientInterface_Protocol_h */
