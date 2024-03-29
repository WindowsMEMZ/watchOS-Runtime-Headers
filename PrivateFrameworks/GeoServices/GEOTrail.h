//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTrail_h
#define GEOTrail_h
@import Foundation;

#include "GEOFeatureStyleAttributes.h"
#include "GEOMapItemIdentifier.h"
#include "GEOMapItemPhoto-Protocol.h"

@class NSArray, NSString;

@interface GEOTrail : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSObject<GEOMapItemPhoto> *photo;
@property (readonly, nonatomic) NSArray *factoids;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) unsigned long long trailId;
@property (readonly, nonatomic) GEOMapItemIdentifier *trailIdentifier;
@property (readonly, nonatomic) BOOL shouldHighlight;

/* class methods */
+ (id)factoidsFromFactoidData:(id)data;

/* instance methods */
- (id)initWithTrail:(id)trail;
@end

#endif /* GEOTrail_h */
