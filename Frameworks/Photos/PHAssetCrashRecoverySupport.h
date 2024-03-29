//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAssetCrashRecoverySupport_h
#define PHAssetCrashRecoverySupport_h
@import Foundation;

#include "PLXPCUserInfo-Protocol.h"

@class NSString, PLLibraryServicesManager;

@interface PHAssetCrashRecoverySupport : NSObject<PLXPCUserInfo> {
  /* instance variables */
  PLLibraryServicesManager *_libraryServicesManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLibraryServicesManager:(id)manager;
- (BOOL)_isCrashRecoveryFilename:(id)filename;
- (BOOL)_isSafeToRecoverAfterCrashForCrashRecoveryFileURL:(id)url;
- (void)recoverFromCrashIfNeeded;
- (void)_commitRequest:(id)request reply:(id /* block */)reply;
- (id)libraryServicesManager;
- (id)persistentStoreCoordinator;
@end

#endif /* PHAssetCrashRecoverySupport_h */
