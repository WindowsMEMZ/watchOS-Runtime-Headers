//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEHotspotConfigurationHelper_h
#define NEHotspotConfigurationHelper_h
@import Foundation;

#include "NEHelper.h"

@protocol OS_dispatch_queue;

@interface NEHotspotConfigurationHelper : NSObject {
  /* instance variables */
  NEHelper *_helper;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)init;
@end

#endif /* NEHotspotConfigurationHelper_h */
