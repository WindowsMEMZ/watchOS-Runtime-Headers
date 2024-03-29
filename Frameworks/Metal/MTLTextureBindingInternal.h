//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLTextureBindingInternal_h
#define MTLTextureBindingInternal_h
@import Foundation;

#include "MTLBindingInternal.h"
#include "MTLTextureBinding-Protocol.h"

@class NSString;

@interface MTLTextureBindingInternal : MTLBindingInternal<MTLTextureBinding> {
  /* instance variables */
  unsigned int x :1 _isDepthTexture;
}

@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long textureDataType;
@property (readonly) BOOL depthTexture;
@property (readonly) unsigned long long arrayLength;
@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly) BOOL used;
@property (readonly) BOOL argument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name access:(unsigned long long)access isActive:(BOOL)active locationIndex:(unsigned long long)index arraySize:(unsigned long long)size dataType:(unsigned long long)type textureType:(unsigned long long)type isDepthTexture:(BOOL)texture;
- (BOOL)isDepthTexture;
- (id)formattedDescription:(unsigned long long)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* MTLTextureBindingInternal_h */
