//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKLocationMediaObject_h
#define CKLocationMediaObject_h
@import Foundation;

#include "CKContactMediaObject.h"
#include "MKAnnotation-Protocol.h"

@class NSString;

@interface CKLocationMediaObject : CKContactMediaObject<MKAnnotation>

@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)vcardDataFromCLLocation:(id)cllocation;
+ (id)placeholderPreviewForWidth:(double)width orientation:(char)orientation;
+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)width;

/* instance methods */
- (id)mapItem;
- (id)metricsCollectorMediaType;
- (id)attachmentSummary:(unsigned long long)summary;
- (id)initWithTransfer:(id)transfer context:(id)context forceInlinePreview:(BOOL)preview;
- (int)mediaType;
- (Class)balloonViewClass;
- (Class)previewBalloonViewClass;
- (Class)placeholderBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(char)orientation;
- (id)previewCachesFileURLWithOrientation:(char)orientation extension:(id)extension generateIntermediaries:(BOOL)intermediaries;
- (id)previewForWidth:(double)width orientation:(char)orientation;
- (id)transcriptTraitCollection;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })size contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (struct CGSize { double x0; double x1; })bbSize;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })size;
- (id)previewItemTitle;
- (id)vCardURLProperties;
- (BOOL)isDroppedPin;
- (id)generatePlaceholderThumbnailForWidth:(double)width orientation:(char)orientation;
- (id)generatePlaceholderThumbnailFillToSize:(struct CGSize { double x0; double x1; })size contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
@end

#endif /* CKLocationMediaObject_h */
