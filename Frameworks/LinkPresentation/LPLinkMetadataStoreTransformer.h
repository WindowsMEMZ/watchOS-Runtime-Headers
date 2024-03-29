//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPLinkMetadataStoreTransformer_h
#define LPLinkMetadataStoreTransformer_h
@import Foundation;

#include "LPLinkMetadata.h"

@class NSURL;

@interface LPLinkMetadataStoreTransformer : NSObject {
  /* instance variables */
  LPLinkMetadata *_metadata;
  NSURL *_URL;
}

/* instance methods */
- (id)initWithMetadata:(id)metadata URL:(id)url;
- (id)storeIdentifier;
@end

#endif /* LPLinkMetadataStoreTransformer_h */
