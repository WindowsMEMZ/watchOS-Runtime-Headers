//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef __NSCFBackgroundDownloadTask_h
#define __NSCFBackgroundDownloadTask_h
@import Foundation;

#include "__NSCFBackgroundSessionTask.h"

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask
/* instance methods */
- (BOOL)isKindOfClass:(Class)class;
- (void)_onqueue_didReceiveResponse:(id)response;
- (void)_onqueue_didFinishWithError:(id)error;
- (void)cancelByProducingResumeData:(id /* block */)data;
@end

#endif /* __NSCFBackgroundDownloadTask_h */
