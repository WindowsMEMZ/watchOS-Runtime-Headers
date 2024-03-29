//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFVideoAdjustments_h
#define PFVideoAdjustments_h
@import Foundation;

#include "PFAssetAdjustments.h"

@interface PFVideoAdjustments : PFAssetAdjustments

@property (readonly, nonatomic) float slowMotionRate;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slowMotionTimeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slowMotionRampIn;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slowMotionRampOut;
@property (nonatomic) float slowMotionRate;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slowMotionTimeRange;

/* class methods */
+ (id)defaultSlowMotionAdjustmentsForAsset:(id)asset;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })defaultSlowMotionTimeRangeForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
+ (float)defaultSlowMotionRateForNominalFrameRate:(float)rate;
+ (BOOL)isRecognizedSlowMotionFormatWithIdentifier:(id)identifier version:(id)version;
+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)url;

/* instance methods */
- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertToScaledTimeFromOriginalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time forExport:(BOOL)export;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertToOriginalTimeFromScaledTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time forExport:(BOOL)export;
- (id)initWithSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range rate:(float)rate;
- (BOOL)_isValidSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range rate:(float)rate;
- (BOOL)hasSlowMotionAdjustments;
- (id)initWithPropertyListDictionary:(id)dictionary;
- (id)description;
- (BOOL)isRecognizedFormat;
- (void)_updateDerivedPropertiesFromVersionedData;
- (BOOL)_parseLegacySLMDictionary:(id)slmdictionary forSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)range rate:(float *)rate;
- (BOOL)_parseVersionedDataForSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)range rate:(float *)rate;
- (BOOL)_parseAppleVideoDataBlobDictionary:(id)dictionary forSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)range rate:(float *)rate;
- (id)_dictionaryFromSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range rate:(float)rate;
- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)data;
@end

#endif /* PFVideoAdjustments_h */
