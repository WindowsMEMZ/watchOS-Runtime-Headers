//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUShareMoreActionsItem_h
#define NMUShareMoreActionsItem_h
@import Foundation;

#include "NMULegacyActionItemProvider-Protocol.h"

@class MPAVRoute, MPModelObject, NSString;

@interface NMUShareMoreActionsItem : NSObject<NMULegacyActionItemProvider> {
  /* instance variables */
  MPModelObject *_modelObject;
  MPAVRoute *_endpointRoute;
  id /* block */ _invalidationBlock;
  BOOL _loading;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requiredPropertiesForModelKind:(id)kind;

/* instance methods */
- (id)initWithModelObject:(id)object endpointRoute:(id)route invalidationBlock:(id /* block */)block;
- (id)legacyAction;
- (BOOL)_isVisible;
- (void)_performAction;
- (void)_lookupModelObjectWithIdentifierString:(id)string completion:(id /* block */)completion;
- (void)_presentShareSheetFromViewController:(id)controller withItem:(id)item;
- (void)_presentPublishPlaylistFailedAlertFromViewController:(id)controller;
- (void)_presentSharingFailedAlertFromViewController:(id)controller;
- (void)_dismissMoreActionsMenuAndPresentViewController:(id)controller fromPresentingViewController:(id)controller;
- (id)_topmostPresentedViewController;
@end

#endif /* NMUShareMoreActionsItem_h */
