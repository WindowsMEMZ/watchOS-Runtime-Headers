//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraTimelapseVideoProvider_h
#define HFCameraTimelapseVideoProvider_h
@import Foundation;

#include "HFCameraVideoDownloader-Protocol.h"

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface HFCameraTimelapseVideoProvider : NSObject

@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bookkeepingQueue;
@property (retain, nonatomic) NSObject<HFCameraVideoDownloader> *timelapseVideoDownloader;

/* class methods */
+ (id)sharedProvider;

/* instance methods */
- (id)init;
- (void)getVideoForTimelapseClip:(id)clip taskType:(unsigned long long)type delegate:(id)delegate;
- (void)_getVideoForTimelapseClip:(id)clip taskType:(unsigned long long)type delegate:(id)delegate;
@end

#endif /* HFCameraTimelapseVideoProvider_h */
