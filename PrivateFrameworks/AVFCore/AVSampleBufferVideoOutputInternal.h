//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVSampleBufferVideoOutputInternal_h
#define AVSampleBufferVideoOutputInternal_h
@import Foundation;

#include "AVWeakReference.h"
#include "AVWeakReferencingDelegateStorage.h"

@protocol OS_dispatch_queue;

@interface AVSampleBufferVideoOutputInternal : NSObject {
  /* instance variables */
  AVWeakReference *weakReference;
  struct OpaqueFigVisualContext * vc;
  struct OpaqueVTPixelBufferConformer * pixelBufferConformer;
  NSObject<OS_dispatch_queue> *stateQueue;
  AVWeakReferencingDelegateStorage *delegateStorage;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } lastImageTime;
}

@end

#endif /* AVSampleBufferVideoOutputInternal_h */
