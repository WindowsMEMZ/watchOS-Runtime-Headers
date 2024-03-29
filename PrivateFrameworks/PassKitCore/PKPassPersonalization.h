//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassPersonalization_h
#define PKPassPersonalization_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKPassPersonalization : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) unsigned long long requiredPersonalizationFields;
@property (readonly, nonatomic) NSString *termsAndConditions;
@property (readonly, nonatomic) NSString *localizedDescription;

/* class methods */
+ (id)passPersonalizationWithPassBundle:(id)bundle;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* PKPassPersonalization_h */
