//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAutoRespondingScrollViewControllerKeyboardSupport_h
#define UIAutoRespondingScrollViewControllerKeyboardSupport_h
@import Foundation;

@protocol UIViewController<_UIKeyboardAutoRespondingScrollViewController;

@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject {
  /* instance variables */
  UIViewController<_UIKeyboardAutoRespondingScrollViewController> *_viewController;
}

@property (nonatomic) double adjustmentForKeyboard;
@property (nonatomic) BOOL viewIsDisappearing;
@property (nonatomic) BOOL registeredForNotifications;

/* instance methods */
- (id)initWithViewController:(id)controller;
- (void)_adjustScrollViewForKeyboardInfo:(id)info;
- (void)_keyboardWillShow:(id)show;
- (void)_keyboardDidShow:(id)show;
- (void)_keyboardWillHide:(id)hide;
- (void)_keyboardDidHide:(id)hide;
- (void)_keyboardDidChangeFrame:(id)frame;
@end

#endif /* UIAutoRespondingScrollViewControllerKeyboardSupport_h */
