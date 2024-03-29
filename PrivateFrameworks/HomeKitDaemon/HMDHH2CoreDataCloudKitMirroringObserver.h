//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHH2CoreDataCloudKitMirroringObserver_h
#define HMDHH2CoreDataCloudKitMirroringObserver_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCoreData.h"
#include "HMDCoreDataNotificationListener-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSManagedObjectContext, NSMutableSet, NSString;

@interface HMDHH2CoreDataCloudKitMirroringObserver : HMFObject<HMFLogging, HMDCoreDataNotificationListener>

@property (retain, nonatomic) NSMutableSet *objectIdsToMonitor;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) HMDCoreData *coreData;
@property (retain, nonatomic) NSString *storeIdentifier;
@property (retain, nonatomic) NSManagedObjectContext *cachedMOC;
@property (nonatomic) BOOL isExportProgressRequestAlreadyInProgress;
@property (nonatomic) unsigned long long numberOfIgnoredExportProgressRequest;
@property (readonly, nonatomic) unsigned long long totalObjectsToMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithObjectIds:(id)ids coreData:(id)data storeIdentifier:(id)identifier;
- (void)startMonitoring:(id /* block */)monitoring;
- (void)stopMonitoring;
- (void)callClientsCompletionHandler:(id)handler;
- (void)verifyModelsPushedToCloudKit;
- (void)processExportResult:(id)result withError:(id)error;
- (BOOL)verifyModelsPushedToCloudKitUsingCoreDataExportStream;
- (void)coreData:(id)data persistentStoreWithIdentifierDidChange:(id)change;
@end

#endif /* HMDHH2CoreDataCloudKitMirroringObserver_h */
