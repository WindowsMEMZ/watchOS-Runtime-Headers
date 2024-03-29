//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusSearchInfo_h
#define _UIFocusSearchInfo_h
@import Foundation;

@interface _UIFocusSearchInfo : NSObject

@property (copy, nonatomic) id /* block */ evaluator;
@property (nonatomic) BOOL treatFocusableItemAsLeaf;
@property (nonatomic) BOOL forceFocusToLeaveContainer;

/* class methods */
+ (id)defaultInfo;

/* instance methods */
- (id)initWithFocusEvaluator:(id /* block */)evaluator;
- (BOOL)shouldIncludeFocusItem:(id)item;
@end

#endif /* _UIFocusSearchInfo_h */
