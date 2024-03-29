//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMSymptom_h
#define HMSymptom_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface HMSymptom : NSObject<NSSecureCoding>

@property (readonly) long long type;
@property (readonly, copy) NSString *localizedTitle;

/* class methods */
+ (id)symptomWithType:(long long)type;
+ (BOOL)supportsSecureCoding;
+ (id)unarchive:(id)unarchive;
+ (id)unarchiveSymptomDict:(id)dict;
+ (id)archive:(id)archive;
+ (id)archiveSymptomDict:(id)dict;

/* instance methods */
- (id)initWithType:(long long)type;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* HMSymptom_h */
