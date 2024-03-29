//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNBlockTask_h
#define _CNBlockTask_h
@import Foundation;

#include "CNTask.h"

@interface _CNBlockTask : CNTask {
  /* instance variables */
  id /* block */ _block;
}

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithBlock:(id /* block */)block;
- (id)initWithName:(id)name block:(id /* block */)block;
- (id)run:(id *)run;
@end

#endif /* _CNBlockTask_h */
