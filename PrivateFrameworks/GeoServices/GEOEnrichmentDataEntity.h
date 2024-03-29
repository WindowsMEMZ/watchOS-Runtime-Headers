//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOEnrichmentDataEntity_h
#define GEOEnrichmentDataEntity_h
@import Foundation;

#include "GEOEnrichmentInfo.h"
#include "GEOPDEnrichmentDataEntity.h"

@class NSArray, NSData, NSString;

@interface GEOEnrichmentDataEntity : NSObject {
  /* instance variables */
  GEOPDEnrichmentDataEntity *_enrichmentDataEntity;
}

@property (readonly, nonatomic) GEOEnrichmentInfo *enrichmentInfo;
@property (readonly, nonatomic) NSString *enrichmentHtml;
@property (readonly, nonatomic) NSData *enrichmentMetadata;
@property (readonly, nonatomic) NSArray *appAdamIds;

/* instance methods */
- (id)initWithEnrichmentDataEntity:(id)entity;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* GEOEnrichmentDataEntity_h */
