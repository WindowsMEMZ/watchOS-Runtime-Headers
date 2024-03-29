//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceUpdateAccountUserPreferencesRequest_h
#define PKAccountWebServiceUpdateAccountUserPreferencesRequest_h
@import Foundation;

#include "PKAccountWebServiceRequest.h"
#include "PKAccountUserPreferences.h"

@class NSString, NSURL;

@interface PKAccountWebServiceUpdateAccountUserPreferencesRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (retain, nonatomic) PKAccountUserPreferences *accountUserPreferences;
@property (nonatomic) unsigned long long accountUserAccessLevel;
@property (retain, nonatomic) NSURL *baseURL;

/* instance methods */
- (id)_urlRequestWithAppleAccountInformation:(id)information;
@end

#endif /* PKAccountWebServiceUpdateAccountUserPreferencesRequest_h */
