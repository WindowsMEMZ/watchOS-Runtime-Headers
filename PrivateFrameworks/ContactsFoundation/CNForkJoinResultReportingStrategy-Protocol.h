//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNForkJoinResultReportingStrategy_Protocol_h
#define CNForkJoinResultReportingStrategy_Protocol_h
@import Foundation;

@protocol CNForkJoinResultReportingStrategy <NSObject>
/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity;
- (void)receiveResult:(id)result fromObservableAtIndex:(unsigned long long)index observer:(id)observer;
- (void)observableAtIndex:(unsigned long long)index didCompleteForObserver:(id)observer;
@end

#endif /* CNForkJoinResultReportingStrategy_Protocol_h */
