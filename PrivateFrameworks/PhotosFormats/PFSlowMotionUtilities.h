//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFSlowMotionUtilities_h
#define PFSlowMotionUtilities_h
@import Foundation;

@interface PFSlowMotionUtilities : NSObject
/* class methods */
+ (id)sharedConfiguration;
+ (int)preferredTimeScale;
+ (id)slowMotionSourceAssetPropertyKeys;
+ (id)assetFromVideoAsset:(id)asset slowMotionRate:(float)rate slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range forExport:(BOOL)export outAudioMix:(id *)mix outTimeRangeMapper:(id *)mapper;
+ (BOOL)_isValidSlowMotionRate:(float)rate;
+ (BOOL)_isValidSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
+ (id)_scaledCompositionForAsset:(id)asset slowMotionRate:(float)rate slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range forExport:(BOOL)export outTimeRangeMapper:(id *)mapper;
+ (id)_slowMotionRegionsFromSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
+ (id)timeRangeMapperForSourceDuration:(double)duration slowMotionRate:(float)rate slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range forExport:(BOOL)export;
+ (BOOL)_scaleComposition:(id)composition baseDuration:(double)duration slowMotionRate:(float)rate slowMotionRegions:(id)regions forExport:(BOOL)export outTimeRangeMapper:(id *)mapper;
+ (double)_scaleWithinComposition:(id)composition fromCursor:(double)cursor timeStep:(double)step rate:(float)rate timeRangeMapper:(id)mapper;
+ (void)configureExportSession:(id)session forcePreciseConversion:(BOOL)conversion;
+ (id)exportPresetForAsset:(id)asset preferredPreset:(id)preset;
+ (id)_setVolume:(float)volume forSlowMotionRegionsInTrack:(id)track timeRangeMapper:(id)mapper;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_timeRangeFromTime:(float)time toTime:(float)time;
+ (id)audioMixForScaledComposition:(id)composition timeRangeMapper:(id)mapper;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })adjustTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range forNewStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* PFSlowMotionUtilities_h */
