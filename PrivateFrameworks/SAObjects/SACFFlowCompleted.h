//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SACFFlowCompleted_h
#define SACFFlowCompleted_h
@import Foundation;

#include "SACFAbstractClientCommandCompleted.h"
#include "SACFProvideContext.h"

@class NSString;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) SACFProvideContext *updateContext;

/* class methods */
+ (id)flowCompleted;
+ (id)flowCompletedWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SACFFlowCompleted_h */
