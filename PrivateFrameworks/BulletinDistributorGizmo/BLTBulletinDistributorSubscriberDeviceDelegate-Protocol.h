//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTBulletinDistributorSubscriberDeviceDelegate_Protocol_h
#define BLTBulletinDistributorSubscriberDeviceDelegate_Protocol_h
@import Foundation;

@protocol BLTBulletinDistributorSubscriberDeviceDelegate <NSObject>
/* instance methods */
- (void)getWillNanoPresentNotificationForSectionID:(id)id completion:(id /* block */)completion;
- (void)getWillNanoPresentNotificationForSectionID:(id)id subsectionIDs:(id)ids completion:(id /* block */)completion;
- (void)sendBulletinSummary:(id)summary;
- (BOOL)isLocallyConnectedToRemote;
@end

#endif /* BLTBulletinDistributorSubscriberDeviceDelegate_Protocol_h */
