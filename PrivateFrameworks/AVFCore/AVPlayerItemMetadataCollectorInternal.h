//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPlayerItemMetadataCollectorInternal_h
#define AVPlayerItemMetadataCollectorInternal_h
@import Foundation;

#include "AVWeakReference.h"
#include "AVWeakReferencingDelegateStorage.h"

@class NSArray, NSDate;
@protocol OS_dispatch_queue;

@interface AVPlayerItemMetadataCollectorInternal : NSObject {
  /* instance variables */
  AVWeakReferencingDelegateStorage *delegateStorage;
  NSObject<OS_dispatch_queue> *ivarAccessQueue;
  NSArray *identifiers;
  NSArray *classifyingLabels;
  NSDate *mostRecentlyModifiedMetadataGroupTimestamp;
  AVWeakReference *weakReferenceToPlayerItem;
}

@end

#endif /* AVPlayerItemMetadataCollectorInternal_h */
