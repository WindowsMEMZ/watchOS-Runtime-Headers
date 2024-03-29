//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef JEHLSVideoPlaylist_h
#define JEHLSVideoPlaylist_h
@import Foundation;

#include "JEMediaPlaylist-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface JEHLSVideoPlaylist : NSObject<JEMediaPlaylist>

@property (nonatomic) unsigned long long startPosition;
@property (retain, nonatomic) NSMutableArray *rollItems;
@property (retain, nonatomic) NSArray *mainFeatureMetricsData;
@property (readonly, nonatomic) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStartPosition:(unsigned long long)position mainFeatureMetricsData:(id)data;
- (id)initWithMainFeatureMetricsData:(id)data;
- (void)addRollInfoItems:(id)items;
- (void)addRollInfoItem:(id)item;
- (void)addItemStartAtSeconds:(double)seconds durationSeconds:(double)seconds metricsData:(id)data;
- (void)addItemStartAtMilliseconds:(unsigned long long)milliseconds durationMilliseconds:(unsigned long long)milliseconds metricsData:(id)data;
- (void)addItemStartAtMilliseconds:(unsigned long long)milliseconds endAtMilliseconds:(unsigned long long)milliseconds metricsData:(id)data;
- (id)itemAtOverallPosition:(unsigned long long)position rangeOptions:(long long)options;
- (id)itemsBetweenStartOverallPosition:(unsigned long long)position endOverallPosition:(unsigned long long)position;
- (void)addRollItem:(id)item;
- (id)mainFeatureItemWithStartOverallPosition:(unsigned long long)position;
- (long long)indexOfLastRollItemWithStartBeforePosition:(unsigned long long)position;
@end

#endif /* JEHLSVideoPlaylist_h */
