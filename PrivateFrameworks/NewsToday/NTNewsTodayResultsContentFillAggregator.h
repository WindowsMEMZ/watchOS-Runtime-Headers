//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTNewsTodayResultsContentFillAggregator_h
#define NTNewsTodayResultsContentFillAggregator_h
@import Foundation;

#include "NTTodayResultsAggregator-Protocol.h"

@class NSString;

@interface NTNewsTodayResultsContentFillAggregator : NSObject<NTTodayResultsAggregator>

@property (nonatomic) double minHeadlineScale;
@property (nonatomic) double maxHeadlineScale;
@property (retain, nonatomic) NSObject<NTTodayResultsAggregator> *aggregator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAggregator:(id)aggregator minHeadlineScale:(double)scale maxHeadlineScale:(double)scale;
- (id)aggregateSections:(id)sections itemsBySectionDescriptor:(id)descriptor budgetInfo:(id)info;
- (id)_aggregateSections:(id)sections itemsBySectionDescriptor:(id)descriptor budgetInfo:(id)info scale:(double)scale;
- (id)_bestResultOfResults:(id)results withBudgetInfo:(id)info;
@end

#endif /* NTNewsTodayResultsContentFillAggregator_h */
