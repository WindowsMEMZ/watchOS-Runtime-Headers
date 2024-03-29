//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSURLSessionAVAssetDownloadTask_h
#define NSURLSessionAVAssetDownloadTask_h
@import Foundation;

#include "NSURLSessionTask.h"

@class NSURL;

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask

@property (readonly) unsigned long long AVAssetDownloadToken;
@property (readonly, copy, @dynamic) NSURL *URL;
@property (readonly, copy, @dynamic) NSURL *destinationURL;

@end

#endif /* NSURLSessionAVAssetDownloadTask_h */
