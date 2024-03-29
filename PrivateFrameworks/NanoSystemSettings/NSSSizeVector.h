//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 336.0.0.0.0
//
#ifndef NSSSizeVector_h
#define NSSSizeVector_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface NSSSizeVector : NSObject<NSSecureCoding>

@property (readonly) long long fixed;
@property (readonly) long long docsAndData;
@property (readonly) long long purgeable;
@property (readonly) long long dynamic;
@property (readonly) long long userTotal;
@property (readonly) BOOL isZero;

/* class methods */
+ (id)zero;
+ (id)fixed:(long long)fixed;
+ (id)docsAndData:(long long)data;
+ (id)purgeable:(long long)purgeable;
+ (id)fixed:(long long)fixed docsAndData:(long long)data;
+ (id)fixed:(long long)fixed purgeable:(long long)purgeable;
+ (id)docsAndData:(long long)data purgeable:(long long)purgeable;
+ (id)fixed:(long long)fixed docsAndData:(long long)data purgeable:(long long)purgeable;
+ (id)fixed:(long long)fixed dynamic:(long long)dynamic purgeable:(long long)purgeable;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToSizeVector:(id)vector;
- (unsigned long long)hash;
- (id)plus:(id)plus;
- (id)initWithFixed:(long long)fixed docsAndData:(long long)data purgeable:(long long)purgeable;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* NSSSizeVector_h */
