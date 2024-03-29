//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDCategorySearchParameters_h
#define GEOPDCategorySearchParameters_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDETAFilter.h"
#include "GEOPDRecentRouteInfo.h"
#include "GEOPDResultRefinementQuery.h"
#include "GEOPDSSearchEvChargingParameters.h"
#include "GEOPDSearchOriginationInfo.h"
#include "GEOPDViewportInfo.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDCategorySearchParameters : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  struct { int *list; unsigned long long count; unsigned long long size; } _knownRefinementTypes;
  struct { int *list; unsigned long long count; unsigned long long size; } _supportedPlaceSummaryFormatTypes;
  struct { int *list; unsigned long long count; unsigned long long size; } _supportedRelatedEntitySectionTypes;
  struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchSectionTypes;
  struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchTierTypes;
  NSString *_enrichmentCampaignNamespace;
  GEOPDETAFilter *_etaFilter;
  GEOPDSSearchEvChargingParameters *_evChargingParameters;
  GEOPDViewportInfo *_previousSearchViewport;
  GEOPDRecentRouteInfo *_recentRouteInfo;
  GEOPDResultRefinementQuery *_resultRefinementQuery;
  NSMutableArray *_searchEnrichmentRevisionMetadatas;
  GEOPDSearchOriginationInfo *_searchOriginationInfo;
  NSData *_suggestionEntryMetadata;
  GEOPDViewportInfo *_viewportInfo;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  unsigned int _auxiliaryTierNumResults;
  unsigned int _blurredHourOfDay;
  unsigned int _dayOfWeek;
  unsigned int _maxResults;
  int _placeSummaryRevision;
  int _searchType;
  BOOL _supportCategorySearchResultSection;
  BOOL _supportSearchEnrichment;
  BOOL _supportStructuredRapAffordance;
  struct { unsigned int x :1 has_auxiliaryTierNumResults; unsigned int x :1 has_blurredHourOfDay; unsigned int x :1 has_dayOfWeek; unsigned int x :1 has_maxResults; unsigned int x :1 has_placeSummaryRevision; unsigned int x :1 has_searchType; unsigned int x :1 has_supportCategorySearchResultSection; unsigned int x :1 has_supportSearchEnrichment; unsigned int x :1 has_supportStructuredRapAffordance; unsigned int x :1 read_unknownFields; unsigned int x :1 read_knownRefinementTypes; unsigned int x :1 read_supportedPlaceSummaryFormatTypes; unsigned int x :1 read_supportedRelatedEntitySectionTypes; unsigned int x :1 read_supportedSearchSectionTypes; unsigned int x :1 read_supportedSearchTierTypes; unsigned int x :1 read_enrichmentCampaignNamespace; unsigned int x :1 read_etaFilter; unsigned int x :1 read_evChargingParameters; unsigned int x :1 read_previousSearchViewport; unsigned int x :1 read_recentRouteInfo; unsigned int x :1 read_resultRefinementQuery; unsigned int x :1 read_searchEnrichmentRevisionMetadatas; unsigned int x :1 read_searchOriginationInfo; unsigned int x :1 read_suggestionEntryMetadata; unsigned int x :1 read_viewportInfo; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDCategorySearchParameters_h */
