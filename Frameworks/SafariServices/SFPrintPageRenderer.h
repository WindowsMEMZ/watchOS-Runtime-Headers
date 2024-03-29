//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFPrintPageRenderer_h
#define SFPrintPageRenderer_h
@import Foundation;

#include "UIPrintPageRenderer.h"
#include "SFPrintPageRendererDelegate-Protocol.h"
#include "UIPrintInteractionControllerDelegate-Protocol.h"

@class NSNumberFormatter, NSString, UIColor, UIFont, UIPrintFormatter;

@interface SFPrintPageRenderer : UIPrintPageRenderer<UIPrintInteractionControllerDelegate> {
  /* instance variables */
  NSNumberFormatter *_numberFormatter;
  double _URLWidth;
  NSString *_dateString;
  double _dateWidth;
  double _printWidth;
  struct CGPoint { double x; double y; } _contentOffset;
  struct CGPoint { double x; double y; } _footerOffset;
  UIFont *_footerFont;
  UIColor *_footerColor;
}

@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) UIPrintFormatter *contentFormatter;
@property (nonatomic) BOOL printFooter;
@property (weak, nonatomic) NSObject<SFPrintPageRendererDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)drawFooterForPageAtIndex:(long long)index inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)printInteractionControllerWillStartJob:(id)job;
- (void)printInteractionControllerDidFinishJob:(id)job;
- (id)printInteractionControllerParentViewController:(id)controller;
@end

#endif /* SFPrintPageRenderer_h */
