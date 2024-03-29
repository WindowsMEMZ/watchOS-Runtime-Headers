//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFSafariDataSharingController_h
#define _SFSafariDataSharingController_h
@import Foundation;

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface _SFSafariDataSharingController : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dataSharingQueue;
  NSMutableArray *_appBundlesWithSeparateData;
}

/* class methods */
+ (id)sharedController;

/* instance methods */
- (id)init;
- (id)systemDataContainerURLWithAppBundleID:(id)id;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (void)checkInAppBundleIDIfNeeded:(id)needed;
- (void)clearAllWebsitesData;
@end

#endif /* _SFSafariDataSharingController_h */
