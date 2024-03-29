//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIVersion_h
#define TRIVersion_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber;

@interface TRIVersion : NSObject<NSCopying>

@property (readonly, nonatomic) NSNumber *majorVersion;
@property (readonly, nonatomic) NSNumber *minorVersion;
@property (readonly, nonatomic) NSNumber *patchVersion;

/* class methods */
+ (id)parseVersionFromString:(id)string withPrefix:(id)prefix;
+ (id)versionWithMajorVersion:(id)version minorVersion:(id)version patchVersion:(id)version;

/* instance methods */
- (long long)compare:(id)compare;
- (id)initWithMajorVersion:(id)version minorVersion:(id)version patchVersion:(id)version;
- (id)copyWithReplacementMajorVersion:(id)version;
- (id)copyWithReplacementMinorVersion:(id)version;
- (id)copyWithReplacementPatchVersion:(id)version;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToVersion:(id)version;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@end

#endif /* TRIVersion_h */
