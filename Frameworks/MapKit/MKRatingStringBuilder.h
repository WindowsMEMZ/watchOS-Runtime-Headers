//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKRatingStringBuilder_h
#define MKRatingStringBuilder_h
@import Foundation;

@interface MKRatingStringBuilder : NSObject
/* class methods */
+ (id)ratingSymbolNameForMapItem:(id)item;
+ (Class)ratingStringProviderForMapItem:(id)item;
+ (id)ratingSummaryAttributedStringForMapItem:(id)item textColor:(id)color font:(id)font theme:(id)theme;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:(id)item textColor:(id)color font:(id)font theme:(id)theme;
+ (id)delimitedPriceRangeAttributedStringForMapItem:(id)item textColor:(id)color font:(id)font;
+ (id)priceLabelStringFromMapItem:(id)item;
+ (id)carPlayHeaderStringForMapItem:(id)item titleAttributes:(id)attributes providerAttributes:(id)attributes;
+ (id)ratingColorForMapItem:(id)item;
@end

#endif /* MKRatingStringBuilder_h */
