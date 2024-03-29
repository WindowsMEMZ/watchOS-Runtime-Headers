//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMicroblogFacebookCredential_h
#define SAMicroblogFacebookCredential_h
@import Foundation;

#include "SAMicroblogSocialCredential.h"

@interface SAMicroblogFacebookCredential : SAMicroblogSocialCredential
/* class methods */
+ (id)facebookCredential;
+ (id)facebookCredentialWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAMicroblogFacebookCredential_h */
