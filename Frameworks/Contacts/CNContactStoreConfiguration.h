//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactStoreConfiguration_h
#define CNContactStoreConfiguration_h
@import Foundation;

#include "CNContactsEnvironment.h"

@class CNManagedConfiguration;
@protocol OS_tcc_identity;

@interface CNContactStoreConfiguration : NSObject

@property (retain, nonatomic) CNContactsEnvironment *environment;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (nonatomic) BOOL isContactsProvider;
@property (nonatomic) BOOL leaveSingleStoresUnwrapped;
@property (nonatomic) BOOL includeLocalContacts;
@property (nonatomic) BOOL includeSuggestedContacts;
@property (nonatomic) BOOL includeDonatedContacts;
@property (nonatomic) BOOL includeIncludeManagedAppleIDs;
@property (nonatomic) BOOL includeSharedPhotoContacts;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic) BOOL useOutOfProcessMapperExclusively;
@property (nonatomic) BOOL useInProcessMapperExclusively;

/* instance methods */
- (id)init;
- (id)description;
@end

#endif /* CNContactStoreConfiguration_h */
