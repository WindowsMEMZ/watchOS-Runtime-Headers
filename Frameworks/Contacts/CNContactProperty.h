//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactProperty_h
#define CNContactProperty_h
@import Foundation;

#include "CNContact.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CNContactProperty : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  CNContact *_internalContact;
}

@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) id value;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *label;

/* class methods */
+ (id)contactPropertyWithContact:(id)contact propertyKey:(id)key identifier:(id)identifier;
+ (id)contactPropertyWithContactNoCopy:(id)copy propertyKey:(id)key identifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)sourceContact;
- (id)labeledValue;
- (int)multiValueIdentifier;
@end

#endif /* CNContactProperty_h */
