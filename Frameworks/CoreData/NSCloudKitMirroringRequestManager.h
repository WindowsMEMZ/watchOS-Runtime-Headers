//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSCloudKitMirroringRequestManager_h
#define NSCloudKitMirroringRequestManager_h
@import Foundation;

#include "NSCloudKitMirroringAcceptShareInvitationsRequest.h"
#include "NSCloudKitMirroringDelegateResetRequest.h"
#include "NSCloudKitMirroringDelegateSerializationRequest.h"
#include "NSCloudKitMirroringDelegateSetupRequest.h"
#include "NSCloudKitMirroringExportProgressRequest.h"
#include "NSCloudKitMirroringExportRequest.h"
#include "NSCloudKitMirroringFetchRecordsRequest.h"
#include "NSCloudKitMirroringImportRequest.h"
#include "NSCloudKitMirroringInitializeSchemaRequest.h"
#include "NSCloudKitMirroringRequest.h"
#include "NSCloudKitMirroringResetMetadataRequest.h"
#include "NSCloudKitMirroringResetZoneRequest.h"

@interface NSCloudKitMirroringRequestManager : NSObject {
  /* instance variables */
  NSCloudKitMirroringImportRequest *_pendingImportRequest;
  NSCloudKitMirroringExportRequest *_pendingExportRequest;
  NSCloudKitMirroringDelegateSetupRequest *_pendingSetupRequest;
  NSCloudKitMirroringDelegateResetRequest *_pendingDelegateResetRequest;
  NSCloudKitMirroringResetZoneRequest *_pendingResetRequest;
  NSCloudKitMirroringFetchRecordsRequest *_pendingFetchRecordsRequest;
  NSCloudKitMirroringResetMetadataRequest *_pendingResetMetadataRequest;
  NSCloudKitMirroringDelegateSerializationRequest *_pendingSerializationRequest;
  NSCloudKitMirroringInitializeSchemaRequest *_pendingInitializeSchemaRequest;
  NSCloudKitMirroringExportProgressRequest *_pendingExportProgressRequest;
  NSCloudKitMirroringAcceptShareInvitationsRequest *_pendingAcceptShareInvitationRequest;
  NSCloudKitMirroringRequest *_activeRequest;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* NSCloudKitMirroringRequestManager_h */
