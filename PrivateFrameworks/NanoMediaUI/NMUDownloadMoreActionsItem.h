//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUDownloadMoreActionsItem_h
#define NMUDownloadMoreActionsItem_h
@import Foundation;

#include "NMULegacyActionItemProvider-Protocol.h"

@class MPAVRoute, MPLibraryAddStatusObserver, MPModelObject, NSString;

@interface NMUDownloadMoreActionsItem : NSObject<NMULegacyActionItemProvider> {
  /* instance variables */
  unsigned long long _type;
  MPModelObject *_modelObject;
  MPAVRoute *_endpointRoute;
  id /* block */ _invalidationBlock;
  MPLibraryAddStatusObserver *_libraryAddStatusObserver;
}

@property (copy, nonatomic) id /* block */ visibilityBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requiredPropertiesForModelKind:(id)kind;

/* instance methods */
- (id)initWithType:(unsigned long long)type modelObject:(id)object endpointRoute:(id)route invalidationBlock:(id /* block */)block;
- (id)legacyAction;
- (BOOL)_isVisible;
- (void)_performActionWithCompletion:(id /* block */)completion;
- (void)_performKeepLocalRequestWithModelObject:(id)object enableState:(long long)state completion:(id /* block */)completion;
- (id)_topmostPresentedViewController;
- (void)_presentRemoveWorkoutPlaylistAlertIfNecessaryWithResponseHandler:(id /* block */)handler;
- (BOOL)_containsDisabledOrCancelledSongs;
@end

#endif /* NMUDownloadMoreActionsItem_h */
