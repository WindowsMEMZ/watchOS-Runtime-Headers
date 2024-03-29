//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEODefaultsDBValue_h
#define GEODefaultsDBValue_h
@import Foundation;

#include "GEODefaultsDBCollection.h"

@class NSString;

@interface GEODefaultsDBValue : NSObject

@property (readonly, weak, nonatomic) GEODefaultsDBCollection *parent;
@property (nonatomic) long long dbId;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) id value;

/* class methods */
+ (id)dbValue:(id)value type:(id)type value:(id)value;

/* instance methods */
- (id)initWithParent:(id)parent type:(id)type value:(id)value;
@end

#endif /* GEODefaultsDBValue_h */
