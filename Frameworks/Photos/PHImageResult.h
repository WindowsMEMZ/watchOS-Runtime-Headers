//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHImageResult_h
#define PHImageResult_h
@import Foundation;

#include "PHCompositeMediaResult.h"

@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
  /* instance variables */
  struct CGImage * _imageRef;
  BOOL _isPlaceholder;
  BOOL _degraded;
  BOOL _isDerivedFromDeferredPreview;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

/* instance methods */
- (void)dealloc;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (void)setImageRef:(struct CGImage *)ref;
- (struct CGImage *)imageRef;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer *)map orientation:(unsigned int)orientation averagePixelLuminance:(id)luminance;
- (void)setImageURL:(id)url;
- (id)imageURL;
- (void)setImageData:(id)data;
- (id)imageData;
- (long long)uiOrientation;
- (BOOL)isDerivedFromDeferredPreview;
- (void)setIsDerivedFromDeferredPreview:(BOOL)preview;
- (void)setIsPlaceholder:(BOOL)placeholder;
- (BOOL)isPlaceholder;
- (void)setDegraded:(BOOL)degraded;
- (BOOL)isDegraded;
@end

#endif /* PHImageResult_h */
