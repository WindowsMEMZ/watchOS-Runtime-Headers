//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPNearFieldXPCClientInterface_Protocol_h
#define RPNearFieldXPCClientInterface_Protocol_h
@import Foundation;

@protocol RPNearFieldXPCClientInterface 
/* instance methods */
- (void)didDetectDeviceNearbyWithInitiatorRole:(BOOL)role;
- (void)didBeginTransaction:(id)transaction;
- (void)didUpdateTransaction:(id)transaction;
- (void)didInterruptTransaction:(id)transaction withError:(id)error;
@end

#endif /* RPNearFieldXPCClientInterface_Protocol_h */
