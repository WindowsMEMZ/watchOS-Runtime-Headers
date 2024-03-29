//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REUIElementDonatedActionAction_h
#define REUIElementDonatedActionAction_h
@import Foundation;

#include "REElementAction.h"
#include "REUIDonatedElementProperties.h"
#include "REUISiriActionsPerformer.h"
#include "REUISiriActionsPerformerDelegate-Protocol.h"

@class NSString, UIImage;
@protocol REUIElementDonatedActionActionDelegate;

@interface REUIElementDonatedActionAction : REElementAction<REUISiriActionsPerformerDelegate>

@property (retain, nonatomic) REUISiriActionsPerformer *performer;
@property (retain, nonatomic) REUIDonatedElementProperties *properties;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) UIImage *appIcon;
@property (weak, @dynamic, nonatomic) NSObject<REUIElementDonatedActionActionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProperties:(id)properties;
- (id)fullsizeAppIcon;
- (void)dealloc;
- (id)_newPerformer;
- (void)_performWithContext:(id)context;
- (id)siriActionsPerformerWantsAlertBackgroundImage:(id)image;
- (id)siriActionsPerformerWantsBackgroundViewToBlur:(id)blur;
- (void)siriActionsPerformerDidSucceed:(id)succeed;
- (void)siriActionsPerformer:(id)performer didFailWithError:(id)error;
- (BOOL)siriActionsPerformer:(id)performer wantsToPresentViewController:(id)controller;
- (BOOL)siriActionsPerformer:(id)performer wantsToDismissViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)siriActionsPerformerWantsToSuppressDismissal:(id)dismissal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REUIElementDonatedActionAction_h */
