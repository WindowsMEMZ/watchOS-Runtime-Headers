//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPolicyResponseRationale_h
#define CSLPolicyResponseRationale_h
@import Foundation;

@class NSMutableArray, NSString;

@interface CSLPolicyResponseRationale : NSObject

@property (readonly) NSString *policyName;
@property (readonly) NSMutableArray *conditions;

/* instance methods */
- (id)initRationaleForPolicy:(id)policy;
- (void)addRationaleWithDescriptiveCondition:(id)condition withRequiredValue:(double)value withCurrentValue:(double)value;
- (void)addRationaleWithCondition:(id)condition;
- (void)addRationaleForDeniedActivityWithDescriptiveCondition:(id)condition;
- (id)description;
@end

#endif /* CSLPolicyResponseRationale_h */
