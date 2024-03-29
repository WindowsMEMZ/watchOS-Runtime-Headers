//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassTileState_h
#define PKPassTileState_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPassTileImage.h"
#include "PKPassTileState.h"
#include "PKPassTileStateCheckIn.h"
#include "PKPassTileStateDefault.h"
#include "PKPassTileStateMetadata.h"
#include "PKPaymentPassAction.h"

@class NSArray;

@interface PKPassTileState : NSObject<NSSecureCoding>

@property (readonly, nonatomic) PKPassTileStateCheckIn *stateTypeCheckIn;
@property (readonly, nonatomic) PKPassTileStateDefault *stateTypeDefault;
@property (retain, nonatomic) PKPassTileStateMetadata *metadata;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) PKPassTileState *actionState;
@property (retain, nonatomic) PKPassTileImage *icon;
@property (copy, nonatomic) NSArray *actionDictionaries;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL resolved;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) NSArray *actions;

/* class methods */
+ (id)_createForDictionary:(id)dictionary withTileType:(long long)type;
+ (id)_createWithType:(long long)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)_setupWithDictionary:(id)dictionary;
- (id)createResolvedStateWithBundle:(id)bundle privateBundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToUnresolvedState:(id)state;
- (BOOL)isEnabled;
- (BOOL)isSelected;
- (BOOL)isResolved;
@end

#endif /* PKPassTileState_h */
