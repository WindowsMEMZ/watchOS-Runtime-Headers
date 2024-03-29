//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPRecordMonitoringHelper_h
#define PPRecordMonitoringHelper_h
@import Foundation;

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface PPRecordMonitoringHelper : NSObject {
  /* instance variables */
  NSString *_name;
  NSObject<OS_dispatch_queue> *_queue;
  NSHashTable *_delegates;
  BOOL _hasRegistered;
}

/* instance methods */
- (id)initWithName:(id)name;
- (BOOL)loadRecordsAndMonitorChangesWithDelegate:(id)delegate recordGenerator:(id /* block */)generator notificationRegistrationBlock:(id /* block */)block;
- (void)loadRecordsWithDelegate:(id)delegate recordGenerator:(id /* block */)generator;
- (void)handleChangeNotificationWithName:(id)name afterDelaySeconds:(double)seconds handler:(id /* block */)handler;
- (void)sendResetToAllDelegatesWithRecordGenerator:(id /* block */)generator;
- (void)resetWithDelegate:(id)delegate recentChangesInProgress:(BOOL)progress recordGenerator:(id /* block */)generator;
- (void)sendChangesToDelegatesWithChangeGenerator:(id /* block */)generator recordGenerator:(id /* block */)generator;
- (id)_setupRecentChangesWithDelegates:(id)delegates recordGenerator:(id /* block */)generator;
- (id)_handleRecentChangesWithDelegates:(id)delegates changeGenerator:(id /* block */)generator recordGenerator:(id /* block */)generator;
- (void)unloadDelegate:(id)delegate;
@end

#endif /* PPRecordMonitoringHelper_h */
