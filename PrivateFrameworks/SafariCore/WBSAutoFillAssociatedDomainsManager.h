//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSAutoFillAssociatedDomainsManager_h
#define WBSAutoFillAssociatedDomainsManager_h
@import Foundation;

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBSAutoFillAssociatedDomainsManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableDictionary *_domainToDomainsWithAssociatedCredentials;
  NSMutableDictionary *_domainsToDomainsToConsiderIdentical;
}

@property (copy, nonatomic) NSArray *domainsWithAssociatedCredentials;
@property (copy, nonatomic) NSArray *domainsToConsiderIdentical;

/* instance methods */
- (id)init;
- (id)initWithDomainsWithAssociatedCredentials:(id)credentials;
- (id)initWithDomainsWithAssociatedCredentials:(id)credentials domainsToConsiderIdentical:(id)identical;
- (id)domainsWithAssociatedCredentialsForDomain:(id)domain;
- (id)domainsToConsiderIdenticalToDomain:(id)domain;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (void)_updateDomainToDomainsToConsiderIdentical;
@end

#endif /* WBSAutoFillAssociatedDomainsManager_h */
