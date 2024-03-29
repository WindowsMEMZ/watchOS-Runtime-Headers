//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef NSArray_INKeyImageProducing_h
#define NSArray_INKeyImageProducing_h
@import Foundation;

@interface NSArray (INKeyImageProducing) <INKeyImageProducing, INCacheableContainer, INJSONSerializable, INImageProxyInjecting, INCodableAttributeRelationComparing, INIntentResolutionResultDataProviding>
/* instance methods */
- (id)resolutionResultDataForIntent:(id)intent intentSlotDescription:(id)description error:(id *)error;
- (id)_JSONDictionaryRepresentationForIntent:(id)intent parameterName:(id)name;
- (void)transformResolutionResultForIntent:(id)intent intentSlotDescription:(id)description withOptionsProvider:(id)provider completion:(id /* block */)completion;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_intents_indexingRepresentation;
- (BOOL)_intents_compareValue:(id)value relation:(unsigned long long)relation;
- (void)_injectProxiesForImages:(id /* block */)images completion:(id /* block */)completion;
- (id)_intents_encodeWithJSONEncoder:(id)jsonencoder codableDescription:(id)description;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)cache;
- (id)_intents_readableTitleWithLocalizer:(id)localizer metadata:(id)metadata;
- (id)_intents_localizedCopyWithLocalizer:(id)localizer;
- (id)_keyImage;
- (long long)_compareSubProducerOne:(id)one subProducerTwo:(id)two;
@end

#endif /* NSArray_INKeyImageProducing_h */
