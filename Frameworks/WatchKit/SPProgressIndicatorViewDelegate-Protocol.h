//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPProgressIndicatorViewDelegate_Protocol_h
#define SPProgressIndicatorViewDelegate_Protocol_h
@import Foundation;

@protocol SPProgressIndicatorViewDelegate <NSObject>
@optional
/* instance methods */
- (void)activityIndicatorViewWillAnimateIn:(id)in duration:(double)duration;
- (void)activityIndicatorViewDidAnimateIn:(id)in;
- (void)activityIndicatorViewWillTransitionToDeterminateProgress:(id)progress;
- (void)activityIndicatorViewDidTransitionToDeterminateProgress:(id)progress;
- (void)activityIndicatorViewWillAnimateOut:(id)out duration:(double)duration;
- (void)activityIndicatorViewDidAnimateOut:(id)out;
@end

#endif /* SPProgressIndicatorViewDelegate_Protocol_h */
