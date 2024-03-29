//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostMetrics_h
#define SignpostMetrics_h
@import Foundation;

@class NSData, NSNumber;

@interface SignpostMetrics : NSObject

@property (readonly, nonatomic) NSData *binarySnapshot;
@property (readonly, nonatomic) NSNumber *cpuTimeNsec;
@property (readonly, nonatomic) NSNumber *dirtyMemoryKB;
@property (readonly, nonatomic) NSNumber *dirtyMemoryLifetimePeakKB;
@property (readonly, nonatomic) NSNumber *storageDirtiedKB;
@property (readonly, nonatomic) NSNumber *cpuInstructionsKI;

/* class methods */
+ (id)_newMetricsFromData:(id)data;
+ (id)_deltaDescription:(id)description;
+ (id)newMetricsForSignpostEvent:(id)event;

/* instance methods */
- (id)initWithSnapshotDict:(id)dict data:(id)data;
- (id)description;
- (id)debugDescription;
@end

#endif /* SignpostMetrics_h */
