//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBigNumeralsTimeComponentLabel_h
#define NTKBigNumeralsTimeComponentLabel_h
@import Foundation;

#include "UIView.h"
#include "NTKTritiumAnimator-Protocol.h"

@class CLKDevice, CLKFont, CLKUIColoringLabel, NSDate, NSDateFormatter, NSString, UIColor, UIFont;

@interface NTKBigNumeralsTimeComponentLabel : UIView<NTKTritiumAnimator> {
  /* instance variables */
  CLKDevice *_device;
  BOOL _useLigatures;
  CLKFont *_filledFont;
  CLKFont *_outlinedFont;
  CLKUIColoringLabel *_label;
  CLKUIColoringLabel *_transitioningLabel;
  NSDateFormatter *_formatter;
  unsigned long long _timeComponent;
  unsigned long long _fontVariant;
  NSString *_filledFontSectName;
  NSString *_outlinedFontSectName;
  const struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } * _dsoHandle;
  double _tritium_minimumBrightness;
  unsigned long long _tritium_state;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) UIFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long typeface;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)localeForTypeface:(unsigned long long)typeface;

/* instance methods */
- (id)initWithDevice:(id)device timeComponent:(unsigned long long)component fontVariant:(unsigned long long)variant filledFontSectName:(id)name outlineFontSectName:(id)name dsoHandle:(const struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)handle fontSize:(double)size useLigatures:(BOOL)ligatures;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setupFontsForSize:(double)size;
- (double)_lastLineBaseline;
- (void)applyTransitionFraction:(double)fraction fromTypeface:(unsigned long long)typeface toTypeface:(unsigned long long)typeface;
- (void)applyTransitionFraction:(double)fraction fromStyle:(unsigned long long)style toStyle:(unsigned long long)style;
- (void)applyTransitionFraction:(double)fraction fromColor:(id)color toColor:(id)color;
- (void)cleanupTransition;
- (void)_updateLocale;
- (id)_attributedStringForTypeface:(unsigned long long)typeface;
- (void)_updateLabelText;
- (id)_fontForStyle:(unsigned long long)style;
- (void)tritium_willTransitionToTritiumOnToFrameSpecifier:(id)specifier;
- (void)tritium_didTransitionToTritiumOn;
- (void)tritium_willTransitionToTritiumOffFromFlipbookDate:(id)date;
- (void)tritium_didTransitionToTritiumOff;
- (void)tritium_transitionToTritiumOnWithProgress:(float)progress;
- (void)tritium_transitionToTritiumOffWithProgress:(float)progress;
- (void)tritium_transitionToFrameSpecifier:(id)specifier;
- (void)applyToTritiumTransitionFraction:(double)fraction;
@end

#endif /* NTKBigNumeralsTimeComponentLabel_h */
