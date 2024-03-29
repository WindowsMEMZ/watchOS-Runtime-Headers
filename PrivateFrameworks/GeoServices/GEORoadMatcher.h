//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORoadMatcher_h
#define GEORoadMatcher_h
@import Foundation;

#include "GEOApplicationAuditToken.h"
#include "GEOMapFeatureAccess.h"
#include "GEORoadMatcherCandidateSegment.h"

@interface GEORoadMatcher : NSObject {
  /* instance variables */
  GEOMapFeatureAccess *_mapFeatureAccess;
}

@property (retain, nonatomic) GEORoadMatcherCandidateSegment *previousMatch;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL useRawLocations;
@property (nonatomic) double searchRadius;

/* instance methods */
- (id)init;
- (id)initWithAuditToken:(id)token;
- (void)dealloc;
- (id)matchLocation:(id)location forTransportType:(int)type;
- (id)_bestCandidateSegmentForLocation:(id)location transportType:(int)type;
@end

#endif /* GEORoadMatcher_h */
