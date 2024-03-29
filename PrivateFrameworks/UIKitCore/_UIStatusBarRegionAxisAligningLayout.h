//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarRegionAxisAligningLayout_h
#define _UIStatusBarRegionAxisAligningLayout_h
@import Foundation;

#include "_UIStatusBarRegionAxisLayout-Protocol.h"

@class NSString;

@interface _UIStatusBarRegionAxisAligningLayout : NSObject<_UIStatusBarRegionAxisLayout>

@property (nonatomic) long long alignment;
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)aligningLayoutWithAlignment:(long long)alignment;

/* instance methods */
- (id)constraintsForDisplayItems:(id)items layoutGuides:(id)guides inContainerItem:(id)item axis:(long long)axis;
@end

#endif /* _UIStatusBarRegionAxisAligningLayout_h */
