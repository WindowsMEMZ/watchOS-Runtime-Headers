//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraClipVideoAssetOperationMarker_h
#define HFCameraClipVideoAssetOperationMarker_h
@import Foundation;

#include "HFCameraClipVideoAssetOperationMarker.h"

@class HMCameraClip, HMCameraClipFetchVideoAssetContextOperation, NSString;

@interface HFCameraClipVideoAssetOperationMarker : NSObject

@property (retain, nonatomic) HMCameraClip *clip;
@property (retain, nonatomic) NSString *key;
@property (weak, nonatomic) HFCameraClipVideoAssetOperationMarker *previous;
@property (weak, nonatomic) HFCameraClipVideoAssetOperationMarker *next;
@property (weak, nonatomic) HMCameraClipFetchVideoAssetContextOperation *operation;

/* class methods */
+ (id)sentinelWithKey:(id)key;

/* instance methods */
- (id)initWithCameraClip:(id)clip operation:(id)operation key:(id)key;
@end

#endif /* HFCameraClipVideoAssetOperationMarker_h */
