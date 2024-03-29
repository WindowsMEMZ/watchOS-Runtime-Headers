//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKPasswordView_h
#define WKPasswordView_h
@import Foundation;

#include "UIView.h"
#include "UIDocumentPasswordViewDelegate-Protocol.h"

@class NSString;
@protocol {RetainPtr<NSString>="m_ptr"^v}, {RetainPtr<UIColor>="m_ptr"^v}, {RetainPtr<UIDocumentPasswordView>="m_ptr"^v}, {RetainPtr<UIScrollView>="m_ptr"^v};

@interface WKPasswordView : UIView<UIDocumentPasswordViewDelegate> {
  /* instance variables */
  struct RetainPtr<UIScrollView> { void *m_ptr; } _scrollView;
  struct RetainPtr<UIDocumentPasswordView> { void *m_ptr; } _passwordView;
  double _savedMinimumZoomScale;
  double _savedMaximumZoomScale;
  double _savedZoomScale;
  struct CGSize { double width; double height; } _savedContentSize;
  struct RetainPtr<UIColor> { void *m_ptr; } _savedBackgroundColor;
}

@property (readonly, nonatomic) NSString *documentName;
@property (copy, nonatomic) id /* block */ userDidEnterPassword;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame documentName:(id)name;
- (void)dealloc;
- (void)layoutSubviews;
- (void)showInScrollView:(id)view;
- (void)hide;
- (void)showPasswordFailureAlert;
- (void)_keyboardDidShow:(id)show;
- (void)userDidEnterPassword:(id)password forPasswordView:(id)view;
- (void)didBeginEditingPassword:(id)password inView:(id)view;
- (void)didEndEditingPassword:(id)password inView:(id)view;
@end

#endif /* WKPasswordView_h */
