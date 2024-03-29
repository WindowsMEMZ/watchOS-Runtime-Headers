//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdSyncClient_h
#define PLAssetsdSyncClient_h
@import Foundation;

#include "PLAssetsdBaseClient.h"

@interface PLAssetsdSyncClient : PLAssetsdBaseClient
/* instance methods */
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)albums;
- (void)updateRestoredAssetWithUUID:(id)uuid paths:(id)paths fixAddedDate:(BOOL)date;
@end

#endif /* PLAssetsdSyncClient_h */
