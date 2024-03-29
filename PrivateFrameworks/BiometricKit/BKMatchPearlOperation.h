//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 460.60.4.0.0
//
#ifndef BKMatchPearlOperation_h
#define BKMatchPearlOperation_h
@import Foundation;

#include "BKMatchOperation.h"
#include "BKIdentity.h"

@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation : BKMatchOperation

@property (weak, @dynamic, nonatomic) NSObject<BKMatchPearlOperationDelegate> *delegate;
@property (nonatomic) BOOL longTimeout;
@property (nonatomic) BOOL shouldAutoRetry;
@property (nonatomic) BOOL preAugmentationCheck;
@property (retain, nonatomic) BKIdentity *preAugmentationCheckIdentity;
@property (nonatomic) BOOL fullFaceOnly;

/* instance methods */
- (BOOL)startNewMatchAttemptWithError:(id *)error;
- (BOOL)enableAutoRetry:(BOOL)retry error:(id *)error;
- (BOOL)pauseFaceDetectTimer:(BOOL)timer error:(id *)error;
@end

#endif /* BKMatchPearlOperation_h */
