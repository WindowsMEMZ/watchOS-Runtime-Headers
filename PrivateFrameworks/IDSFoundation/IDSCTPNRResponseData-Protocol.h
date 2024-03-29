//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSCTPNRResponseData_Protocol_h
#define IDSCTPNRResponseData_Protocol_h
@import Foundation;

#include "IDSCTPNRResponseData-Protocol.h"

@class NSData, NSString;

@protocol IDSCTPNRResponseData <NSObject>

@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *phoneBookNumber;
@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSString *status;

@end

#endif /* IDSCTPNRResponseData_Protocol_h */
