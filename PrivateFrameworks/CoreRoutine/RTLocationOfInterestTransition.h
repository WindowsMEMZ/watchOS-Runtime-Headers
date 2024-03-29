//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTLocationOfInterestTransition_h
#define RTLocationOfInterestTransition_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSUUID;

@interface RTLocationOfInterestTransition : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *stopDate;
@property (readonly, nonatomic) NSUUID *visitIdentifierOrigin;
@property (readonly, nonatomic) NSUUID *visitIdentifierDestination;
@property (readonly, nonatomic) long long modeOfTransportation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier startDate:(id)date stopDate:(id)date visitIdentifierOrigin:(id)origin visitIdentifierDestination:(id)destination modeOfTransportation:(long long)transportation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* RTLocationOfInterestTransition_h */
