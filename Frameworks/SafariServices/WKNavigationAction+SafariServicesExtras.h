//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKNavigationAction_SafariServicesExtras_h
#define WKNavigationAction_SafariServicesExtras_h
@import Foundation;

@interface WKNavigationAction (SafariServicesExtras)
/* instance methods */
- (BOOL)_sf_shouldAskAboutInsecureFormSubmission;
- (BOOL)_sf_shouldPerformDownload;
- (BOOL)_sf_allowsExternalRedirectWithoutPrompting;
- (void)_sf_setAllowsExternalRedirectWithoutPrompting:(BOOL)prompting;
@end

#endif /* WKNavigationAction_SafariServicesExtras_h */
