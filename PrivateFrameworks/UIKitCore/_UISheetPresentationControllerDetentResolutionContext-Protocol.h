//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISheetPresentationControllerDetentResolutionContext_Protocol_h
#define _UISheetPresentationControllerDetentResolutionContext_Protocol_h
@import Foundation;

@protocol _UISheetPresentationControllerDetentResolutionContext <UISheetPresentationControllerDetentResolutionContext>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _containerBounds;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } _containerSafeAreaInsets;
@property (readonly, nonatomic) UITraitCollection *_containerTraitCollection;
@property (readonly, nonatomic) BOOL _edgeAttached;
@property (readonly, nonatomic) BOOL _inverted;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _effectiveKeyboardFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _fullHeightPresentedViewFrame;
@property (readonly, nonatomic) double _maximumDetentValue;

/* instance methods */
- (BOOL)_isEdgeAttached;
- (BOOL)_isInverted;
@end

#endif /* _UISheetPresentationControllerDetentResolutionContext_Protocol_h */
