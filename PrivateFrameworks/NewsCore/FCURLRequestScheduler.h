//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCURLRequestScheduler_h
#define FCURLRequestScheduler_h
@import Foundation;

@class NFUnfairLock, NSDate, NSMapTable, NSMutableOrderedSet, NSURLSession;

@interface FCURLRequestScheduler : NSObject {
  /* instance variables */
  NSURLSession *_URLSession;
  NSMutableOrderedSet *_requests;
  NSMapTable *_inFlightURLTasks;
  unsigned long long _maxInFlightURLTasks;
  unsigned long long _maxInFlightLowPriorityURLTasks;
  NFUnfairLock *_lock;
  NSDate *_dateOfLastProgress;
}

/* instance methods */
- (id)initWithURLSession:(id)urlsession;
- (id)scheduleURLRequest:(id)urlrequest destination:(long long)destination priority:(long long)priority loggingKey:(id)key completion:(id /* block */)completion;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* FCURLRequestScheduler_h */
