//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXGestureRecorderViewController_h
#define AXGestureRecorderViewController_h
@import Foundation;

#include "UIViewController.h"
#include "AXGestureRecorderFingerPathCollection.h"
#include "AXGestureRecorderFingerPathCollectionDelegate-Protocol.h"
#include "AXGestureRecorderStyleProvider.h"
#include "AXGestureRecorderView.h"
#include "AXGestureRecorderViewControllerDelegate-Protocol.h"
#include "AXGestureRecorderViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AXGestureRecorderViewController : UIViewController<AXGestureRecorderViewDelegate, AXGestureRecorderFingerPathCollectionDelegate>

@property (retain, nonatomic) AXGestureRecorderFingerPathCollection *fingerPathCollection;
@property (retain, nonatomic) AXGestureRecorderFingerPathCollection *dynamicFingerPathCollection;
@property (nonatomic) BOOL shouldPreventFurtherRecording;
@property (nonatomic) BOOL trackingTouches;
@property (nonatomic) double trackingTouchesDidStartTimeInterval;
@property (nonatomic) BOOL inReplayMode;
@property (nonatomic) unsigned long long replayTimestampIndex;
@property (nonatomic) unsigned long long replayTimestampsCount;
@property (retain, nonatomic) NSMutableArray *replayDynamicFingerPaths;
@property (retain, nonatomic) NSMutableDictionary *instantReplayTimestampIndexes;
@property (retain, nonatomic) NSMutableDictionary *instantReplayPartialFingerPaths;
@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider;
@property (weak, nonatomic) NSObject<AXGestureRecorderViewControllerDelegate> *delegate;
@property (readonly, nonatomic) AXGestureRecorderView *gestureRecorderView;
@property (readonly, nonatomic) BOOL empty;
@property (nonatomic) long long recorderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (BOOL)isEmpty;
- (void)loadView;
- (void)hideStaticView;
- (id)recordedGesturePropertyListRepresentationWithName:(id)name;
- (id)recordedReplayableGestureRepresentation;
- (void)deleteAllFingerPaths;
- (void)preventFurtherRecording;
- (void)replayRecordedGesture;
- (void)reloadAllFingerPaths;
- (void)freezeAllDynamicFingerPaths;
- (void)_advanceReplay;
- (void)_exitReplayMode;
- (void)_advanceInstantReplayForStaticFingerAtIndex:(id)index;
- (void)_startInstantReplayForStaticFingerAtIndex:(unsigned long long)index;
- (void)_endInstantReplayForStaticFingerAtIndex:(unsigned long long)index;
- (void)_endInstantReplay;
- (void)_clearWeakReferencesWithOutlets;
- (void)_releaseOutlets;
- (double)_maximumDurationOfRecordedGesture;
- (void)_didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_didStopRecordingAtomicFingerPath;
- (void)_didFinishReplayingRecordedGesture;
- (void)_updateDynamicFingerPathsWithTouches:(id)touches touchesDidEnd:(BOOL)end;
- (void)_freezeAllDynamicFingerPaths;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(id)view;
- (id)gestureRecorderView:(id)view dynamicFingerPathAtIndex:(unsigned long long)index;
- (BOOL)canToggleChromeForGestureRecorderView:(id)view;
- (BOOL)isChromeVisibleForGestureRecorderView:(id)view;
- (void)gestureRecorderView:(id)view setChromeVisible:(BOOL)visible;
- (void)gestureRecorderFingerPathCollection:(id)collection didInsertFingerPathAtIndex:(unsigned long long)index;
- (void)gestureRecorderFingerPathCollection:(id)collection didUpdateFingerPathAtIndex:(unsigned long long)index;
- (BOOL)isTrackingTouches;
- (BOOL)isInReplayMode;
@end

#endif /* AXGestureRecorderViewController_h */
