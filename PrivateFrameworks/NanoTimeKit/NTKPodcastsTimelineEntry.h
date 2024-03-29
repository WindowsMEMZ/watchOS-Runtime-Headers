//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKPodcastsTimelineEntry_h
#define NTKPodcastsTimelineEntry_h
@import Foundation;

#include "NTKTimelineEntryModel.h"

@class CLKCComplicationDataSourceContext, NSString;

@interface NTKPodcastsTimelineEntry : NTKTimelineEntryModel {
  /* instance variables */
  unsigned long long _state;
  NSString *_title;
  NSString *_album;
  NSString *_artist;
  CLKCComplicationDataSourceContext *_context;
}

@property (nonatomic) BOOL useFallbackImages;

/* instance methods */
- (id)initWithPlayerResponse:(id)response context:(id)context;
- (id)initAsSwitcherTemplate;
- (id)description;
- (id)templateForComplicationFamily:(long long)family;
- (id)_largeModular;
- (id)_graphicRectangular;
- (id)_largeUtility;
- (id)_extraLarge;
- (id)_smallUtility;
- (id)_smallModular;
- (id)_mediumCircular;
- (id)_smallCircular;
- (id)_graphicCorner;
- (id)_graphicCircular;
- (id)_graphicBezel;
- (id)_graphicExtraLarge;
- (id)_italicTextProviderForText:(id)text;
- (id)_nowPlayingProviderForFamily:(long long)family;
- (id)_fullColorNowPlayingProviderForFamily:(long long)family;
- (id)_imageProviderWithTintColor:(id)color fallbackImageName:(id)name;
- (id)_fullColorImageProviderWithTintColor:(id)color fallbackImageName:(id)name;
@end

#endif /* NTKPodcastsTimelineEntry_h */
