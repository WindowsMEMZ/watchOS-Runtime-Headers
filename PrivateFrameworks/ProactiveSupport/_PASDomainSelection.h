//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASDomainSelection_h
#define _PASDomainSelection_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface _PASDomainSelection : NSObject<NSCopying, NSMutableCopying, NSSecureCoding>
/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithNonOverlappingDomainSet:(id)set;
- (id)init;
- (id)initWithDomain:(id)domain;
- (id)initWithDomainsFromArray:(id)array;
- (id)initWithDomainsFromSet:(id)set;
- (BOOL)containsDomain:(id)domain;
- (id)allDomains;
- (id)globPatterns;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToDomainSelection:(id)selection;
- (unsigned long long)hash;
- (unsigned long long)count;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* _PASDomainSelection_h */
