//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 232.0.0.0.0
//
#ifndef TCSClientXPC_Protocol_h
#define TCSClientXPC_Protocol_h
@import Foundation;

@protocol TCSClientXPC <NSObject>
/* instance methods */
- (void)applicationWillEnterForeground;
- (void)callConnected:(id)connected;
- (void)callStatusChanged:(id)changed;
- (void)remoteUplinkMuteChanged:(id)changed;
@end

#endif /* TCSClientXPC_Protocol_h */
