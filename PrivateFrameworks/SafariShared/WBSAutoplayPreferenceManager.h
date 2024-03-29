//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSAutoplayPreferenceManager_h
#define WBSAutoplayPreferenceManager_h
@import Foundation;

#include "WBSPerSitePreferenceManager.h"
#include "WBSDomainAllowListManager.h"
#include "WBSPerSitePreference.h"
#include "WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h"
#include "WBSPerSitePreferenceManagerStorageDelegate-Protocol.h"
#include "WBSPerSitePreferencesSQLiteStore.h"

@class NSString;

@interface WBSAutoplayPreferenceManager : WBSPerSitePreferenceManager<WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {
  /* instance variables */
  WBSDomainAllowListManager *_domainAllowListManager;
}

@property (readonly, nonatomic) WBSPerSitePreference *autoplayPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

/* instance methods */
- (id)init;
- (id)initWithPerSitePreferencesStore:(id)store allowListManager:(id)manager;
- (void)getAutoplayPreferenceValueForDomain:(id)domain withTimeout:(double)timeout fallbackValue:(long long)value completionHandler:(id /* block */)handler;
- (void)getValueOfPreference:(id)preference forDomain:(id)domain withTimeout:(id)timeout usingBlock:(id /* block */)block;
- (void)setAutoplayPreferenceValue:(long long)value forURL:(id)url completionHandler:(id /* block */)handler;
- (void)prepareForTermination;
- (id)preferences;
- (id)valuesForPreference:(id)preference;
- (id)localizedStringForValue:(id)value inPreference:(id)preference;
- (void)didUpdatePreference:(id)preference toValue:(id)value forDomain:(id)domain;
- (id)preferenceNameForPreference:(id)preference;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)customized;
@end

#endif /* WBSAutoplayPreferenceManager_h */
