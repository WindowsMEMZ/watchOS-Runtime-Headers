//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKBasicMovieMetadata_h
#define WLKBasicMovieMetadata_h
@import Foundation;

#include "WLKBasicContentMetadata.h"
#include "WLKRottenTomatoesRating.h"

@class NSDate, NSString;

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSString *studio;
@property (readonly, nonatomic) WLKRottenTomatoesRating *rottenTomatoesRating;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDate *releaseDate;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* WLKBasicMovieMetadata_h */
