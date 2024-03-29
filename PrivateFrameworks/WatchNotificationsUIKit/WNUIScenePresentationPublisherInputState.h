//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIScenePresentationPublisherInputState_h
#define WNUIScenePresentationPublisherInputState_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray;

@interface WNUIScenePresentationPublisherInputState : NSObject<NSCopying>

@property (nonatomic) BOOL valid;
@property (nonatomic) BOOL suppressed;
@property (nonatomic) unsigned long long activeTransitionCount;
@property (nonatomic) unsigned long long pendingTransitionCount;
@property (nonatomic) unsigned long long lastSentLifecycleAction;
@property (nonatomic) BOOL sceneContentHasBeenReady;
@property (copy, nonatomic) NSArray *childSceneIDs;
@property (readonly, nonatomic) BOOL hasOutstandingTransitions;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isValid;
- (BOOL)isSuppressed;
@end

#endif /* WNUIScenePresentationPublisherInputState_h */
