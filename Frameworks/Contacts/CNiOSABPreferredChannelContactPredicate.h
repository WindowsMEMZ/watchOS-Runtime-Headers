//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNiOSABPreferredChannelContactPredicate_h
#define CNiOSABPreferredChannelContactPredicate_h
@import Foundation;

#include "CNPredicate.h"
#include "CNiOSContactPredicate-Protocol.h"

@class NSString;

@interface CNiOSABPreferredChannelContactPredicate : CNPredicate<CNiOSContactPredicate>

@property (copy, nonatomic) NSString *preferredChannel;
@property (nonatomic) BOOL limitOne;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPreferredChannel:(id)channel limitOne:(BOOL)one;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)cn_supportsNativeSorting;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)book fetchRequest:(id)request matchInfos:(id *)infos environment:(id)environment error:(struct __CFError * *)error;
- (id)cn_ABQSLPredicateForAddressBook:(void *)book fetchRequest:(id)request error:(id *)error;
- (id)shortDebugDescription;
- (BOOL)isEqual:(id)equal;
@end

#endif /* CNiOSABPreferredChannelContactPredicate_h */
