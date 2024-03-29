//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMovieV2TheaterShowtimeListCell_h
#define SAMovieV2TheaterShowtimeListCell_h
@import Foundation;

#include "SADomainObject.h"
#include "SADistance.h"
#include "SAMovieV2ShowtimeSnippet.h"

@class NSString;

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject

@property (nonatomic) BOOL bookable;
@property (retain, nonatomic) SADistance *relativeDistance;
@property (retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property (copy, nonatomic) NSString *theaterName;

/* class methods */
+ (id)theaterShowtimeListCell;
+ (id)theaterShowtimeListCellWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAMovieV2TheaterShowtimeListCell_h */
