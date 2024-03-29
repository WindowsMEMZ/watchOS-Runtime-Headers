//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFAssertionContext_h
#define AFAssertionContext_h
@import Foundation;

#include "AFDictionaryConvertible-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface AFAssertionContext : NSObject<NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSDate *effectiveDate;
@property (readonly, nonatomic) double expirationDuration;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithTimestamp:(unsigned long long)timestamp reason:(id)reason effectiveDate:(id)date expirationDuration:(double)duration userInfo:(id)info;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)buildDictionaryRepresentation;
@end

#endif /* AFAssertionContext_h */
