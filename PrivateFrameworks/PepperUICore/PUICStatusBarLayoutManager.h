//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICStatusBarLayoutManager_h
#define PUICStatusBarLayoutManager_h
@import Foundation;

@class CSLSConcurrentObserverStore;

@interface PUICStatusBarLayoutManager : NSObject {
  /* instance variables */
  BOOL _ignoreVisibleAssertionsForGlobalContextVisibleFrame;
  unsigned int _numberOfVisibleGlobalContexts;
  CSLSConcurrentObserverStore *_observers;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } globalContextVisibleFrame;
@property (nonatomic) double statusBarWidth;
@property (nonatomic) unsigned long long statusBarStyle;

/* class methods */
+ (id)sharedInstance;
+ (id)layoutMetricsForOptions:(id)options;
+ (id)defaultLayoutMetricsForDisplayVariant:(long long)variant;
+ (double)statusBarHeight:(id)height;
+ (double)statusBarAppContextFontBaseLine:(id)line;
+ (double)statusBarAppContextInset:(id)inset;
+ (double)statusBarAppContextFontPointSize:(id)size;
+ (id)statusBarAppContextFontDescriptor:(id)descriptor;
+ (id)statusBarAppContextFont:(id)font;
+ (double)statusBarGlobalContextFontBaseLine:(id)line;
+ (double)statusBarGlobalContextInset:(id)inset;
+ (double)statusBarGlobalContextFontPointSize:(id)size;
+ (id)statusBarGlobalContextFontDescriptor:(id)descriptor;
+ (id)statusBarGlobalContextFont:(id)font;

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)takeGlobalContextVisibleAssertion;
- (void)releaseGlobalContextVisibleAssertion;
- (void)setIgnoreVisibleAssertionsForGlobalContextVisibleFrame:(BOOL)frame;
- (BOOL)ignoreVisibleAssertionsForGlobalContextVisibleFrame;
@end

#endif /* PUICStatusBarLayoutManager_h */
