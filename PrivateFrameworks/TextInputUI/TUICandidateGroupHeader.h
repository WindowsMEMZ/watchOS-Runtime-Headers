//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUICandidateGroupHeader_h
#define TUICandidateGroupHeader_h
@import Foundation;

#include "UICollectionReusableView.h"

@class NSString, UILabel;
@protocol TUICandidateViewStyle;

@interface TUICandidateGroupHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } virtualLabelContainerFrame;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (nonatomic) double rowHeight;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)updateGroupHeaderLabelPosition;
@end

#endif /* TUICandidateGroupHeader_h */
