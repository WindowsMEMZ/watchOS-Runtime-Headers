//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRMobileAgentOperationStop_h
#define XRMobileAgentOperationStop_h
@import Foundation;

#include "XRMobileAgentStop-Protocol.h"

@class NSString;

@interface XRMobileAgentOperationStop : NSObject<XRMobileAgentStop>

@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)receiveMobileAgent:(id)agent;
@end

#endif /* XRMobileAgentOperationStop_h */
