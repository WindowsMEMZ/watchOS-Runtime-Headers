//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef GCDTimer_h
#define GCDTimer_h
@import Foundation;

@class NSDate;
@protocol OS_dispatch_source;

@interface GCDTimer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_source> *_source;
}

@property (readonly, nonatomic) BOOL repeating;
@property (readonly, nonatomic) NSDate *fireDate;

/* class methods */
+ (id)scheduledTimerWithTimeInterval:(double)interval queue:(id)queue block:(id /* block */)block;
+ (id)scheduledTimerWithTimeInterval:(double)interval queue:(id)queue repeating:(BOOL)repeating block:(id /* block */)block;

/* instance methods */
- (id)initWithTimeInterval:(double)interval queue:(id)queue repeating:(BOOL)repeating block:(id /* block */)block;
- (id)description;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isRepeating;
@end

#endif /* GCDTimer_h */
