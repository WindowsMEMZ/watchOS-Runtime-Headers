//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarCellularSmallSignalView_h
#define _UIStatusBarCellularSmallSignalView_h
@import Foundation;

#include "_UIStatusBarCellularSignalView.h"

@interface _UIStatusBarCellularSmallSignalView : _UIStatusBarCellularSignalView
/* class methods */
+ (double)_barWidthForIconSize:(long long)size;
+ (double)_heightForNormalBarAtIndex:(long long)index iconSize:(long long)size;
+ (double)_barCornerRadiusForIconSize:(long long)size;
+ (double)_interspaceForIconSize:(long long)size;
@end

#endif /* _UIStatusBarCellularSmallSignalView_h */
