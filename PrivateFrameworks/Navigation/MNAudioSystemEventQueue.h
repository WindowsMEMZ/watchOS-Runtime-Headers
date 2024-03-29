//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNAudioSystemEventQueue_h
#define MNAudioSystemEventQueue_h
@import Foundation;

@class NSMutableArray;
@protocol MNAudioEventQueueDelegate;

@interface MNAudioSystemEventQueue : NSObject {
  /* instance variables */
  NSMutableArray *_container;
}

@property (weak, nonatomic) NSObject<MNAudioEventQueueDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) BOOL full;

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity;
- (BOOL)enqueue:(id)enqueue withOptions:(unsigned long long)options andReport:(out id *)report;
- (void)_removeEventsMatching:(id)matching;
- (id)dequeue;
- (void)clear;
- (void)_enqueue:(id)_enqueue;
- (id)_dequeue;
@end

#endif /* MNAudioSystemEventQueue_h */
