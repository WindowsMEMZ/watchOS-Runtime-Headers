//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNanoSetupMedicalIDView_h
#define HKNanoSetupMedicalIDView_h
@import Foundation;

#include "UIView.h"

@class PUICHyphenatedLabel, UIImage, UIImageView, UILabel;

@interface HKNanoSetupMedicalIDView : UIView {
  /* instance variables */
  UIImage *_starOfLifeImage;
  UIImageView *_imageView;
  UILabel *_headerLabel;
  PUICHyphenatedLabel *_bodyLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setupConstraints;
@end

#endif /* HKNanoSetupMedicalIDView_h */
