//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEProfilePayloadBaseVPN_h
#define NEProfilePayloadBaseVPN_h
@import Foundation;

#include "NEProfilePayloadBase.h"

@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {
  /* instance variables */
  BOOL _userNameRequired;
  BOOL _passwordRequired;
  BOOL _proxyUserNameRequired;
  BOOL _proxyPasswordRequired;
  BOOL _sharedSecretRequired;
  BOOL _pinRequired;
  NSString *_userName;
  NSString *_password;
  NSString *_proxyUserName;
  NSString *_proxyPassword;
  NSString *_sharedSecret;
  NSString *_pin;
}

/* instance methods */
- (id)initWithPayload:(id)payload;
- (id)validatePayload;
- (id)getPreprocessedPayloadContents;
- (BOOL)setPostprocessedPayloadContents:(id)contents;
@end

#endif /* NEProfilePayloadBaseVPN_h */
