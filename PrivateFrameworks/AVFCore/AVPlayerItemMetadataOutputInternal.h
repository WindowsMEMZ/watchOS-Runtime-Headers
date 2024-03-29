//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPlayerItemMetadataOutputInternal_h
#define AVPlayerItemMetadataOutputInternal_h
@import Foundation;

#include "AVWeakReference.h"
#include "AVWeakReferencingDelegateStorage.h"

@class NSArray;
@protocol OS_dispatch_queue;

@interface AVPlayerItemMetadataOutputInternal : NSObject {
  /* instance variables */
  NSArray *metadataIdentifiers;
  AVWeakReferencingDelegateStorage *delegateStorage;
  NSObject<OS_dispatch_queue> *ivarAccessQueue;
  NSObject<OS_dispatch_queue> *accumulationQueue;
  AVWeakReference *weakReferenceToHost;
  double advanceInterval;
  struct __CFDictionary * accumulatedMetadataGroups;
}

@end

#endif /* AVPlayerItemMetadataOutputInternal_h */
