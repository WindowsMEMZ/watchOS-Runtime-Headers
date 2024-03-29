//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASPronunciationContext_h
#define SASPronunciationContext_h
@import Foundation;

#include "AceObject.h"
#include "SAAceSerializable-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface SASPronunciationContext : AceObject<SAAceSerializable>

@property (copy, nonatomic) NSURL *domainObjectIdentifier;
@property (copy, nonatomic) NSString *domainObjectPropertyIdentifier;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSNumber *tokenOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)pronunciationContext;
+ (id)pronunciationContextWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SASPronunciationContext_h */
