//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PFCloudKitSetupAssistant_h
#define PFCloudKitSetupAssistant_h
@import Foundation;

#include "NSCloudKitMirroringDelegateOptions.h"
#include "NSCloudKitMirroringDelegateSetupRequest.h"
#include "NSPersistentCloudKitContainerEvent.h"
#include "PFCloudKitStoreMonitor.h"

@class CKContainer, CKDatabase, CKDatabaseSubscription, CKRecordID, NSURL;
@protocol OS_dispatch_semaphore;

@interface PFCloudKitSetupAssistant : NSObject {
  /* instance variables */
  NSCloudKitMirroringDelegateOptions *_mirroringOptions;
  CKContainer *_container;
  CKDatabase *_database;
  CKDatabaseSubscription *_databaseSubscription;
  NSURL *_largeBlobDirectoryURL;
  NSObject<OS_dispatch_semaphore> *_cloudKitSemaphore;
  PFCloudKitStoreMonitor *_storeMonitor;
  NSPersistentCloudKitContainerEvent *_setupEvent;
  NSCloudKitMirroringDelegateSetupRequest *_setupRequest;
  CKRecordID *_currentUserRecordID;
}

/* instance methods */
- (id)initWithSetupRequest:(id)request mirroringOptions:(id)options observedStore:(id)store;
- (void)dealloc;
@end

#endif /* PFCloudKitSetupAssistant_h */
