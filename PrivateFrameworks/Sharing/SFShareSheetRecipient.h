//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFShareSheetRecipient_h
#define SFShareSheetRecipient_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface SFShareSheetRecipient : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *realName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSSet *formattedHandles;
@property (readonly, nonatomic) NSString *contactIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithNode:(id)node;
- (id)initWithAirDropNode:(id)node;
- (id)initWithRealName:(id)name displayName:(id)name formattedHandles:(id)handles contactIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFShareSheetRecipient_h */
