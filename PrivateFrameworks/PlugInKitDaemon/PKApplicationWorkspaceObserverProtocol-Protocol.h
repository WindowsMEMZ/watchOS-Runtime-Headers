//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKApplicationWorkspaceObserverProtocol_Protocol_h
#define PKApplicationWorkspaceObserverProtocol_Protocol_h
@import Foundation;

@protocol PKApplicationWorkspaceObserverProtocol <NSObject>
@optional
/* instance methods */
- (void)pluginsDidInstall:(id)install;
- (void)pluginsWillUninstall:(id)uninstall;
- (void)pluginsDidUninstall:(id)uninstall;
@end

#endif /* PKApplicationWorkspaceObserverProtocol_Protocol_h */
