//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef _NSHTTPConnectionInfo_h
#define _NSHTTPConnectionInfo_h
@import Foundation;

#include "NSURLSession.h"

@protocol OS_dispatch_queue;

@interface _NSHTTPConnectionInfo : NSObject {
  /* instance variables */
  struct HTTPConnectionInfo { undefined * * x0; } * _httpConnectionInfo;
  NSObject<OS_dispatch_queue> *_workQueue;
  NSURLSession *_session;
}

@property (readonly) BOOL isValid;

/* instance methods */
- (void)sendPingWithReceiveHandler:(id /* block */)handler;
@end

#endif /* _NSHTTPConnectionInfo_h */
