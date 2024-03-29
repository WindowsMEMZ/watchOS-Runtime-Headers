//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDCorrelationSampleEntityEncoder_h
#define _HDCorrelationSampleEntityEncoder_h
@import Foundation;

#include "HDEntityEncoder.h"

@interface _HDCorrelationSampleEntityEncoder : HDEntityEncoder
/* class methods */
+ (long long)estimatedEncodedSize;

/* instance methods */
- (id)codableRepresentationForPersistentID:(long long)id row:(struct HDSQLiteRow *)row error:(id *)error;
- (id)objectForPersistentID:(long long)id row:(struct HDSQLiteRow *)row error:(id *)error;
- (BOOL)applyPropertiesToObject:(id)object persistentID:(long long)id row:(struct HDSQLiteRow *)row error:(id *)error;
@end

#endif /* _HDCorrelationSampleEntityEncoder_h */
