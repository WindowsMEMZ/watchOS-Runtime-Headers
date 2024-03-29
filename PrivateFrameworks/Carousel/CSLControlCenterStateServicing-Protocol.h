//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLControlCenterStateServicing_Protocol_h
#define CSLControlCenterStateServicing_Protocol_h
@import Foundation;

@protocol CSLControlCenterStateServicing <CSLControlCenterPreventionAssertionProviding>

@property (readonly, nonatomic) unsigned long long state;

@optional
/* instance methods */
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
@end

#endif /* CSLControlCenterStateServicing_Protocol_h */
