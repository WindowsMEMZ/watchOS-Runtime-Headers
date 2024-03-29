//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAParsecContext_h
#define SAParsecContext_h
@import Foundation;

#include "SADomainObject.h"

@class NSData, NSDictionary, NSString;

@interface SAParsecContext : SADomainObject

@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSString *httpUrl;

/* class methods */
+ (id)parsecContext;
+ (id)parsecContextWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAParsecContext_h */
