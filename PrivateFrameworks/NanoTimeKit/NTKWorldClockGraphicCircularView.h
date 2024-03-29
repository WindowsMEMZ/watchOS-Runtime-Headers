//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKWorldClockGraphicCircularView_h
#define NTKWorldClockGraphicCircularView_h
@import Foundation;

#include "UIView.h"
#include "CLKFullColorImageView-Protocol.h"
#include "CLKMonochromeFilterProvider-Protocol.h"
#include "NTKRichComplicationDialView.h"
#include "NTKWorldClockRichComplicationHandsBaseView.h"

@class CLKClockTimerToken, CLKDevice, CLKUIAlmanacTransitInfo, NSArray, NSNumber, NSString, UIColor, UIFontDescriptor, UILabel, UIView;

@interface NTKWorldClockGraphicCircularView : UIView<CLKFullColorImageView> {
  /* instance variables */
  BOOL _showGossamerUI;
}

@property (readonly, nonatomic) UILabel *cityNameLabel;
@property (readonly, nonatomic) UILabel *northHourLabel;
@property (readonly, nonatomic) UILabel *eastHourLabel;
@property (readonly, nonatomic) UILabel *westHourLabel;
@property (readonly, nonatomic) UILabel *southHourLabel;
@property (readonly, nonatomic) NTKWorldClockRichComplicationHandsBaseView *handsView;
@property (readonly, nonatomic) NTKRichComplicationDialView *dialView;
@property (readonly, nonatomic) UIView *platter;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; struct CGSize { double x0; double x1; } x6; struct CGSize { double x0; double x1; } x7; } layoutConstants;
@property (retain, nonatomic) CLKClockTimerToken *clockTimerToken;
@property (nonatomic) BOOL positionLabelNorthSide;
@property (retain, nonatomic) CLKUIAlmanacTransitInfo *transitInfo;
@property (nonatomic) double monochromeFraction;
@property (nonatomic) BOOL useDayTimeColoring;
@property (nonatomic) BOOL coloringFirstPassPerformed;
@property (retain, nonatomic) UIColor *daytimeBackgroundColor;
@property (retain, nonatomic) UIColor *daytimeHandsColor;
@property (retain, nonatomic) UIColor *daytimeSecondHandColor;
@property (retain, nonatomic) UIColor *daytimeHandsLargeTickColor;
@property (retain, nonatomic) UIColor *daytimeHandsSmallTickColor;
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor;
@property (retain, nonatomic) UIColor *nighttimeHandsColor;
@property (retain, nonatomic) UIColor *nighttimeSecondHandColor;
@property (retain, nonatomic) UIColor *nighttimeHandsLargeTickColor;
@property (retain, nonatomic) UIColor *nighttimeHandsSmallTickColor;
@property (readonly, nonatomic) NSArray *hourLabels;
@property (nonatomic) double tintedFraction;
@property (retain, nonatomic) UIColor *tintedPlatterColor;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly, nonatomic) NSNumber *tritium_updateMode;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)northLabelNumber;
+ (id)eastLabelNumber;
+ (id)southLabelNumber;
+ (id)westLabelNumber;
+ (BOOL)tritium_wantsCrossfadeAnimation;
+ (id)_createHandsViewForDevice:(id)device;
+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; struct CGSize { double x0; double x1; } x6; struct CGSize { double x0; double x1; } x7; })_layoutConstantsForDevice:(id)device;
+ (BOOL)_shouldUseDaytimeColoringForTransitInfo:(id)info atDate:(id)date;

/* instance methods */
- (void)applyConfiguration:(id)configuration animated:(BOOL)animated;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initFullColorImageViewWithDevice:(id)device;
- (id)initWithDevice:(id)device smallTickCount:(unsigned long long)count;
- (void)traitCollectionDidChange:(id)change;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)provider reason:(long long)reason;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_updateDayTimeColoring;
- (BOOL)_updateLabelAndDial;
- (void)_updateUI;
- (void)_updateCityAbbreviationColor;
- (void)_updateHandsColor;
- (void)_updateHourLabelColors;
- (void)_updatePlatterColor;
- (void)_updateTickColor;
- (BOOL)hasPerformedColoringFirstPass;
@end

#endif /* NTKWorldClockGraphicCircularView_h */
