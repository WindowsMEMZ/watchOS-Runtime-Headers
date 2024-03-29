//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSceneManager_h
#define FBSceneManager_h
@import Foundation;

#include "FBSceneManagerDelegate-Protocol.h"
#include "FBSceneWorkspace.h"

@interface FBSceneManager : NSObject {
  /* instance variables */
  FBSceneWorkspace *_workspace;
}

@property (nonatomic) BOOL _suppressConnectionHandshakes;
@property (weak, nonatomic) NSObject<FBSceneManagerDelegate> *delegate;

/* class methods */
+ (id)keyboardScene;
+ (void)_clearKeyboardScene;
+ (void)setKeyboardScene:(id)scene;
+ (id)observeKeyboardSceneAvailability:(id /* block */)availability;
+ (id)sharedInstance;
+ (void)synchronizeChanges:(id /* block */)changes;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)sceneWithIdentifier:(id)identifier;
- (void)enumerateScenesWithBlock:(id /* block */)block;
- (id)scenesPassingTest:(id /* block */)test;
- (id)sceneFromIdentityToken:(id)token;
- (id)sceneFromIdentityTokenStringRepresentation:(id)representation;
- (id)createSceneWithDefinition:(id)definition;
- (id)createSceneWithDefinition:(id)definition initialParameters:(id)parameters;
- (id)createSceneWithIdentifier:(id)identifier parameters:(id)parameters clientProvider:(id)provider transitionContext:(id)context;
- (id)createSceneFromRemnant:(id)remnant withSettings:(id)settings transitionContext:(id)context;
- (id)createLegacySceneFromRemnant:(id)remnant withSettings:(id)settings transitionContext:(id)context;
- (id)createSceneWithIdentifier:(id)identifier settings:(id)settings initialClientSettings:(id)settings clientProvider:(id)provider transitionContext:(id)context;
- (void)destroyScene:(id)scene withTransitionContext:(id)context;
- (id)newSceneIdentityTokenForIdentity:(id)identity;
- (void)_setSuppressConnectionHandshakes:(BOOL)handshakes;
- (BOOL)_isSynchronizingSceneUpdates;
- (id)_createSceneWithDefinition:(id)definition settings:(id)settings initialClientSettings:(id)settings transitionContext:(id)context fromRemnant:(id)remnant usingClientProvider:(id)provider completion:(id /* block */)completion;
- (id)description;
- (id)debugDescription;
@end

#endif /* FBSceneManager_h */
