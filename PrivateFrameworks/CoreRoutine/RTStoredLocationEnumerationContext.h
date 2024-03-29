//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTStoredLocationEnumerationContext_h
#define RTStoredLocationEnumerationContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "RTStoredLocationEnumerationOptions.h"

@interface RTStoredLocationEnumerationContext : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithEnumerationOptions:(id)options;
- (id)initWithEnumerationOptions:(id)options offset:(unsigned long long)offset;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToContext:(id)context;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* RTStoredLocationEnumerationContext_h */
