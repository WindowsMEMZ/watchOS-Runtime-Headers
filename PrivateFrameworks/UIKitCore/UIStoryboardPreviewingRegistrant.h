//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStoryboardPreviewingRegistrant_h
#define UIStoryboardPreviewingRegistrant_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "UIStoryboardPreviewingSegueTemplateStorage.h"
#include "UIView.h"
#include "UIViewController.h"
#include "UIViewControllerPreviewingDelegate-Protocol.h"

@class NSString;
@protocol UIViewControllerPreviewing;

@interface UIStoryboardPreviewingRegistrant : NSObject<NSCoding, UIViewControllerPreviewingDelegate> {
  /* instance variables */
  NSObject<UIViewControllerPreviewing> *_previewingContext;
  UIStoryboardPreviewingSegueTemplateStorage *_segueTemplateStorage;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)registerForPreviewing;
- (void)unregisterForPreviewing;
- (id)previewingContext:(id)context viewControllerForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)previewingContext:(id)context commitViewController:(id)controller;
@end

#endif /* UIStoryboardPreviewingRegistrant_h */
