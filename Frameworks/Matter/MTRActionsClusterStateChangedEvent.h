//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRActionsClusterStateChangedEvent_h
#define MTRActionsClusterStateChangedEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber;

@interface MTRActionsClusterStateChangedEvent : NSObject<NSCopying>

@property (copy, nonatomic) NSNumber *actionID;
@property (copy, nonatomic) NSNumber *invokeID;
@property (copy, nonatomic) NSNumber *newState;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)getNewState;
@end

#endif /* MTRActionsClusterStateChangedEvent_h */
