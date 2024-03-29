//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSSystemPolicyManager_h
#define PSSystemPolicyManager_h
@import Foundation;

@interface PSSystemPolicyManager : NSObject
/* class methods */
+ (id)thirdPartyApplications;
+ (id)thirdPartyApplicationsIncludingAppClips:(BOOL)clips;
+ (id)thirdPartyApplicationForBundleID:(id)id;
+ (id)thirdPartyApplicationProxies;
+ (BOOL)hasAnyAppClip;
+ (id)_thirdPartyApplicationProxies;
+ (id)thirdPartyApplicationProxyForBundleID:(id)id;
+ (id)_thirdPartyApplicationProxyForBundleID:(id)id;
+ (BOOL)_shouldIncludeProxy:(id)proxy;
+ (BOOL)_systemSettingsNeededForProxy:(id)proxy;
+ (BOOL)_privacySettingsNeededForProxy:(id)proxy;
+ (BOOL)_photosSettingsNeededForProxy:(id)proxy;
+ (BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)proxy;
+ (id)_dataUsageWorkspaceInfo;
+ (BOOL)_cellularDataSettingsNeededForBundleID:(id)id;
+ (BOOL)_tapToPaySettingsNeededForBundleID:(id)id;
+ (BOOL)_pasteboardSettingsNeededForBundleID:(id)id;
+ (id)specifiersForThirdPartyApps:(id)apps;
+ (void)_populateBBSectionIDs;
+ (BOOL)_journalingSuggestionsSettingsNeededForBundleID:(id)id;
+ (BOOL)_liveActivitiesSettingsNeededForBundleID:(id)id;
+ (BOOL)_notificationSettingsNeededForBundleID:(id)id;
+ (BOOL)_documentSettingsNeededForBundleID:(id)id;
+ (BOOL)_defaultAppSettingsNeededForBundleID:(id)id;
+ (BOOL)_languageSettingNeededForBundleID:(id)id;
+ (BOOL)_familyControlsSettingNeededForBundleID:(id)id;
@end

#endif /* PSSystemPolicyManager_h */
