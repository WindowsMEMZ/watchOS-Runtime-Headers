//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef NSURL_IC_h
#define NSURL_IC_h
@import Foundation;

@interface NSURL (IC)
/* class methods */
+ (id)ic_urlFromWeblocFileAtURL:(id)url;

/* instance methods */
- (void)ic_updateFlagToExcludeFromBackupNow:(BOOL)now;
- (id)ic_dedupedURLWithProhibitedNames:(id)names;
- (void)ic_updateFlagToExcludeFromBackup:(BOOL)backup;
- (BOOL)ic_isExcludedFromBackups;
- (BOOL)ic_isExcludedFromCloudBackups;
- (id)ic_uniquedURL;
- (BOOL)ic_isBooksURL;
- (BOOL)ic_isMapURL;
- (BOOL)ic_isNewsURL;
- (BOOL)ic_isiTunesURL;
- (BOOL)ic_isAppStoreURL;
- (BOOL)ic_isPodcastsURL;
- (BOOL)ic_isWebURL;
- (BOOL)ic_isSupportedAsAttachment;
- (BOOL)ic_isSafeFileURLForAttachment;
- (id)ic_UTI;
- (long long)ic_fileSize;
- (BOOL)ic_isReachable;
- (BOOL)ic_isURLAnInternetLocator;
@end

#endif /* NSURL_IC_h */
