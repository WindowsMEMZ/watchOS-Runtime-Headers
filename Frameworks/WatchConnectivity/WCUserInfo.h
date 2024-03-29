//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 207.0.0.0.0
//
#ifndef WCUserInfo_h
#define WCUserInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary;

@interface WCUserInfo : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *clientUserInfo;
@property (copy) NSData *userInfoData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (BOOL)updateUserInfo:(id)info error:(id *)error;
- (BOOL)updateUserInfoData:(id)data error:(id *)error;
- (BOOL)verifyUserInfo;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* WCUserInfo_h */
