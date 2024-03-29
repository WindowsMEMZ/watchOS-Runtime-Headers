//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOConfigChangedDelegateListener_h
#define _GEOConfigChangedDelegateListener_h
@import Foundation;

#include "GEOConfigChangeListenerDelegate-Protocol.h"
#include "_GEOConfigChangedListener-Protocol.h"
#include "_GEOConfigKeyHelper.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface _GEOConfigChangedDelegateListener : NSObject<_GEOConfigChangedListener> {
  /* instance variables */
  _GEOConfigKeyHelper *keyHelper;
  NSObject<OS_dispatch_queue> *queue;
  NSObject<GEOConfigChangeListenerDelegate> *delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)callListener;
@end

#endif /* _GEOConfigChangedDelegateListener_h */
