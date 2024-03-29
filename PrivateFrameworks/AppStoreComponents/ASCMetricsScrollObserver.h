//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCMetricsScrollObserver_h
#define ASCMetricsScrollObserver_h
@import Foundation;

#include "_UIScrollViewScrollObserver-Protocol.h"

@class NSHashTable, NSMutableSet, NSString, UIScrollView;

@interface ASCMetricsScrollObserver : NSObject<_UIScrollViewScrollObserver>

@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) NSMutableSet *appearedModelIDs;
@property (readonly, nonatomic) NSMutableSet *renderedModelIDs;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)observerForScrollView:(id)view;

/* instance methods */
- (id)initWithScrollView:(id)view;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })centerOfView:(id)view;
- (BOOL)isDelegateAdded:(id)added;
- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;
- (void)scrollViewDidScroll:(id)scroll;
- (void)modelDidAppear:(id)appear;
- (void)modelDidDisappear:(id)disappear;
- (BOOL)hasModelAppeared:(id)appeared;
- (void)modelDidRender:(id)render;
- (BOOL)hasModelRendered:(id)rendered;
- (void)_observeScrollViewDidScroll:(id)scroll;
@end

#endif /* ASCMetricsScrollObserver_h */
