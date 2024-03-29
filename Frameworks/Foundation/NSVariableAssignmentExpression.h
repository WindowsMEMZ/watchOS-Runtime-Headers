//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSVariableAssignmentExpression_h
#define NSVariableAssignmentExpression_h
@import Foundation;

#include ".h"
#include "NSExpression.h"
#include "NSVariableExpression.h"

@interface NSVariableAssignmentExpression :  {
  /* instance variables */
  NSVariableExpression *_assignmentVariable;
  NSExpression *_subexpression;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (id)initWithAssignmentVariable:(id)variable expression:(id)expression;
- (id)initWithAssignmentExpression:(id)expression expression:(id)expression;
- (unsigned long long)expressionType;
- (void)allowEvaluation;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)assignmentVariable;
- (id)variable;
- (id)subexpression;
- (id)predicateFormat;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)expressionValueWithObject:(id)object context:(id)context;
- (void)acceptVisitor:(id)visitor flags:(unsigned long long)flags;
- (id)_expressionWithSubstitutionVariables:(id)variables;
@end

#endif /* NSVariableAssignmentExpression_h */
