//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIIDSAvailabilityProvider_Protocol_h
#define CNUIIDSAvailabilityProvider_Protocol_h
@import Foundation;

#include "CNUIDSHandleAvailabilityCache.h"
#include "CNUIIDSAvailabilityProvider-Protocol.h"
#include "CNUIIDSIDQueryControllerWrapper-Protocol.h"

@class NSArray, NSString;
@protocol CNScheduler;

@protocol CNUIIDSAvailabilityProvider <NSObject>
/* instance methods */
- (id)validateHandlesForFaceTime:(id)time schedulerProvider:(id)provider;
- (id)validateHandlesForIMessage:(id)imessage schedulerProvider:(id)provider;
- (id)validateHandlesForExpanse:(id)expanse schedulerProvider:(id)provider;
@end

#endif /* CNUIIDSAvailabilityProvider_Protocol_h */
