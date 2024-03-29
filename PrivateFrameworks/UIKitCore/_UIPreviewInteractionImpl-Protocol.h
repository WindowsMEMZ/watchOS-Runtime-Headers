//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPreviewInteractionImpl_Protocol_h
#define _UIPreviewInteractionImpl_Protocol_h
@import Foundation;

@protocol _UIPreviewInteractionImpl <NSObject>

@property (weak, nonatomic) NSObject<UIPreviewInteractionDelegate> *delegate;
@property (readonly, weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSObject<_UIPreviewInteractionTouchForceProviding> *touchForceProvider;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;

/* instance methods */
- (id)initWithView:(id)view previewInteraction:(id)interaction;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)space;
- (void)cancelInteraction;
@end

#endif /* _UIPreviewInteractionImpl_Protocol_h */
