//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLQuotaRequest_h
#define PLQuotaRequest_h
@import Foundation;

#include "AARequest.h"

@class NSString;

@interface PLQuotaRequest : AARequest {
  /* instance variables */
  NSString *_authToken;
  NSString *_personID;
}

/* instance methods */
- (id)initWithURLString:(id)urlstring authToken:(id)token personID:(id)id;
- (id)urlRequest;
@end

#endif /* PLQuotaRequest_h */
