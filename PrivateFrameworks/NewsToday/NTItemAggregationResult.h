//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTItemAggregationResult_h
#define NTItemAggregationResult_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary;

@interface NTItemAggregationResult : NSObject<NSCopying>

@property (copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor;
@property (copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID;
@property (copy, nonatomic) NSArray *unusedSectionDescriptors;
@property (nonatomic) double slotsUsed;
@property (nonatomic) double headlineScale;
@property (readonly, nonatomic) unsigned long long itemCount;

/* instance methods */
- (id)init;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)descriptor slotAllocationByDynamicSlotItemID:(id)id unusedSectionDescriptors:(id)descriptors;
- (id)copyWithHeadlineScale:(double)scale;
- (double)headlineSlotCostWithSlotCost:(double)cost;
- (double)sectionOverheadSlotCostWithInfo:(id)info;
- (double)slotCostWithInfo:(id)info;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NTItemAggregationResult_h */
