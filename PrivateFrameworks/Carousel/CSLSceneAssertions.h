//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSceneAssertions_h
#define CSLSceneAssertions_h
@import Foundation;

#include "CSLBacklightIdleAssertion.h"
#include "CSLEnableClientSideOrientationEventsAssertion.h"
#include "CSLEnableLocalOrientationEventsAssertion.h"
#include "CSLEnableOrientationEventsAssertionDelegate-Protocol.h"

@class CSLPIBacklightAssertion, FBScene, NSString;

@interface CSLSceneAssertions : NSObject<CSLEnableOrientationEventsAssertionDelegate> {
  /* instance variables */
  FBScene *_scene;
}

@property (retain, nonatomic) CSLBacklightIdleAssertion *backlightIdleAssertion;
@property (retain, nonatomic) CSLPIBacklightAssertion *disableSleepAssertion;
@property (retain, nonatomic) CSLEnableLocalOrientationEventsAssertion *localOrientationEventsAssertion;
@property (retain, nonatomic) CSLEnableClientSideOrientationEventsAssertion *clientSideOrientationEventsAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScene:(id)scene;
- (id)init;
- (id)_assertionIdentifierForSceneIdentifier:(id)identifier;
- (void)updateAssertionsForScene:(id)scene;
- (void)orientationEventsAssertion:(id)assertion deviceChangedToOrientation:(long long)orientation;
- (void)_updateForDeviceOrientation:(long long)orientation;
- (void)updateSceneToOrientation:(long long)orientation;
@end

#endif /* CSLSceneAssertions_h */
