//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef NSURL_LSPreferredLocalizations_h
#define NSURL_LSPreferredLocalizations_h
@import Foundation;

@interface NSURL (LSPreferredLocalizations)
/* instance methods */
- (BOOL)conformsToOverridePatternWithKey:(id)key;
- (BOOL)isiWorkURL;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (id)mapsURL;
- (id)fmfURL;
- (id)fmipURL;
- (id)iTunesStoreURL;
- (id)iCloudEmailPrefsURL;
- (id)photosURL;
- (id)keynoteLiveURL;
- (id)keynoteLiveURL_noFragment;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;
- (id)ls_preferredLocalizations;
- (void)ls_setPreferredLocalizations:(id)localizations;
@end

#endif /* NSURL_LSPreferredLocalizations_h */
