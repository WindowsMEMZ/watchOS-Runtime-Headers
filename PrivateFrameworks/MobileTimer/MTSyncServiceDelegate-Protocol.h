//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSyncServiceDelegate_Protocol_h
#define MTSyncServiceDelegate_Protocol_h
@import Foundation;

@protocol MTSyncServiceDelegate <NSObject>
/* instance methods */
- (id)pendingChanges;
- (void)applyChange:(id)change;
- (void)resetDataStore;
- (void)pendingChangesSent:(id)sent;
@end

#endif /* MTSyncServiceDelegate_Protocol_h */
