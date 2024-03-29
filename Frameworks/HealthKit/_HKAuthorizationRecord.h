//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKAuthorizationRecord_h
#define _HKAuthorizationRecord_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface _HKAuthorizationRecord : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

/* class methods */
+ (id)recordWithStatus:(long long)status request:(long long)request mode:(long long)mode anchorLimitModifiedDate:(id)date;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAuthorizationStatus:(long long)status authorizationRequest:(long long)request authorizationMode:(long long)mode anchorLimitModifiedDate:(id)date;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_deepCopy;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)requestedSharing;
- (BOOL)requestedReading;
- (BOOL)deniedSharing;
- (BOOL)deniedReading;
- (BOOL)sharingEnabled;
- (BOOL)readingEnabled;
- (BOOL)isCompatibleStatus:(long long)status;
- (id)recordWithReadingDisabled;
- (id)recordWithSharingDisabled;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* _HKAuthorizationRecord_h */
