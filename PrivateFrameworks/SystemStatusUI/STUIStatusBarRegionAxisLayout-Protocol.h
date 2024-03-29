//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarRegionAxisLayout_Protocol_h
#define STUIStatusBarRegionAxisLayout_Protocol_h
@import Foundation;

@protocol STUIStatusBarRegionAxisLayout <NSObject>

@property (readonly, nonatomic) BOOL canOverflowItems;

/* instance methods */
- (id)constraintsForDisplayItems:(id)items layoutGuides:(id)guides inContainerItem:(id)item axis:(long long)axis;
@optional
/* instance methods */
- (BOOL)mayFitDisplayItems:(id)items inContainerItem:(id)item axis:(long long)axis;
@end

#endif /* STUIStatusBarRegionAxisLayout_Protocol_h */
