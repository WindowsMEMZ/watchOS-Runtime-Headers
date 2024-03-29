//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADStatsCallback_h
#define CADStatsCallback_h
@import Foundation;

#include "CADStatCollector.h"

@class NSString;

@interface CADStatsCallback : CADStatCollector {
  /* instance variables */
  NSString *_eventName;
  id /* block */ _callback;
}

/* instance methods */
- (id)initWithEventName:(id)name callback:(id /* block */)callback;
- (id)eventName;
- (id)eventDictionaries;
@end

#endif /* CADStatsCallback_h */
