//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef _DAContactsAccountABLegacyProvider_h
#define _DAContactsAccountABLegacyProvider_h
@import Foundation;

#include "DAContactsAccountProvider.h"

@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider

@property (readonly, nonatomic) void * addressBook;

/* instance methods */
- (id)initWithAddressBook:(void *)book;
- (void)dealloc;
- (id)accountWithExternalIdentifier:(id)identifier createIfNecessary:(BOOL)necessary;
- (id)allAccounts;
- (id)accountForContainerWithIdentifier:(id)identifier;
@end

#endif /* _DAContactsAccountABLegacyProvider_h */
