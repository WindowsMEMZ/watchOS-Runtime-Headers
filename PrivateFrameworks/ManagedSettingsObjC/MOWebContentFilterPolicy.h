//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOWebContentFilterPolicy_h
#define MOWebContentFilterPolicy_h
@import Foundation;

#include "MOPersistable-Protocol.h"

@class NSSet, NSString;

@interface MOWebContentFilterPolicy : NSObject<MOPersistable>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long policy;
@property (readonly) NSSet *autoAllow;
@property (readonly) NSSet *neverAllow;
@property (readonly) NSSet *onlyAllow;

/* class methods */
+ (id)initializeWithPersistableValue:(id)value;
+ (BOOL)isValidPersistableRepresentation:(id)representation;
+ (id)nonePolicy;
+ (id)specificPolicyWithDomains:(id)domains;
+ (id)autoPolicyWithDomains:(id)domains exceptions:(id)exceptions;
+ (id)allPolicyWithExceptions:(id)exceptions;

/* instance methods */
- (id)initWithAutoAllow:(id)allow neverAllow:(id)allow onlyAllow:(id)allow;
@end

#endif /* MOWebContentFilterPolicy_h */
