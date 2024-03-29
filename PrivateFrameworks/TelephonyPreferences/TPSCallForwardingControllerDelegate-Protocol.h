//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 320.100.1.0.0
//
#ifndef TPSCallForwardingControllerDelegate_Protocol_h
#define TPSCallForwardingControllerDelegate_Protocol_h
@import Foundation;

@protocol TPSCallForwardingControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)callForwardingController:(id)controller didChangeServiceType:(long long)type;
- (void)callForwardingController:(id)controller didChangeValue:(id)value error:(id)error;
@end

#endif /* TPSCallForwardingControllerDelegate_Protocol_h */
