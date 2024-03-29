//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef NIRegionPredicate_h
#define NIRegionPredicate_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface NIRegionPredicate : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  long long _devicePresencePreset;
}

@property (readonly) NSString *name;
@property long long regionSizeCategory;
@property (readonly) float radius;
@property long long preferredUpdateRate;
@property BOOL requiresUserIntent;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithName:(id)name radius:(float)radius preferredUpdateRate:(long long)rate;
- (id)initWithName:(id)name radius:(float)radius;
- (id)initWithName:(id)name devicePresencePreset:(long long)preset;
- (id)initWithName:(id)name radius:(float)radius preferredUpdateRate:(long long)rate requiresUserIntent:(BOOL)intent;
- (id)initWithName:(id)name regionSizeCategory:(long long)category radius:(float)radius preferredUpdateRate:(long long)rate requiresUserIntent:(BOOL)intent;
- (id)initWithName:(id)name radius:(float)radius preferredUpdateRate:(long long)rate requiresUserIntent:(BOOL)intent devicePresencePreset:(long long)preset;
- (id)initWithName:(id)name regionSizeCategory:(long long)category radius:(float)radius preferredUpdateRate:(long long)rate requiresUserIntent:(BOOL)intent devicePresencePreset:(long long)preset;
- (long long)devicePresencePreset;
- (void)setDevicePresencePreset:(long long)preset;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)descriptionInternal;
- (id)shortDescription;
@end

#endif /* NIRegionPredicate_h */
