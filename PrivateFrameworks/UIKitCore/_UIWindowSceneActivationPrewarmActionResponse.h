//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIWindowSceneActivationPrewarmActionResponse_h
#define _UIWindowSceneActivationPrewarmActionResponse_h
@import Foundation;

#include "BSActionResponse.h"

@interface _UIWindowSceneActivationPrewarmActionResponse : BSActionResponse

@property (readonly, nonatomic) unsigned int sceneContainerContextId;
@property (readonly, nonatomic) unsigned long long sceneContainerRenderId;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sceneFrame;
@property (readonly, nonatomic) struct UIRectCornerRadii { double x0; double x1; double x2; double x3; } sceneCornerRadii;

/* class methods */
+ (id)responseWithSceneContainer:(id)container expectedSceneFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })radii;
@end

#endif /* _UIWindowSceneActivationPrewarmActionResponse_h */
