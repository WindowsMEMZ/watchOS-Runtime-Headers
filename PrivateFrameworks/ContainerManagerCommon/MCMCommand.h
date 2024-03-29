//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMCommand_h
#define MCMCommand_h
@import Foundation;

#include "MCMCommand-Protocol.h"
#include "MCMCommandContext.h"
#include "MCMCommand_Internal-Protocol.h"
#include "MCMCommand_XPC-Protocol.h"
#include "MCMReply-Protocol.h"
#include "MCMResultPromise-Protocol.h"

@class NSString;

@interface MCMCommand : NSObject<MCMCommand_Internal, MCMCommand_XPC, MCMCommand>

@property (readonly, nonatomic) MCMCommandContext *context;
@property (readonly, nonatomic) NSObject<MCMReply> *reply;
@property (readonly, nonatomic) NSObject<MCMResultPromise> *resultPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)command;
+ (Class)incomingMessageClass;
+ (id)relayToPrivilegedDaemonMessage:(id)message context:(id)context;

/* instance methods */
- (id)initWithContext:(id)context resultPromise:(id)promise;
- (id)initWithMessage:(id)message context:(id)context reply:(id)reply;
- (BOOL)preflightClientAllowed;
- (void)execute;
@end

#endif /* MCMCommand_h */
