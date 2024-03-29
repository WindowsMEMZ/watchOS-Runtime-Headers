//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 131.0.0.0.0
//
#ifndef ACSURLSessionUploadTask_h
#define ACSURLSessionUploadTask_h
@import Foundation;

#include "ACSURLSessionDataTask.h"

@interface ACSURLSessionUploadTask : ACSURLSessionDataTask
/* instance methods */
- (id)initWithNSURLUploadTaskCreator:(id /* block */)creator initialRequest:(id)request forSession:(id)session;
- (BOOL)_isUpload;
@end

#endif /* ACSURLSessionUploadTask_h */
