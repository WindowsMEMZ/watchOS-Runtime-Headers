//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarBuildVersionItem_h
#define _UIStatusBarBuildVersionItem_h
@import Foundation;

#include "_UIStatusBarItem.h"
#include "_UIStatusBarStringView.h"

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *buildVersionView;

/* instance methods */
- (BOOL)canEnableDisplayItem:(id)item fromData:(id)data;
- (BOOL)needsUpdate;
- (void)_create_buildVersionView;
- (id)viewForIdentifier:(id)identifier;
@end

#endif /* _UIStatusBarBuildVersionItem_h */
