//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAOTLogoPolicy_h
#define CSLAOTLogoPolicy_h
@import Foundation;

#include "CSLUIOverlayManager.h"
#include "CSLUIOverlayManagerObserver-Protocol.h"
#include "CarouselStartupObserver-Protocol.h"

@class CSLPIBacklightAssertion, NSString;

@interface CSLAOTLogoPolicy : NSObject<CSLUIOverlayManagerObserver, CarouselStartupObserver>

@property (retain, nonatomic) CSLUIOverlayManager *logoManager;
@property (retain, nonatomic) CSLPIBacklightAssertion *backlightAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)policyWithLogoManager:(id)manager;

/* instance methods */
- (id)initWithLogoManager:(id)manager;
- (void)dealloc;
- (void)activate;
- (void)_updateAssertionForLogoVisibility:(BOOL)visibility;
- (void)carouselUIStarted;
- (void)carouselDidDismissOverlay;
- (void)overlayManager:(id)manager didUpdateOverlayVisibility:(BOOL)visibility;
@end

#endif /* CSLAOTLogoPolicy_h */
