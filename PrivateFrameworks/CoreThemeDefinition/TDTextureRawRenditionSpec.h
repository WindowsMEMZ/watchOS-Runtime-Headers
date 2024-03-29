//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDTextureRawRenditionSpec_h
#define TDTextureRawRenditionSpec_h
@import Foundation;

#include "TDTextureImageRenditionSpec.h"

@interface TDTextureRawRenditionSpec : TDTextureImageRenditionSpec
/* class methods */
+ (id)fetchRequest;

/* instance methods */
- (id)textureWithDocument:(id)document;
- (id)createCSIRepresentationWithCompression:(BOOL)compression colorSpaceID:(unsigned long long)id document:(id)document;
@end

#endif /* TDTextureRawRenditionSpec_h */
