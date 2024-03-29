//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKBitmapConversionDescriptor_h
#define PKBitmapConversionDescriptor_h
@import Foundation;

@interface PKBitmapConversionDescriptor : NSObject

@property (copy, nonatomic) id /* block */ alphaInfoTransform;
@property (nonatomic) BOOL floatingComponents;
@property (readonly, nonatomic) unsigned char bitsPerComponent;
@property (readonly, nonatomic) unsigned int byteOrder;
@property (readonly, nonatomic) struct CGColorSpace * colorSpace;
@property (readonly, copy, nonatomic) id /* block */ colorTransformPolicy;

/* class methods */
+ (id)create;
+ (id)create8Uint;
+ (id)create16Float;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)convertContext:(id)context;
- (id)convertFromContext:(id)context;
- (id)convertImage:(struct CGImage *)image;
- (void)setBitsPerComponent:(unsigned char)component withByteOrder:(unsigned int)order;
- (void)setColorSpace:(struct CGColorSpace *)space withPolicy:(id /* block */)policy;
@end

#endif /* PKBitmapConversionDescriptor_h */
