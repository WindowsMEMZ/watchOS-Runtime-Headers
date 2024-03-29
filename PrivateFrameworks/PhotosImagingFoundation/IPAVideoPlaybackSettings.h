//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAVideoPlaybackSettings_h
#define IPAVideoPlaybackSettings_h
@import Foundation;

#include "IPAEditDescription.h"

@interface IPAVideoPlaybackSettings : IPAEditDescription

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } naturalDuration;

/* class methods */
+ (void)initialize;
+ (Class)expectedOperationClass;
+ (id)playbackSettingsForAdjustments:(id)adjustments;
+ (Class)operationClassForIdentifier:(id)identifier;
+ (id)presetifyAdjustmentStack:(id)stack;

/* instance methods */
- (id)descriptionByInsertingOrReplacingOperation:(id)operation;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })scaledDuration;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })naturalPlaybackRange;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })scaledPlaybackRangeForScaledDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })scaledTimeFromNaturalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalTimeFromScaledTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalTimeForPosterFrame;
- (id)initWithOperations:(id)operations;
- (id)initWithOperations:(id)operations naturalDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isEqualToDescription:(id)description;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)identifier;
- (id)descriptionWithOperations:(id)operations;
- (id)descriptionByAddingOperation:(id)operation atIndex:(unsigned long long)index;
- (id)descriptionByAddingOperation:(id)operation;
- (id)descriptionByReplacingOperation:(id)operation atIndex:(unsigned long long)index;
- (id)operationWithIdentifier:(id)identifier;
- (id)posterFrameOperation;
- (id)trimOperation;
- (id)slomoOperation;
- (id)archivalRepresentation;
- (id)debugDescription;
@end

#endif /* IPAVideoPlaybackSettings_h */
