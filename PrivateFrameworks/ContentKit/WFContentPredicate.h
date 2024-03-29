//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFContentPredicate_h
#define WFContentPredicate_h
@import Foundation;

#include "WFContentPropertyContainer-Protocol.h"

@class NSSet;

@interface WFContentPredicate : NSObject<WFContentPropertyContainer> {
  /* instance variables */
  id /* block */ _block;
}

@property (readonly, nonatomic) NSSet *containedProperties;

/* class methods */
+ (id)truePredicate;
+ (id)falsePredicate;
+ (id)predicateWithBlock:(id /* block */)block;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)evaluateWithObject:(id)object completionHandler:(id /* block */)handler;
- (void)evaluateWithObject:(id)object propertySubstitutor:(id /* block */)substitutor completionHandler:(id /* block */)handler;
@end

#endif /* WFContentPredicate_h */
