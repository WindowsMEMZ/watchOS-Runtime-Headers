//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNiOSABContainerOfContactPredicate_h
#define CNiOSABContainerOfContactPredicate_h
@import Foundation;

#include "CNPredicate.h"
#include "CNiOSContainerPredicate-Protocol.h"

@class NSString;

@interface CNiOSABContainerOfContactPredicate : CNPredicate<CNiOSContainerPredicate>

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPredicate:(id)predicate;
- (id)initWithContactIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)book error:(struct __CFError * *)error;
- (BOOL)includesDisabledContainers;
@end

#endif /* CNiOSABContainerOfContactPredicate_h */
