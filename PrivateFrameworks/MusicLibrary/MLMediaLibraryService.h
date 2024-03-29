//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MLMediaLibraryService_h
#define MLMediaLibraryService_h
@import Foundation;

#include "MLMediaLibraryServiceClientProtocol-Protocol.h"
#include "MLMediaLibraryServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MLMediaLibraryService : NSObject<MLMediaLibraryServiceClientProtocol> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_serialQueue;
  NSObject<OS_dispatch_queue> *_replyQueue;
  NSXPCConnection *_serviceConnection;
  NSObject<MLMediaLibraryServiceProtocol> *_serviceProxy;
  NSMutableDictionary *_progressBlocksByUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedMediaLibraryService;
+ (void)_setDaemonProcessInfo:(id)info;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)validateDatabaseAtPath:(id)path error:(id *)error;
- (void)attemptDatabaseFileRecoveryAtPath:(id)path withCompletionHandler:(id /* block */)handler;
- (void)checkIntegrityOfDatabaseAtPath:(id)path repairFaults:(BOOL)faults withCompletionHandler:(id /* block */)handler;
- (void)performDiagnosticWithCompletionHandler:(id /* block */)handler;
- (void)recreateDatabaseAtPath:(id)path withCompletionHandler:(id /* block */)handler;
- (void)beginTransactionForDatabaseWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)beginTransactionForDatabaseWithContext:(id)context error:(id *)error;
- (void)executeUpdate:(id)update withParameters:(id)parameters onTransaction:(id)transaction withCompletionHandler:(id /* block */)handler;
- (BOOL)executeUpdate:(id)update withParameters:(id)parameters onTransaction:(id)transaction error:(id *)error;
- (void)executeQuery:(id)query withParameters:(id)parameters options:(id)options onTransaction:(id)transaction withCompletionHandler:(id /* block */)handler;
- (void)endTransaction:(id)transaction shouldCommit:(BOOL)commit withCompletionHandler:(id /* block */)handler;
- (BOOL)endTransaction:(id)transaction shouldCommit:(BOOL)commit error:(id *)error;
- (void)performDatabaseOperation:(unsigned long long)operation withAttributes:(id)attributes options:(id)options completionHandler:(id /* block */)handler;
- (BOOL)performDatabaseOperation:(unsigned long long)operation withAttributes:(id)attributes options:(id)options error:(id *)error;
- (void)setOptions:(id)options withCompletionHandler:(id /* block */)handler;
- (void)performImport:(id)import fromSource:(unsigned long long)source withProgressBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)cancelImportOperation:(unsigned long long)operation completionHandler:(id /* block */)handler;
- (void)lockDatabaseForReason:(long long)reason withCompletion:(id /* block */)completion;
- (void)unlockDatabaseWithCompletion:(id /* block */)completion;
- (void)getLanguageResourcesWithCompletion:(id /* block */)completion;
- (void)updateSpotlightIndexForBundleID:(id)id withCompletion:(id /* block */)completion;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)identifiers bundleID:(id)id withCompletion:(id /* block */)completion;
- (void)updateSiriIndexMetadataForAllLibrariesWithCompletion:(id /* block */)completion;
- (void)performMaintenanceTasksForDatabaseAtPath:(id)path withCompletionHandler:(id /* block */)handler;
- (id)mediaLibraryResourcesServiceListenerEndpointWithError:(id *)error;
- (id)clientImportServiceListenerEndpointWithError:(id *)error;
- (void)serviceTerminatedTransactionWithIdentifier:(id)identifier error:(id)error;
- (void)importOperationWithIdentifier:(id)identifier didUpdateWithProgress:(float)progress;
- (id)_serviceConnection;
@end

#endif /* MLMediaLibraryService_h */
