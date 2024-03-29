//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVDatasetStatistics_h
#define CKVDatasetStatistics_h
@import Foundation;

#include "CKVDatasetRecord.h"

@interface CKVDatasetStatistics : NSObject

@property (readonly, nonatomic) CKVDatasetRecord *record;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long minLength;
@property (readonly, nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) unsigned long long sumLength;
@property (readonly, nonatomic) unsigned long long sumQLength;
@property (readonly, nonatomic) double meanLength;
@property (readonly, nonatomic) double stdevLength;

/* class methods */
+ (id)builderWithRecord:(id)record;

/* instance methods */
- (id)initWithRecord:(id)record count:(unsigned long long)count minLength:(unsigned long long)length maxLength:(unsigned long long)length sumLength:(unsigned long long)length sumQLength:(unsigned long long)qlength meanLength:(double)length stdevLength:(double)length;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToDatasetStatistics:(id)statistics;
- (unsigned long long)hash;
@end

#endif /* CKVDatasetStatistics_h */
