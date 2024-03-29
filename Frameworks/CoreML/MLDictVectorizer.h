//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLDictVectorizer_h
#define MLDictVectorizer_h
@import Foundation;

#include "MLModel.h"
#include "MLModelSpecificationLoader-Protocol.h"

@class NSOrderedSet, NSString;

@interface MLDictVectorizer : MLModel<MLModelSpecificationLoader>

@property (readonly, nonatomic) NSOrderedSet *categoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)loadModelFromSpecification:(void *)specification configuration:(id)configuration error:(id *)error;
+ (id)categoryName:(id)name inputDescription:(id)description outputDescription:(id)description orderedInputFeatureNames:(id)names orderedOutputFeatureNames:(id)names error:(id *)error;
+ (id)categoryName:(id)name dataTransformerName:(id)name inputDescription:(id)description outputDescription:(id)description orderedInputFeatureNames:(id)names orderedOutputFeatureNames:(id)names error:(id *)error;

/* instance methods */
- (id)initWith:(id)with dataTransformerName:(id)name inputDescription:(id)description outputDescription:(id)description orderedInputFeatureNames:(id)names orderedOutputFeatureNames:(id)names configuration:(id)configuration error:(id *)error;
- (id)predictionFromFeatures:(id)features options:(id)options error:(id *)error;
- (id)constructDictionary:(id)dictionary error:(id *)error;
@end

#endif /* MLDictVectorizer_h */
