//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSessionSuppressionAssertionTracker_h
#define CSLSessionSuppressionAssertionTracker_h
@import Foundation;

#include "CSLSessionSuppressionDelegate-Protocol.h"

@class NSMutableDictionary;

@interface CSLSessionSuppressionAssertionTracker : NSObject {
  /* instance variables */
  NSMutableDictionary *_suppressionCountByPID;
  BOOL _sessionsAreSuppressed;
  NSObject<CSLSessionSuppressionDelegate> *_delegate;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)_withLock:(id /* block */)lock;
- (BOOL)sessionsAreSuppressed;
- (void)addSessionSuppressionAssertionForPID:(int)pid completion:(id /* block */)completion;
- (void)removeSessionSuppressionAssertionForPID:(int)pid completion:(id /* block */)completion;
- (void)removeAllSessionSuppressionAssertionsForPID:(int)pid completion:(id /* block */)completion;
@end

#endif /* CSLSessionSuppressionAssertionTracker_h */
