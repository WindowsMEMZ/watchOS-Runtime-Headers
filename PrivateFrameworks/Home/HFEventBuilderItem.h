//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFEventBuilderItem_h
#define HFEventBuilderItem_h
@import Foundation;

#include "HFItem.h"
#include "HFEventBuilder.h"
#include "HFTriggerNaturalLanguageOptions.h"

@class NSSet, NSString;

@interface HFEventBuilderItem : HFItem

@property (retain, nonatomic) NSSet *eventBuilders;
@property (retain, nonatomic) HFEventBuilder *representativeEventBuilder;
@property (retain, nonatomic) NSString *comparisonKey;
@property (retain, nonatomic) HFTriggerNaturalLanguageOptions *naturalLanguageOptions;

/* class methods */
+ (id)eventBuilderItemForEventBuilders:(id)builders;

/* instance methods */
- (id)initWithEventBuilders:(id)builders;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFEventBuilderItem_h */
