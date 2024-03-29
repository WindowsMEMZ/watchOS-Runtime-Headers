//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASDatabaseCompetitionListEntryEncoder_h
#define ASDatabaseCompetitionListEntryEncoder_h
@import Foundation;

#include "HDEntityEncoder.h"

@interface ASDatabaseCompetitionListEntryEncoder : HDEntityEncoder
/* instance methods */
- (id)orderedProperties;
- (id)codableRepresentationForPersistentID:(long long)id row:(struct HDSQLiteRow *)row error:(id *)error;
- (id)objectForPersistentID:(long long)id row:(struct HDSQLiteRow *)row error:(id *)error;
- (BOOL)applyPropertiesToObject:(id)object persistentID:(long long)id row:(struct HDSQLiteRow *)row error:(id *)error;
@end

#endif /* ASDatabaseCompetitionListEntryEncoder_h */
