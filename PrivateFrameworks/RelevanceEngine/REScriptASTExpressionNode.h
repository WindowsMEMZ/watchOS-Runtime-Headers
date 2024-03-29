//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REScriptASTExpressionNode_h
#define REScriptASTExpressionNode_h
@import Foundation;

#include "REScriptASTNode.h"
#include "REScriptASTNode.h"

@interface REScriptASTExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *prefixExpression;
@property (readonly, nonatomic) REScriptASTNode *binaryExpressions;

/* class methods */
+ (id)parseBuffer:(id)buffer error:(id *)error;

/* instance methods */
- (id)initWithPrefixExpression:(id)expression binaryExpression:(id)expression;
- (id)dependencies;
@end

#endif /* REScriptASTExpressionNode_h */
