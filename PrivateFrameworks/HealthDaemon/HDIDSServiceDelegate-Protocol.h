//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDIDSServiceDelegate_Protocol_h
#define HDIDSServiceDelegate_Protocol_h
@import Foundation;

@protocol HDIDSServiceDelegate <NSObject>
/* instance methods */
- (void)service:(id)service didReceiveMessage:(id)message fromDevice:(id)device messageContext:(id)context;
- (void)service:(id)service didSendWithSuccess:(BOOL)success identifier:(id)identifier error:(id)error;
@end

#endif /* HDIDSServiceDelegate_Protocol_h */
