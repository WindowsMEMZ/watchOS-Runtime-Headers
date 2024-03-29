//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSimpleAlbumList_h
#define PLSimpleAlbumList_h
@import Foundation;

#include "PLAssetContainerList-Protocol.h"

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject<PLAssetContainerList>

@property (retain, nonatomic) NSOrderedSet *containers;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAssetContainer:(id)container;
- (id)initWithAssetContainers:(id)containers;
- (BOOL)isEmpty;
- (BOOL)canEditContainers;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)containersRelationshipName;
@end

#endif /* PLSimpleAlbumList_h */
