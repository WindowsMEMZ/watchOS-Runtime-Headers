//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUICoreContactsSyncProductionTrigger_h
#define CNUICoreContactsSyncProductionTrigger_h
@import Foundation;

#include "CNUICoreContactsSyncTrigger-Protocol.h"

@class NSString;

@interface CNUICoreContactsSyncProductionTrigger : NSObject<CNUICoreContactsSyncTrigger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)fireSyncRequest;
@end

#endif /* CNUICoreContactsSyncProductionTrigger_h */
