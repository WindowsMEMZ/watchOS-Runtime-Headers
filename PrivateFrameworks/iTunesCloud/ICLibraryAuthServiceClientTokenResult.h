//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICLibraryAuthServiceClientTokenResult_h
#define ICLibraryAuthServiceClientTokenResult_h
@import Foundation;

#include "ICLibraryAuthServiceClientTokenIdentifier.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface ICLibraryAuthServiceClientTokenResult : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, nonatomic) long long generatedAtMillis;
@property (readonly, nonatomic) long long timeToLiveMillis;
@property (readonly, nonatomic) long long lifespanMillis;
@property (readonly, copy, nonatomic) ICLibraryAuthServiceClientTokenIdentifier *tokenIdentitifer;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isExpired;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithResponseDictionary:(id)dictionary;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ICLibraryAuthServiceClientTokenResult_h */
