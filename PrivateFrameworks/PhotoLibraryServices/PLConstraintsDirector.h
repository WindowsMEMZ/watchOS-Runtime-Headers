//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLConstraintsDirector_h
#define PLConstraintsDirector_h
@import Foundation;

#include "PFCameraViewfinderSessionWatcherDelegate-Protocol.h"

@class NSString, NSURL, PFCameraViewfinderSessionWatcher;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLConstraintsDirector : NSObject<PFCameraViewfinderSessionWatcherDelegate> {
  /* instance variables */
  BOOL _deferredProcessingOngoing;
  int _outstandingCaptures;
  NSObject<OS_dispatch_queue> *_isolationQueue;
  NSObject<OS_dispatch_source> *_bonusTimer;
  PFCameraViewfinderSessionWatcher *_cameraWatcher;
  long long _faceQuickClassificationRequestID;
  NSURL *_photoLibraryURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_requestMediaAnalysisQuickFaceProcessing;
- (id)initWithPhotoLibraryURL:(id)url;
- (void)informPhotoCapturedThatNeedsQuickFace;
- (void)informPhotoCapturedThatNeedsDeferredProcessing;
- (void)informAssetsFinishedDeferredProcessing;
- (void)informAssetDeferredProcessingOccurring;
- (void)cameraWatcherDidChangeState:(id)state;
@end

#endif /* PLConstraintsDirector_h */
