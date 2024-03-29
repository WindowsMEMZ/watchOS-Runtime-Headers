//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NHSDuetStreamObserver_h
#define NHSDuetStreamObserver_h
@import Foundation;

@interface NHSDuetStreamObserver : NSObject

@property (copy) id /* block */ insertHandler;
@property (copy) id /* block */ deleteHandler;
@property (copy) id /* block */ ageOutHandler;

/* instance methods */
- (id)initWithEventStream:(id)stream;
- (void)_handleDidInsertEventsNotification;
- (void)_handleDidDeleteEventsNotifcation;
- (void)_handeDidAgeOutEventsNotification;
@end

#endif /* NHSDuetStreamObserver_h */
