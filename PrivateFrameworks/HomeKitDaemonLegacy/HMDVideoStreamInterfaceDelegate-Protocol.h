//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDVideoStreamInterfaceDelegate_Protocol_h
#define HMDVideoStreamInterfaceDelegate_Protocol_h
@import Foundation;

@protocol HMDVideoStreamInterfaceDelegate <NSObject>
/* instance methods */
- (void)videoStream:(id)stream didStart:(id)start;
- (void)videoStream:(id)stream didStop:(id)stop;
- (void)videoStreamDidNetworkImprove:(id)improve;
- (void)videoStreamDidNetworkDeteriorate:(id)deteriorate;
- (void)videoStreamDidUpdateConfiguration:(id)configuration;
@end

#endif /* HMDVideoStreamInterfaceDelegate_Protocol_h */
