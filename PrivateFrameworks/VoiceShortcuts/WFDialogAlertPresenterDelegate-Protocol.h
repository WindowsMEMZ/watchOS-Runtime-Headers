//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDialogAlertPresenterDelegate_Protocol_h
#define WFDialogAlertPresenterDelegate_Protocol_h
@import Foundation;

@protocol WFDialogAlertPresenterDelegate <NSObject, WFDialogXPCHostProtocol>
/* instance methods */
- (void)dialogAlertPresenter:(id)presenter didConnectToAlert:(id)alert;
- (void)dialogAlertPresenterDidDisconnectFromAlert:(id)alert;
- (void)dialogAlertPresenterDidDeactivateAlert:(id)alert;
- (void)dialogAlertPresenterDidInvalidateAlert:(id)alert;
@end

#endif /* WFDialogAlertPresenterDelegate_Protocol_h */
