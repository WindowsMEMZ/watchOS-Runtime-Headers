//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFClientLite_h
#define AFClientLite_h
@import Foundation;

#include "AFCallSiteInfo.h"

@interface AFClientLite : NSObject {
  /* instance variables */
  AFCallSiteInfo *_initiationCallSiteInfo;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_handleCommand:(id)command afterCurrentRequest:(BOOL)request isOneWay:(BOOL)way commandHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)handleCommand:(id)command afterCurrentRequest:(BOOL)request commandHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)handleOneWayCommand:(id)command commandHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)handleCommand:(id)command commandHandler:(id /* block */)handler completion:(id /* block */)completion;
@end

#endif /* AFClientLite_h */
