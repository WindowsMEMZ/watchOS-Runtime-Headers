//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIMetricDescriptorParser_h
#define TIMetricDescriptorParser_h
@import Foundation;

#include "TIDescriptorParser.h"

@interface TIMetricDescriptorParser : TIDescriptorParser
/* instance methods */
- (id)init;
- (void)parseMetricDescriptors:(id)descriptors andInvalidMetricNames:(id)names fromConfig:(id)config errors:(id)errors;
- (id)parseMetricDescriptorWithName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseNumericValueDescriptorWithName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseFeatureUsageDescriptorWithName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseContextValueDescriptorWithName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseSettingValueDescriptorWithName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseCalculationPreconditionFromConfig:(id)config forExpression:(id)expression errors:(id)errors;
- (id)parseCalculationDefaultValueFromConfig:(id)config forExpression:(id)expression andPrecondition:(id)precondition errors:(id)errors;
- (id)parseCalculationDependenciesFromConfig:(id)config forExpression:(id)expression errors:(id)errors;
- (id)parseBucketThresholdsFromConfig:(id)config isFeatureUsageDescriptor:(BOOL)descriptor errors:(id)errors;
- (id)parseBucketValuesFromConfig:(id)config forBucketThresholds:(id)thresholds isFeatureUsageDescriptor:(BOOL)descriptor errors:(id)errors;
- (void)findInvalidDependencyChain:(id)chain forMetricDescriptor:(id)descriptor fromMetricDescriptors:(id)descriptors andInvalidMetricNames:(id)names invalidMetricDescriptors:(id)descriptors errors:(id)errors;
- (id)descriptionFromDependencyChain:(id)chain andDependencyName:(id)name;
@end

#endif /* TIMetricDescriptorParser_h */
