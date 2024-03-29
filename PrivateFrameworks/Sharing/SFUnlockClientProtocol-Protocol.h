//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFUnlockClientProtocol_Protocol_h
#define SFUnlockClientProtocol_Protocol_h
@import Foundation;

@protocol SFUnlockClientProtocol <NSObject>
/* instance methods */
- (void)keyDeviceLocked:(id)locked;
- (void)enabledDevice:(id)device;
- (void)failedToEnableDevice:(id)device error:(id)error;
- (void)beganAttemptWithDevice:(id)device;
- (void)completedUnlockWithDevice:(id)device;
- (void)failedUnlockWithError:(id)error;
- (void)enabledAuthenticationSessionWithID:(id)id;
- (void)failedToEnableDeviceForSessionID:(id)id error:(id)error;
- (void)startedAuthenticationSessionWithID:(id)id;
- (void)completedAuthenticationSessionWithID:(id)id;
- (void)failedAuthenticationSessionWithID:(id)id error:(id)error;
@end

#endif /* SFUnlockClientProtocol_Protocol_h */
