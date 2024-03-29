//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKPeopleComplicationPickerDualLabelHeaderView_h
#define NTKPeopleComplicationPickerDualLabelHeaderView_h
@import Foundation;

#include "UICollectionReusableView.h"

@class CLKDevice, NSLayoutConstraint, UILabel;

@interface NTKPeopleComplicationPickerDualLabelHeaderView : UICollectionReusableView

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NSLayoutConstraint *sectionLabelShortBaselineTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *sectionLabelFlushTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *sectionLabelTopConstraint;
@property (readonly, nonatomic) UILabel *sectionLabel;
@property (readonly, nonatomic) UILabel *subSectionLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_setupViews;
- (void)_setupConstraints;
- (void)setLayoutForListTop:(BOOL)top;
- (void)prepareForReuse;
@end

#endif /* NTKPeopleComplicationPickerDualLabelHeaderView_h */
