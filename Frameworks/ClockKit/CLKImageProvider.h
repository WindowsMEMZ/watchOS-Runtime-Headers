//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKImageProvider_h
#define CLKImageProvider_h
@import Foundation;

#include "CLKComplicationTritiumCopyable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, UIColor, UIImage;

@interface CLKImageProvider : NSObject<CLKComplicationTritiumCopyable, NSSecureCoding, NSCopying> {
  /* instance variables */
  BOOL _finalized;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maxSize;
@property (copy, nonatomic) id /* block */ imageViewCreationHandler;
@property (nonatomic) BOOL useOnePieceAsLayerMask;
@property (retain, nonatomic) UIImage *foregroundAccentImage;
@property (retain, nonatomic) UIColor *foregroundAccentImageColor;
@property (nonatomic) BOOL foregroundAccentImageTinted;
@property (retain, nonatomic) UIImage *onePieceImage;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *twoPieceImageBackground;
@property (retain, nonatomic) UIImage *twoPieceImageForeground;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) BOOL tritium_isTritiumInactiveCopy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;
+ (id)imageProviderWithOnePieceImage:(id)image;
+ (id)imageProviderWithOnePieceImage:(id)image twoPieceImageBackground:(id)background twoPieceImageForeground:(id)foreground;
+ (id)imageProviderWithImageViewCreationHandler:(id /* block */)handler;
+ (id)imageProviderWithLayerMaskImage:(id)image;
+ (BOOL)supportsSecureCoding;
+ (id)imageProviderWithJSONObjectRepresentation:(id)representation bundle:(id)bundle;

/* instance methods */
- (id)initPrivate;
- (id)init;
- (id)initWithOnePieceImage:(id)image;
- (id)initWithOnePieceImage:(id)image twoPieceImageBackground:(id)background twoPieceImageForeground:(id)foreground;
- (id)initWithForegroundAccentImage:(id)image;
- (BOOL)validate;
- (void)finalizeWithMaxSDKSize:(struct CGSize { double x0; double x1; })sdksize maxDeviceSize:(struct CGSize { double x0; double x1; })size maskToCircle:(BOOL)circle;
- (void)finalizeWithMaxSDKSize:(struct CGSize { double x0; double x1; })sdksize maxDeviceSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)tritium_inactiveCopy;
- (BOOL)tritium_requiresCopy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithJSONObjectRepresentation:(id)representation bundle:(id)bundle;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)path;
- (void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize { double x0; double x1; })sdksize andMaskToCircle:(BOOL)circle;
- (void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize { double x0; double x1; })sdksize andCornerRadius:(double)radius;
- (BOOL)isForegroundAccentImageTinted;
@end

#endif /* CLKImageProvider_h */
