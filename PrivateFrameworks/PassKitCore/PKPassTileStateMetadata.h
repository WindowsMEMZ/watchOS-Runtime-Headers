//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassTileStateMetadata_h
#define PKPassTileStateMetadata_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPassTileStateMetadataVehicleFunction.h"

@interface PKPassTileStateMetadata : NSObject<NSSecureCoding>

@property (readonly, nonatomic) PKPassTileStateMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (readonly, nonatomic) long long type;

/* class methods */
+ (id)_createForType:(long long)type dictionary:(id)dictionary;
+ (id)_createWithType:(long long)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)_setupWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToUnresolvedMetadata:(id)metadata;
@end

#endif /* PKPassTileStateMetadata_h */
