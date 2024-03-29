//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHCloudIdentifier_h
#define PHCloudIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PHCloudIdentifier : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *localCloudIdentifier;
@property (readonly, nonatomic) NSString *identifierCode;
@property (readonly, nonatomic) NSString *fingerPrint;
@property (readonly, nonatomic) NSString *stringValue;

/* class methods */
+ (id)notFoundIdentifier;
+ (id)_notFoundIdentifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStringValue:(id)value;
- (id)initWithLocalCloudIdentifier:(id)identifier identifierCode:(id)code fingerPrint:(id)print;
- (id)initAsNotFoundIdentifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* PHCloudIdentifier_h */
