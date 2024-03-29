//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardCompositionTextCollectionViewCell_h
#define PUICQuickboardCompositionTextCollectionViewCell_h
@import Foundation;

#include "PUICListPlatterCell.h"
#include "PUICQuickboardCompositionViewModel.h"
#include "PUICQuickboardCompositionViewModelConfigurable-Protocol.h"

@class NSLayoutConstraint, NSString, UILabel;

@interface PUICQuickboardCompositionTextCollectionViewCell : PUICListPlatterCell<PUICQuickboardCompositionViewModelConfigurable>

@property (retain, nonatomic) PUICQuickboardCompositionViewModel *viewModel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *textLabelTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)style;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)prepareForReuse;
- (void)configureWithViewModel:(id)model;
- (id)defaultConstraints;
- (void)_contentSizeCategoryDidChange:(id)change;
- (id)fontDescriptor;
- (void)_updateForContentSize;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* PUICQuickboardCompositionTextCollectionViewCell_h */
