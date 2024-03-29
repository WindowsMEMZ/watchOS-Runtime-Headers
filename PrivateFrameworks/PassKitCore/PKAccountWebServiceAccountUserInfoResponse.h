//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceAccountUserInfoResponse_h
#define PKAccountWebServiceAccountUserInfoResponse_h
@import Foundation;

#include "PKAccountWebServiceResponse.h"

@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) CNContact *primaryUser;

/* class methods */
+ (BOOL)jsonDataOptional;

/* instance methods */
- (id)initWithData:(id)data;
- (id)_stringValueFromDictionary:(id)dictionary key:(id)key isOptional:(BOOL)optional;
@end

#endif /* PKAccountWebServiceAccountUserInfoResponse_h */
