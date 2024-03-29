//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSyncEngineAsyncDelegateAdapter_h
#define CKSyncEngineAsyncDelegateAdapter_h
@import Foundation;

#include "CKSyncEngineAsyncDelegate-Protocol.h"
#include "CKSyncEngineDelegate-Protocol.h"

@class NSString;

@interface CKSyncEngineAsyncDelegateAdapter : NSObject<CKSyncEngineAsyncDelegate>

@property (weak, nonatomic) NSObject<CKSyncEngineDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)syncEngine:(id)engine handleEvent:(id)event completionHandler:(id /* block */)handler;
- (void)syncEngine:(id)engine nextRecordZoneChangeBatchForContext:(id)context completionHandler:(id /* block */)handler;
- (void)syncEngine:(id)engine relatedApplicationBundleIdentifiersForZoneIDs:(id)ids recordIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)syncEngine:(id)engine nextFetchChangesOptionsForContext:(id)context completionHandler:(id /* block */)handler;
@end

#endif /* CKSyncEngineAsyncDelegateAdapter_h */
