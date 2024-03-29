//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIAnimation_h
#define NUNIAnimation_h
@import Foundation;

#include "NUNIAnimatable-Protocol.h"
#include "NUNIAnimationObserver-Protocol.h"

@interface NUNIAnimation : NSObject {
  /* instance variables */
   _ctrl1;
   _ctrl2;
  _values[75];
  int _valuesCount;
  float _prevTime;
  float _pauseTime;
}

@property (nonatomic) float startTime;
@property (nonatomic) float duration;
@property (nonatomic) float delay;
@property (nonatomic)  from;
@property (nonatomic)  to;
@property (nonatomic) BOOL repeat;
@property (nonatomic) BOOL paused;
@property (nonatomic) unsigned long long function;
@property (nonatomic) unsigned long long key;
@property (weak, nonatomic) NSObject<NUNIAnimatable> *animatable;
@property (weak, nonatomic) NSObject<NUNIAnimationObserver> *observer;

/* class methods */
+ (void)generateSlerpKeys:(1 *)keys times:(float *)times count:(int)count;

/* instance methods */
- (id)initWithAnimatable:(id)animatable values:(2 *)values count:(int)count key:(unsigned long long)key;
- (id)initWithAnimatable:(id)animatable from:(unsigned long long)from;
- (id)initWithAnimatable:(id)animatable from:(unsigned long long)from;
- (id)initWithAnimatable:(id)animatable value:(unsigned long long)value;
- (BOOL)update:(float)update;
- (void)apply:(float)apply;
- (BOOL)isRepeat;
- (BOOL)isPaused;
@end

#endif /* NUNIAnimation_h */
