//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 32.0.0.0.0
//
#ifndef NSLayoutYAxisAnchor_h
#define NSLayoutYAxisAnchor_h
@import Foundation;

#include "NSLayoutAnchor.h"

@interface NSLayoutYAxisAnchor : NSLayoutAnchor
/* instance methods */
- (id)anchorWithOffsetToAnchor:(id)anchor;
- (id)anchorByOffsettingWithDimension:(id)dimension;
- (id)anchorByOffsettingWithDimension:(id)dimension multiplier:(double)multiplier constant:(double)constant;
- (id)anchorByOffsettingWithConstant:(double)constant;
- (id)offsetTo:(id)to;
- (id)distanceTo:(id)to;
- (id)offsetByDimension:(id)dimension times:(double)times plus:(double)plus;
- (id)offsetByDimension:(id)dimension;
- (id)offsetBy:(double)by;
- (id)constraintEqualToSystemSpacingBelowAnchor:(id)anchor multiplier:(double)multiplier;
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)anchor multiplier:(double)multiplier;
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)anchor multiplier:(double)multiplier;
- (BOOL)validateOtherAttribute:(long long)attribute;
- (BOOL)isCompatibleWithAnchor:(id)anchor;
@end

#endif /* NSLayoutYAxisAnchor_h */
