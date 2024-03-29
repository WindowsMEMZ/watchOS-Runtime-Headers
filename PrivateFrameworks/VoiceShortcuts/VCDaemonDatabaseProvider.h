//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef VCDaemonDatabaseProvider_h
#define VCDaemonDatabaseProvider_h
@import Foundation;

#include "WFDatabaseProvider-Protocol.h"

@class NSString, WFDatabase;
@protocol OS_dispatch_queue;

@interface VCDaemonDatabaseProvider : NSObject<WFDatabaseProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)databaseWithError:(id *)error;
- (void)migrateVoiceShortcutsToShortcutsInDatabase:(id)database;
- (BOOL)isShortcutsAppInstalled;
@end

#endif /* VCDaemonDatabaseProvider_h */
