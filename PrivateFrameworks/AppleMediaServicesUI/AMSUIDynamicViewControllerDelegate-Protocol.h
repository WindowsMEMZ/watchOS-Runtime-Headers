//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIDynamicViewControllerDelegate_Protocol_h
#define AMSUIDynamicViewControllerDelegate_Protocol_h
@import Foundation;

@protocol AMSUIDynamicViewControllerDelegate <NSObject>
@optional
/* instance methods */
- (id)dynamicViewController:(id)controller contentViewControllerWithDictionary:(id)dictionary;
- (id)dynamicViewController:(id)controller contentViewWithDictionary:(id)dictionary frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dynamicViewController:(id)controller didFinishPurchaseWithResult:(id)result error:(id)error;
- (void)dynamicViewController:(id)controller didFinishWithPurchaseResult:(id)result error:(id)error;
- (void)dynamicViewController:(id)controller didFinishCarrierLinkingWithResult:(id)result error:(id)error;
- (void)dynamicViewController:(id)controller didResolveWithResult:(id)result error:(id)error;
- (BOOL)dynamicViewControllerShouldDismiss:(id)dismiss;
- (BOOL)dynamicViewController:(id)controller handleDelegateAction:(id)action completionHandler:(id /* block */)handler;
@end

#endif /* AMSUIDynamicViewControllerDelegate_Protocol_h */
