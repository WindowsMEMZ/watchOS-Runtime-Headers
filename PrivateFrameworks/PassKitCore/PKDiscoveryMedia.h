//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryMedia_h
#define PKDiscoveryMedia_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKColor.h"

@class NSDictionary, NSString, NSURL;

@interface PKDiscoveryMedia : NSObject<NSSecureCoding>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *urls;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) PKColor *backgroundColor;
@property (readonly, nonatomic) NSString *passKitUIImageName;
@property (readonly, nonatomic) NSURL *localAssetURL;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)imageDataFromCacheWithScale:(double)scale;
- (void)downloadImageDataWithScale:(double)scale shouldWriteData:(BOOL)data completion:(id /* block */)completion;
- (id)_remoteAssetForScale:(double)scale;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PKDiscoveryMedia_h */
