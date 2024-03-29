//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISlidingBarStateRequest_h
#define UISlidingBarStateRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface UISlidingBarStateRequest : NSObject<NSCopying>

@property (nonatomic) BOOL userInitiated;
@property (nonatomic) double leadingWidth;
@property (nonatomic) double leadingOffscreenWidth;
@property (nonatomic) double trailingWidth;
@property (nonatomic) double trailingOffscreenWidth;
@property (nonatomic) double supplementaryWidth;
@property (nonatomic) double supplementaryOffscreenWidth;
@property (nonatomic) double rubberBandInset;
@property (nonatomic) double mainWidth;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)_matchingState:(id)state;
- (id)_closestState:(id)state;
- (id)_closestState:(id)state returningDistance:(double *)distance;
- (id)_closestEqualOrLargerState:(id)state;
- (id)_closestEqualOrLargerState:(id)state returningDistance:(double *)distance;
@end

#endif /* UISlidingBarStateRequest_h */
