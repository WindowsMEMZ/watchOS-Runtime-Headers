//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKSyncRemoteContextStorage_Protocol_h
#define _DKSyncRemoteContextStorage_Protocol_h
@import Foundation;

@protocol _DKSyncRemoteContextStorage <_DKSyncRemoteStorage>
/* instance methods */
- (void)subscribeToContextValueChangeNotificationsFromPeer:(id)peer registrationIdentifier:(id)identifier predicate:(id)predicate highPriority:(BOOL)priority completion:(id /* block */)completion;
- (void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)peer registrationIdentifier:(id)identifier predicate:(id)predicate highPriority:(BOOL)priority completion:(id /* block */)completion;
- (void)fetchContextValuesFromPeer:(id)peer forKeyPaths:(id)paths highPriority:(BOOL)priority completion:(id /* block */)completion;
- (void)sendContextValuesToPeer:(id)peer registrationIdentifier:(id)identifier archivedObjects:(id)objects highPriority:(BOOL)priority completion:(id /* block */)completion;
- (void)setDelegate:(id)delegate;
@end

#endif /* _DKSyncRemoteContextStorage_Protocol_h */
