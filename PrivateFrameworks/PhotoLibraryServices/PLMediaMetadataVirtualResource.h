//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLMediaMetadataVirtualResource_h
#define PLMediaMetadataVirtualResource_h
@import Foundation;

#include "PLVirtualResource.h"

@interface PLMediaMetadataVirtualResource : PLVirtualResource {
  /* instance variables */
  unsigned long long _dataLength;
}

/* instance methods */
- (id)initWithAsset:(id)asset resourceType:(unsigned int)type version:(unsigned int)version recipeID:(unsigned int)id dataLength:(unsigned long long)length;
- (long long)dataLength;
- (long long)estimatedDataLength;
@end

#endif /* PLMediaMetadataVirtualResource_h */
