//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef _MSMessageMediaPayload_h
#define _MSMessageMediaPayload_h
@import Foundation;

#include "NSItemProviderReading-Protocol.h"
#include "NSItemProviderWriting-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL, NSUUID, UIImage;

@interface _MSMessageMediaPayload : NSObject<NSSecureCoding, NSItemProviderWriting, NSItemProviderReading>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *mediaURL;
@property (copy, nonatomic) NSData *mediaData;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *mediaFilename;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (nonatomic) BOOL isSticker;
@property (copy, nonatomic) NSString *stickerPackGUID;
@property (nonatomic) unsigned long long stickerPositionVersion;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceFrame;
@property (nonatomic) unsigned long long initialFrameIndex;
@property (retain, nonatomic) NSArray *stickerRepresentations;
@property (copy, nonatomic) NSString *externalURI;
@property (copy, nonatomic) NSUUID *stickerStoreIdentifier;
@property (copy, nonatomic) NSString *stickerName;
@property (copy, nonatomic) NSData *stickerMetadata;
@property (copy, nonatomic) NSURL *animatedImageCacheURL;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)data typeIdentifier:(id)identifier error:(id *)error;

/* instance methods */
- (id)convertToStickerWithExtensionIdentifier:(id)identifier;
- (id)initWithSticker:(id)sticker;
- (id)initWithIMSticker:(id)imsticker;
- (BOOL)uriIsMemoji;
- (BOOL)uriIsUltraExtension;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (id)loadDataWithTypeIdentifier:(id)identifier forItemProviderCompletionHandler:(id /* block */)handler;
@end

#endif /* _MSMessageMediaPayload_h */
