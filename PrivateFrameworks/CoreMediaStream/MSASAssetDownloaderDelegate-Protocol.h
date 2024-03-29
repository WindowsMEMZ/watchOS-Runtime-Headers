//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASAssetDownloaderDelegate_Protocol_h
#define MSASAssetDownloaderDelegate_Protocol_h
@import Foundation;

@protocol MSASAssetDownloaderDelegate <NSObject>
/* instance methods */
- (void)MSASAssetDownloader:(id)downloader willBeginBatchCount:(unsigned long long)count;
- (void)MSASAssetDownloader:(id)downloader didFinishDownloadingAsset:(id)asset inAlbumGUID:(id)guid error:(id)error;
- (void)MSASAssetDownloaderDidFinishBatch:(id)batch;
@end

#endif /* MSASAssetDownloaderDelegate_Protocol_h */
