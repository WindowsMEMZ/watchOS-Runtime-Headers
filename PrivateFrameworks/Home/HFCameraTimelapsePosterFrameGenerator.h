//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraTimelapsePosterFrameGenerator_h
#define HFCameraTimelapsePosterFrameGenerator_h
@import Foundation;

#include "HFCameraImageGeneratorDelegate-Protocol.h"
#include "HFCameraTimelapseClipInfoProvider-Protocol.h"
#include "HFCameraTimelapsePosterFrameGeneratorDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HFCameraTimelapsePosterFrameGenerator : NSObject<HFCameraImageGeneratorDelegate>

@property (weak, nonatomic) NSObject<HFCameraTimelapsePosterFrameGeneratorDelegate> *delegate;
@property (weak, nonatomic) NSObject<HFCameraTimelapseClipInfoProvider> *timelapseClipInfoProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue;
@property (retain, nonatomic) NSMutableDictionary *posterFrameGenerationRequests;

/* instance methods */
- (id)initWithTimelapseClipInfoProvider:(id)provider andDelegate:(id)delegate;
- (void)dealloc;
- (id)generatePosterFramesForHighQualityClip:(id)clip withStep:(unsigned long long)step atSize:(struct CGSize { double x0; double x1; })size;
- (void)_generatePosterFramesForTimelapseClip:(id)clip withHighQualityClip:(id)clip forOffsets:(id)offsets atSize:(struct CGSize { double x0; double x1; })size;
- (void)_generatePosterFramesForAsset:(id)asset forOffsets:(id)offsets atSize:(struct CGSize { double x0; double x1; })size withHighQualityClip:(id)clip andTimelapseOffset:(double)offset;
- (id)_generateOffsetsForHighQualityClip:(id)clip withStep:(unsigned long long)step;
- (id)_generateTimelapseOffsetsFromOffsets:(id)offsets forTimelapseDiff:(double)diff;
- (void)imageGenerator:(id)generator didGenerateImage:(id)image requestedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time forKey:(id)key;
- (void)imageGenerator:(id)generator failedToGenerateImageForRequestedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time forKey:(id)key;
- (void)imageGenerator:(id)generator finishedGeneratingImagesForKey:(id)key;
- (id)_generationRequestForImageGenerator:(id)generator withKey:(id)key;
- (void)_removeGenerationRequestForImageGenerator:(id)generator withKey:(id)key;
@end

#endif /* HFCameraTimelapsePosterFrameGenerator_h */
