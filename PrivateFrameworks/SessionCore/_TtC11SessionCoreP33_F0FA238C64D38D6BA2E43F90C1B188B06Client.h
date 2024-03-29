//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef _TtC11SessionCoreP33_F0FA238C64D38D6BA2E43F90C1B188B06Client_h
#define _TtC11SessionCoreP33_F0FA238C64D38D6BA2E43F90C1B188B06Client_h
@import Foundation;

#include "ACActivityInputXPCServer-Protocol.h"

@class NSString;

@interface SessionCore.(Client in _F0FA238C64D38D6BA2E43F90C1B188B0) : NSObject<ACActivityInputXPCServer> { // (Swift)
  /* instance variables */
   delegate;
   connection;
   targetQueue;
   queue;
   activityAuthorizer;
   requester;
   backoffPolicy;
   pushServer;
   backoffBudget;
   ephemeralActivityIdentifiers;
   uuid;
}

@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (void)mockPushWithToken:(id)token processIdentifier:(id)identifier environmentName:(id)name payload:(id)payload pushPriority:(id)priority completionHandler:(id /* block */)handler;
- (id)requestActivityWithRequest:(id)request error:(id *)error;
- (void)updateActivityWithIdentifier:(id)identifier payload:(id)payload;
- (void)endActivityWithIdentifier:(id)identifier payload:(id)payload options:(id)options;
- (void)dealloc;
- (id)init;
@end

#endif /* _TtC11SessionCoreP33_F0FA238C64D38D6BA2E43F90C1B188B06Client_h */
