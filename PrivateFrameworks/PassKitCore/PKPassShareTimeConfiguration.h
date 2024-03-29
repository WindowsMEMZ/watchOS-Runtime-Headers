//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassShareTimeConfiguration_h
#define PKPassShareTimeConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate;

@interface PKPassShareTimeConfiguration : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) unsigned long long support;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSArray *schedules;
@property (readonly, nonatomic) BOOL isEmpty;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryRepresentation;
- (id)intersect:(id)intersect;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToPassShareTimeConfiguration:(id)configuration;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKPassShareTimeConfiguration_h */
