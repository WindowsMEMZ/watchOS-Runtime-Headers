//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUIQuotaRequest_h
#define AAUIQuotaRequest_h
@import Foundation;

#include "AARequest.h"

@class ACAccount;

@interface AAUIQuotaRequest : AARequest {
  /* instance variables */
  ACAccount *_account;
  BOOL _isDetailedRequest;
}

/* class methods */
+ (Class)responseClass;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initDetailedRequestWithAccount:(id)account;
- (id)urlString;
- (id)urlRequest;
@end

#endif /* AAUIQuotaRequest_h */
