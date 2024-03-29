//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFStoryRecipeDisplayAssetNormalization_h
#define PFStoryRecipeDisplayAssetNormalization_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_PFStoryRecipeDisplayAssetNormalizationData-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface PFStoryRecipeDisplayAssetNormalization : NSObject<NSCopying> {
  /* instance variables */
  NSObject<_PFStoryRecipeDisplayAssetNormalizationData> *_normalizationData;
}

@property (readonly, nonatomic) NSData *analysisData;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *tempTintProperties;
@property (readonly, nonatomic) NSDictionary *smartToneProperties;
@property (readonly, nonatomic) NSDictionary *highKeyProperties;
@property (readonly, nonatomic) NSDictionary *smartColorProperties;
@property (readonly, nonatomic) NSString *detailedDescription;

/* instance methods */
- (id)init;
- (id)initWithAnalysisData:(id)data;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PFStoryRecipeDisplayAssetNormalization_h */
