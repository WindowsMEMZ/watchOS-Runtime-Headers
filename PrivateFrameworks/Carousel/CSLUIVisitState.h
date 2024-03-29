//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIVisitState_h
#define CSLUIVisitState_h
@import Foundation;

#include "CSLMainUIState.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSString;

@interface CSLUIVisitState : NSObject<NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSString *clockFace;
@property (readonly, nonatomic) long long backlightState;
@property (readonly, nonatomic) CSLMainUIState *mainUIState;
@property (readonly, nonatomic) struct { long long x0; double x1; unsigned long long x2; } scrollCenterState;
@property (readonly, nonatomic) BOOL controlCenterPresented;
@property (readonly, nonatomic) NSString *alertIdentifier;

/* class methods */
+ (id)stateWithClockFace:(id)face backlightState:(long long)state mainUIState:(id)uistate scrollCenterState:(struct { long long x0; double x1; unsigned long long x2; })state alertIdentifier:(id)identifier;

/* instance methods */
- (id)initWithClockFace:(id)face backlightState:(long long)state mainUIState:(id)uistate scrollCenterState:(struct { long long x0; double x1; unsigned long long x2; })state alertIdentifier:(id)identifier;
- (id)initWithState:(id)state;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* CSLUIVisitState_h */
