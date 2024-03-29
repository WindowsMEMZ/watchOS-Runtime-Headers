//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FAEligibilityRequirements_h
#define FAEligibilityRequirements_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface FAEligibilityRequirements : NSObject<NSSecureCoding> {
  /* instance variables */
  NSDictionary *_properties;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)initWithPropertyRequirements:(id)requirements;
- (id)requirementsForPropertyName:(id)name;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* FAEligibilityRequirements_h */
