//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIViewBlockBasedCAAction_h
#define UIViewBlockBasedCAAction_h
@import Foundation;

#include "CAAction-Protocol.h"

@interface UIViewBlockBasedCAAction : NSObject<CAAction> {
  /* instance variables */
  id /* block */ _block;
}

/* instance methods */
- (id)initWithEmptyBlock:(id /* block */)block;
- (id)initWithActionBlock:(id /* block */)block;
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;
@end

#endif /* UIViewBlockBasedCAAction_h */
