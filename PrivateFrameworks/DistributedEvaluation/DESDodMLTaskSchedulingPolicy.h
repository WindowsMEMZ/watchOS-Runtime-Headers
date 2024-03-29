//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef DESDodMLTaskSchedulingPolicy_h
#define DESDodMLTaskSchedulingPolicy_h
@import Foundation;

@class NSArray, NSDictionary, NSNumber, NSURL;

@interface DESDodMLTaskSchedulingPolicy : NSObject {
  /* instance variables */
  NSDictionary *_recipes;
}

@property (readonly, copy, nonatomic) NSArray *allRecipeIDs;
@property (readonly, nonatomic) unsigned long long recipeCountLimit;
@property (readonly, nonatomic) double timeLimit;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) BOOL originReturnRouteEnabled;
@property (readonly, nonatomic) BOOL parsecReturnRouteEnabled;
@property (readonly, nonatomic) BOOL dediscoReturnRouteEnabled;
@property (readonly, copy, nonatomic) NSURL *postbackBaseURL;
@property (readonly, copy, nonatomic) NSURL *telemetryURL;
@property (readonly, copy, nonatomic) NSNumber *telemetrySamplingRate;

/* instance methods */
- (id)init;
- (id)initWithAssetURL:(id)url error:(id *)error;
- (id)initWithPolicyDict:(id)dict;
- (id)_policyForRecipeID:(id)id error:(id *)error;
- (id)samplingRateForRecipeID:(id)id error:(id *)error;
- (id)predicateForRecipeID:(id)id error:(id *)error;
@end

#endif /* DESDodMLTaskSchedulingPolicy_h */
