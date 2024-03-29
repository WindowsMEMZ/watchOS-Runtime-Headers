//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSDaemonRequestContext_h
#define IDSDaemonRequestContext_h
@import Foundation;

#include "IDSDaemonResponseHandler.h"

@class IMTimer;

@interface IDSDaemonRequestContext : NSObject {
  /* instance variables */
  IDSDaemonResponseHandler *_responseHandler;
  id /* block */ _timeoutBlock;
  IMTimer *_systemTimer;
}

/* instance methods */
- (void)dealloc;
- (id)initWithResponseHandler:(id)handler timeoutBlock:(id /* block */)block systemTimer:(id)timer;
- (id)responseHandler;
- (id /* block */)timeoutBlock;
- (id)systemTimer;
- (void)killSystemTimer;
@end

#endif /* IDSDaemonRequestContext_h */
