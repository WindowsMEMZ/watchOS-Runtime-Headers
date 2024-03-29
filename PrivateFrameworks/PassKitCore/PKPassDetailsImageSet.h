//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassDetailsImageSet_h
#define PKPassDetailsImageSet_h
@import Foundation;

#include "PKPassImageSet.h"
#include "PKImage.h"

@interface PKPassDetailsImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *cardHolderPicture;

/* class methods */
+ (long long)imageSetType;
+ (BOOL)shouldCache;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDisplayProfile:(id)profile fileURL:(id)url screenScale:(double)scale suffix:(id)suffix;
- (void)preheatImages;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* PKPassDetailsImageSet_h */
