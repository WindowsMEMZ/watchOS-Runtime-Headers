//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASource_h
#define SASource_h
@import Foundation;

#include "SADomainObject.h"

@class NSNumber, NSString;

@interface SASource : SADomainObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSNumber *remote;

/* class methods */
+ (id)source;
+ (id)sourceWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SASource_h */
