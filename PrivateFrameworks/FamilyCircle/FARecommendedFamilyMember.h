//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FARecommendedFamilyMember_h
#define FARecommendedFamilyMember_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CNContact, NSString;

@interface FARecommendedFamilyMember : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *iMessageHandle;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) CNContact *contact;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRecommendation:(id)recommendation;
- (id)contactFromRecommendationWithIdentifier:(id)identifier;
- (void)encodeWithCoder:(id)coder;
- (id)_safeClasses;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FARecommendedFamilyMember_h */
