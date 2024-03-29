//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXUIWatchTextPreviewSnapshotGenerator_h
#define AXUIWatchTextPreviewSnapshotGenerator_h
@import Foundation;

#include "AXUIWatchTextPreviewSnapshotWindow.h"
#include "AXUIWatchTextPreviewViewController.h"

@class NSMutableDictionary, PUICNavigationController;

@interface AXUIWatchTextPreviewSnapshotGenerator : NSObject

@property (retain, nonatomic) AXUIWatchTextPreviewSnapshotWindow *snapshotWindow;
@property (retain, nonatomic) PUICNavigationController *navigationController;
@property (retain, nonatomic) AXUIWatchTextPreviewViewController *messagesPreviewViewController;
@property (retain, nonatomic) NSMutableDictionary *textPreviewImages;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame screenScale:(double)scale;
- (void)retrieveSnapshots:(id /* block */)snapshots;
- (id)snapshotWithTraitCollection:(id)collection;
- (id)renderSnapshotFromWindow:(id)window;
@end

#endif /* AXUIWatchTextPreviewSnapshotGenerator_h */
