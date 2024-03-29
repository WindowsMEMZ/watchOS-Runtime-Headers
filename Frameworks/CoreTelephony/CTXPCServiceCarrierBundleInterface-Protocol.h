//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTXPCServiceCarrierBundleInterface_Protocol_h
#define CTXPCServiceCarrierBundleInterface_Protocol_h
@import Foundation;

@protocol CTXPCServiceCarrierBundleInterface 
/* instance methods */
- (void)copyCarrierBundleValue:(id)value key:(id)key bundleType:(id)type completion:(id /* block */)completion;
- (void)copyCarrierBundleValue:(id)value keyHierarchy:(id)hierarchy bundleType:(id)type completion:(id /* block */)completion;
- (void)copyCarrierBundleValues:(id)values keys:(id)keys defaultValues:(id)values bundleType:(id)type withFallbackBundleCheck:(BOOL)check completion:(id /* block */)completion;
- (void)copyCarrierBundleValues:(id)values keyHierarchies:(id)hierarchies defaultValues:(id)values bundleType:(id)type withFallbackBundleCheck:(BOOL)check completion:(id /* block */)completion;
- (void)copyCarrierBundleValueWithDefault:(id)default key:(id)key bundleType:(id)type completion:(id /* block */)completion;
- (void)copyCarrierBundleValueWithDefault:(id)default keyHierarchy:(id)hierarchy bundleType:(id)type completion:(id /* block */)completion;
- (void)copyCarrierBundleValueWithCountryBundleLookup:(id)lookup keyHierarchy:(id)hierarchy matchingInfo:(id)info completion:(id /* block */)completion;
- (void)copyCarrierBundleLocation:(id)location completion:(id /* block */)completion;
- (void)copyCarrierBookmarks:(id)bookmarks completion:(id /* block */)completion;
- (void)copyCarrierBundleVersion:(id)version completion:(id /* block */)completion;
- (void)isAttachApnSettingAllowed:(id)allowed completion:(id /* block */)completion;
- (void)context:(id)context modifyAttachApnSettings:(id)settings completion:(id /* block */)completion;
- (void)context:(id)context getAttachApnSettingsWithCompletion:(id /* block */)completion;
- (void)setWiFiCallingSettingPreferences:(id)preferences key:(id)key value:(id)value completion:(id /* block */)completion;
- (void)getWiFiCallingSettingPreferences:(id)preferences key:(id)key completion:(id /* block */)completion;
- (void)copyBundleVersion:(id)version bundleType:(id)type completion:(id /* block */)completion;
- (void)copyBundleIdentifier:(id)identifier bundleType:(id)type completion:(id /* block */)completion;
- (void)restoreToSystemBundles:(id /* block */)bundles;
- (void)getCountryBundleLocationForBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)getCountryBundleIdentifierForCountryCode:(id)code completion:(id /* block */)completion;
- (void)getEnglishCarrierNameFor:(id)for completion:(id /* block */)completion;
- (void)copyBundleLocation:(id)location bundleType:(id)type completion:(id /* block */)completion;
- (void)checkForUpdatedBundlesWithAutoInstall:(BOOL)install completion:(id /* block */)completion;
- (void)getCountryBundleLocationForMatchingInfo:(id)info completion:(id /* block */)completion;
@end

#endif /* CTXPCServiceCarrierBundleInterface_Protocol_h */
