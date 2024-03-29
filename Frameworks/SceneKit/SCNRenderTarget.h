//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNRenderTarget_h
#define SCNRenderTarget_h
@import Foundation;

@class CIImage, NSArray, NSString;

@interface SCNRenderTarget : NSObject {
  /* instance variables */
  struct { unsigned char format; unsigned char sampleCount; unsigned char textureUsage; unsigned int x :1 renderToTexture; unsigned int x :1 forceTextureRect; unsigned int x :1 viewportDependant; unsigned int x :1 renderToIOSurface; unsigned int x :1 mipmapped; unsigned int x :1 textureCube; unsigned char x[4] padding; } _description;
   _size;
  unsigned long long _arrayLength;
  CIImage *_ciImage;
  NSArray *_sliceTextures;
}

@property (retain, nonatomic) id texture;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long referenceCount;
@property (nonatomic) long long timeStamp;
@property (readonly, nonatomic) BOOL viewportDependant;
@property (readonly, nonatomic) unsigned char renderBufferFormat;

/* instance methods */
- (id)initWithDescription:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned char x9[4] } *)description size:(unsigned long long)size;
- (void)dealloc;
- (id)description;
- (BOOL)matchesDescription:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned char x9[4] } *)description size:(unsigned long long)size;
- (id)textureForSliceIndex:(unsigned long long)index;
- (id)ciImage;
@end

#endif /* SCNRenderTarget_h */
