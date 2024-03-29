//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedStringArgument_Maneuver_h
#define GEOComposedStringArgument_Maneuver_h
@import Foundation;

#include "GEOComposedStringArgument.h"
#include "GEOJunctionInfo.h"

@class NSString;

@interface GEOComposedStringArgument_Maneuver : GEOComposedStringArgument {
  /* instance variables */
  int _maneuverType;
  GEOJunctionInfo *_junctionInfo;
  NSString *_fallbackStringValue;
}

@property (copy, nonatomic) id /* block */ attributedStringHandler;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithGeoFormatArgument:(id)argument;
- (id)maneuverFormat;
- (id)_stringReplacementWithOptions:(id)options;
- (id)_attributedStringReplacementWithOptions:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* GEOComposedStringArgument_Maneuver_h */
