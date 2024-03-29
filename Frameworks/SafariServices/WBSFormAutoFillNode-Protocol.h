//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSFormAutoFillNode_Protocol_h
#define WBSFormAutoFillNode_Protocol_h
@import Foundation;

@protocol WBSFormAutoFillNode <NSObject>
/* instance methods */
- (id)initWithJSWrapper:(struct OpaqueJSValue *)jswrapper inContext:(struct OpaqueJSContext *)context;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })elementBounds;
- (void)setHTMLInputElementAutofilled:(BOOL)autofilled;
- (void)setHTMLInputElementAutoFilledAndViewable:(BOOL)viewable;
- (void)setHTMLInputElementAutoFilledAndObscured:(BOOL)obscured;
- (BOOL)isHTMLInputElementUserEdited;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(BOOL)password;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (void)setSpinnerVisibilityOnHTMLInputElement:(BOOL)element;
@optional
/* instance methods */
- (void)setHTMLInputElementSpellCheckEnabled:(BOOL)enabled;
@end

#endif /* WBSFormAutoFillNode_Protocol_h */
