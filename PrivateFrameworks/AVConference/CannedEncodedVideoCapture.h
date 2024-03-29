//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef CannedEncodedVideoCapture_h
#define CannedEncodedVideoCapture_h
@import Foundation;

#include "VCCannedVideoFrameFeeder-Protocol.h"
#include "VideoScaler.h"

@class AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput, AVAssetTrack, AVURLAsset, NSString;

@interface CannedEncodedVideoCapture : NSObject<VCCannedVideoFrameFeeder> {
  /* instance variables */
  struct __CVPixelBufferPool * _pixelBufferPool;
  struct __CVPixelBufferPool * _rotatedPixelBufferPool;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _inputMutex;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _attributeMutex;
}

@property (retain, nonatomic) AVURLAsset *compressedFileAsset;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetTrack *videoTrack;
@property (retain, nonatomic) AVAssetTrack *metadataTrack;
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerVideoTrackOutput;
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerMetadataTrackOutput;
@property (retain, nonatomic) AVAssetReaderOutputMetadataAdaptor *metadataAdaptor;
@property (retain, nonatomic) NSString *movieURLString;
@property (retain, nonatomic) VideoScaler *videoScaler;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (nonatomic) int frameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPath:(id)path;
- (void)dealloc;
- (int)loadVideoTrackFromList:(id)list error:(id)error;
- (int)loadMetadataTrackFromList:(id)list error:(id)error;
- (int)finalizeVideoCapture;
- (int)loadCannedMediaAssets;
- (int)initializeAssetReader;
- (int)initialize;
- (int)setWidth:(int)width height:(int)height;
- (void)attachMetadataToPixelBuffer:(struct __CVBuffer *)buffer;
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)index;
- (void)getFrameRate:(double *)rate frameCount:(int *)count;
@end

#endif /* CannedEncodedVideoCapture_h */
