//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNImage_h
#define LNImage_h
@import Foundation;

#include "LNImage.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class INImage;

@interface LNImage : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) INImage *inImage;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly, nonatomic) LNImage *proxiedImageCopy;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithImageNamed:(id)named;
- (id)initWithImageNamed:(id)named renderingMode:(unsigned long long)mode;
- (id)initWithImageNamed:(id)named renderingMode:(unsigned long long)mode displayStyle:(unsigned long long)style;
- (id)initWithSystemImageNamed:(id)named;
- (id)initWithData:(id)data renderingMode:(unsigned long long)mode;
- (id)initWithData:(id)data renderingMode:(unsigned long long)mode displayStyle:(unsigned long long)style;
- (id)initWithURL:(id)url renderingMode:(unsigned long long)mode;
- (id)initWithURL:(id)url renderingMode:(unsigned long long)mode displayStyle:(unsigned long long)style;
- (id)initWithURL:(id)url width:(double)width height:(double)height renderingMode:(unsigned long long)mode;
- (id)initWithURL:(id)url width:(double)width height:(double)height renderingMode:(unsigned long long)mode displayStyle:(unsigned long long)style;
- (id)initWithINImage:(id)inimage displayStyle:(unsigned long long)style;
- (id)initWithINImage:(id)inimage;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* LNImage_h */
