//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTBinarySMS_h
#define CTBinarySMS_h
@import Foundation;

#include "CTXPCServiceSubscriptionContext.h"

@class NSData, NSString;

@interface CTBinarySMS : NSObject

@property (nonatomic) int portAddressingScheme;
@property (nonatomic) int srcPort;
@property (nonatomic) int dstPort;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *destinationAddress;
@property (copy, nonatomic) NSString *smscAddress;
@property (copy, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (nonatomic) int smsType;

/* instance methods */
- (id)init;
- (BOOL)isValid;
@end

#endif /* CTBinarySMS_h */
