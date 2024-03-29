//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICellAccessoryDetail_h
#define UICellAccessoryDetail_h
@import Foundation;

#include "UICellAccessory.h"

@interface UICellAccessoryDetail : UICellAccessory

@property (copy, nonatomic) id /* block */ actionHandler;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(BOOL)header;
- (id)_identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)from;
@end

#endif /* UICellAccessoryDetail_h */
