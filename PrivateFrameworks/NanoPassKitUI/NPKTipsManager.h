//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTipsManager_h
#define NPKTipsManager_h
@import Foundation;

#include "NPKContactlessPaymentSessionManagerObserver-Protocol.h"

@class NPKContactlessPaymentSessionState, NSString;

@interface NPKTipsManager : NSObject<NPKContactlessPaymentSessionManagerObserver>

@property (retain, nonatomic) NPKContactlessPaymentSessionState *previousState;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)donateEventWithType:(unsigned long long)type forCardType:(long long)type;
+ (void)donateExpressEventForCardType:(long long)type;

/* instance methods */
- (id)init;
- (void)contactlessPaymentSessionManager:(id)manager didChangeSessionState:(id)state;
@end

#endif /* NPKTipsManager_h */
