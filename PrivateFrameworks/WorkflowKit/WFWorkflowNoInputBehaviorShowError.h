//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowNoInputBehaviorShowError_h
#define WFWorkflowNoInputBehaviorShowError_h
@import Foundation;

#include "WFWorkflowNoInputBehavior-Protocol.h"

@class NSString;

@interface WFWorkflowNoInputBehaviorShowError : NSObject<WFWorkflowNoInputBehavior>

@property (readonly, copy, nonatomic) NSString *errorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)behaviorName;
+ (BOOL)resolvesInput;

/* instance methods */
- (id)initWithErrorString:(id)string;
- (void)resolveWithUserInterface:(id)interface runningDelegate:(id)delegate completionHandler:(id /* block */)handler;
- (id)initWithSerializedRepresentation:(id)representation;
- (id)serializedRepresentation;
@end

#endif /* WFWorkflowNoInputBehaviorShowError_h */
