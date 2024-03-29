//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFVolumeCollectionViewCell_h
#define NPRFVolumeCollectionViewCell_h
@import Foundation;

#include "PUICListPlatterCell.h"
#include "NPRFVolumeControlsView.h"

@interface NPRFVolumeCollectionViewCell : PUICListPlatterCell {
  /* instance variables */
  BOOL _didSetupConstraints;
}

@property (retain, nonatomic) NPRFVolumeControlsView *volumeControlView;

/* class methods */
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultContentInsets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateConstraints;
@end

#endif /* NPRFVolumeCollectionViewCell_h */
