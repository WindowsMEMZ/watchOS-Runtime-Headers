//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAssetDiff_h
#define MAAssetDiff_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface MAAssetDiff : NSObject<NSSecureCoding> {
  /* instance variables */
  unsigned long long _diffRaw;
  unsigned long long _diff;
  unsigned long long _mask;
  NSString *_description;
  NSString *_assessment;
}

/* class methods */
+ (id)requireSameAssetTypeAndAssetId;
+ (id)requireSameAssetTypeAndDownloadContent;
+ (id)requireSameAssetTypeAndAllAttributes;
+ (id)defaultAllowedDifferences;
+ (id)allowEverythingDifferent;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPlist:(id)plist;
- (void)encodeWithCoder:(id)coder;
- (id)encodeAsPlist;
- (id)initDifferentAssetType:(BOOL)type assetId:(BOOL)id attributes:(BOOL)attributes assetIdAttributes:(BOOL)attributes dynamicAssetId:(BOOL)id nonIdAttributes:(BOOL)attributes content:(BOOL)content url:(BOOL)url policy:(BOOL)policy;
- (id)initFromDiff:(unsigned long long)diff;
- (id)initFromInverseOfCategories:(unsigned long long)categories;
- (BOOL)isAnythingDifferent;
- (BOOL)isSameAssetType;
- (BOOL)isSameForAllAttributes;
- (BOOL)isSameAssetId;
- (BOOL)isSameForNonAssetIdAttributes;
- (BOOL)isSameDownloadContent;
- (BOOL)isSameDownloadUrl;
- (BOOL)isSameDownloadPolicy;
- (BOOL)hasOnlyAllowedDifferences:(id)differences;
- (unsigned long long)category;
- (id)summary;
- (id)description;
@end

#endif /* MAAssetDiff_h */
