//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNHandleStringsContactPredicate_h
#define CNHandleStringsContactPredicate_h
@import Foundation;

#include "CNPredicate.h"

@class NSArray;

@interface CNHandleStringsContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) NSArray *handleStrings;
@property (readonly, copy, nonatomic) NSArray *containerIdentifiers;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithHandleStrings:(id)strings;
- (id)initWithHandleStrings:(id)strings containerIdentifiers:(id)identifiers;
- (id)description;
- (id)shortDebugDescription;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)infos;
- (void)cn_triageWithLog:(id)log serialNumber:(unsigned long long)number;
@end

#endif /* CNHandleStringsContactPredicate_h */
