//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDataCollectorMultiplexer_h
#define HDDataCollectorMultiplexer_h
@import Foundation;

#include "HDDataCollector-Protocol.h"
#include "HDProfile.h"

@class NSDictionary, NSMapTable;

@interface HDDataCollectorMultiplexer : NSObject {
  /* instance variables */
  HDProfile *_profile;
  NSObject<HDDataCollector> *_collector;
  NSDictionary *_aggregatorsByType;
  NSMapTable *_recordsByAggregator;
}

/* instance methods */
- (id)initForCollector:(id)collector identifier:(id)identifier profile:(id)profile types:(id)types;
- (void)registerForCollectionWithState:(id)state;
- (void)unregisterForCollection;
- (id)aggregatorForType:(id)type;
- (id)identifierForAggregator:(id)aggregator;
- (id)lastDatumForType:(id)type;
- (void)setLastSensorDatum:(id)datum forAggregator:(id)aggregator;
- (id)mergedConfiguration;
- (void)setConfiguration:(id)configuration forAggregator:(id)aggregator;
- (id)diagnosticDescription;
@end

#endif /* HDDataCollectorMultiplexer_h */
