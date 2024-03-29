//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDCompressionDebouncer_h
#define DEDCompressionDebouncer_h
@import Foundation;

@interface DEDCompressionDebouncer : NSObject

@property (nonatomic) unsigned long long lastSentTotalBytes;
@property (nonatomic) unsigned long long lastSentCompressedBytes;
@property (nonatomic) unsigned long long lastKnownTotalBytes;
@property (nonatomic) unsigned long long lastKnownCompressedBytes;
@property (nonatomic) double lastTriggerTime;
@property (nonatomic) BOOL finished;
@property (copy, nonatomic) id /* block */ trigger;
@property (nonatomic) double interval;

/* instance methods */
- (id)initWithTrigger:(id /* block */)trigger interval:(double)interval;
- (void)sendTriggerIfStateChanged;
- (void)sendTriggerIfTimeElapsed;
- (id /* block */)handler;
@end

#endif /* DEDCompressionDebouncer_h */
