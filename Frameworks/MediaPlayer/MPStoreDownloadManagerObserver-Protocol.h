//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPStoreDownloadManagerObserver_Protocol_h
#define MPStoreDownloadManagerObserver_Protocol_h
@import Foundation;

@protocol MPStoreDownloadManagerObserver <NSObject>
@optional
/* instance methods */
- (void)downloadManager:(id)manager didAddDownloads:(id)downloads removeDownloads:(id)downloads;
- (void)downloadManager:(id)manager didAddActiveDownloads:(id)downloads removeActiveDownloads:(id)downloads;
- (void)downloadManager:(id)manager downloadDidFinish:(id)finish;
- (void)downloadManager:(id)manager downloadDidProgress:(id)progress;
- (void)downloadManager:(id)manager downloadPurchaseDidFinish:(id)finish;
- (void)downloadManager:(id)manager downloadsDidProgress:(id)progress;
- (void)downloadManagerNetworkUsageDidChange:(id)change;
@end

#endif /* MPStoreDownloadManagerObserver_Protocol_h */
