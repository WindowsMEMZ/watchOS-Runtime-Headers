//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMRuntimeTestSuiteTestRun_h
#define IMRuntimeTestSuiteTestRun_h
@import Foundation;

#include "IMRuntimeTestRun.h"

@class NSArray, NSMutableArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {
  /* instance variables */
  NSArray *_testRun;
}

@property (readonly, copy) NSArray *testRuns;

/* instance methods */
- (id)init;
- (void)addTestRun:(id)run;
@end

#endif /* IMRuntimeTestSuiteTestRun_h */
