//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDNanoSyncStoreDelegate_Protocol_h
#define HDNanoSyncStoreDelegate_Protocol_h
@import Foundation;

@protocol HDNanoSyncStoreDelegate <NSObject>

@property (readonly, nonatomic) BOOL isMaster;

/* instance methods */
- (void)nanoSyncStore:(id)store remoteSystemBuildVersionDidChange:(id)change;
- (void)nanoSyncStore:(id)store restoreStateDidChange:(long long)change;
- (void)nanoSyncStore:(id)store deviceNameDidChange:(id)change;
@end

#endif /* HDNanoSyncStoreDelegate_Protocol_h */
