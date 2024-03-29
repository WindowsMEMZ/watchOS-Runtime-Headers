//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMStoreDirectory_h
#define BMStoreDirectory_h
@import Foundation;

@interface BMStoreDirectory : NSObject
/* class methods */
+ (id)tmp;
+ (id)localDevice;
+ (id)remoteDevices;
+ (id)tombstones;
+ (id)streams;
+ (id)databases;
+ (id)public;
+ (id)restricted;
+ (id)private;
+ (id)compute;
+ (id)artifacts;
+ (id)sessions;
+ (id)persistent;
+ (id)bookmarks;
+ (id)client;
+ (id)server;
+ (id)nonwaking;
+ (id)subscriptions;
+ (id)flexibleStorage;
+ (id)sync;
+ (id)lock;
+ (id)metadata;
+ (id)sharedSync;
+ (void)setBasePathForTestingWithPath:(id)path;
+ (void)unsetBasePathForTesting;
@end

#endif /* BMStoreDirectory_h */
