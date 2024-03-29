//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.10.10.0.0
//
#ifndef TXRDeferredTextureInfo_h
#define TXRDeferredTextureInfo_h
@import Foundation;

#include "TXRTextureInfo.h"

@class NSMutableArray;

@interface TXRDeferredTextureInfo : NSObject

@property (retain, nonatomic) TXRTextureInfo *info;
@property (readonly, nonatomic) NSMutableArray *mipmaps;

/* instance methods */
- (id)initWithMipmapLevelCount:(unsigned long long)count arrayLength:(unsigned long long)length cubemap:(BOOL)cubemap;
@end

#endif /* TXRDeferredTextureInfo_h */
