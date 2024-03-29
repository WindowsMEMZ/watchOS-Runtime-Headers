//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPictureItem_Protocol_h
#define GEOPictureItem_Protocol_h
@import Foundation;

#include "GEOMapItemPhoto-Protocol.h"
#include "GEOPictureItem-Protocol.h"

@class NSString;

@protocol GEOPictureItem 

@property (readonly, nonatomic) NSObject<GEOMapItemPhoto> *photo;
@property (readonly, nonatomic) int pictureItemPhotoType;
@property (readonly, nonatomic) NSString *primaryText;
@property (readonly, nonatomic) NSString *secondaryText;

@end

#endif /* GEOPictureItem_Protocol_h */
