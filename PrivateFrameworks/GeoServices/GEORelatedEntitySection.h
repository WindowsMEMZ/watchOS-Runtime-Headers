//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORelatedEntitySection_h
#define GEORelatedEntitySection_h
@import Foundation;

#include "GEORelatedCollectionSection.h"

@class NSArray, NSString;

@interface GEORelatedEntitySection : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int index;
@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) GEORelatedCollectionSection *relatedCollectionSection;
@property (readonly, nonatomic) NSArray *relatedPlaceCollections;

/* instance methods */
- (id)init;
- (id)initWithRelatedEntitySection:(id)section mapsResults:(id)results;
- (id)placeCollectionsWithCollectionSection:(id)section;
@end

#endif /* GEORelatedEntitySection_h */
