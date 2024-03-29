//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPRawAccessoryMetadata_h
#define SPRawAccessoryMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface SPRawAccessoryMetadata : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSData *productData;
@property (copy, nonatomic) NSData *manufacturerName;
@property (copy, nonatomic) NSData *modelName;
@property (copy, nonatomic) NSData *reserved;
@property (copy, nonatomic) NSData *accessoryCategory;
@property (copy, nonatomic) NSData *accessoryCapabilities;
@property (copy, nonatomic) NSData *firmwareVersion;
@property (copy, nonatomic) NSData *findMyVersion;
@property (copy, nonatomic) NSData *batteryType;
@property (copy, nonatomic) NSData *batteryLevel;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* SPRawAccessoryMetadata_h */
