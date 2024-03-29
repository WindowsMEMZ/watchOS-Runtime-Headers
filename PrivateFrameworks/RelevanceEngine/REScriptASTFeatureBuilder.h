//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REScriptASTFeatureBuilder_h
#define REScriptASTFeatureBuilder_h
@import Foundation;

#include "REScriptASTObjectBuilder.h"

@interface REScriptASTFeatureBuilder : REScriptASTObjectBuilder
/* instance methods */
- (id)objectTypeErrorDescription;
- (id)buildObjectWithIdentifierNode:(id)node error:(id *)error;
- (id)buildObjectWithBinaryExpressionNode:(id)node previousExpression:(id)expression error:(id *)error;
- (id)buildObjectWithFunctionNode:(id)node error:(id *)error;
- (id)buildObjectWithSubscriptExpressionNode:(id)node error:(id *)error;
- (id)_buildTransformedFeature:(id)feature features:(id)features node:(id)node error:(id *)error;
- (BOOL)_loadIndexFromNode:(id)node index:(unsigned long long *)index error:(id *)error;
@end

#endif /* REScriptASTFeatureBuilder_h */
