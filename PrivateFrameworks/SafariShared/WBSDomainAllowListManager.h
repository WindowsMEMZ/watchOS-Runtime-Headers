//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSDomainAllowListManager_h
#define WBSDomainAllowListManager_h
@import Foundation;

@class WBSRemotePlistController;

@interface WBSDomainAllowListManager : NSObject {
  /* instance variables */
  WBSRemotePlistController *_remotePlistController;
}

/* instance methods */
- (id)init;
- (id)initWithBuiltInAllowListURL:(id)url downloadsDirectoryURL:(id)url resourceName:(id)name resourceVersion:(id)version updateDateDefaultsKey:(id)key updateInterval:(double)interval;
- (void)isDomainAllowed:(id)allowed completionHandler:(id /* block */)handler;
- (void)prepareForTermination;
@end

#endif /* WBSDomainAllowListManager_h */
