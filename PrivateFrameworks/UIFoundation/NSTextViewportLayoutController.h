//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSTextViewportLayoutController_h
#define NSTextViewportLayoutController_h
@import Foundation;

#include "NSTextContainer.h"
#include "NSTextLayoutManager.h"
#include "NSTextRange.h"
#include "NSTextViewportElementProvider-Protocol.h"
#include "NSTextViewportLayoutControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray;
@protocol NSTextViewportLayoutDelegate_Private;

@interface NSTextViewportLayoutController : NSObject {
  /* instance variables */
  struct CGPoint { double x; double y; } _viewportOffset;
  NSArray *_viewportElements;
  NSMutableArray *_viewportLayoutObservers;
  struct { unsigned int x :1 _layoutIsValid; unsigned int x :1 _needsLayout; unsigned int x :1 _shouldReset; unsigned int x :1 _delegateConformsToPublicAPI; unsigned int x :1 _delegateSupportsLocationPositionMapping; unsigned int x :2 _needsLayoutSelectorType; } _viewportLayoutControllerFlags;
}

@property (readonly, weak) NSObject<NSTextViewportElementProvider> *elementProvider;
@property (weak) NSObject<NSTextViewportLayoutControllerDelegate> *delegate;
@property (readonly, weak) NSTextLayoutManager *textLayoutManager;
@property (readonly, weak, @dynamic) NSTextContainer *textContainer;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewportBounds;
@property (readonly) NSTextRange *viewportRange;

/* class methods */
+ (BOOL)flushesCachedViewportElements;

/* instance methods */
- (id)initWithTextLayoutManager:(id)manager;
- (id)initWithTextContainer:(id)container;
- (id)initWithElementProvider:(id)provider;
- (void)dealloc;
- (void)layoutViewport;
- (double)relocateViewportToTextLocation:(id)location;
- (void)adjustViewportByVerticalOffset:(double)offset;
- (void)adjustViewport:(double)viewport atLocation:(id)location verticalOffsetFromLocation:(double)location;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewportBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport;
- (void)setNeedsLayout;
- (void)_resetLayout;
- (id)textViewportElementAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)textViewportElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)enumerateTextViewportElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect options:(long long)options usingBlock:(id /* block */)block;
- (id)locationAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)textViewportElementForLocation:(id)location;
- (void)addViewportLayoutObserver:(id)observer;
- (void)removeViewportLayoutObserver:(id)observer;
@end

#endif /* NSTextViewportLayoutController_h */
