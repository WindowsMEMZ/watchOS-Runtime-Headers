//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSOperationProgress_h
#define SSOperationProgress_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface SSOperationProgress : NSObject<SSXPCCoding, NSCopying> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSMutableArray *_snapshotTimes;
  NSMutableArray *_snapshotValues;
}

@property BOOL canPause;
@property long long operationType;
@property double changeRate;
@property long long currentValue;
@property double estimatedTimeRemaining;
@property long long maxValue;
@property long long units;
@property long long normalizedCurrentValue;
@property long long normalizedMaxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)resetSnapshots;
- (void)snapshot;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (void)_updateStatisticsFromSnapshots;
@end

#endif /* SSOperationProgress_h */
