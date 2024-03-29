//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _NTKAddColorsView_h
#define _NTKAddColorsView_h
@import Foundation;

#include "UIButton.h"

@class CLKDevice, UILabel;

@interface _NTKAddColorsView : UIButton {
  /* instance variables */
  CLKDevice *_device;
  UILabel *_text;
}

/* instance methods */
- (id)initForDevice:(id)device;
- (void)layoutSubviews;
@end

#endif /* _NTKAddColorsView_h */
