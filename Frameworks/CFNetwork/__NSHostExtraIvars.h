//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef __NSHostExtraIvars_h
#define __NSHostExtraIvars_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface __NSHostExtraIvars : NSObject {
  /* instance variables */
  NSString *thingToResolve;
  int resolveType;
  NSObject<OS_dispatch_queue> *resolveQueue;
  NSObject<OS_dispatch_queue> *cacheAccessQueue;
  NSObject<OS_dispatch_queue> *callbackQueue;
  BOOL startedResolving;
}

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* __NSHostExtraIvars_h */
