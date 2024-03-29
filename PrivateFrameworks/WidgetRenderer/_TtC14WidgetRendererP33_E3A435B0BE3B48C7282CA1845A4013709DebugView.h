//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtC14WidgetRendererP33_E3A435B0BE3B48C7282CA1845A4013709DebugView_h
#define _TtC14WidgetRendererP33_E3A435B0BE3B48C7282CA1845A4013709DebugView_h
@import Foundation;

#include "_TtC14WidgetRenderer20TouchPassThroughView.h"

@interface WidgetRenderer.(DebugView in _E3A435B0BE3B48C7282CA1845A401370) : WidgetRenderer.TouchPassThroughView { // (Swift)
  /* instance variables */
   debugTextView;
   animationsPausedView;
   isSnapshottingView;
   inAlwaysOnDisplayView;
   debugText;
   animationsPaused;
   isSnapshotting;
   inAlwaysOnDisplay;
}

/* instance methods */
- (void)layoutSubviews;
- (id)init;
- (id)initWithCoder:(id)coder;
@end

#endif /* _TtC14WidgetRendererP33_E3A435B0BE3B48C7282CA1845A4013709DebugView_h */
