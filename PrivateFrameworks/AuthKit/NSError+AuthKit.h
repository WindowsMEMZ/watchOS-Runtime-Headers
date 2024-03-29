//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef NSError_AuthKit_h
#define NSError_AuthKit_h
@import Foundation;

@interface NSError (AuthKit)
/* class methods */
+ (id)ak_errorWithCode:(long long)code;
+ (id)ak_errorWithCode:(long long)code userInfo:(id)info;
+ (id)ak_errorWithCode:(long long)code underlyingError:(id)error;
+ (id)ak_generalErrorWithCode:(long long)code errorDomain:(id)domain underlyingError:(id)error;
+ (id)ak_wrappedAnisetteError:(long long)error underlyingADIErrorCode:(int)code;
+ (id)ak_wrappedAnisetteError:(int)error;
+ (id)ak_passkeyErrorWithCode:(long long)code;
+ (id)ak_deviceListErrorWithCode:(long long)code;

/* instance methods */
- (id)ak_errorByAppendingUserInfo:(id)info;
- (BOOL)ak_isUserCancelError;
- (BOOL)ak_isUserSkippedError;
- (BOOL)ak_isUserTryAgainError;
- (BOOL)ak_isUserInitiatedError;
- (BOOL)ak_isServiceError;
- (BOOL)ak_isUnableToPromptError;
- (BOOL)ak_isSurrogateAuthAlreadyInProgressError;
- (BOOL)ak_isIncompatibleDevicesError;
- (BOOL)ak_isAuthenticationErrorWithCode:(long long)code;
- (BOOL)ak_isAuthenticationError;
- (id)ak_allUnderlyingErrors;
@end

#endif /* NSError_AuthKit_h */
