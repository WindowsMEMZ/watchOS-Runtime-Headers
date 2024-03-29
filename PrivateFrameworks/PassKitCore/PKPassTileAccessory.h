//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassTileAccessory_h
#define PKPassTileAccessory_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPassTileAccessoryButton.h"
#include "PKPassTileAccessoryImage.h"
#include "PKPassTileAccessorySpinner.h"

@interface PKPassTileAccessory : NSObject<NSSecureCoding>

@property (readonly, nonatomic) PKPassTileAccessoryImage *accessoryTypeImage;
@property (readonly, nonatomic) PKPassTileAccessorySpinner *accessoryTypeSpinner;
@property (readonly, nonatomic) PKPassTileAccessoryButton *accessoryTypeButton;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL resolved;

/* class methods */
+ (id)_createForType:(long long)type resolved:(BOOL)resolved;
+ (id)_createForDictionary:(id)dictionary;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)_setupWithDictionary:(id)dictionary;
- (id)createResolvedAccessoryWithBundle:(id)bundle privateBundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)_isEqual:(id)equal;
- (BOOL)isEqualToUnresolvedAccessory:(id)accessory;
- (BOOL)isResolved;
@end

#endif /* PKPassTileAccessory_h */
