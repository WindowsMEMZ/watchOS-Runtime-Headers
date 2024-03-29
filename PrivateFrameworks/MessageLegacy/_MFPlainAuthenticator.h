//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef _MFPlainAuthenticator_h
#define _MFPlainAuthenticator_h
@import Foundation;

#include "MFSASLAuthenticator.h"

@interface _MFPlainAuthenticator : MFSASLAuthenticator
/* instance methods */
- (id)saslName;
- (id)responseForServerData:(id)data;
- (BOOL)justSentPlainTextPassword;
@end

#endif /* _MFPlainAuthenticator_h */
