//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSDownloadAuthenticationSession_h
#define SSDownloadAuthenticationSession_h
@import Foundation;

#include "SSDownloadSession.h"

@class NSURLAuthenticationChallenge;

@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge *authenticationChallenge;

/* instance methods */
- (void)_finishWithType:(int)type credential:(id)credential;
@end

#endif /* SSDownloadAuthenticationSession_h */
