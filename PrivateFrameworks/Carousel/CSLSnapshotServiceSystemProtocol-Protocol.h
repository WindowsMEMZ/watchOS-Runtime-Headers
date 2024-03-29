//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSnapshotServiceSystemProtocol_Protocol_h
#define CSLSnapshotServiceSystemProtocol_Protocol_h
@import Foundation;

@protocol CSLSnapshotServiceSystemProtocol <NSObject>
/* instance methods */
- (void)scheduleSystemSnapshot:(id)snapshot forReason:(unsigned long long)reason;
- (void)initiateSnapshot:(id)snapshot reason:(unsigned long long)reason item:(id)item launchIfNeeded:(BOOL)needed prelauncherOptions:(id)options completion:(id /* block */)completion;
- (void)initiateBackgroundProcessingCompleteSnapshot:(id)snapshot;
- (void)cancelBackgroundProcessingCompleteSnapshot:(id)snapshot;
- (void)performSnapshotForApp:(id)app scene:(id)scene reason:(unsigned long long)reason context:(id)context completion:(id /* block */)completion;
- (void)registerPrivilegedSnapshotClient:(id)client priority:(unsigned long long)priority leeway:(double)leeway usesBudget:(BOOL)budget returnToPrimaryUIInterval:(double)uiinterval;
- (BOOL)shouldSnapshot:(id)snapshot;
- (BOOL)shouldSnapshot:(id)snapshot scheduleItem:(id)item;
- (BOOL)deductSnapshot:(id)snapshot scheduleItem:(id)item;
- (id)trackedSnapshotActionForApp:(id)app item:(id)item responseHandler:(id /* block */)handler;
@end

#endif /* CSLSnapshotServiceSystemProtocol_Protocol_h */
