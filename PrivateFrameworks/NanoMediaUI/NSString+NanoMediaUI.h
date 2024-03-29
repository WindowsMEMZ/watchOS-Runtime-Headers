//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NSString_NanoMediaUI_h
#define NSString_NanoMediaUI_h
@import Foundation;

@interface NSString (NanoMediaUI)
/* class methods */
+ (id)nmu_prettyShortStringWithDuration:(double)duration abbreviated:(BOOL)abbreviated;
+ (id)_nmu_stringWithDuration:(double)duration unitsStyle:(long long)style;
+ (id)nmu_localizedStringForReleaseDate:(id)date duration:(double)duration;
+ (id)nmu_localizedStringForSeasonNumber:(long long)number episodeNumber:(long long)number bonus:(BOOL)bonus trailer:(BOOL)trailer duration:(double)duration;
@end

#endif /* NSString_NanoMediaUI_h */
