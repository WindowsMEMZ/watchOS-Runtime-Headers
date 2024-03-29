//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVABTestGenerator_h
#define MSVABTestGenerator_h
@import Foundation;

@interface MSVABTestGenerator : NSObject

@property (readonly, nonatomic) float probabilityForOutcomeA;
@property (readonly, nonatomic) long long totalExperiments;
@property (readonly, nonatomic) long long totalForOutcomeA;
@property (readonly, nonatomic) long long totalForOutcomeB;

/* instance methods */
- (id)initWithProbabilityForOutcomeA:(float)a;
- (void)updateProbabilityForOutcomeA:(float)a;
- (long long)nextOutcome;
- (long long)lastOutcome;
- (id)description;
@end

#endif /* MSVABTestGenerator_h */
