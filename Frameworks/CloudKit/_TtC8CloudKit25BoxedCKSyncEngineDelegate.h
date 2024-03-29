//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef _TtC8CloudKit25BoxedCKSyncEngineDelegate_h
#define _TtC8CloudKit25BoxedCKSyncEngineDelegate_h
@import Foundation;

#include "CKSyncEngineAsyncDelegate-Protocol.h"

@class CKSyncEngine *, CKSyncEngineEvent *, CKSyncEngineFetchChangesContext *, CKSyncEngineFetchChangesOptions *, CKSyncEngineRecordZoneChangeBatch *, CKSyncEngineSendChangesContext *, NSArray *;

@interface CloudKit.BoxedCKSyncEngineDelegate : NSObject<CKSyncEngineAsyncDelegate> { // (Swift)
  /* instance variables */
   delegate;
}

/* instance methods */
- (void)syncEngine:(CKSyncEngine *)engine handleEvent:(CKSyncEngineEvent *)event completionHandler:(id /* block */)handler;
- (void)syncEngine:(CKSyncEngine *)engine nextRecordZoneChangeBatchForContext:(CKSyncEngineSendChangesContext *)context completionHandler:(id /* block */)handler;
- (void)syncEngine:(CKSyncEngine *)engine nextFetchChangesOptionsForContext:(CKSyncEngineFetchChangesContext *)context completionHandler:(id /* block */)handler;
- (void)syncEngine:(CKSyncEngine *)engine relatedApplicationBundleIdentifiersForZoneIDs:(NSArray *)ids recordIDs:(NSArray *)ids completionHandler:(id /* block */)handler;
- (id)init;
@end

#endif /* _TtC8CloudKit25BoxedCKSyncEngineDelegate_h */
