//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPurgeableFactorPack_h
#define TRIPurgeableFactorPack_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSSet, NSString;
@protocol NSString<TRIFactorPackId;

@interface TRIPurgeableFactorPack : NSObject<NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) NSSet *purgeableAssetFactorNames;

/* class methods */
+ (id)packWithFactorPackId:(id)id namespaceName:(id)name purgeableAssetFactorNames:(id)names;

/* instance methods */
- (id)initWithFactorPackId:(id)id namespaceName:(id)name purgeableAssetFactorNames:(id)names;
- (id)copyWithReplacementFactorPackId:(id)id;
- (id)copyWithReplacementNamespaceName:(id)name;
- (id)copyWithReplacementPurgeableAssetFactorNames:(id)names;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToPack:(id)pack;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@end

#endif /* TRIPurgeableFactorPack_h */
