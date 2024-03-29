//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef SecuritydXPCProtocol_Protocol_h
#define SecuritydXPCProtocol_Protocol_h
@import Foundation;

@protocol SecuritydXPCProtocol <NSObject>
/* instance methods */
- (void)SecItemAddAndNotifyOnSync:(id)sync syncCallback:(id)callback complete:(id /* block */)complete;
- (void)secItemSetCurrentItemAcrossAllDevices:(id)devices newCurrentItemHash:(id)hash accessGroup:(id)group identifier:(id)identifier viewHint:(id)hint oldCurrentItemReference:(id)reference oldCurrentItemHash:(id)hash complete:(id /* block */)complete;
- (void)secItemUnsetCurrentItemsAcrossAllDevices:(id)devices identifiers:(id)identifiers viewHint:(id)hint complete:(id /* block */)complete;
- (void)secItemFetchCurrentItemAcrossAllDevices:(id)devices identifier:(id)identifier viewHint:(id)hint fetchCloudValue:(BOOL)value complete:(id /* block */)complete;
- (void)secItemDigest:(id)digest accessGroup:(id)group complete:(id /* block */)complete;
- (void)secKeychainDeleteMultiuser:(id)multiuser complete:(id /* block */)complete;
- (void)secItemDeleteForAppClipApplicationIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)secItemPromoteItemsForAppClip:(id)clip toParentApp:(id)app completion:(id /* block */)completion;
- (void)secItemPersistKeychainWritesAtHighPerformanceCost:(id /* block */)cost;
- (void)secKeychainForceUpgradeIfNeeded:(id /* block */)needed;
@end

#endif /* SecuritydXPCProtocol_Protocol_h */
