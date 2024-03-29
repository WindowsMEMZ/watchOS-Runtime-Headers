//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSAccessibilityWindowHostingController_h
#define SBSAccessibilityWindowHostingController_h
@import Foundation;

#include "SBSAccessibilityWindowHostingServerToClientInterface-Protocol.h"

@class BSServiceConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SBSAccessibilityWindowHostingController : NSObject<SBSAccessibilityWindowHostingServerToClientInterface> {
  /* instance variables */
  BSServiceConnection *_connection;
  NSObject<OS_dispatch_queue> *_connectionQueue;
  NSMutableDictionary *_registeredWindowContextIDsToLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)registerWindowWithContextID:(unsigned int)id atLevel:(double)level;
- (void)unregisterWindowWithContextID:(unsigned int)id;
- (void)invalidate;
- (id)_connectionQueue_connection;
- (void)_connectionQueue_handleInterruption;
@end

#endif /* SBSAccessibilityWindowHostingController_h */
