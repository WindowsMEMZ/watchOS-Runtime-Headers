//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKCenteredHeroImageTitleSubtitlePlatterCell_h
#define NPKCenteredHeroImageTitleSubtitlePlatterCell_h
@import Foundation;

#include "PUICPlatterCell.h"
#include "NPKCenteredHeroImageTitleSubtitleItem.h"
#include "NPKPrivacyHeroHeaderView.h"

@interface NPKCenteredHeroImageTitleSubtitlePlatterCell : PUICPlatterCell {
  /* instance variables */
  NPKPrivacyHeroHeaderView *_headerView;
}

@property (retain, nonatomic) NPKCenteredHeroImageTitleSubtitleItem *item;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_configureHeaderView;
@end

#endif /* NPKCenteredHeroImageTitleSubtitlePlatterCell_h */
