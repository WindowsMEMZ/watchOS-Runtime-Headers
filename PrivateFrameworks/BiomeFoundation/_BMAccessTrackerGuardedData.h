//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef _BMAccessTrackerGuardedData_h
#define _BMAccessTrackerGuardedData_h
@import Foundation;

@class NSMutableDictionary;

@interface _BMAccessTrackerGuardedData : NSObject {
  /* instance variables */
  NSMutableDictionary *_loggedReads;
  NSMutableDictionary *_loggedWrites;
  NSMutableDictionary *_cachedSandboxCheckResults;
}

/* instance methods */
- (id)init;
@end

#endif /* _BMAccessTrackerGuardedData_h */
