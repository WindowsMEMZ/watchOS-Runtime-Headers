//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 32.3.0.0.0
//
#ifndef _TtC11FMFindingUI23FMPFSKPeripheralDotNode_h
#define _TtC11FMFindingUI23FMPFSKPeripheralDotNode_h
@import Foundation;

#include "_TtC11FMFindingUI10FMPFSKNode.h"

@class NSString;

@interface FMFindingUI.FMPFSKPeripheralDotNode : FMFindingUI.FMPFSKNode { // (Swift)
  /* instance variables */
   experienceType;
   style;
   dotDiameter;
   pixelsPerInch;
   subScale;
   gimbalNode;
   diskNode;
   dotNode;
   dotCGPathNode;
   btRangingNode;
   interativeRadiusBeaconNode;
   isPlayingInitialPulse;
   hasPlayedInitialPulse;
   perimeterRotateOnceAction;
   diskRadiusSpring;
   dotScaleSpring;
   angleSpring;
   opacitySpring;
   brightnessSpring;
   xOffsetSpring;
   yOffsetSpring;
   headingSpring;
   radiusFactorSpring;
   renderingColor;
   shouldApplyDiskRadius;
   diskRadius;
   presentedDiskRadius;
   shouldApplyDotScale;
   dotScale;
   presentedDotScale;
   shouldApplyAngle;
   angle;
   presentedAngle;
   shouldApplyOpacity;
   opacity;
   presentedOpacity;
   shouldApplyBrightness;
   brightness;
   presentedBrightness;
   shouldApplyOffset;
   offset;
   presentedOffset;
   presentedAbsoluteHeading;
   interactiveAngleFactor;
   shouldApplyRadiusFactor;
   radiusFactor;
   presentedRadiusFactor;
}

@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)init;
@end

#endif /* _TtC11FMFindingUI23FMPFSKPeripheralDotNode_h */
