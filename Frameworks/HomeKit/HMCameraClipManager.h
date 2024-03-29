//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCameraClipManager_h
#define HMCameraClipManager_h
@import Foundation;

#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"
#include "_HMContext.h"

@class NSHashTable, NSMutableDictionary, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMCameraClipManager : NSObject<HMFLogging, HMFMessageReceiver> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSMutableDictionary *clipsByFetchUUID;
@property (readonly) NSMutableDictionary *significantEventsByFetchUUID;
@property (readonly) NSMutableDictionary *videoAssetContextsByClipUUID;
@property (readonly) NSHashTable *observers;
@property (copy) id /* block */ fetchClientFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithContext:(id)context profileUniqueIdentifier:(id)identifier;
- (id)initWithContext:(id)context profileUniqueIdentifier:(id)identifier notificationCenter:(id)center;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)performCloudPullWithCompletion:(id /* block */)completion;
- (id)videoSegmentsAssetContextForClip:(id)clip;
- (void)fetchClipWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)fetchClipForSignificantEventWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)fetchAllClipsWithCompletion:(id /* block */)completion;
- (void)fetchClipsWithDateInterval:(id)interval limit:(unsigned long long)limit shouldOrderAscending:(BOOL)ascending completion:(id /* block */)completion;
- (void)fetchClipsWithDateInterval:(id)interval quality:(long long)quality limit:(unsigned long long)limit shouldOrderAscending:(BOOL)ascending completion:(id /* block */)completion;
- (void)fetchCountOfAllClipsWithCompletion:(id /* block */)completion;
- (void)fetchCountOfClipsWithDateInterval:(id)interval completion:(id /* block */)completion;
- (void)fetchCountOfClipsWithDateInterval:(id)interval quality:(long long)quality completion:(id /* block */)completion;
- (void)fetchHeroFrameDataRepresentationForClipWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)fetchHeroFrameURLOfClipWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)fetchFaceCropDataRepresentationForSignificantEventWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)fetchFaceCropURLForSignificantEventWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)fetchSignificantEventsWithUUIDs:(id)uuids completion:(id /* block */)completion;
- (void)fetchAllSignificantEventsWithCompletion:(id /* block */)completion;
- (void)fetchSignificantEventsWithDateInterval:(id)interval limit:(unsigned long long)limit completion:(id /* block */)completion;
- (void)fetchSignificantEventsWithDateInterval:(id)interval limit:(unsigned long long)limit shouldOrderAscending:(BOOL)ascending completion:(id /* block */)completion;
- (void)deleteClipWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)deleteAllClipsWithCompletionHandler:(id /* block */)handler;
- (void)handleFaceMisclassificationForSignificantEvent:(id)event completion:(id /* block */)completion;
- (void)donateClipsWithUUIDs:(id)uuids completion:(id /* block */)completion;
- (void)configure;
- (void)fetchVideoSegmentsAssetContextForClip:(id)clip completion:(id /* block */)completion;
- (void)importClipsWithImportData:(id)data completion:(id /* block */)completion;
- (void)updateVideoSegmentsAssetContextForClip:(id)clip;
- (void)subscribe;
- (void)unsubscribe;
- (void)handleDidChangeClipsMessage:(id)message;
- (void)handleDidChangeSignificantEventsMessage:(id)message;
- (void)handleDaemonReconnectedNotification:(id)notification;
- (id)logIdentifier;
@end

#endif /* HMCameraClipManager_h */
