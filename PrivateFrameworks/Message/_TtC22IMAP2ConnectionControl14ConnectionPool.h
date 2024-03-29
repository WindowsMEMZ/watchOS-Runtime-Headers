//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _TtC22IMAP2ConnectionControl14ConnectionPool_h
#define _TtC22IMAP2ConnectionControl14ConnectionPool_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface IMAP2ConnectionControl.ConnectionPool : Swift._SwiftObject { // (Swift)
  /* instance variables */
   logger;
   queue;
   logName;
   configuration;
   engineID;
   didTearDown;
   connections;
   engine;
   nextConnectionID;
   backoff;
   backoffTimer;
   backoffLoggingRateLimit;
   checkForStallTimer;
   lastError;
   connectionStateDidChange;
   stateCapture;
   enqueuedEvents;
}

@end

#endif /* _TtC22IMAP2ConnectionControl14ConnectionPool_h */
