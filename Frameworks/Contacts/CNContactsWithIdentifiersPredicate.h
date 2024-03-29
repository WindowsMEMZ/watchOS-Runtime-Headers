//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactsWithIdentifiersPredicate_h
#define CNContactsWithIdentifiersPredicate_h
@import Foundation;

#include "CNPredicate.h"

@class NSArray, NSMutableDictionary;

@interface CNContactsWithIdentifiersPredicate : CNPredicate {
  /* instance variables */
  NSMutableDictionary *_internalIdentifiers;
}

@property (readonly, copy, nonatomic) NSArray *identifiers;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifiers:(id)identifiers;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)internalIdentifiersForStoreWithIdentifier:(id)identifier;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)cn_hasHighSpecificity;
@end

#endif /* CNContactsWithIdentifiersPredicate_h */
