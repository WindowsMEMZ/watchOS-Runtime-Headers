//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCoreDataNotificationListener_Protocol_h
#define HMDCoreDataNotificationListener_Protocol_h
@import Foundation;

@protocol HMDCoreDataNotificationListener <NSObject>
@optional
/* instance methods */
- (void)coreData:(id)data persistentStoreWithIdentifierDidChange:(id)change;
- (void)coreData:(id)data cloudKitImportStartedForStoreWithIdentifier:(id)identifier;
- (void)coreData:(id)data cloudKitImportFinishedForStoreWithIdentifier:(id)identifier duration:(double)duration error:(id)error;
- (void)coreData:(id)data cloudKitExportStartedForStoreWithIdentifier:(id)identifier;
- (void)coreData:(id)data cloudKitExportFinishedForStoreWithIdentifier:(id)identifier duration:(double)duration error:(id)error;
@end

#endif /* HMDCoreDataNotificationListener_Protocol_h */
