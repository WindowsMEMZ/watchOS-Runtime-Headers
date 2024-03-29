//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef EMTAlternativeDescription_h
#define EMTAlternativeDescription_h
@import Foundation;

#include "EMTGenderDescription.h"
#include "EMTMeaningDescription.h"
#include "NSCopying-Protocol.h"

@interface EMTAlternativeDescription : NSObject<NSCopying>

@property (readonly, nonatomic) unsigned long long alternativeType;
@property (readonly, nonatomic) EMTGenderDescription *genderDescription;
@property (readonly, nonatomic) EMTMeaningDescription *meaningDescription;

/* instance methods */
- (id)initWithGenderDescription:(id)description;
- (id)initWithMeaningDescription:(id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* EMTAlternativeDescription_h */
