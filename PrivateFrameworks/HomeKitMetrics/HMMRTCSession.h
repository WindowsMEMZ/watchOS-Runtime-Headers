//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMRTCSession_h
#define HMMRTCSession_h
@import Foundation;

#include "HMMNullRTCSession.h"
#include "HMMRTCBackendSession-Protocol.h"

@class NSDictionary;

@interface HMMRTCSession : HMMNullRTCSession

@property (readonly, nonatomic) NSDictionary *commonFields;
@property (readonly, nonatomic) NSObject<HMMRTCBackendSession> *backend;

/* instance methods */
- (id)initWithUUID:(id)uuid serviceName:(id)name commonFields:(id)fields backend:(id)backend;
- (void)submitEventWithName:(id)name payload:(id)payload;
@end

#endif /* HMMRTCSession_h */
