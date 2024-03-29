//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICompositingEffectViewEntry_h
#define _UICompositingEffectViewEntry_h
@import Foundation;

#include "_UIVisualEffectViewEntry.h"

@class NSString;

@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry

@property (copy, nonatomic) NSString *filterType;

/* instance methods */
- (void)addEffectToView:(id)view;
- (void)removeEffectFromView:(id)view;
- (BOOL)isSameTypeOfEffect:(id)effect;
- (BOOL)canTransitionToEffect:(id)effect;
- (id)description;
@end

#endif /* _UICompositingEffectViewEntry_h */
