//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalZoneQueryResultRecordID_h
#define HMBLocalZoneQueryResultRecordID_h
@import Foundation;

#include "HMBLocalZoneQueryResult.h"

@class BOOL *;

@interface HMBLocalZoneQueryResultRecordID : HMBLocalZoneQueryResult
/* instance methods */
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)statement skip:(BOOL *)skip updatedSequence:(unsigned long long *)sequence error:(id *)error;
- (id)fetchRow:(id)row error:(id *)error;
@end

#endif /* HMBLocalZoneQueryResultRecordID_h */
