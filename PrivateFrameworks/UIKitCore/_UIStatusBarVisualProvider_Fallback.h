//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarVisualProvider_Fallback_h
#define _UIStatusBarVisualProvider_Fallback_h
@import Foundation;

#include "_UIStatusBar.h"
#include "_UIStatusBarVisualProvider-Protocol.h"

@class NSArray, NSString, UIFont;

@interface _UIStatusBarVisualProvider_Fallback : NSObject<_UIStatusBarVisualProvider>

@property (retain, nonatomic) NSArray *placements;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)orientation;
+ (BOOL)scalesWithScreenNativeScale;
+ (BOOL)requiresIterativeOverflowLayout;

/* instance methods */
- (id)setupInContainerView:(id)view;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)identifier;
- (id)styleAttributesForStyle:(long long)style;
@end

#endif /* _UIStatusBarVisualProvider_Fallback_h */
