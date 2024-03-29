//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSPasswordRuleParser_h
#define WBSPasswordRuleParser_h
@import Foundation;

@interface WBSPasswordRuleParser : NSObject
/* class methods */
+ (id)parsePasswordRules:(id)rules error:(id *)error;
+ (id)_passwordRuleSetFromPasswordRules:(id)rules;
+ (id)mergePasswordRuleSet:(id)set withPasswordRuleSet:(id)set;
@end

#endif /* WBSPasswordRuleParser_h */
