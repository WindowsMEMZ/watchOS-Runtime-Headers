//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAGKWebSearchDomainObject_h
#define SAGKWebSearchDomainObject_h
@import Foundation;

#include "SAGKDomainObject.h"

@class NSArray, NSString;

@interface SAGKWebSearchDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray *image;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSString *query;

/* class methods */
+ (id)webSearchDomainObject;
+ (id)webSearchDomainObjectWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAGKWebSearchDomainObject_h */
