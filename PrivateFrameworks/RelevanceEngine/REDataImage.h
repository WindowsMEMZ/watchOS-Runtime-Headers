//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REDataImage_h
#define REDataImage_h
@import Foundation;

#include "REImage.h"

@class NSData;

@interface REDataImage : REImage

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) double scale;

/* instance methods */
- (id)initWithData:(id)data scale:(double)scale;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* REDataImage_h */
