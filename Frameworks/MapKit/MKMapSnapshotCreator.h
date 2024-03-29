//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKMapSnapshotCreator_h
#define MKMapSnapshotCreator_h
@import Foundation;

#include "MKMapSnapshotRequest.h"
#include "MKMapViewDelegate-Protocol.h"

@class NSLock, NSMutableArray, NSString, UIImage;

@interface MKMapSnapshotCreator : NSObject<MKMapViewDelegate> {
  /* instance variables */
  UIImage *_lastSnapshot;
  NSString *_lastAttributionString;
  NSLock *_requestLock;
  NSMutableArray *_requests;
}

@property (retain, nonatomic) MKMapSnapshotRequest *servingRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSharingThumbnails;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_processRequest;
- (id)_newSnapshotWithView:(id)view;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate zoomLevel:(unsigned long long)level size:(struct CGSize { double x0; double x1; })size requester:(id)requester context:(id)context;
- (id)recreateCurrentSnapshotWithRequester:(id)requester context:(id)context;
- (void)flushRequestQueue;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate zoomLevel:(unsigned long long)level size:(struct CGSize { double x0; double x1; })size handler:(id /* block */)handler;
@end

#endif /* MKMapSnapshotCreator_h */
