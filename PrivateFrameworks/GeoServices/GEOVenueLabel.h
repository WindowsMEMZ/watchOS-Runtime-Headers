//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOVenueLabel_h
#define GEOVenueLabel_h
@import Foundation;

#include "GEOVenueLabel-Protocol.h"

@class NSString;

@interface GEOVenueLabel : NSObject<GEOVenueLabel>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *detail;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name shortName:(id)name detail:(id)detail;
- (id)initWithName:(id)name;
- (id)initWithLabel:(id)label;
@end

#endif /* GEOVenueLabel_h */
