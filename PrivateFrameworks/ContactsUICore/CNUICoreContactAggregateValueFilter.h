//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUICoreContactAggregateValueFilter_h
#define CNUICoreContactAggregateValueFilter_h
@import Foundation;

#include "CNUICoreContactPropertyValueFilter-Protocol.h"

@class NSArray, NSString;

@interface CNUICoreContactAggregateValueFilter : NSObject<CNUICoreContactPropertyValueFilter>

@property (readonly, nonatomic) NSArray *valueFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithValueFilters:(id)filters;
- (id)contactByFilteringOutPropertyValueOfContact:(id)contact;
- (void)filterPropertyValuesFromContact:(id)contact;
@end

#endif /* CNUICoreContactAggregateValueFilter_h */
