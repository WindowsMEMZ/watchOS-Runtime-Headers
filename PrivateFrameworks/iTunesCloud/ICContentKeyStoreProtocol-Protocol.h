//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICContentKeyStoreProtocol_Protocol_h
#define ICContentKeyStoreProtocol_Protocol_h
@import Foundation;

@protocol ICContentKeyStoreProtocol 
/* instance methods */
- (BOOL)containsKeyForIdentifier:(id)identifier error:(id *)error;
- (id)loadKeyForIdentifier:(id)identifier error:(id *)error;
- (id)saveKey:(id)key forIdentifier:(id)identifier adamID:(id)id withRenewalDate:(id)date accountDSID:(id)dsid keyServerProtocolType:(long long)type;
- (id)saveKeyEntry:(id)entry;
- (id)incrementFailureCountForKeyWithIdentifier:(id)identifier;
- (id)removeKeyForIdentifier:(id)identifier;
- (id)removeAllKeys;
- (void)enumerateKeyEntriesUsingBlock:(id /* block */)block;
@end

#endif /* ICContentKeyStoreProtocol_Protocol_h */
