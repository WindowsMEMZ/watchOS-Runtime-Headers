//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 295.0.0.0.0
//
#ifndef AAAccessTracker_AppAnalytics_h
#define AAAccessTracker_AppAnalytics_h
@import Foundation;

@interface AAAccessTracker (AppAnalytics)
/* instance methods */
- (void)pushDataEvent:(id)event traits:(id)traits file:(id)file line:(long long)line;
- (void)popDataEventType:(Class)type;
- (void)popDataEventByName:(id)name;
- (id)peekDataEventByName:(id)name;
- (void)explicitSubmitEventType:(Class)type submitTime:(id)time;
- (void)explicitSubmitEventType:(Class)type onlyIfTimed:(BOOL)timed submitTime:(id)time;
- (void)explicitSubmitEventType:(Class)type submitTime:(id)time completion:(id /* block */)completion;
- (void)explicitSubmitEventType:(Class)type onlyIfTimed:(BOOL)timed submitTime:(id)time completion:(id /* block */)completion;
- (void)explicitSubmitRawEvent:(id)event submitTime:(id)time;
- (void)explicitSubmitRawEvent:(id)event onlyIfTimed:(BOOL)timed submitTime:(id)time;
- (void)explicitSubmitRawEvent:(id)event submitTime:(id)time completion:(id /* block */)completion;
- (void)explicitSubmitRawEvent:(id)event onlyIfTimed:(BOOL)timed submitTime:(id)time completion:(id /* block */)completion;
- (void)submitEventType:(Class)type;
- (void)submitEventType:(Class)type onlyIfTimed:(BOOL)timed;
- (void)submitEventType:(Class)type completion:(id /* block */)completion;
- (void)submitEventType:(Class)type onlyIfTimed:(BOOL)timed completion:(id /* block */)completion;
- (void)submitRawEvent:(id)event;
- (void)submitRawEvent:(id)event onlyIfTimed:(BOOL)timed;
- (void)submitRawEvent:(id)event completion:(id /* block */)completion;
- (void)submitRawEvent:(id)event onlyIfTimed:(BOOL)timed completion:(id /* block */)completion;
- (void)timeEventType:(Class)type;
- (void)timeEventType:(Class)type startTime:(id)time;
- (void)timeEventType:(Class)type submitAndRestartWithSession:(BOOL)session;
- (void)timeEventType:(Class)type submitAndRestartWithSession:(BOOL)session startTime:(id)time;
- (void)timeRawEvent:(id)event;
- (void)timeRawEvent:(id)event startTime:(id)time;
- (void)timeRawEvent:(id)event submitAndRestartWithSession:(BOOL)session;
- (void)timeRawEvent:(id)event submitAndRestartWithSession:(BOOL)session startTime:(id)time;
@end

#endif /* AAAccessTracker_AppAnalytics_h */
