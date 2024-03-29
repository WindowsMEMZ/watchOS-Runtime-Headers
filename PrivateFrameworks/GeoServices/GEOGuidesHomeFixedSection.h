//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOGuidesHomeFixedSection_h
#define GEOGuidesHomeFixedSection_h
@import Foundation;

#include "GEOPDGuidesHomeFixedSection.h"

@class NSArray, NSString;

@interface GEOGuidesHomeFixedSection : NSObject {
  /* instance variables */
  GEOPDGuidesHomeFixedSection *_pdFixedSection;
  NSArray *_mapsResults;
}

@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) NSArray *featuredGuides;
@property (readonly, nonatomic) NSArray *filters;
@property (readonly, nonatomic) NSArray *filteredGuides;
@property (readonly, nonatomic) NSArray *filteredGuideIds;
@property (readonly, nonatomic) NSString *title;

/* instance methods */
- (id)initWithGuidesHomeFixedSection:(id)section mapsResults:(id)results;
- (id)guideResultsFromMapResults;
@end

#endif /* GEOGuidesHomeFixedSection_h */
