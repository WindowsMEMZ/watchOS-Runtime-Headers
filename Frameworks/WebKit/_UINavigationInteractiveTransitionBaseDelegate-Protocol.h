//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _UINavigationInteractiveTransitionBaseDelegate_Protocol_h
#define _UINavigationInteractiveTransitionBaseDelegate_Protocol_h
@import Foundation;

@protocol _UINavigationInteractiveTransitionBaseDelegate <NSObject>
/* instance methods */
- (void)startInteractiveTransition:(id)transition;
- (BOOL)shouldBeginInteractiveTransition:(id)transition;
- (BOOL)interactiveTransition:(id)transition gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)interactiveTransition:(id)transition gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)gestureRecognizerForInteractiveTransition:(id)transition WithTarget:(id)target action:(SEL)action;
@end

#endif /* _UINavigationInteractiveTransitionBaseDelegate_Protocol_h */
