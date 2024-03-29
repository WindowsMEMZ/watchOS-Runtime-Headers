//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKAPushManagingDelegate_Protocol_h
#define SKAPushManagingDelegate_Protocol_h
@import Foundation;

@protocol SKAPushManagingDelegate 
/* instance methods */
- (void)pushManager:(id)manager didReceiveData:(id)data onChannel:(id)channel identifier:(unsigned long long)identifier dateReceived:(id)received dateExpired:(id)expired;
- (void)pushManager:(id)manager failedToSubscribeToChannel:(id)channel withError:(id)error;
@end

#endif /* SKAPushManagingDelegate_Protocol_h */
