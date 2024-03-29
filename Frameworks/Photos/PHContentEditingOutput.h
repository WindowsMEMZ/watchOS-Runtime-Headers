//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHContentEditingOutput_h
#define PHContentEditingOutput_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PHAdjustmentData.h"
#include "PHContentEditingOutputRequestOptions.h"

@class NSArray, NSData, NSMutableSet, NSNumber, NSString, NSURL, UTType;

@interface PHContentEditingOutput : NSObject<NSSecureCoding> {
  /* instance variables */
  NSMutableSet *_deliveredRenderedContentURLs;
  NSURL *_appropriateURLForDerivingRenderedContentURLs;
}

@property (readonly, nonatomic) PHContentEditingOutputRequestOptions *requestOptions;
@property long long baseVersion;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (nonatomic) BOOL isSubstandardRender;
@property (nonatomic) long long fullSizeRenderWidth;
@property (nonatomic) long long fullSizeRenderHeight;
@property (nonatomic) double fullSizeRenderDuration;
@property (copy) NSURL *renderedContentURL;
@property (retain) NSData *penultimateRenderedJPEGData;
@property (copy) NSURL *penultimateRenderedVideoContentURL;
@property (copy) NSURL *renderedVideoPosterURL;
@property (copy) NSURL *renderedVideoComplementContentURL;
@property (copy) NSURL *penultimateRenderedVideoComplementContentURL;
@property (retain) NSURL *editorBundleURL;
@property (readonly) long long mediaType;
@property (readonly) BOOL loopingLivePhoto;
@property (retain, nonatomic) NSURL *renderedPreviewContentURL;
@property (nonatomic) BOOL isAsyncAdjustment;
@property (retain, nonatomic) NSNumber *playbackVariation;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (retain, nonatomic) NSNumber *reframeVariation;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (retain) PHAdjustmentData *adjustmentData;
@property (readonly, copy) UTType *defaultRenderedContentType;
@property (readonly, copy) NSArray *supportedRenderedContentTypes;

/* class methods */
+ (BOOL)_currentDeviceSupportsHEICEncoding;
+ (id)imageRenderURLUsingHEICFormat:(BOOL)heicformat appropriateForURL:(id)url;
+ (id)_renderURLWithExtensionForMediaType:(long long)type useHEICImage:(BOOL)heicimage appropriateForURL:(id)url;
+ (id)defaultExtensionForUniformTypeIdentifierType:(id)type;
+ (id)_renderURLWithExtensionForUniformTypeIdentifierType:(id)type appropriateForURL:(id)url;
+ (unsigned long long)maximumAdjustmentDataLength;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContentEditingInput:(id)input;
- (id)initWithContentEditingInput:(id)input withOptions:(id)options;
- (id)initWithPlaceholderForCreatedAsset:(id)asset;
- (id)initWithAdjustmentBaseVersion:(long long)version mediaType:(long long)type appropriateForURL:(id)url;
- (id)renderedContentURLForType:(id)type error:(id *)error;
- (id)renderURLWithExtensionForMediaType:(long long)type;
- (void)clearRenderedContentURL;
- (void)setRenderedJPEGData:(id)jpegdata;
- (id)assetAdjustmentsWithEditorBundleID:(id)id;
- (BOOL)isOnlyChangingOriginalChoice;
- (void)_setupRequiredRenderedContentURLsWithEditingInput:(id)input options:(id)options;
- (BOOL)shouldPreferHEICForRenderedImages;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)debugDescription;
- (BOOL)isLoopingLivePhoto;
@end

#endif /* PHContentEditingOutput_h */
