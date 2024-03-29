//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISwipeActionController_h
#define UISwipeActionController_h
@import Foundation;

#include "UIScrollView.h"
#include "UISwipeActionHost-Protocol.h"
#include "UISwipeActionHost_Internal-Protocol.h"
#include "UISwipeActionsConfiguration.h"
#include "UISwipeOccurrence.h"
#include "UIView.h"
#include "_UIScrollViewScrollObserver-Protocol.h"
#include "_UISwipeHandler.h"

@class NSIndexPath, NSMutableSet, NSSet, NSString;

@interface UISwipeActionController : NSObject<_UIScrollViewScrollObserver> {
  /* instance variables */
  UISwipeOccurrence *_preparingSwipeOccurrence;
  struct { unsigned int x :1 didResetWhilePreparingSwipeOccurrence; } _flags;
}

@property (retain, nonatomic) UISwipeActionsConfiguration *incomingSwipeActionsConfiguration;
@property (weak, nonatomic) NSObject<UISwipeActionHost> *swipeActionHost;
@property (weak, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) _UISwipeHandler *swipeHandler;
@property (readonly, nonatomic) NSObject<UISwipeActionHost_Internal> *internalSwipeActionHost;
@property (readonly, nonatomic) BOOL prefersRTL;
@property (retain, nonatomic) NSMutableSet *swipeOccurrences;
@property (weak, nonatomic) UISwipeOccurrence *currentSwipeOccurrence;
@property (readonly, nonatomic) NSSet *swipedIndexPaths;
@property (readonly, nonatomic) NSIndexPath *swipedIndexPath;
@property (readonly, nonatomic) UIView *swipedItemView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL swipeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSwipeActionHost:(id)host style:(unsigned long long)style;
- (void)dealloc;
- (id)_internalSwipeActionHost;
- (id)_swipeActionsConfigurationForSwipeDirection:(unsigned long long)direction indexPath:(id)path;
- (void)swipeItemAtIndexPath:(id)path configuration:(id)configuration direction:(unsigned long long)direction animated:(BOOL)animated completion:(id /* block */)completion;
- (void)resetSwipedItemAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)updateLayout;
- (void)reconfigureActiveSwipeOccurrences;
- (id)_existingSwipeOccurrenceForIndexPath:(id)path;
- (BOOL)_isSwipeForIndexPathFirstOccurrenceBeginningOrLastOccurrenceEnding:(id)ending;
- (id)_swipedViewForItemAtIndexPath:(id)path;
- (BOOL)_prefersRTL;
- (unsigned long long)_swipeDirectionForLeadingEdge:(BOOL)edge;
- (void)reloadData;
- (void)rebaseUnambiguousSwipeOccurrencesWithBlock:(id /* block */)block;
- (void)deleteSectionAtIndex:(unsigned long long)index;
- (void)deleteRowAtIndexPath:(id)path;
- (void)insertSectionAtIndex:(unsigned long long)index;
- (void)insertRowAtIndexPath:(id)path;
- (void)moveSectionAtIndex:(unsigned long long)index toIndex:(unsigned long long)index;
- (void)moveRowAtIndexPath:(id)path toIndexPath:(id)path;
- (void)_handleDeleteOfSwipeOccurrence:(id)occurrence;
- (void)prepareForSwipeDirection:(unsigned long long)direction startingAtTouchLocation:(struct CGPoint { double x0; double x1; })location;
- (struct { unsigned long long x0; BOOL x1; BOOL x2; double x3; double x4; })configureForSwipeDirection:(unsigned long long)direction configuration:(id)configuration startingAtTouchLocation:(struct CGPoint { double x0; double x1; })location;
- (BOOL)touchAtLocationShouldDismissSwipedItem:(struct CGPoint { double x0; double x1; })item isTouchUp:(BOOL)up;
- (void)swipeOccurrence:(id)occurrence willFinishWithDeletion:(BOOL)deletion;
- (void)swipeOccurrenceDidFinish:(id)finish;
- (void)swipeOccurrence:(id)occurrence didChangeStateFrom:(long long)from;
- (BOOL)swipeHandler:(id)handler mayBeginSwipeAtLocation:(struct CGPoint { double x0; double x1; })location withProposedDirection:(unsigned long long)direction;
- (void)swipeHandlerDidBeginSwipe:(id)swipe;
- (void)swipeHandler:(id)handler didGenerateSwipeWithInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })info isTracking:(BOOL)tracking;
- (void)swipeHandler:(id)handler didConfirmSwipeWithInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })info;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })swipeHandlerRestingFrame:(id)frame;
- (void)_observeScrollViewDidScroll:(id)scroll;
@end

#endif /* UISwipeActionController_h */
