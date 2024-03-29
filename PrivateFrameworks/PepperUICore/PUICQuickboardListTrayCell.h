//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardListTrayCell_h
#define PUICQuickboardListTrayCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "PUICQuickboardListTrayButton.h"

@interface PUICQuickboardListTrayCell : UICollectionViewCell

@property (retain, nonatomic) PUICQuickboardListTrayButton *button;

/* instance methods */
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* PUICQuickboardListTrayCell_h */
