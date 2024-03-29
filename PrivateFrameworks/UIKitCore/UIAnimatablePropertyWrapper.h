//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAnimatablePropertyWrapper_h
#define UIAnimatablePropertyWrapper_h
@import Foundation;

#include "UIAnimatablePropertyBase.h"
#include "UIAnimatableProperty.h"

@interface UIAnimatablePropertyWrapper : UIAnimatablePropertyBase

@property (readonly, nonatomic) UIAnimatableProperty *animatableProperty;
@property (readonly, nonatomic) BOOL invalidated;

/* instance methods */
- (id)init;
- (void)invalidate;
- (BOOL)isInvalidated;
- (void)dealloc;
- (void)setTransformer:(id)transformer;
- (id)transformer;
@end

#endif /* UIAnimatablePropertyWrapper_h */
