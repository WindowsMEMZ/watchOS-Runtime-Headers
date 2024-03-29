//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFPredictionsItemProvider_h
#define HFPredictionsItemProvider_h
@import Foundation;

#include "HFItemProvider.h"
#include "HFPredictionsManager.h"

@class HMHome, NSArray, NSMutableDictionary, NSMutableSet;

@interface HFPredictionsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems;
@property (retain, nonatomic) NSArray *predictions;
@property (retain, nonatomic) NSMutableDictionary *objectPriorities;
@property (retain, nonatomic) HFPredictionsManager *predictionsManager;
@property (nonatomic) unsigned long long itemLimit;
@property (readonly, nonatomic) HMHome *home;

/* instance methods */
- (id)init;
- (id)initWithHome:(id)home predictionsManager:(id)manager itemLimit:(unsigned long long)limit;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reloadItems;
- (id)_loadHomeKitObjectsWithPredictions:(id)predictions;
- (id)items;
- (id)invalidationReasons;
- (id)itemPriority:(id)priority;
@end

#endif /* HFPredictionsItemProvider_h */
