//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMCommandInfoValueForKey_h
#define MCMCommandInfoValueForKey_h
@import Foundation;

#include "MCMCommand.h"
#include "MCMConcreteContainerIdentity.h"
#include "MCMParametersWithKey-Protocol.h"

@class NSString;

@interface MCMCommandInfoValueForKey : MCMCommand<MCMParametersWithKey>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;

/* class methods */
+ (unsigned long long)command;
+ (Class)incomingMessageClass;

/* instance methods */
- (id)initWithKey:(id)key concreteContainerIdentity:(id)identity context:(id)context resultPromise:(id)promise;
- (id)initWithMessage:(id)message context:(id)context reply:(id)reply;
- (BOOL)preflightClientAllowed;
- (void)execute;
- (id)infoValueForKeyWithError:(unsigned long long *)error;
@end

#endif /* MCMCommandInfoValueForKey_h */
