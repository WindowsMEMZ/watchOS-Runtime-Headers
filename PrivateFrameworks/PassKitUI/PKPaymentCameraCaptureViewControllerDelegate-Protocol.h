//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentCameraCaptureViewControllerDelegate_Protocol_h
#define PKPaymentCameraCaptureViewControllerDelegate_Protocol_h
@import Foundation;

@protocol PKPaymentCameraCaptureViewControllerDelegate <NSObject>
/* instance methods */
- (void)cameraCaptureViewControllerDidFail:(id)fail;
- (void)cameraCaptureViewController:(id)controller didRecognizeObjects:(id)objects;
- (void)cameraCaptureViewControllerDidSelectManualEntry:(id)entry;
- (void)cameraCaptureViewControllerDidSelectSetupLater:(id)later;
@end

#endif /* PKPaymentCameraCaptureViewControllerDelegate_Protocol_h */
