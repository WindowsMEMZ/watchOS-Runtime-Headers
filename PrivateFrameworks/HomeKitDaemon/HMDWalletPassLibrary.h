//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDWalletPassLibrary_h
#define HMDWalletPassLibrary_h
@import Foundation;

#include "HMFObject.h"
#include "HMDWalletPassLibrary-Protocol.h"
#include "HMDWalletPassLibraryDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSSet, NSString, PKPassLibrary;
@protocol OS_dispatch_queue;

@interface HMDWalletPassLibrary : HMFObject<HMFLogging, HMDWalletPassLibrary>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) PKPassLibrary *passLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDWalletPassLibraryDelegate> *delegate;
@property (readonly, copy) NSString *secureElementIdentifier;
@property (readonly, copy) NSSet *walletKeys;
@property (readonly) BOOL walletVisible;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithWorkQueue:(id)queue;
- (void)start;
- (void)addPassAtURL:(id)url flow:(id)flow completion:(id /* block */)completion;
- (void)updatePassAtURL:(id)url flow:(id)flow completion:(id /* block */)completion;
- (id)walletKeyWithTypeIdentifier:(id)identifier serialNumber:(id)number flow:(id)flow;
- (id)urlForWalletKeyWithTypeIdentifier:(id)identifier serialNumber:(id)number;
- (BOOL)removePassWithTypeIdentifier:(id)identifier serialNumber:(id)number flow:(id)flow;
- (void)fetchHomeKeySupportedWithFlow:(id)flow completion:(id /* block */)completion;
- (void)enableExpressWithAuthData:(id)data passTypeIdentifier:(id)identifier serialNumber:(id)number flow:(id)flow completion:(id /* block */)completion;
- (BOOL)isExpressModeEnabledForPassUniqueIdentifier:(id)identifier serialNumber:(id)number;
- (void)fetchIsExpressEnabledForPassWithTypeIdentifier:(id)identifier serialNumber:(id)number completion:(id /* block */)completion;
- (id)passUniqueIDOfWalletKeyWithTypeIdentifier:(id)identifier serialNumber:(id)number;
- (void)fetchExpressEnablementConflictingPassDescriptionForPassAtURL:(id)url completion:(id /* block */)completion;
- (void)generateHomeKeyNFCInfoWithReaderPublicKey:(id)key readerIdentifier:(id)identifier flow:(id)flow completion:(id /* block */)completion;
- (id)createTemporaryPassDirectoryURL;
- (void)acquireAssertionOfType:(unsigned long long)type withReason:(id)reason completion:(id /* block */)completion;
- (void)fetchTransactionKeyForPassWithTypeIdentifier:(id)identifier serialNumber:(id)number completion:(id /* block */)completion;
- (void)handlePassLibraryDidChangeNotification:(id)notification;
- (void)deleteKeyMaterialForSubCredentialId:(id)id;
- (BOOL)isWalletVisible;
@end

#endif /* HMDWalletPassLibrary_h */
