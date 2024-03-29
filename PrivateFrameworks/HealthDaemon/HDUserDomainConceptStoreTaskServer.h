//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDUserDomainConceptStoreTaskServer_h
#define HDUserDomainConceptStoreTaskServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDUserDomainConceptManager.h"
#include "HDUserDomainConceptObserver-Protocol.h"
#include "HKUserDomainConceptStoreServerInterface-Protocol.h"

@class NSString;

@interface HDUserDomainConceptStoreTaskServer : HDStandardTaskServer<HDUserDomainConceptObserver, HKUserDomainConceptStoreServerInterface> {
  /* instance variables */
  HDUserDomainConceptManager *_userDomainConceptManager;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _shouldObserveChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (void)dealloc;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_storeUserDomainConcepts:(id)concepts method:(long long)method completion:(id /* block */)completion;
- (void)remote_observeUserDomainConceptChanges:(BOOL)changes completion:(id /* block */)completion;
- (void)remote_createAndStoreUserDomainConceptWithConceptIdentifier:(id)identifier additionalProperties:(id)properties userDomainConceptTypeIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)userDomainConceptManager:(id)manager didAddUserDomainConcepts:(id)concepts;
- (void)userDomainConceptManager:(id)manager didUpdateUserDomainConcepts:(id)concepts;
- (void)userDomainConceptManager:(id)manager didDeleteUserDomainConcepts:(id)concepts;
- (void)userDomainConceptManager:(id)manager didJournalUserDomainConcepts:(id)concepts;
@end

#endif /* HDUserDomainConceptStoreTaskServer_h */
