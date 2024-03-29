//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef LSApplicationWorkspaceObserverProtocol_Protocol_h
#define LSApplicationWorkspaceObserverProtocol_Protocol_h
@import Foundation;

@protocol LSApplicationWorkspaceObserverProtocol <NSObject>
@optional
/* instance methods */
- (void)applicationInstallsDidStart:(id)start;
- (void)applicationInstallsDidChange:(id)change;
- (void)applicationInstallsDidUpdateIcon:(id)icon;
- (void)applicationsWillInstall:(id)install;
- (void)applicationsDidInstall:(id)install;
- (void)pluginsDidInstall:(id)install;
- (void)applicationsDidFailToInstall:(id)install;
- (void)applicationsWillUninstall:(id)uninstall;
- (void)pluginsWillUninstall:(id)uninstall;
- (void)applicationsDidUninstall:(id)uninstall;
- (void)pluginsDidUninstall:(id)uninstall;
- (void)applicationsDidFailToUninstall:(id)uninstall;
- (void)applicationInstallsArePrioritized:(id)prioritized arePaused:(id)paused;
- (void)applicationInstallsDidPause:(id)pause;
- (void)applicationInstallsDidResume:(id)resume;
- (void)applicationInstallsDidCancel:(id)cancel;
- (void)applicationInstallsDidPrioritize:(id)prioritize;
- (void)applicationStateDidChange:(id)change;
- (void)applicationIconDidChange:(id)change;
- (void)networkUsageChanged:(BOOL)changed;
- (BOOL)observeLaunchProhibitedApps;
- (void)deviceManagementPolicyDidChange:(id)change;
- (void)applicationsDidChangePersonas:(id)personas;
- (void)databaseWasRebuilt;
- (void)helperPlaceholdersInstalled:(id)installed;
- (void)helperPlaceholdersUninstalled:(id)uninstalled;
@end

#endif /* LSApplicationWorkspaceObserverProtocol_Protocol_h */
