//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef TTSAXResourceManagerObserver_Protocol_h
#define TTSAXResourceManagerObserver_Protocol_h
@import Foundation;

@protocol TTSAXResourceManagerObserver <NSObject>
@optional
/* instance methods */
- (void)downloadProgressForVoiceId:(id)id progress:(float)progress storageSize:(long long)size requiredDiskSpace:(BOOL)space;
- (void)finishedDownloadingResource:(id)resource wasCancelled:(BOOL)cancelled;
- (void)finishedDeletingResource:(id)resource;
- (void)resourceCacheDidReceiveUpdate;
@end

#endif /* TTSAXResourceManagerObserver_Protocol_h */
