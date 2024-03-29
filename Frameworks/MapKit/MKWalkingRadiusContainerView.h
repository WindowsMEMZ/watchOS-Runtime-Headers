//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKWalkingRadiusContainerView_h
#define MKWalkingRadiusContainerView_h
@import Foundation;

#include "UIView.h"
#include "MKMapView.h"
#include "MKVariableBlurContainerView.h"
#include "MKWalkingRadiusView.h"
#include "WalkingRadiusDelegate-Protocol.h"

@class NSArray, NSString;

@interface MKWalkingRadiusContainerView : UIView<WalkingRadiusDelegate> {
  /* instance variables */
  MKVariableBlurContainerView *_blurContainerView;
  MKWalkingRadiusView *_walkingRadiusView;
  NSArray *_screenLabels;
  MKMapView *_mapView;
}

@property (nonatomic) double distance;
@property (nonatomic) long long visibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMapView:(id)view;
- (void)_setupWalkingRadiusView;
- (void)_updateVisibility;
- (void)drawBlurMask:(double)mask startAngle:(double)angle endAngle:(double)angle maxLineHeight:(double)height;
- (void)setWalkingRadiusHostingView:(id)view;
@end

#endif /* MKWalkingRadiusContainerView_h */
