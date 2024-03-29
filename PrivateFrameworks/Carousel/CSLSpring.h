//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSpring_h
#define CSLSpring_h
@import Foundation;

@interface CSLSpring : NSObject
/* class methods */
+ (void)animateUsingDefaultSpring:(id /* block */)spring completion:(id /* block */)completion;
+ (void)animateUsingSpringWithTension:(double)tension friction:(double)friction animations:(id /* block */)animations completion:(id /* block */)completion;
+ (void)animateUsingSpringWithTension:(double)tension friction:(double)friction animations:(id /* block */)animations;
+ (void)animateUsingSpringWithTension:(double)tension friction:(double)friction delay:(double)delay animations:(id /* block */)animations;
+ (void)animateUsingSpringWithTension:(double)tension friction:(double)friction delay:(double)delay animations:(id /* block */)animations completion:(id /* block */)completion;
@end

#endif /* CSLSpring_h */
