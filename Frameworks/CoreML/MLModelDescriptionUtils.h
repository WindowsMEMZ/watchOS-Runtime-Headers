//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLModelDescriptionUtils_h
#define MLModelDescriptionUtils_h
@import Foundation;

@interface MLModelDescriptionUtils : NSObject
/* class methods */
+ (void *)createMetaData:(id)data;
+ (void *)getImageFeatureTypeFromConstraint:(id)constraint;
+ (void *)getArrayFeatureTypeFromConstraint:(id)constraint;
+ (void *)getDictionaryFeatureTypeFromConstraint:(id)constraint error:(id *)error;
+ (void *)getSequenceFeatureTypeFromConstraint:(id)constraint error:(id *)error;
+ (void *)createFeatureTypeFromFeatureDescription:(id)description error:(id *)error;
+ (void)copyFeatureDescriptionFrom:(id)from to:(void *)to error:(id *)error;
+ (void *)createModelDescription:(id)description error:(id *)error;
+ (BOOL)saveModelDescription:(id)description toSpecification:(void *)specification error:(id *)error;
+ (BOOL)validateAllFeatureDescriptions:(id)descriptions hasAnyFeatureTypeIn:(id)in minimalCount:(unsigned long long)count maximumCount:(unsigned long long)count debugLabel:(id)label error:(id *)error;
@end

#endif /* MLModelDescriptionUtils_h */
