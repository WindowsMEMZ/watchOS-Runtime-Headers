//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarRegionAxisSquishyLayout_h
#define _UIStatusBarRegionAxisSquishyLayout_h
@import Foundation;

#include "_UIStatusBarRegionAxisLayout-Protocol.h"
#include "_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate-Protocol.h"

@class NSString;

@interface _UIStatusBarRegionAxisSquishyLayout : NSObject<_UIStatusBarRegionAxisLayout>

@property (nonatomic) long long alignment;
@property (nonatomic) BOOL compressItems;
@property (nonatomic) double interspace;
@property (nonatomic) long long maxNumberOfItems;
@property (nonatomic) long long maxNumberOfVisibleItems;
@property (nonatomic) double itemDynamicScale;
@property (nonatomic) double minItemDynamicScale;
@property (nonatomic) double minInterspaceDynamicScale;
@property (weak, nonatomic) NSObject<_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate> *dynamicHidingDelegate;
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)constraintsForDisplayItems:(id)items layoutGuides:(id)guides inContainerItem:(id)item axis:(long long)axis;
- (BOOL)mayFitDisplayItems:(id)items inContainerItem:(id)item axis:(long long)axis;
@end

#endif /* _UIStatusBarRegionAxisSquishyLayout_h */
