//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AALoginAccountRequest_h
#define AALoginAccountRequest_h
@import Foundation;

#include "AARequest.h"

@class ACAccount, NSDictionary;

@interface AALoginAccountRequest : AARequest {
  /* instance variables */
  ACAccount *_account;
  NSDictionary *_delegatesInfo;
}

/* class methods */
+ (Class)responseClass;

/* instance methods */
- (id)urlString;
- (id)initWithAccount:(id)account delegates:(id)delegates;
- (id)urlRequest;
@end

#endif /* AALoginAccountRequest_h */
