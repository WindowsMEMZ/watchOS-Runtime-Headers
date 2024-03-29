//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceSnapshotClient_h
#define NTKFaceSnapshotClient_h
@import Foundation;

#include "NTKFaceSnapshotClient-Protocol.h"

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotClient : NSObject<NTKFaceSnapshotClient> {
  /* instance variables */
  NSXPCConnection *_daemonConnection;
  BOOL _registrationNeeded;
  NSObject<OS_dispatch_queue> *_snapshotFileQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_setupDaemonConnection;
- (void)dealloc;
- (void)synchronouslyUpdateAllSnapshots;
- (void)requestSnapshotOfFace:(id)face;
- (void)performAfterCompletingCurrentlyPendingSnapshots:(id /* block */)snapshots;
- (void)_askXPCServiceForSnapshotOfDescriptor:(id)descriptor options:(id)options completion:(id /* block */)completion;
- (void)_askDaemonForSnapshotOfDescriptor:(id)descriptor options:(id)options completion:(id /* block */)completion;
- (void)snapshotFace:(id)face options:(id)options completion:(id /* block */)completion;
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)uuid options:(id)options completion:(id /* block */)completion;
- (void)faceSnapshotChangedForKey:(id)key;
- (void)_updateAllSnapshots;
- (void)_handleCustomMonogramChangedNotification;
- (void)_handleSignificantLocationChangeNotification;
- (void)_register;
- (void)_registerIfNeeded;
- (void)_handleConnectionInterrupted;
@end

#endif /* NTKFaceSnapshotClient_h */
