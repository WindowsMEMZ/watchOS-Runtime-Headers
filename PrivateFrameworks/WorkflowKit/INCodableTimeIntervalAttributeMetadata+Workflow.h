//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef INCodableTimeIntervalAttributeMetadata_Workflow_h
#define INCodableTimeIntervalAttributeMetadata_Workflow_h
@import Foundation;

@interface INCodableTimeIntervalAttributeMetadata (Workflow)
/* instance methods */
- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (void)wf_updateParameterDictionary:(id)dictionary forCodableAttribute:(id)attribute localizer:(id)localizer;
- (BOOL)wf_processParameterValue:(id)value forParameter:(id)parameter parameterState:(id)state codableAttribute:(id)attribute completionHandler:(id /* block */)handler;
- (id)wf_parameterStateForIntentValue:(id)value parameterDefinition:(id)definition;
- (id)unitNameForUnit:(long long)unit;
- (id)unitNamesWithMinimumUnit:(long long)unit maximumUnit:(long long)unit;
@end

#endif /* INCodableTimeIntervalAttributeMetadata_Workflow_h */
