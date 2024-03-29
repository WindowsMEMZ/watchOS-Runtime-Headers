//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinMediumLongLookPrimaryGestureHandler_h
#define CSLBulletinMediumLongLookPrimaryGestureHandler_h
@import Foundation;

#include "WAGUIGestureInteractionHandler.h"

@class WAGUIGestureInteractionCollectionViewHandler;

@interface CSLBulletinMediumLongLookPrimaryGestureHandler : WAGUIGestureInteractionHandler

@property (retain, nonatomic) WAGUIGestureInteractionCollectionViewHandler *actionMenuHandler;

/* class methods */
+ (Class)expectedInteractionViewClass;

/* instance methods */
- (id)initWithActionMenu:(id)menu;
- (id)collectionView;
- (void)performActionForInteraction:(id)interaction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightedViewFrameForInteraction:(id)interaction inView:(id)view;
- (id)highlightedViewForInteraction:(id)interaction;
- (BOOL)interactionCanReceiveEvents:(id)events;
@end

#endif /* CSLBulletinMediumLongLookPrimaryGestureHandler_h */
