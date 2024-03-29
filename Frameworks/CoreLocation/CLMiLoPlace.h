//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLMiLoPlace_h
#define CLMiLoPlace_h
@import Foundation;

#include "CLMiLoPlaceMetadata.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSUUID;

@interface CLMiLoPlace : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) CLMiLoPlaceMetadata *metadata;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPlaceIdentifier:(id)identifier score:(id)score confidence:(unsigned long long)confidence placeMetadata:(id)metadata;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CLMiLoPlace_h */
