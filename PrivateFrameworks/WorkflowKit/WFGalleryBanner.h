//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFGalleryBanner_h
#define WFGalleryBanner_h
@import Foundation;

#include "NSMutableCopying-Protocol.h"
#include "WFCloudKitItem-Protocol.h"

@class CKRecordID, NSArray, NSData, NSString, WFFileRepresentation;

@interface WFGalleryBanner : NSObject<WFCloudKitItem, NSMutableCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) CKRecordID *detailPage;
@property (retain, nonatomic) WFFileRepresentation *iphone2xImageFile;
@property (retain, nonatomic) WFFileRepresentation *iphone3xImageFile;
@property (retain, nonatomic) WFFileRepresentation *ipad2xImageFile;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) NSArray *supportedIdioms;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)recordType;
+ (id)properties;
+ (id)propertyForSize:(long long)size;
+ (double)scaleForBannerSize:(long long)size;
+ (struct CGSize { double x0; double x1; })pointSizeForBannerSize:(long long)size;
+ (struct CGSize { double x0; double x1; })pixelSizeForBannerSize:(long long)size;

/* instance methods */
- (unsigned long long)referenceActionForKey:(id)key;
- (id)imageFileForSize:(long long)size;
- (id)imageForSize:(long long)size;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* WFGalleryBanner_h */
