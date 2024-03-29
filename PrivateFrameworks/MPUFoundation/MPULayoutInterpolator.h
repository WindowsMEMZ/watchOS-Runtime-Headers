//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.200.1.0.0
//
#ifndef MPULayoutInterpolator_h
#define MPULayoutInterpolator_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol {vector<MPU::LayoutInterpolator::EntriesContainer, std::allocator<MPU::LayoutInterpolator::EntriesContainer>>="__begin_"^{EntriesContainer}"__end_"^{EntriesContainer}"__end_cap_"{__compressed_pair<MPU::LayoutInterpolator::EntriesContainer *, std::allocator<MPU::LayoutInterpolator::EntriesContainer>>="__value_"^{EntriesContainer}}};

@interface MPULayoutInterpolator : NSObject<NSCopying> {
  /* instance variables */
  struct vector<MPU::LayoutInterpolator::EntriesContainer, std::allocator<MPU::LayoutInterpolator::EntriesContainer>> { struct EntriesContainer *__begin_; struct EntriesContainer *__end_; struct __compressed_pair<MPU::LayoutInterpolator::EntriesContainer *, std::allocator<MPU::LayoutInterpolator::EntriesContainer>> { struct EntriesContainer *__value_; } __end_cap_; } _entriesContainers;
  BOOL _hasEntryWithSpecificSecondaryReferenceMetric;
}

/* instance methods */
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addValue:(double)value forReferenceMetric:(double)metric;
- (void)addValue:(double)value forReferenceMetric:(double)metric secondaryReferenceMetric:(double)metric;
- (double)valueForReferenceMetric:(double)metric;
- (double)valueForReferenceMetric:(double)metric secondaryReferenceMetric:(double)metric;
- (double)_interpolatedValueForPrimaryReferenceMetric:(double)metric secondaryReferenceMetric:(double)metric betweenFirstEntriesContainer:(void *)container andSecondEntriesContainer:(void *)container;
- (struct Point3D { double x0; double x1; double x2; })_pointForEntry:(struct Entry { double x0; double x1; })entry andPrimaryReferenceMetric:(double)metric usingFallbackSecondaryReferenceMetric:(double)metric;
- (struct vector<MPU::Point3D, std::allocator<MPU::Point3D>> { struct Point3D * x0; struct Point3D * x1; struct __compressed_pair<MPU::Point3D *, std::allocator<MPU::Point3D>> { struct Point3D * x0; } x2; })_sortedPointsFor3DInterpolationFromEntriesContainer:(void *)container usingQueriedPoint:(struct Point3D { double x0; double x1; double x2; })point fallbackSecondaryReferenceMetric:(double)metric;
- (void)_sortPointsFor3DInterpolation:(void *)dinterpolation usingQueriedPoint:(struct Point3D { double x0; double x1; double x2; })point;
@end

#endif /* MPULayoutInterpolator_h */
