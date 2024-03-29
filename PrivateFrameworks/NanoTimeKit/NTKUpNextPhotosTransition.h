//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextPhotosTransition_h
#define NTKUpNextPhotosTransition_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSDictionary, NSString;

@interface NTKUpNextPhotosTransition : NSObject<UIViewControllerAnimatedTransitioning> {
  /* instance variables */
  long long _operation;
  NSDictionary *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context operation:(long long)operation;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
@end

#endif /* NTKUpNextPhotosTransition_h */
