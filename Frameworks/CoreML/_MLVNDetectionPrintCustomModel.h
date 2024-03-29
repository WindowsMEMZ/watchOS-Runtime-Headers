//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef _MLVNDetectionPrintCustomModel_h
#define _MLVNDetectionPrintCustomModel_h
@import Foundation;

#include "MLCustomModel-Protocol.h"
#include "MLModelConfiguration.h"
#include "MLModelDescription.h"

@class NSDictionary;

@interface _MLVNDetectionPrintCustomModel : NSObject<MLCustomModel>

@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) unsigned long long detectionPrintRequestRevision;
@property (readonly, nonatomic) NSDictionary *expectedOutputShapeV1;
@property (readonly, nonatomic) MLModelConfiguration *configuration;

/* instance methods */
- (id)initWithModelDescription:(id)description parameterDictionary:(id)dictionary error:(id *)error;
- (id)featureValueFromDetectionPrint:(id)print featureName:(id)name;
- (id)predictionFromFeatures:(id)features options:(id)options error:(id *)error;
@end

#endif /* _MLVNDetectionPrintCustomModel_h */
