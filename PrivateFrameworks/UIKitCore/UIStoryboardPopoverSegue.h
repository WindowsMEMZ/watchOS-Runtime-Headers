//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStoryboardPopoverSegue_h
#define UIStoryboardPopoverSegue_h
@import Foundation;

#include "UIStoryboardSegue.h"
#include "UIBarButtonItem.h"
#include "UIPopoverController.h"
#include "UIView.h"

@class NSArray;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {
  /* instance variables */
  NSArray *_passthroughViews;
  unsigned long long _permittedArrowDirections;
  UIView *_anchorView;
  UIBarButtonItem *_anchorBarButtonItem;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _anchorRect;
}

@property (copy, nonatomic) NSArray *_passthroughViews;
@property (nonatomic) unsigned long long _permittedArrowDirections;
@property (retain, nonatomic) UIBarButtonItem *_anchorBarButtonItem;
@property (retain, nonatomic) UIView *_anchorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _anchorRect;
@property (readonly, nonatomic) UIPopoverController *popoverController;

/* instance methods */
- (void)perform;
- (void)_setPassthroughViews:(id)views;
- (void)_setPermittedArrowDirections:(unsigned long long)directions;
- (void)_setAnchorView:(id)view;
- (void)_setAnchorBarButtonItem:(id)item;
- (void)_setAnchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* UIStoryboardPopoverSegue_h */
