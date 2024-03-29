//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFSQLLikeEscapedExpression_h
#define EFSQLLikeEscapedExpression_h
@import Foundation;

#include "EFSQLValueExpressable-Protocol.h"

@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject<EFSQLValueExpressable>

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) unsigned short escapeCharacter;
@property (readonly, nonatomic) unsigned long long pattern;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithValue:(id)value;
- (id)initWithValue:(id)value pattern:(unsigned long long)pattern;
- (id)initWithValue:(id)value pattern:(unsigned long long)pattern escapeCharacter:(unsigned short)character;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)into;
@end

#endif /* EFSQLLikeEscapedExpression_h */
