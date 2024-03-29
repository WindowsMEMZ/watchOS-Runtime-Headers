//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSURLAuthenticationChallenge_h
#define NSURLAuthenticationChallenge_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "NSURLAuthenticationChallengeInternal.h"
#include "NSURLAuthenticationChallengeSender-Protocol.h"
#include "NSURLCredential.h"
#include "NSURLProtectionSpace.h"
#include "NSURLResponse.h"

@class NSError;

@interface NSURLAuthenticationChallenge : NSObject<NSSecureCoding> {
  /* instance variables */
  NSURLAuthenticationChallengeInternal *_internal;
}

@property (readonly, copy) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy) NSURLCredential *proposedCredential;
@property (readonly) long long previousFailureCount;
@property (readonly, copy) NSURLResponse *failureResponse;
@property (readonly, copy) NSError *error;
@property (readonly, retain) NSObject<NSURLAuthenticationChallengeSender> *sender;

/* class methods */
+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)challenge sender:(id)sender;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)challenge sender:(id)sender;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;
- (id)init;
- (id)initWithProtectionSpace:(id)space proposedCredential:(id)credential previousFailureCount:(long long)count failureResponse:(id)response error:(id)error sender:(id)sender;
- (id)_initWithListOfProtectionSpaces:(id)spaces CurrentProtectionSpace:(id)space proposedCredential:(id)credential previousFailureCount:(long long)count failureResponse:(id)response error:(id)error sender:(id)sender;
- (id)initWithAuthenticationChallenge:(id)challenge sender:(id)sender;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* NSURLAuthenticationChallenge_h */
