//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdPhotoKitAddClient_h
#define PLAssetsdPhotoKitAddClient_h
@import Foundation;

#include "PLAssetsdBaseClient.h"
#include "PLAssetsdPhotoKitChangesRequestClient-Protocol.h"

@interface PLAssetsdPhotoKitAddClient : PLAssetsdBaseClient<PLAssetsdPhotoKitChangesRequestClient>
/* instance methods */
- (id)clientName;
- (void)sendChangesRequest:(id)request reply:(id /* block */)reply;
- (BOOL)sendChangesRequest:(id)request error:(id *)error;
@end

#endif /* PLAssetsdPhotoKitAddClient_h */
