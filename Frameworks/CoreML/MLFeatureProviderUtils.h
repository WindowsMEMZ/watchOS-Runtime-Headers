//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLFeatureProviderUtils_h
#define MLFeatureProviderUtils_h
@import Foundation;

@interface MLFeatureProviderUtils : NSObject
/* class methods */
+ (id)providerWithSubsetOfFeaturesNamed:(id)named providedBy:(id)by;
+ (id)lazyProviderWithFeaturesProvidedBy:(id)by addedToFeaturesProvidedBy:(id)by;
+ (id)_featureValuesForNames:(id)names providedBy:(id)by error:(id *)error;
+ (long long)_vectorizedSizeOfFeatureValues:(id)values error:(id *)error;
+ (BOOL)_vectorizeWithoutSizeCheckFeatureValues:(id)values intoDoubleVector:(double *)vector stride:(unsigned long long)stride error:(id *)error;
+ (BOOL)vectorizeFeaturesProvidedBy:(id)by featureNames:(id)names intoDoubleVector:(double *)vector length:(unsigned long long)length stride:(unsigned long long)stride error:(id *)error;
+ (id)vectorizeFeaturesProvidedBy:(id)by featureNames:(id)names error:(id *)error;
+ (BOOL)canVectorizeFeatureWithDescription:(id)description;
+ (BOOL)canVectorizeAllFeaturesWithDescriptions:(id)descriptions;
@end

#endif /* MLFeatureProviderUtils_h */
