//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSPerSitePreferenceManagerDefaultsDelegate_Protocol_h
#define WBSPerSitePreferenceManagerDefaultsDelegate_Protocol_h
@import Foundation;

@protocol WBSPerSitePreferenceManagerDefaultsDelegate <NSObject>

@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

/* instance methods */
- (id)preferenceNameForPreference:(id)preference;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)customized;
@optional
/* instance methods */
- (void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)preference domain:(id)domain completionHandler:(id /* block */)handler;
@end

#endif /* WBSPerSitePreferenceManagerDefaultsDelegate_Protocol_h */
