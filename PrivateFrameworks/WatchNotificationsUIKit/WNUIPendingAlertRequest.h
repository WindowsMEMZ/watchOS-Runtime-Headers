//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIPendingAlertRequest_h
#define WNUIPendingAlertRequest_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"

@class NSMutableSet, NSString, WNAlertIdentity;

@interface WNUIPendingAlertRequest : NSObject<BSInvalidatable>

@property (nonatomic) BOOL valid;
@property (readonly, nonatomic) NSMutableSet *assertions;
@property (readonly, nonatomic) WNAlertIdentity *identity;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentity:(id)identity timestamp:(unsigned long long)timestamp;
- (void)addAssertion:(id)assertion;
- (void)invalidate;
- (BOOL)isValid;
@end

#endif /* WNUIPendingAlertRequest_h */
