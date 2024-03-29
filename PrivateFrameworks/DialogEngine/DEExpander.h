//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DEExpander_h
#define DEExpander_h
@import Foundation;

@class NSDictionary;

@interface DEExpander : NSObject

@property (retain, nonatomic) NSDictionary *parameters;
@property BOOL shouldEvaluateConditions;
@property BOOL shouldExpandOpts;

/* instance methods */
- (id)init;
- (id)expand:(id)expand localeString:(id)string expansionType:(int)type;
- (id)expandWithParamsString:(id)string localeString:(id)string;
- (id)expandWithParamsString:(id)string localeString:(id)string evaluateConditions:(BOOL)conditions;
- (id)expandWithParamsStringAsDAG:(id)dag localeString:(id)string;
@end

#endif /* DEExpander_h */
