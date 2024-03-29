//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 266.1.0.0.0
//
#ifndef MDLTextureSampler_h
#define MDLTextureSampler_h
@import Foundation;

#include "MDLTexture.h"
#include "MDLTextureFilter.h"
#include "MDLTransform.h"

@interface MDLTextureSampler : NSObject

@property (nonatomic) unsigned long long mappingChannel;
@property (nonatomic) long long textureComponents;
@property (retain, nonatomic) MDLTexture *texture;
@property (retain, nonatomic) MDLTextureFilter *hardwareFilter;
@property (retain, nonatomic) MDLTransform *transform;

/* instance methods */
- (id)init;
@end

#endif /* MDLTextureSampler_h */
