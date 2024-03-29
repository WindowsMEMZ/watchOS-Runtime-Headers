//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef _MKScaleUnitsView_h
#define _MKScaleUnitsView_h
@import Foundation;

#include "UIView.h"

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

@interface _MKScaleUnitsView : UIView {
  /* instance variables */
  double _justUnitsWidth;
  NSDictionary *_legendAttributes;
  NSMutableArray *_strings;
  NSMapTable *_legendStringWidthCache;
  NSMutableDictionary *_legendStringForDistanceStringCache;
}

@property (nonatomic) BOOL RTL;
@property (@dynamic, nonatomic) BOOL useLightText;
@property (@dynamic, nonatomic) double segmentLengthInPixels;
@property (readonly, nonatomic) double unitsWidth;
@property (retain, nonatomic) NSString *legendBaseString;
@property (retain, nonatomic) NSString *unitsString;
@property (copy, nonatomic) NSString *unpaddedUnitsString;
@property (retain, nonatomic) NSNumberFormatter *floatNumberFormatter;
@property (readonly, nonatomic) NSString *zeroUnitsString;
@property (nonatomic) double fontSize;
@property (nonatomic) double legendMarginLeft;

/* instance methods */
- (id)init;
- (void)clearCaches:(id)caches;
- (double)_widthForString:(id)string attributes:(id)attributes;
- (void)setUnits:(id)units;
- (void)_calculateLegend:(BOOL)legend;
- (BOOL)canDisplaySegment:(unsigned long long)segment;
- (id)_uncachedLegendStringsForDistanceString:(id)string;
- (id)_legendStringForDistanceString:(id)string appendUnits:(BOOL)units index:(int)index;
- (BOOL)isRTL;
@end

#endif /* _MKScaleUnitsView_h */
