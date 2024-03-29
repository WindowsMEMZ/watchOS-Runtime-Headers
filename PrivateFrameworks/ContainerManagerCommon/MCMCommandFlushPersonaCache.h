//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMCommandFlushPersonaCache_h
#define MCMCommandFlushPersonaCache_h
@import Foundation;

#include "MCMCommand.h"

@interface MCMCommandFlushPersonaCache : MCMCommand
/* class methods */
+ (unsigned long long)command;
+ (Class)incomingMessageClass;

/* instance methods */
- (BOOL)preflightClientAllowed;
- (void)execute;
@end

#endif /* MCMCommandFlushPersonaCache_h */
