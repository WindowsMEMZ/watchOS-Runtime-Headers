//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIDebuggingGesturesView_h
#define WAGUIDebuggingGesturesView_h
@import Foundation;

#include "UIView.h"
#include "WAGUIDebuggingContentView-Protocol.h"

@class NSDateComponentsFormatter, NSMutableArray, NSString;

@interface WAGUIDebuggingGesturesView : UIView<WAGUIDebuggingContentView> {
  /* instance variables */
  NSMutableArray *_gestureLabels;
  NSDateComponentsFormatter *_dateFormatter;
}

@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)refresh;
- (id)_gestureLabelFont;
@end

#endif /* WAGUIDebuggingGesturesView_h */
