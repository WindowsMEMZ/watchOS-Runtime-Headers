//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3ContainmentPredicate_h
#define ML3ContainmentPredicate_h
@import Foundation;

#include "ML3PropertyPredicate.h"

@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate

@property (retain, nonatomic) NSSet *values;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)property values:(id)values;

/* instance methods */
- (id)initWithProperty:(id)property values:(id)values;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)_orderedValues;
- (unsigned long long)hash;
- (id)description;
- (void)appendSQLToMutableString:(id)string entityClass:(Class)class;
- (id)databaseStatementParameters;
- (BOOL)containsPropertyPredicate:(id)predicate matchingValue:(id)value usingComparison:(int)comparison;
@end

#endif /* ML3ContainmentPredicate_h */
