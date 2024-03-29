//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADStatsEvents_h
#define CADStatsEvents_h
@import Foundation;

#include "CADStatCollector.h"

@class NSMutableArray;

@interface CADStatsEvents : CADStatCollector {
  /* instance variables */
  NSMutableArray *_eventInfos;
}

/* class methods */
+ (id)eventName;

/* instance methods */
- (void)prepareWithContext:(id)context;
- (BOOL)wantsEvents;
- (void)processEvents:(id)events;
- (id)eventDictionaries;
@end

#endif /* CADStatsEvents_h */
