//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCMetricsActivity_h
#define ASCMetricsActivity_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface ASCMetricsActivity : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSDictionary *fields;

/* class methods */
+ (id)defaultFields;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFields:(id)fields;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)metricsActivityWithValue:(id)value forKey:(id)key;
- (id)metricsActivityByMergingFields:(id)fields uniquingFieldsWithBlock:(id /* block */)block;
- (id)metricsActivityByRemovingValueForKey:(id)key;
@end

#endif /* ASCMetricsActivity_h */
