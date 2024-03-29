//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKAuthenticateResponse_h
#define GKAuthenticateResponse_h
@import Foundation;

#include "GKInternalRepresentation.h"

@class NSString, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (nonatomic) BOOL loginDisabled;
@property (nonatomic) BOOL loginBannerDisabled;
@property (nonatomic) BOOL passwordChangeRequired;
@property (retain, nonatomic) NSURL *passwordChangeURL;
@property (nonatomic) BOOL shouldShowLinkAccountsUI;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) NSString *alertMessage;
@property (nonatomic) unsigned long long lastWelcomeWhatsNewCopyVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (retain, nonatomic) NSString *lastProfilePrivacyVersionDisplayed;
@property (retain, nonatomic) NSString *lastContactsIntegrationConsentVersionDisplayed;
@property (retain, nonatomic) NSString *lastFriendSuggestionsVersionDisplayed;
@property (nonatomic) BOOL accessPointIsOnAutomatically;
@property (nonatomic) BOOL accessPointShowHighlights;
@property (nonatomic) long long accessPointLocation;

/* class methods */
+ (id)secureCodedPropertyKeys;

/* instance methods */
- (id)init;
@end

#endif /* GKAuthenticateResponse_h */
