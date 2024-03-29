//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFURLLabelAccessoryItem_h
#define _SFURLLabelAccessoryItem_h
@import Foundation;

@class UIImageView, UIView, UIVisualEffectView;

@interface _SFURLLabelAccessoryItem : NSObject

@property (retain, nonatomic) UIImageView *view;
@property (retain, nonatomic) UIImageView *squishedView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIVisualEffectView *squishedEffectView;
@property (readonly, nonatomic) UIView *viewForLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double spacing;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) BOOL centerAligned;

/* instance methods */
@end

#endif /* _SFURLLabelAccessoryItem_h */
