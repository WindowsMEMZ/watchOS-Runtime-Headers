//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 37.5.0.0.0
//
#ifndef UIMarkupTextPrintFormatter_h
#define UIMarkupTextPrintFormatter_h
@import Foundation;

#include "UIPrintFormatter.h"

@class NSString, UIWebDocumentView, UIWebPaginationInfo;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
  /* instance variables */
  UIWebDocumentView *_webDocumentView;
  UIWebPaginationInfo *_paginationInfo;
}

@property (copy, nonatomic) NSString *markupText;

/* instance methods */
- (id)initWithMarkupText:(id)text;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (void)removeFromPrintPageRenderer;
- (void)_resetPaginationInfo;
- (long long)_recalcPageCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)index;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect forPageAtIndex:(long long)index;
@end

#endif /* UIMarkupTextPrintFormatter_h */
