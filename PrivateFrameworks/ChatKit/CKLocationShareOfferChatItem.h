//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKLocationShareOfferChatItem_h
#define CKLocationShareOfferChatItem_h
@import Foundation;

#include "CKBalloonChatItem.h"

@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem

@property (retain, nonatomic) FMFLocation *lastKnownLocation;
@property (readonly, nonatomic) long long offerState;
@property (readonly, weak, nonatomic) IMHandle *sender;
@property (readonly, weak, nonatomic) NSString *titleText;
@property (readonly, weak, nonatomic) NSString *locationText;

/* class methods */
+ (id)titleBarMaskImageForWidth:(double)width;
+ (id)placeholderPreviewCache;

/* instance methods */
- (void)dealloc;
- (id)initWithIMChatItem:(id)item maxWidth:(double)width;
- (Class)balloonViewClass;
- (BOOL)isFromMe;
- (BOOL)failed;
- (id)time;
- (void)configureBalloonView:(id)view;
- (id)previewForWidth:(double)width orientation:(char)orientation;
- (id)_previewCacheKey:(unsigned long long)key;
- (id)_placeholderCacheKey;
- (id)previewURL;
- (id)previewURLForWidth:(unsigned long long)width;
- (void)_generateMapPreview;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })size contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets withCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate forState:(long long)state;
- (id)transcriptTraitCollection;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize { double x0; double x1; })size;
- (void)savePreview:(id)preview toURL:(id)url;
- (id)savedPreviewFromURL:(id)url;
- (id)modificationDateForPreview:(id)preview;
- (void)_handleLocationDidChangeNotification:(id)notification;
- (id)_desaturatedImageForImage:(id)image;
@end

#endif /* CKLocationShareOfferChatItem_h */
