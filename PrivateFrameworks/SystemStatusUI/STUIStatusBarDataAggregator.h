//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarDataAggregator_h
#define STUIStatusBarDataAggregator_h
@import Foundation;

@class NSCountedSet, NSMutableDictionary, NSSet, STStatusBarData;

@interface STUIStatusBarDataAggregator : NSObject

@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) Class dataClass;
@property (retain, nonatomic) NSCountedSet *delayedKeys;
@property (retain, nonatomic) NSMutableDictionary *pendingUpdates;
@property (retain, nonatomic) NSMutableDictionary *coalescedKeys;
@property (retain, nonatomic) NSMutableDictionary *coalescedTimers;
@property (copy, nonatomic) STStatusBarData *overlayData;
@property (readonly, copy, nonatomic) NSSet *delayedEntryKeys;
@property (readonly, copy, nonatomic) NSSet *coalescedEntryKeys;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithUpdateBlock:(id /* block */)block;
- (void)updateWithData:(id)data;
- (id)_updatedDataFromData:(id)data delayedKeys:(id)keys;
- (void)_updateFromPendingUpdatesForKeys:(id)keys block:(id /* block */)block;
- (void)_updateForOverlayWithData:(id)data;
- (void)_updateForDelayedKeysWithData:(id)data;
- (id)beginDelayingUpdatesForEntryKeys:(id)keys;
- (void)endDelayingUpdates:(id)updates;
- (void)_updateForCoalescedKeysWithData:(id)data;
- (void)_coalescedUpdateForEntryKeys:(id)keys;
- (void)beginCoalescingUpdatesForEntryKeys:(id)keys delay:(double)delay;
- (void)endCoalescingUpdatesForEntryKeys:(id)keys;
@end

#endif /* STUIStatusBarDataAggregator_h */
