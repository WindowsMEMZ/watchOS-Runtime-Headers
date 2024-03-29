//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusScrollBoundaryMetrics_h
#define _UIFocusScrollBoundaryMetrics_h
@import Foundation;

#include "UIFocusEnvironment-Protocol.h"
#include "UIFocusItem-Protocol.h"
#include "UIFocusItemScrollableContainer-Protocol.h"

@interface _UIFocusScrollBoundaryMetrics : NSObject

@property (readonly, nonatomic) NSObject<UIFocusItem> *focusItem;
@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *owningEnvironment;
@property (readonly, nonatomic) NSObject<UIFocusItemScrollableContainer> *scrollableContainer;
@property (readonly, nonatomic) BOOL shouldSearchX;
@property (readonly, nonatomic) BOOL shouldSearchY;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } localFocusedRect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } localFocusedCenter;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } minContentOffset;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } maxContentOffset;
@property (nonatomic) BOOL isMinX;
@property (nonatomic) BOOL isMaxX;
@property (nonatomic) BOOL isMinY;
@property (nonatomic) BOOL isMaxY;

/* instance methods */
- (id)initWithFocusItem:(id)item scrollView:(id)view;
- (id)initWithFocusItem:(id)item owningEnvironment:(id)environment scrollableContainer:(id)container;
- (BOOL)_checkScrollableBounds;
- (BOOL)consumeOtherMetrics:(id)metrics;
- (BOOL)checkOtherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)checkOtherFocusItem:(id)item;
- (BOOL)hasDisprovedAllRelevantAssumptions;
@end

#endif /* _UIFocusScrollBoundaryMetrics_h */
