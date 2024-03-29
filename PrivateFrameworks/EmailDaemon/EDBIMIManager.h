//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDBIMIManager_h
#define EDBIMIManager_h
@import Foundation;

#include "EDMessagePersistence.h"

@class EMRemoteContentURLSession, NSMutableDictionary;
@protocol EFScheduler;

@interface EDBIMIManager : NSObject {
  /* instance variables */
  NSMutableDictionary *_activeDataTasksByRequest;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeDataTasksLock;
}

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly, nonatomic) NSObject<EFScheduler> *downloadScheduler;

/* instance methods */
- (id)initWithMessagePersistence:(id)persistence urlSession:(id)session;
- (void)dealloc;
- (void)scheduleRecurringActivity;
- (void)test_tearDown;
- (id)processBIMIHeadersForMessages:(id)messages;
@end

#endif /* EDBIMIManager_h */
