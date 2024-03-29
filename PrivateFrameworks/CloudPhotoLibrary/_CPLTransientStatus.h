//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef _CPLTransientStatus_h
#define _CPLTransientStatus_h
@import Foundation;

#include "CPLRecordChange.h"
#include "CPLRecordStatus.h"

@class NSDate;

@interface _CPLTransientStatus : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) CPLRecordChange *record;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) CPLRecordStatus *status;

/* instance methods */
- (id)initWithRecord:(id)record generation:(unsigned long long)generation date:(id)date;
@end

#endif /* _CPLTransientStatus_h */
