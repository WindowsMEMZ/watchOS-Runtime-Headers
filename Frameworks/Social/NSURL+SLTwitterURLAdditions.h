//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 756.0.0.0.0
//
#ifndef NSURL_SLTwitterURLAdditions_h
#define NSURL_SLTwitterURLAdditions_h
@import Foundation;

@interface NSURL (SLTwitterURLAdditions)
/* class methods */
+ (BOOL)_isBetaSwitchEnabledForKey:(struct __CFString *)key;
+ (id)URLForFacebookRESTMethod:(id)restmethod;
+ (id)URLForFacebookGraphAPIWithPath:(id)path;
+ (id)URLForFacebookGraphAPIWithDomain:(id)domain path:(id)path;
+ (id)URLForFacebookPageAtPath:(id)path;
+ (id)SLTwitterUpdateStatusURL;
+ (id)SLTwitterUpdateMultiPartStatusURL;
+ (id)SLTwitterNearbyPlacesURL;
+ (id)SLTwitterFriendshipsURL;
+ (id)SLTwitterFriendsURL;
+ (id)SLTwitterTCoLengthURL;
+ (id)SLTwitterImageLimitsURL;
+ (id)SLTwitterVerifyCredentialsURL;
+ (id)SLTwitterCleanupPushDestinationsURL;
+ (id)SLTwitterRequestTokenURL;
+ (id)SLTwitterAccessTokenURL;
+ (id)SLTwitterUserInfoURL;
+ (id)SLTwitterAccountSettingsURL;
+ (id)SLTwitterUsersLookupURL;
+ (id)SLTwitterAccountGenerateURL;
+ (id)SLTwitterRetweetURLForTweetID:(id)id;
+ (id)SLTwitterDirectMessageURL;

/* instance methods */
- (BOOL)isMusicStoreURL;
- (BOOL)isAppStoreURL;
- (BOOL)isAssetURL;
- (BOOL)loadingInUIWebViewWillLaunchAnotherApp;
@end

#endif /* NSURL_SLTwitterURLAdditions_h */
