//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIContentInsetsEnvironment_Protocol_h
#define _UIContentInsetsEnvironment_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_UIContentInsetsEnvironment-Protocol.h"

@class NSString;

@protocol _UIContentInsetsEnvironment <NSObject>

@property (readonly, nonatomic) long long insetReference;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } layoutMarginsInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } readableContentInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } effectiveInsets;

/* instance methods */
- (id)layoutContainerForContainerSize:(struct CGSize { double x0; double x1; })size layoutAxis:(unsigned long long)axis;
- (id)layoutContainerForInsetReference:(long long)reference containerSize:(struct CGSize { double x0; double x1; })size layoutAxis:(unsigned long long)axis;
@end

#endif /* _UIContentInsetsEnvironment_Protocol_h */
