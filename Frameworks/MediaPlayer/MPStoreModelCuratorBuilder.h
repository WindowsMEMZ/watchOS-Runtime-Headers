//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPStoreModelCuratorBuilder_h
#define MPStoreModelCuratorBuilder_h
@import Foundation;

#include "MPStoreModelObjectBuilder.h"

@interface MPStoreModelCuratorBuilder : MPStoreModelObjectBuilder {
  /* instance variables */
  struct { unsigned int x :1 initialized; unsigned int x :1 name; unsigned int x :1 shortName; unsigned int x :1 hasSocialPosts; unsigned int x :1 editorNotes; unsigned int x :1 shortEditorNotes; unsigned int x :1 curatorKind; unsigned int x :1 curatorSubKind; unsigned int x :1 editorialArtwork; unsigned int x :1 brandLogoArtwork; } _requestedCuratorProperties;
}

/* class methods */
+ (id)allSupportedProperties;

/* instance methods */
- (id)modelObjectWithStoreItemMetadata:(id)metadata sourceModelObject:(id)object userIdentity:(id)identity;
@end

#endif /* MPStoreModelCuratorBuilder_h */
