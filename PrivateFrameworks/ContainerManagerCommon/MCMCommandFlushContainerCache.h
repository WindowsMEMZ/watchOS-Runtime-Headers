//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMCommandFlushContainerCache_h
#define MCMCommandFlushContainerCache_h
@import Foundation;

#include "MCMCommand.h"
#include "MCMParametersFlushContainerCache-Protocol.h"
#include "MCMXPCMessage-Protocol.h"

@interface MCMCommandFlushContainerCache : MCMCommand<MCMParametersFlushContainerCache>

@property (readonly, nonatomic) NSObject<MCMXPCMessage> *message;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) unsigned long long containerClass;

/* class methods */
+ (unsigned long long)command;
+ (Class)incomingMessageClass;

/* instance methods */
- (id)initWithMessage:(id)message context:(id)context reply:(id)reply;
- (BOOL)preflightClientAllowed;
- (void)execute;
@end

#endif /* MCMCommandFlushContainerCache_h */
