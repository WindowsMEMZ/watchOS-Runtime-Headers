//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMXPCMessageWithConcreteContainersArrayBase_h
#define MCMXPCMessageWithConcreteContainersArrayBase_h
@import Foundation;

#include "MCMXPCMessageBase.h"
#include "MCMParametersWithConcreteContainersArray-Protocol.h"
#include "MCMXPCMessage-Protocol.h"

@class NSArray, NSString;
@protocol OS_xpc_object;

@interface MCMXPCMessageWithConcreteContainersArrayBase : MCMXPCMessageBase<MCMXPCMessage, MCMParametersWithConcreteContainersArray>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) struct container_client { char * x0; unsigned int x1; char * x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8] } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } * proxy;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly, nonatomic) unsigned long long command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *concreteContainerIdentities;

/* instance methods */
- (id)initWithXPCObject:(id)xpcobject context:(id)context error:(unsigned long long *)error;
@end

#endif /* MCMXPCMessageWithConcreteContainersArrayBase_h */
