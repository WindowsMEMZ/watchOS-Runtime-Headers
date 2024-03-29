//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.4.1.0.0
//
#ifndef UAFAssetSetSubscription_h
#define UAFAssetSetSubscription_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface UAFAssetSetSubscription : NSObject<NSSecureCoding>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *assetSets;
@property (readonly, copy) NSDictionary *usageAliases;
@property (readonly, copy) NSDate *expiration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init:(id)init assetSets:(id)sets usageAliases:(id)aliases;
- (id)init:(id)init assetSets:(id)sets usageAliases:(id)aliases expires:(id)expires;
- (id)initWithName:(id)name assetSets:(id)sets usageAliases:(id)aliases;
- (id)initWithName:(id)name assetSets:(id)sets usageAliases:(id)aliases expires:(id)expires;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (BOOL)isValid:(id)valid error:(id *)error;
@end

#endif /* UAFAssetSetSubscription_h */
