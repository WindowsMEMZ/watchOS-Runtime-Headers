//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextServiceSession_h
#define _UITextServiceSession_h
@import Foundation;

#include "UIKeyboardSceneDelegate.h"
#include "UIPopoverPresentationControllerDelegate-Protocol.h"
#include "UIResponder.h"
#include "UIView.h"
#include "UIViewController.h"

@class NSString;

@interface _UITextServiceSession : NSObject<UIPopoverPresentationControllerDelegate> {
  /* instance variables */
  long long _type;
  UIViewController *_modalViewController;
  UIView *_contextView;
  UIResponder *_pinnedResponder;
  UIKeyboardSceneDelegate *_keyboardSceneDelegate;
  BOOL _dismissed;
}

@property (copy, nonatomic) id /* block */ dismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_canShowTextServices;
+ (long long)availableTextServices;
+ (BOOL)_canShowTextServiceForType:(long long)type;
+ (BOOL)shouldPresentServiceInSameWindowAsView:(id)view;
+ (id)showServiceForText:(id)text selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range type:(long long)type fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
+ (id)showServiceForType:(long long)type withContext:(id)context;
+ (id)showServiceForText:(id)text type:(long long)type fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
+ (id)textServiceSessionForType:(long long)type;
+ (BOOL)textServiceIsDisplaying;

/* instance methods */
- (void)sessionDidDismiss;
- (id)initWithType:(long long)type;
- (id)init;
- (BOOL)isDisplaying;
- (long long)type;
- (void)dismissTextServiceAnimated:(BOOL)animated;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)_endSession;
@end

#endif /* _UITextServiceSession_h */
