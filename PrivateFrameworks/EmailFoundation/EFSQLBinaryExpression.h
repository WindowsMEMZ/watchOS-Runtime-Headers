//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFSQLBinaryExpression_h
#define EFSQLBinaryExpression_h
@import Foundation;

#include "EFSQLBitExpressable-Protocol.h"
#include "EFSQLExpressable-Protocol.h"
#include "EFSQLValueExpressable-Protocol.h"

@class NSString;

@interface EFSQLBinaryExpression : NSObject<EFSQLBitExpressable, EFSQLValueExpressable>

@property (readonly, nonatomic) NSObject<EFSQLExpressable> *left;
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *right;
@property (readonly, nonatomic) unsigned long long binaryOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;

/* instance methods */
- (id)initWithLeft:(id)left operator:(unsigned long long)operator right:(id)right;
- (void)ef_renderSQLExpressionInto:(id)into;
- (id)ef_SQLIsolatedExpression;
- (void)setColumnExpression:(id)expression;
@end

#endif /* EFSQLBinaryExpression_h */
