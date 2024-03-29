//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVMutableVideoComposition_h
#define AVMutableVideoComposition_h
@import Foundation;

#include "AVVideoComposition.h"
#include "AVVideoCompositionCoreAnimationTool.h"

@class AVMutableVideoCompositionInternal, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition {
  /* instance variables */
  AVMutableVideoCompositionInternal *_mutableVideoComposition;
}

@property (retain, nonatomic) Class customVideoCompositorClass;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } frameDuration;
@property (nonatomic) int sourceTrackIDForFrameTiming;
@property (nonatomic) struct CGSize { double x0; double x1; } renderSize;
@property (nonatomic) float renderScale;
@property (copy, nonatomic) NSArray *instructions;
@property (retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property (copy, nonatomic) NSArray *sourceSampleDataTrackIDs;

/* class methods */
+ (id)videoCompositionWithAsset:(id)asset applyingCIFiltersWithHandler:(id /* block */)handler;
+ (void)videoCompositionWithAsset:(id)asset applyingCIFiltersWithHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
+ (id)videoComposition;
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset;
+ (void)videoCompositionWithPropertiesOfAsset:(id)asset completionHandler:(id /* block */)handler;
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset prototypeInstruction:(id)instruction;
+ (void)videoCompositionWithPropertiesOfAsset:(id)asset prototypeInstruction:(id)instruction completionHandler:(id /* block */)handler;

/* instance methods */
- (id)colorPrimaries;
- (void)setColorPrimaries:(id)primaries;
- (id)colorYCbCrMatrix;
- (void)setColorYCbCrMatrix:(id)matrix;
- (id)colorTransferFunction;
- (void)setColorTransferFunction:(id)function;
- (id)perFrameHDRDisplayMetadataPolicy;
- (void)setPerFrameHDRDisplayMetadataPolicy:(id)policy;
- (id)builtInCompositorName;
- (void)setBuiltInCompositorName:(id)name;
@end

#endif /* AVMutableVideoComposition_h */
