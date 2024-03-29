//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSMatchingPredicateOperator_h
#define NSMatchingPredicateOperator_h
@import Foundation;

#include ".h"

@interface NSMatchingPredicateOperator :  {
  /* instance variables */
  int _contextLock;
  struct { id x0; void * x1; long long x2; } * _regexContext;
}

/* instance methods */
- (id)initWithOperatorType:(unsigned long long)type modifier:(unsigned long long)modifier variant:(unsigned long long)variant;
- (void)_clearContext;
- (void)dealloc;
- (id)symbol;
- (SEL)selector;
- (BOOL)_shouldEscapeForLike;
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object;
@end

#endif /* NSMatchingPredicateOperator_h */
