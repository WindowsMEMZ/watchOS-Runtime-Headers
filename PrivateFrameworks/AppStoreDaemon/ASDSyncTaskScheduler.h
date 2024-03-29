//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDSyncTaskScheduler_h
#define ASDSyncTaskScheduler_h
@import Foundation;

#include "ASDTaskScheduler-Protocol.h"

@class NSString;

@interface ASDSyncTaskScheduler : NSObject<ASDTaskScheduler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)scheduleBlock:(id /* block */)block;
@end

#endif /* ASDSyncTaskScheduler_h */
