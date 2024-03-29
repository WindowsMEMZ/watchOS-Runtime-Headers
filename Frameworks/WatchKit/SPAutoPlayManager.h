//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPAutoPlayManager_h
#define SPAutoPlayManager_h
@import Foundation;

@class NSArray;

@interface SPAutoPlayManager : NSObject

@property (retain, nonatomic) NSArray *autoplayingViews;
@property (nonatomic) BOOL performedSearchForAutoplayingViews;

/* instance methods */
- (void)dealloc;
- (void)enclosingScrollViewDidAppear:(id)appear;
- (void)enclosingScrollViewDidDisappear:(id)disappear;
- (void)enclosingScrollViewDidScroll:(id)scroll;
- (void)enclosingScrollViewWillResignActive:(id)active;
- (void)_findAutoplayingViewsInScrollView:(id)view force:(BOOL)force;
- (void)_resetPerformedSearchForAutoplayingViews:(id)views;
@end

#endif /* SPAutoPlayManager_h */
