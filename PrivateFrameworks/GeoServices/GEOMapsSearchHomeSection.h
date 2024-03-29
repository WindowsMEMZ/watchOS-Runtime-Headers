//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapsSearchHomeSection_h
#define GEOMapsSearchHomeSection_h
@import Foundation;

#include "GEOCollectionSuggestionResult.h"
#include "GEOGuideLocationSuggestionResults.h"
#include "GEOPublisherSuggestionResult.h"

@class NSArray, NSString;

@interface GEOMapsSearchHomeSection : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long sectionType;
@property (readonly, nonatomic) NSArray *searchCategories;
@property (readonly, nonatomic) GEOCollectionSuggestionResult *collectionSuggestions;
@property (readonly, nonatomic) GEOPublisherSuggestionResult *publisherSuggestions;
@property (readonly, nonatomic) GEOGuideLocationSuggestionResults *guideLocationSuggestsions;

/* instance methods */
- (id)initWithMapsSearchHomeSection:(id)section mapsResults:(id)results;
- (BOOL)dataModelIsValid:(id)valid;
- (id)description;
@end

#endif /* GEOMapsSearchHomeSection_h */
