//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef UIScrollView_CKUtilities_h
#define UIScrollView_CKUtilities_h
@import Foundation;

@interface UIScrollView (CKUtilities)
/* instance methods */
- (struct CGSize { double x0; double x1; })__ck_contentSize;
- (struct CGPoint { double x0; double x1; })__ck_scrollToBottomContentOffset;
- (BOOL)__ck_isScrolledToBottom;
- (void)__ck_scrollToBottom:(BOOL)bottom;
- (struct CGPoint { double x0; double x1; })__ck_scrollToTopContentOffset;
- (BOOL)__ck_isScrolledToTop;
- (void)__ck_scrollToTop:(BOOL)top;
- (BOOL)__ck_isVerticallyRubberBanding;
@end

#endif /* UIScrollView_CKUtilities_h */
