//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMAPSHandler_h
#define FMAPSHandler_h
@import Foundation;

#include "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSMutableArray, NSString;

@interface FMAPSHandler : NSObject<APSConnectionDelegate>

@property (retain, nonatomic) APSConnection *apsConnection;
@property (retain, nonatomic) NSMutableArray *registeredDelegates;
@property (retain, nonatomic) NSMutableArray *pendingPushes;
@property (retain, nonatomic) NSString *environmentName;
@property (nonatomic) BOOL registrationsSuspended;
@property (nonatomic) BOOL registerForDarkWake;
@property (readonly, nonatomic) NSString *apsToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)constantForEnvironmentString:(id)string;

/* instance methods */
- (id)init;
- (id)initWithEnvironmentName:(id)name;
- (id)initWithEnvironmentName:(id)name launchOnDemandPort:(id)port;
- (void)dealloc;
- (void)invalidate;
- (void)suspendRegistrations;
- (void)resumeRegistrations;
- (void)registerDelegate:(id)delegate forTopic:(id)topic;
- (void)deregisterDelegate:(id)delegate;
- (void)_registrationsWereResumed;
- (void)_handleMessage:(id)message onTopic:(id)topic;
- (void)_setEnabledTopics:(id)topics;
- (void)connection:(id)connection didReceivePublicToken:(id)token;
- (void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
@end

#endif /* FMAPSHandler_h */
