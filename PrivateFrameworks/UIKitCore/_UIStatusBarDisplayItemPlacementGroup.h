//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarDisplayItemPlacementGroup_h
#define _UIStatusBarDisplayItemPlacementGroup_h
@import Foundation;

@class NSArray;

@interface _UIStatusBarDisplayItemPlacementGroup : NSObject

@property (copy, nonatomic) NSArray *placements;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long minimumPriority;
@property (readonly, nonatomic) long long maximumPriority;

/* class methods */
+ (id)groupWithPriority:(long long)priority placements:(id)placements;

/* instance methods */
@end

#endif /* _UIStatusBarDisplayItemPlacementGroup_h */
