//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTPlanTransferAttributes_h
#define CTPlanTransferAttributes_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CTPlanTransferAttributes : NSObject<NSSecureCoding>

@property (nonatomic) unsigned long long transferCapability;
@property (nonatomic) unsigned long long transferStatus;
@property (nonatomic) BOOL isSecuredFlow;
@property (retain, nonatomic) NSString *transferEndpoint;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithTransferCapability:(unsigned long long)capability transferStatus:(unsigned long long)status isSecuredFlow:(BOOL)flow transferEndpoint:(id)endpoint;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CTPlanTransferAttributes_h */
