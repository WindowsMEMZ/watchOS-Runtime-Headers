//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTLocationOfInterestEnumerationOptions_h
#define RTLocationOfInterestEnumerationOptions_h
@import Foundation;

#include "RTEnumerationOptions.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDateInterval;

@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL wrappedVisit;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithAscending:(BOOL)ascending batchSize:(unsigned long long)size dateInterval:(id)interval wrappedVisit:(BOOL)visit;
- (Class)enumeratedType;
- (id /* block */)processingBlock;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* RTLocationOfInterestEnumerationOptions_h */
