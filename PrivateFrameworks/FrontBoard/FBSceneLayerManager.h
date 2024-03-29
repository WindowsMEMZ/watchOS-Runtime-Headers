//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSceneLayerManager_h
#define FBSceneLayerManager_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "FBScene.h"

@class NSHashTable, NSOrderedSet, NSString;

@interface FBSceneLayerManager : NSObject<BSDescriptionProviding> {
  /* instance variables */
  NSOrderedSet *_fbsLayers;
  NSHashTable *_observers;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSOrderedSet *layers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)layerWithContextID:(unsigned int)id;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)_initWithScene:(id)scene;
- (void)_objc_initiateDealloc;
- (void)_setLayers:(id)layers;
- (void)_observer_didStartTrackingLayers;
- (void)_observer_didStopTrackingLayers;
- (void)_observer_sceneLayerManagerDidUpdateLayers;
@end

#endif /* FBSceneLayerManager_h */
