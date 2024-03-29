//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PSITopAssetsResult_h
#define PSITopAssetsResult_h
@import Foundation;

#include "PSITopAssetsResultDelegate-Protocol.h"

@class NSArray;
@protocol OS_dispatch_queue;

@interface PSITopAssetsResult : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (retain, nonatomic) struct __CFArray * assetIds;
@property (weak, nonatomic) NSObject<PSITopAssetsResultDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long assetMatchCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)fetchAssetUUIDsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* PSITopAssetsResult_h */
