//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPSimpleBeaconContext_h
#define SPSimpleBeaconContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface SPSimpleBeaconContext : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long fetchProperties;
@property (nonatomic) BOOL sendInitialBeacons;
@property (copy, nonatomic) NSArray *filterBeaconUUIDs;

/* class methods */
+ (id)defaultContext;
+ (id)deviceManagerContext;
+ (id)fmipItemContext;
+ (id)fmipItemContextForBeaconUUIDs:(id)uuids;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFetchProperties:(unsigned long long)properties filterBeaconUUIDs:(id)uuids;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SPSimpleBeaconContext_h */
