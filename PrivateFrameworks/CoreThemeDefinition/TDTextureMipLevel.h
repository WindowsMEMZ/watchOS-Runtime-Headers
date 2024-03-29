//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDTextureMipLevel_h
#define TDTextureMipLevel_h
@import Foundation;

#include "NSManagedObject.h"
#include "TDTextureFace.h"
#include "TDTextureImageRenditionSpec.h"
#include "TDTextureRenditionSpec.h"

@interface TDTextureMipLevel : NSManagedObject

@property (@dynamic, nonatomic) short level;
@property (retain, @dynamic, nonatomic) TDTextureRenditionSpec *texture;
@property (retain, @dynamic, nonatomic) TDTextureImageRenditionSpec *textureImage;
@property (retain, @dynamic, nonatomic) TDTextureFace *face;

@end

#endif /* TDTextureMipLevel_h */
