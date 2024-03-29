//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef _FMObserverProxy_h
#define _FMObserverProxy_h
@import Foundation;

@interface _FMObserverProxy : NSObject

@property (readonly, weak, nonatomic) id weakObserver;
@property (readonly, nonatomic) BOOL valid;

/* instance methods */
- (id)initWithWeakObserver:(id)observer;
- (void)invalidate;
- (void)dealloc;
- (BOOL)isValid;
@end

#endif /* _FMObserverProxy_h */
