//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMCCycleTimelineFlowLayoutAttributes_h
#define HKMCCycleTimelineFlowLayoutAttributes_h
@import Foundation;

#include "UICollectionViewLayoutAttributes.h"

@interface HKMCCycleTimelineFlowLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) double shrinkFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pillFrame;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKMCCycleTimelineFlowLayoutAttributes_h */
