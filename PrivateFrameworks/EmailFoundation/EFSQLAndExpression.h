//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFSQLAndExpression_h
#define EFSQLAndExpression_h
@import Foundation;

#include "EFSQLCompoundExpression-Protocol.h"

@class NSArray, NSString;

@interface EFSQLAndExpression : NSObject<EFSQLCompoundExpression>

@property (readonly, copy, nonatomic) NSArray *expressions;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)combined:(id)combined;

/* instance methods */
- (id)initWithExpressions:(id)expressions;
- (void)ef_renderSQLExpressionInto:(id)into;
- (id)ef_SQLIsolatedExpression;
@end

#endif /* EFSQLAndExpression_h */
