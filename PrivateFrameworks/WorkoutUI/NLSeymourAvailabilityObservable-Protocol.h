//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 749.20.0.0.0
//
#ifndef NLSeymourAvailabilityObservable_Protocol_h
#define NLSeymourAvailabilityObservable_Protocol_h
@import Foundation;

@protocol NLSeymourAvailabilityObservable 

@property (nonatomic, readonly) id observers;

/* instance methods */
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)notifyObservers;
@end

#endif /* NLSeymourAvailabilityObservable_Protocol_h */
