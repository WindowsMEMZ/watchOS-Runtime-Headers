//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKOutsideTapCallback_h
#define _HKOutsideTapCallback_h
@import Foundation;

@class UIView;

@interface _HKOutsideTapCallback : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) id /* block */ outsideTapBlock;

/* instance methods */
- (id)initWithView:(id)view outsideTapBlock:(id /* block */)block;
@end

#endif /* _HKOutsideTapCallback_h */
