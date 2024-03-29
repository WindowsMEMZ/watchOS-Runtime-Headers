//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCAppInstallationObserver_h
#define FCAppInstallationObserver_h
@import Foundation;

@class FCCAppInstallationUtility;

@interface FCAppInstallationObserver : NSObject {
  /* instance variables */
  FCCAppInstallationUtility *_appInstallationUtility;
  BOOL _isAppInstalled;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

@property (readonly, nonatomic) BOOL fitnessAppInstalled;

/* instance methods */
- (id)init;
- (void)_setAppInstalled:(BOOL)installed;
- (void)_applicationsInstalled:(id)installed;
- (void)_applicationsUninstalled:(id)uninstalled;
- (void)_updateApplicationInstalled;
@end

#endif /* FCAppInstallationObserver_h */
