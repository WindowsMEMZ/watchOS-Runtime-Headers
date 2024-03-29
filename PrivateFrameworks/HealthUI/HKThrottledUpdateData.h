//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKThrottledUpdateData_h
#define HKThrottledUpdateData_h
@import Foundation;

@class HKSampleType, NSHashTable, NSMutableArray;

@interface HKThrottledUpdateData : NSObject

@property (readonly, nonatomic) HKSampleType *throttledSampleType;
@property (readonly, nonatomic) long long incomingUpdateCountSinceLastDrain;
@property (readonly, nonatomic) NSHashTable *throttledObservers;
@property (readonly, nonatomic) NSMutableArray *throttledSamplesAdded;
@property (readonly, nonatomic) NSMutableArray *throttledDeletedObjects;
@property (readonly, nonatomic) double lastDrainTime;

/* instance methods */
- (id)initWithSampleType:(id)type;
- (void)addThrottledObservers:(id)observers samplesAdded:(id)added objectsRemoved:(id)removed;
- (void)clearThrottlingData;
- (void)updateDrainTime;
@end

#endif /* HKThrottledUpdateData_h */
