//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassTileAccessoryImage_h
#define PKPassTileAccessoryImage_h
@import Foundation;

#include "PKPassTileAccessory.h"
#include "PKPassTileImage.h"

@interface PKPassTileAccessoryImage : PKPassTileAccessory

@property (retain, nonatomic) PKPassTileImage *image;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)_setupWithDictionary:(id)dictionary;
- (id)createResolvedAccessoryWithBundle:(id)bundle privateBundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)_isEqual:(id)equal;
@end

#endif /* PKPassTileAccessoryImage_h */
