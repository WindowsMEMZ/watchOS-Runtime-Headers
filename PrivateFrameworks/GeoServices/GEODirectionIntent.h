//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEODirectionIntent_h
#define GEODirectionIntent_h
@import Foundation;

#include "GEOResolvedItem.h"

@interface GEODirectionIntent : NSObject

@property (readonly, nonatomic) GEOResolvedItem *origin;
@property (readonly, nonatomic) GEOResolvedItem *destination;
@property (readonly, nonatomic) int transportType;

/* instance methods */
- (id)initWithDirectionIntent:(id)intent;
@end

#endif /* GEODirectionIntent_h */
