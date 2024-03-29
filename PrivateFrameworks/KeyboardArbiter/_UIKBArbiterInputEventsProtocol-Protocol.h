//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKBArbiterInputEventsProtocol_Protocol_h
#define _UIKBArbiterInputEventsProtocol_Protocol_h
@import Foundation;

@protocol _UIKBArbiterInputEventsProtocol <NSObject>
/* instance methods */
- (void)startArbitrationWithExpectedState:(id)state focusContext:(id)context hostingPIDs:(id)pids usingFence:(BOOL)fence withSuppression:(int)suppression onConnected:(id /* block */)connected;
- (void)setDeactivating:(BOOL)deactivating;
- (void)setKeyboardTotalDisable:(BOOL)disable withFence:(id)fence completionHandler:(id /* block */)handler;
- (void)transition:(id)transition eventStage:(unsigned long long)stage withInfo:(id)info;
- (void)signalEventSourceChanged:(long long)changed completionHandler:(id /* block */)handler;
- (void)notifyHostedPIDsOfSuppression:(BOOL)suppression;
- (void)signalKeyboardChanged:(id)changed onCompletion:(id /* block */)completion;
- (void)signalKeyboardChangeComplete;
- (void)setWantsFencing:(BOOL)fencing;
- (void)setWindowHostingPID:(int)pid active:(BOOL)active;
- (void)retrieveDebugInformation:(id /* block */)information;
- (void)retrieveMoreDebugInformationWithCompletion:(id /* block */)completion;
@end

#endif /* _UIKBArbiterInputEventsProtocol_Protocol_h */
