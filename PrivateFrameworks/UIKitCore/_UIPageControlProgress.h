//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPageControlProgress_h
#define _UIPageControlProgress_h
@import Foundation;

#include "UIPageControlProgress.h"

@protocol _UIPageControlProgressDelegate;

@interface _UIPageControlProgress : UIPageControlProgress {
  /* instance variables */
  struct { unsigned int x :1 progressForPage; unsigned int x :1 didPause; unsigned int x :1 didResume; } _delegateImplements;
}

@property (weak, @dynamic, nonatomic) NSObject<_UIPageControlProgressDelegate> *delegate;

/* instance methods */
- (void)_progressVisibilityChanged:(BOOL)changed;
- (void)_pausePageProgress;
- (void)_resumePageProgress;
@end

#endif /* _UIPageControlProgress_h */
