//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef UIFont_MKExtras_h
#define UIFont_MKExtras_h
@import Foundation;

@interface UIFont (MKExtras)
/* class methods */
+ (id)_contentSizeCategoryInTableViewCellWithContentSizeCategory:(id)category;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)cell;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)cell addingSymbolicTraits:(unsigned int)traits;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)cell weight:(double)weight;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)cell weight:(double)weight grade:(unsigned long long)grade;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)cell weight:(double)weight grade:(unsigned long long)grade contentSizeCategory:(id)category symbolicTraits:(unsigned int)traits;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)cell weight:(double)weight contentSizeCategory:(id)category symbolicTraits:(unsigned int)traits;
+ (id)_mapkit_preferredFontForTextStyle:(id)style weight:(double)weight grade:(unsigned long long)grade contentSizeCategory:(id)category symbolicTraits:(unsigned int)traits;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)cell addingSymbolicTraits:(unsigned int)traits;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)cell addingSymbolicTraits:(unsigned int)traits useMonospace:(BOOL)monospace;
+ (BOOL)_mapkit_ax3TextEnabled;
+ (BOOL)_mapkit_accessibilityTextEnabled;

/* instance methods */
- (id)_mapkit_fontByAddingFeaturesForTimeDisplayUseMonospace:(BOOL)monospace;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplay;
- (id)_mapkit_fontByAddingFeaturesForTabularFigures;
- (id)_mapkit_fontWithWeight:(double)weight;
- (id)_mapkit_fontWithSymbolicTraits:(unsigned int)traits;
- (double)_mapkit_scaledValueForValue:(double)value;
- (double)_mapkit_scaledValueForValue:(double)value scalingForMacIdiom:(BOOL)idiom respectingTraitEnvironment:(id)environment;
- (id)traitCollectionFromTraitEnvironment:(id)environment;
- (double)_mapkit_lineHeight;
@end

#endif /* UIFont_MKExtras_h */
