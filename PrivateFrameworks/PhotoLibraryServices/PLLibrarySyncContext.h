//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLLibrarySyncContext_h
#define PLLibrarySyncContext_h
@import Foundation;

#include "PLCloudRecordOrganizer.h"
#include "PLPhotoLibrary.h"
#include "PLSyncContext-Protocol.h"

@class NSMutableDictionary, NSString;

@interface PLLibrarySyncContext : NSObject<PLSyncContext> {
  /* instance variables */
  NSMutableDictionary *_assetAdjustmentStatesByCloudIdentifier;
}

@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLCloudRecordOrganizer *recordOrganizer;
@property (readonly, nonatomic) BOOL serverSupportsVision;
@property (readonly, nonatomic) BOOL serverSupportsGraphHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPhotoLibrary:(id)library;
- (id)makeFace;
- (void)deleteFaces:(id)faces;
- (id)personForUUID:(id)uuid;
- (BOOL)personUUIDIsDeleted:(id)deleted;
- (id)assetAdjustmentStateForCloudIdentifier:(id)identifier;
- (void)setAssetAdjustmentState:(id)state forCloudIdentifer:(id)identifer;
@end

#endif /* PLLibrarySyncContext_h */
