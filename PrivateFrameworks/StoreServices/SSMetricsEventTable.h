//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSMetricsEventTable_h
#define SSMetricsEventTable_h
@import Foundation;

#include "SSEventsTableBase.h"

@interface SSMetricsEventTable : SSEventsTableBase
/* class methods */
+ (id)databasePath;
+ (id)_eventsTableName;

/* instance methods */
- (void)performTransactionWithBlock:(id /* block */)block;
- (BOOL)_migrateToVersion1;
- (BOOL)_migrateToVersion2;
- (BOOL)_migrateToVersion3;
- (BOOL)_setupDatabase;
- (id)_pragmaValueForName:(id)name;
@end

#endif /* SSMetricsEventTable_h */
