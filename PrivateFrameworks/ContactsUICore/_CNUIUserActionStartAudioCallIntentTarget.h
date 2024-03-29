//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef _CNUIUserActionStartAudioCallIntentTarget_h
#define _CNUIUserActionStartAudioCallIntentTarget_h
@import Foundation;

#include "CNUIUserActionTarget.h"

@interface _CNUIUserActionStartAudioCallIntentTarget : CNUIUserActionTarget
/* instance methods */
- (id)actionsForEmailAddresses:(id)addresses contact:(id)contact discoveringEnvironment:(id)environment;
- (id)actionsForPhoneNumbers:(id)numbers contact:(id)contact discoveringEnvironment:(id)environment;
- (id)actionsForSocialProfiles:(id)profiles contact:(id)contact discoveringEnvironment:(id)environment;
- (id)actionsForInstantMessageAddresses:(id)addresses contact:(id)contact discoveringEnvironment:(id)environment;
@end

#endif /* _CNUIUserActionStartAudioCallIntentTarget_h */
