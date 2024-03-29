//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCProfileUIDataProvider_Protocol_h
#define DMCProfileUIDataProvider_Protocol_h
@import Foundation;

@protocol DMCProfileUIDataProvider 
/* instance methods */
- (BOOL)isProvisionallyEnrolled;
- (BOOL)isPasscodeSet;
- (id)installedMDMProfileIdentifier;
- (id)installedProfileWithIdentifier:(id)identifier;
- (id)payloadsSummaryForProfile:(id)profile showManagedPayloads:(BOOL)payloads;
- (id)managedAppsUninstalledOnMDMRemoval;
- (id)rmAccount;
- (void)updateProfileWithIdentifier:(id)identifier interactionDelegate:(id)delegate;
- (void)unenrollWithCompletionBlock:(id /* block */)block;
- (id)rmSpecifierProviderForProfileIdentifier:(id)identifier;
@end

#endif /* DMCProfileUIDataProvider_Protocol_h */
