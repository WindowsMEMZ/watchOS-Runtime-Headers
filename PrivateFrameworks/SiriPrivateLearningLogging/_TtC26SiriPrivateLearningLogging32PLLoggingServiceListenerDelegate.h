//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3200.3.1.0.0
//
#ifndef _TtC26SiriPrivateLearningLogging32PLLoggingServiceListenerDelegate_h
#define _TtC26SiriPrivateLearningLogging32PLLoggingServiceListenerDelegate_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"

@interface SiriPrivateLearningLogging.PLLoggingServiceListenerDelegate : NSObject<NSXPCListenerDelegate> { // (Swift)
  /* instance variables */
   queue;
   connections;
}

/* instance methods */
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (id)init;
@end

#endif /* _TtC26SiriPrivateLearningLogging32PLLoggingServiceListenerDelegate_h */
