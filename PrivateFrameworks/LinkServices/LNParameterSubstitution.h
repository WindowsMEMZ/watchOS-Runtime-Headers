//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNParameterSubstitution_h
#define LNParameterSubstitution_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface LNParameterSubstitution : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, copy, nonatomic) NSArray *substitutionValues;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithParameterIdentifier:(id)identifier substitutionValues:(id)values;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* LNParameterSubstitution_h */
