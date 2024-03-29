//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMConfigurationUIItem_h
#define RMConfigurationUIItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "RMConfigurationUIDetails.h"

@class NSString;

@interface RMConfigurationUIItem : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *declarationIdentifier;
@property (readonly, nonatomic) NSString *declarationServerToken;
@property (readonly, nonatomic) NSString *declarationType;
@property (readonly, nonatomic) RMConfigurationUIDetails *declarationDetails;

/* class methods */
+ (id)configurationUIItemWithConfiguration:(id)configuration details:(id)details;
+ (id)configurationUIItemWithIdentifier:(id)identifier serverToken:(id)token type:(id)type details:(id)details;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithConfiguration:(id)configuration details:(id)details;
- (id)initWithIdentifier:(id)identifier serverToken:(id)token type:(id)type details:(id)details;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToConfigurationUI:(id)ui;
@end

#endif /* RMConfigurationUIItem_h */
