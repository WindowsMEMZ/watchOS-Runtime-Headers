//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIUserActionTarget_h
#define CNUIUserActionTarget_h
@import Foundation;

#include "CNTUCallProvider-Protocol.h"

@class NSString;

@interface CNUIUserActionTarget : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSString *actionType;
@property (retain) NSObject<CNTUCallProvider> *callProvider;

/* class methods */
+ (id)targetForEmailWithMail;
+ (id)targetForPayWithWallet;
+ (id)targetForDirections;
+ (id)targetForVoiceWithTelephony;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVoiceWithCallProvider:(id)provider;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)proxy;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVideoWithSkype;
+ (id)targetForVideoWithCallProvider:(id)provider;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)proxy;
+ (id)targetForTextWithMessages;
+ (id)targetForTextWithSkype;
+ (id)targetForSendMessageIntentWithAppProxy:(id)proxy;
+ (id)descriptorForRequiredKeysForActionDiscovering;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name bundleIdentifier:(id)identifier teamIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)actionsForContact:(id)contact discoveringEnvironment:(id)environment;
- (id)actionsForEmailAddresses:(id)addresses contact:(id)contact discoveringEnvironment:(id)environment;
- (id)actionsForPhoneNumbers:(id)numbers contact:(id)contact discoveringEnvironment:(id)environment;
- (id)actionsForInstantMessageAddresses:(id)addresses contact:(id)contact discoveringEnvironment:(id)environment;
- (id)actionsForSocialProfiles:(id)profiles contact:(id)contact discoveringEnvironment:(id)environment;
- (id)actionsForPostalAddresses:(id)addresses contact:(id)contact discoveringEnvironment:(id)environment;
@end

#endif /* CNUIUserActionTarget_h */
