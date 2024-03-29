//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextMatchupScoreView_h
#define NTKUpNextMatchupScoreView_h
@import Foundation;

#include "UIView.h"
#include "CLKMonochromeComplicationView-Protocol.h"
#include "CLKMonochromeFilterProvider-Protocol.h"

@class CLKFont, CLKUIColoringLabel, NSArray, NSDate, NSString, UIImageView, UILayoutGuide;

@interface NTKUpNextMatchupScoreView : UIView<CLKMonochromeComplicationView> {
  /* instance variables */
  UIImageView *_homeLogoImageView;
  CLKUIColoringLabel *_homeNameLabel;
  CLKUIColoringLabel *_homeDescriptionLabel;
  UIImageView *_awayLogoIamgeView;
  CLKUIColoringLabel *_awayNameLabel;
  CLKUIColoringLabel *_awayDescriptionLabel;
  CLKUIColoringLabel *_statusLabel;
  CLKUIColoringLabel *_timeLabel;
  NSDate *_timeForLabel;
  CLKFont *_boldMatchupFont;
  CLKFont *_regularMatchupFont;
  CLKFont *_statusFont;
  UILayoutGuide *_logoLayoutGuide;
  UILayoutGuide *_descriptionLayoutGuide;
  NSArray *_withLogoLayoutConstraints;
  NSArray *_withoutDateLayoutConstraints;
}

@property (retain, nonatomic) NSDate *overrideDate;
@property (nonatomic) BOOL paused;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_timeStringForFetchDate:(id)date overrideNow:(id)now;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithMatchup:(id)matchup;
- (void)updateTimeLabel;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (BOOL)isPaused;
@end

#endif /* NTKUpNextMatchupScoreView_h */
