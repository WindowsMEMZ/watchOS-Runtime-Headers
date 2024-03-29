//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSDisplayRenderOverlay_h
#define BKSDisplayRenderOverlay_h
@import Foundation;

#include "BKSDisplayProgressIndicatorProperties.h"
#include "BKSDisplayRenderOverlayDescribing-Protocol.h"
#include "BKSDisplayRenderOverlayDescriptor.h"
#include "BKSDisplayRenderOverlayDismissAction-Protocol.h"
#include "BSDescriptionProviding-Protocol.h"

@class CADisplay, NSString;

@interface BKSDisplayRenderOverlay : NSObject<BSDescriptionProviding, BKSDisplayRenderOverlayDescribing, BKSDisplayRenderOverlayDismissAction>

@property (readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) CADisplay *display;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) BOOL lockBacklight;
@property (readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly, nonatomic) BOOL interstitial;
@property (readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;

/* class methods */
+ (id)existingOverlayForDisplay:(id)display;
+ (id)dismissActions;

/* instance methods */
- (id)initWithDescriptor:(id)descriptor;
- (void)present;
- (void)freeze;
- (BOOL)isInterstitial;
- (void)dismiss;
- (void)dismissWithAnimation:(id)animation;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)_descriptor;
@end

#endif /* BKSDisplayRenderOverlay_h */
