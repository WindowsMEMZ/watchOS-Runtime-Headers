//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef INCodableObjectAttribute_Workflow_h
#define INCodableObjectAttribute_Workflow_h
@import Foundation;

@interface INCodableObjectAttribute (Workflow)
/* instance methods */
- (Class)wf_facadeClass;
- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (void)wf_updateParameterDictionary:(id)dictionary parameterClass:(Class)class localizer:(id)localizer;
- (void)wf_getProcessedIntentValueForParameterValue:(id)value parameter:(id)parameter parameterState:(id)state completionHandler:(id /* block */)handler;
- (id)wf_parameterStateForIntentValue:(id)value parameterDefinition:(id)definition;
- (id)wf_contentItemForValue:(id)value;
- (id)wf_processedParameterValueForValue:(id)value;
- (id)mediaTypeFromIntentMediaType:(long long)type;
@end

#endif /* INCodableObjectAttribute_Workflow_h */
