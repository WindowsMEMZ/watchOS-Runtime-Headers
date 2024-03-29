//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKSemiConstantCache_h
#define CUIKSemiConstantCache_h
@import Foundation;

@class UIFont;

@interface CUIKSemiConstantCache : NSObject

@property (readonly) double dayOccurrenceMinimumCachedLineHeightCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightRegular;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallRegular;
@property (readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_contentCategorySizeChanged:(id)changed;
- (void)updateMetrics;
- (id)_dayOccurrenceFontWithStyle:(id)style size:(double)size regularSize:(double)size;
- (id)commentIconStringForFont:(id)font;
- (id)birthdayImageForFont:(id)font;
- (id)symbolImage:(id)image forFont:(id)font;
@end

#endif /* CUIKSemiConstantCache_h */
