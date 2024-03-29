//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPIControlCenterManager_h
#define CSLPIControlCenterManager_h
@import Foundation;

#include "CSLPIControlCenterAssertionManaging-Protocol.h"

@interface CSLPIControlCenterManager : NSObject<CSLPIControlCenterAssertionManaging>
/* class methods */
+ (void)setControlCenterAssertionManager:(id)manager;

/* instance methods */
- (id)acquireBackdropAssertion:(id)assertion error:(id *)error;
@end

#endif /* CSLPIControlCenterManager_h */
