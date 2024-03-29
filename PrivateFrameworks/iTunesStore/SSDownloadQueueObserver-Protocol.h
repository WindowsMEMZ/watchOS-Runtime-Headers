//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSDownloadQueueObserver_Protocol_h
#define SSDownloadQueueObserver_Protocol_h
@import Foundation;

@protocol SSDownloadQueueObserver <NSObject>
/* instance methods */
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;
@optional
/* instance methods */
- (void)downloadQueue:(id)queue downloadStatusChangedAtIndex:(long long)index;
- (void)downloadQueueNetworkUsageChanged:(id)changed;
@end

#endif /* SSDownloadQueueObserver_Protocol_h */
