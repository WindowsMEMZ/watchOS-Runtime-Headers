//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKSPDefaultScheduleProvider_h
#define _HKSPDefaultScheduleProvider_h
@import Foundation;

#include "HKSPSuggestionProvider-Protocol.h"

@class NSString;

@interface _HKSPDefaultScheduleProvider : NSObject<HKSPSuggestionProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)hksp_suggestedSleepScheduleWithCompletion:(id /* block */)completion;
@end

#endif /* _HKSPDefaultScheduleProvider_h */
