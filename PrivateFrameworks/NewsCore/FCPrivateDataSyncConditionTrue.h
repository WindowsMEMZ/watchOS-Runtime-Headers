//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPrivateDataSyncConditionTrue_h
#define FCPrivateDataSyncConditionTrue_h
@import Foundation;

#include "FCPrivateDataSyncCondition-Protocol.h"

@interface FCPrivateDataSyncConditionTrue : NSObject<FCPrivateDataSyncCondition>

@property (readonly, nonatomic) BOOL satisfied;

/* instance methods */
- (BOOL)isSatisfied;
- (id)description;
@end

#endif /* FCPrivateDataSyncConditionTrue_h */
