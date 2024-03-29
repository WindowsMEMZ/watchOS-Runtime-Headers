//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDRemoveUnusedSchemaTableUpgradeStep_h
#define EDRemoveUnusedSchemaTableUpgradeStep_h
@import Foundation;

#include "EDTableUpgradeStep-Protocol.h"
#include "EFLoggable-Protocol.h"

@class NSString;

@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject<EFLoggable, EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (int)_createTempMessagesTable:(id)table;
+ (int)_recreateMessagesIndices:(id)indices;
+ (int)_copyMessagesData:(id)data;
+ (int)_swapMessagesTables:(id)tables;
+ (int)_recreateThreadsTable:(id)table;
+ (int)_recreateThreadsIndices:(id)indices;
+ (int)_dropTable:(id)table connection:(id)connection;
+ (int)_truncateTable:(id)table connection:(id)connection;
+ (int)_dropThreadCategoriesIndex:(id)index;
+ (int)runWithConnection:(id)connection;
@end

#endif /* EDRemoveUnusedSchemaTableUpgradeStep_h */
