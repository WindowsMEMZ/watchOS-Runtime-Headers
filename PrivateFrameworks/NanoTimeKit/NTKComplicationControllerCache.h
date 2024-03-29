//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationControllerCache_h
#define NTKComplicationControllerCache_h
@import Foundation;

#include "NTKFaceCollection.h"
#include "NTKFaceCollectionObserver-Protocol.h"
#include "NTKFaceObserver-Protocol.h"

@class NSMapTable, NSString;

@interface NTKComplicationControllerCache : NSObject<NTKFaceObserver, NTKFaceCollectionObserver> {
  /* instance variables */
  NSMapTable *_controllers;
  NSMapTable *_faceToControllers;
  NTKFaceCollection *_libraryCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedCache;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)controllerForComplication:(id)complication variant:(id)variant device:(id)device create:(id /* block */)create;
- (void)setLibraryCollection:(id)collection;
- (void)faceCollectionDidLoad:(id)load;
- (void)faceCollectionDidReset:(id)reset;
- (void)faceCollection:(id)collection didAddFace:(id)face atIndex:(unsigned long long)index;
- (void)faceCollection:(id)collection didRemoveFace:(id)face atIndex:(unsigned long long)index;
- (void)faceConfigurationDidChange:(id)change;
- (void)_registerFace:(id)face;
- (void)_unregisterFace:(id)face;
- (void)_removeControllersForFace:(id)face;
- (void)_updateControllersForFace:(id)face;
- (void)_purge;
- (void)_cleanupRemovedFaces;
@end

#endif /* NTKComplicationControllerCache_h */
