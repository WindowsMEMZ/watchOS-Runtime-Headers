//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextItemMenuPreview_h
#define UITextItemMenuPreview_h
@import Foundation;

#include "UIView.h"

@interface UITextItemMenuPreview : NSObject {
  /* instance variables */
  UIView *_previewView;
}

@property (readonly, nonatomic) UIView *_previewView;

/* class methods */
+ (id)defaultPreview;

/* instance methods */
- (id)initWithView:(id)view;
@end

#endif /* UITextItemMenuPreview_h */
