//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPOIClaim_h
#define GEOPOIClaim_h
@import Foundation;

#include "GEOPDPOIClaim.h"

@class NSURL;

@interface GEOPOIClaim : NSObject {
  /* instance variables */
  GEOPDPOIClaim *_poiClaim;
}

@property (readonly, nonatomic) BOOL claimed;
@property (readonly, nonatomic) BOOL claimable;
@property (readonly, nonatomic) NSURL *claimURL;

/* instance methods */
- (id)initWithPOIClaim:(id)poiclaim;
- (BOOL)isClaimed;
- (BOOL)isClaimable;
- (id)description;
@end

#endif /* GEOPOIClaim_h */
