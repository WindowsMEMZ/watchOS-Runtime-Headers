//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSCloudStorageQuotaManager_h
#define PSCloudStorageQuotaManager_h
@import Foundation;

@interface PSCloudStorageQuotaManager : NSObject
/* class methods */
+ (id)sharedManager;

/* instance methods */
- (void)getQuotaInfoForPrimaryAccountCompletion:(id /* block */)completion;
@end

#endif /* PSCloudStorageQuotaManager_h */
