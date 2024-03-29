//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarSignalStrengthItemView_h
#define UIStatusBarSignalStrengthItemView_h
@import Foundation;

#include "UIStatusBarItemView.h"

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {
  /* instance variables */
  int _signalStrengthRaw;
  int _signalStrengthBars;
  BOOL _enableRSSI;
  BOOL _showRSSI;
  BOOL _showFailure;
  BOOL _useSmallBars;
}

/* instance methods */
- (BOOL)updateForNewData:(id)data actions:(int)actions;
- (BOOL)_updateWithRaw:(int)raw bars:(int)bars enableRSSI:(BOOL)rssi showFailure:(BOOL)failure useSmallBars:(BOOL)bars;
- (id)_signalStrengthBarsImageName;
- (id)contentsImage;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (id)_stringForRSSI;
- (id)accessibilityHUDRepresentation;
@end

#endif /* UIStatusBarSignalStrengthItemView_h */
