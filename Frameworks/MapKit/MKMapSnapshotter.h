//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKMapSnapshotter_h
#define MKMapSnapshotter_h
@import Foundation;

#include "MKMapSnapshotOptions.h"

@class NSXPCConnection, VKMapSnapshotCreator, geo_isolater;
@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject {
  /* instance variables */
  MKMapSnapshotOptions *_options;
  int _loadingFlag;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  id /* block */ _completionHandler;
  geo_isolater *_isolation;
  NSXPCConnection *_snapshotService;
  VKMapSnapshotCreator *_snapshotCreator;
  BOOL _needsResume;
}

@property (readonly, nonatomic) BOOL loading;

/* instance methods */
- (BOOL)isLoading;
- (id)init;
- (id)initWithOptions:(id)options;
- (void)dealloc;
- (void)_enterBackground:(id)background;
- (void)_exitBackground:(id)background;
- (void)_cancel;
- (void)_cleanupSnapshotCreator;
- (void)_respondWithError:(id)error;
- (void)_failWithError:(id)error;
- (void)_succeedWithSnapshot:(id)snapshot;
- (void)_drawAppleLogoIfNecessaryOnSnapshot:(id)snapshot;
- (void)_deliverSnapshot:(id)snapshot;
- (void)startWithCompletionHandler:(id /* block */)handler;
- (void)startWithQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (void)_performSnapshot;
- (void)_performSnapshotOnSnapshotQueue;
- (void)cancel;
@end

#endif /* MKMapSnapshotter_h */
