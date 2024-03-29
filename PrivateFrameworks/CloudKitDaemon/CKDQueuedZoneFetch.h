//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDQueuedZoneFetch_h
#define CKDQueuedZoneFetch_h
@import Foundation;

#include "CKDQueuedFetch.h"

@interface CKDQueuedZoneFetch : CKDQueuedFetch
/* instance methods */
- (void)addRequestForZoneID:(id)id forOperation:(id)operation withCompletionHandler:(id /* block */)handler;
- (void)createFetchOperationForItemIDs:(id)ids operationQueue:(id)queue operationConfigurationBlock:(id /* block */)block;
@end

#endif /* CKDQueuedZoneFetch_h */
