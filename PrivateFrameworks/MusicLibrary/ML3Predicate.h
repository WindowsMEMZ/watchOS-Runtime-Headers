//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3Predicate_h
#define ML3Predicate_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface ML3Predicate : NSObject<NSSecureCoding, NSCopying>
/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)SQLJoinClausesForClass:(Class)class;
- (void)appendSQLToMutableString:(id)string entityClass:(Class)class;
- (id)databaseStatementParameters;
- (id)SQLForEntityClass:(Class)class;
- (BOOL)isDynamicForEntityClass:(Class)class;
- (BOOL)isTrueAlways;
- (BOOL)isFalseAlways;
- (id)spotlightPredicate;
- (BOOL)containsPropertyPredicate:(id)predicate matchingValue:(id)value usingComparison:(int)comparison;
@end

#endif /* ML3Predicate_h */
