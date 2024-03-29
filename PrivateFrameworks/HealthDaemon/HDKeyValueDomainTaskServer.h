//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDKeyValueDomainTaskServer_h
#define HDKeyValueDomainTaskServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDKeyValueDomain.h"
#include "HDKeyValueDomainObserver-Protocol.h"
#include "HKKeyValueDomainServerInterface-Protocol.h"

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer<HDKeyValueDomainObserver, HKKeyValueDomainServerInterface> {
  /* instance variables */
  HDKeyValueDomain *_keyValueDomain;
}

/* class methods */
+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (void)_unitTest_overrideKeyValueDomainCategory:(long long)category;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_setNumber:(id)number forKey:(id)key completion:(id /* block */)completion;
- (void)remote_setData:(id)data forKey:(id)key completion:(id /* block */)completion;
- (void)remote_setDate:(id)date forKey:(id)key completion:(id /* block */)completion;
- (void)remote_setString:(id)string forKey:(id)key completion:(id /* block */)completion;
- (void)remote_setValuesWithDictionary:(id)dictionary completion:(id /* block */)completion;
- (void)remote_setValueForAllKeys:(id)keys completion:(id /* block */)completion;
- (void)remote_removeValuesForKeys:(id)keys completion:(id /* block */)completion;
- (void)remote_numberForKey:(id)key completion:(id /* block */)completion;
- (void)remote_dataForKey:(id)key completion:(id /* block */)completion;
- (void)remote_dateForKey:(id)key completion:(id /* block */)completion;
- (void)remote_stringForKey:(id)key completion:(id /* block */)completion;
- (void)remote_allValuesWithCompletion:(id /* block */)completion;
- (void)remote_observeChanges:(BOOL)changes completion:(id /* block */)completion;
- (void)didUpdateKeyValueDomain:(id)domain;
@end

#endif /* HDKeyValueDomainTaskServer_h */
