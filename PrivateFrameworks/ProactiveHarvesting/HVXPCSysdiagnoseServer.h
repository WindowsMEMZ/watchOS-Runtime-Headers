//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef HVXPCSysdiagnoseServer_h
#define HVXPCSysdiagnoseServer_h
@import Foundation;

#include "HVXPCSysdiagnoseServiceProtocol-Protocol.h"

@interface HVXPCSysdiagnoseServer : NSObject<HVXPCSysdiagnoseServiceProtocol>
/* instance methods */
- (void)sysdiagnoseStringWithCompletion:(id /* block */)completion;
@end

#endif /* HVXPCSysdiagnoseServer_h */
