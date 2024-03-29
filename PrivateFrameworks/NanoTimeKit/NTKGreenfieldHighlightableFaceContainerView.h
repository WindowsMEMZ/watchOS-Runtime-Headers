//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKGreenfieldHighlightableFaceContainerView_h
#define NTKGreenfieldHighlightableFaceContainerView_h
@import Foundation;

#include "UIView.h"
#include "NTKFace.h"
#include "NTKFaceViewController.h"

@class NSMutableDictionary, NSMutableSet, UIView;

@interface NTKGreenfieldHighlightableFaceContainerView : UIView {
  /* instance variables */
  NTKFace *_originalFace;
  NTKFaceViewController *_faceViewController;
  UIView *_overlayView;
  UIView *_highlightedDisplaysContainerView;
  NSMutableDictionary *_highlightedSlotToDisplayWrapperViewMapping;
  NSMutableSet *_highlightedSlots;
  NSMutableDictionary *_slotToTemplateMapping;
}

/* class methods */
+ (id)_createFaceForDisplayingFrom:(id)from;

/* instance methods */
- (id)initWithFace:(id)face;
- (void)setTemplate:(id)template forSlot:(id)slot;
- (void)setComplicationDisplayViewState:(long long)state forSlot:(id)slot;
- (void)layoutSubviews;
- (void)_updateTemplateForSlot:(id)slot;
- (void)_toggleHighlight:(BOOL)highlight forComplicationWrapperViewAtSlot:(id)slot;
@end

#endif /* NTKGreenfieldHighlightableFaceContainerView_h */
