//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHAwardsKeyValueServerInterface_Protocol_h
#define ACHAwardsKeyValueServerInterface_Protocol_h
@import Foundation;

@protocol ACHAwardsKeyValueServerInterface <NSObject>
/* instance methods */
- (void)remote_protectedDataAvailableWithCompletion:(id /* block */)completion;
- (void)remote_setValue:(id)value forKey:(id)key domain:(id)domain completion:(id /* block */)completion;
- (void)remote_setValuesWithDictionary:(id)dictionary domain:(id)domain completion:(id /* block */)completion;
- (void)remote_setValuesWithDomainDictionary:(id)dictionary completion:(id /* block */)completion;
- (void)remote_setLegacyValuesWithDictionary:(id)dictionary completion:(id /* block */)completion;
- (void)remote_valueForKey:(id)key domain:(id)domain completion:(id /* block */)completion;
- (void)remote_valuesForKeys:(id)keys domain:(id)domain completion:(id /* block */)completion;
- (void)remote_removeValuesForKeys:(id)keys domain:(id)domain completion:(id /* block */)completion;
- (void)remote_removeValuesForKeysInDomains:(id)domains completion:(id /* block */)completion;
@end

#endif /* ACHAwardsKeyValueServerInterface_Protocol_h */
