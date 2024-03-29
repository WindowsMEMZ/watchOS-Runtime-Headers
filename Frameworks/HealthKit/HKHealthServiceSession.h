//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthServiceSession_h
#define HKHealthServiceSession_h
@import Foundation;

#include "HKHealthService.h"

@class NSLock;

@interface HKHealthServiceSession : NSObject

@property (retain, nonatomic) NSLock *propertyLock;
@property (nonatomic) unsigned long long sessionIdentifier;
@property (copy, nonatomic) id /* block */ sessionHandler;
@property (copy, nonatomic) id /* block */ characteristicsHandler;
@property (readonly, nonatomic) HKHealthService *service;

/* instance methods */
- (id)initWithService:(id)service;
@end

#endif /* HKHealthServiceSession_h */
