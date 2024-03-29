//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXCallDirectoryExtensionContext_h
#define CXCallDirectoryExtensionContext_h
@import Foundation;

#include "NSExtensionContext.h"
#include "CXCallDirectoryMutableLabeledPhoneNumberEntryData.h"
#include "CXCallDirectoryMutablePhoneNumberEntryData.h"
#include "CXCallDirectoryProviderVendorProtocol-Protocol.h"

@class NSString;
@protocol CXCallDirectoryExtensionContextDelegate;

@interface CXCallDirectoryExtensionContext : NSExtensionContext<CXCallDirectoryProviderVendorProtocol>

@property (retain, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingBlockingEntryData;
@property (nonatomic) long long pendingBlockingEntryChangeType;
@property (retain, nonatomic) CXCallDirectoryMutableLabeledPhoneNumberEntryData *pendingIdentificationEntryDataForAddition;
@property (retain, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingIdentificationEntryDataForRemoval;
@property (nonatomic) long long pendingIdentificationEntryChangeType;
@property (nonatomic) BOOL hasQueriedIsIncremental;
@property (copy, nonatomic) id /* block */ remoteObjectProxyGenerator;
@property (weak, nonatomic) NSObject<CXCallDirectoryExtensionContextDelegate> *delegate;
@property (readonly, nonatomic) BOOL incremental;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

/* instance methods */
- (id)initWithInputItems:(id)items listenerEndpoint:(id)endpoint contextUUID:(id)uuid;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)handler synchronous:(BOOL)synchronous;
- (void)appendBlockingEntryPhoneNumber:(long long)number changeType:(long long)type;
- (void)appendIdentificationEntryForAdditionWithPhoneNumber:(long long)number label:(id)label;
- (void)appendIdentificationEntryForRemovalWithPhoneNumber:(long long)number;
- (void)_flushPendingBlockingEntryData;
- (void)_flushPendingIdentificationEntryData;
- (BOOL)isIncremental;
- (void)addBlockingEntryWithNextSequentialPhoneNumber:(long long)number;
- (void)_performBlockIfIncremental:(id /* block */)incremental usingSelectorForExceptionMessage:(SEL)message;
- (void)removeBlockingEntryWithPhoneNumber:(long long)number;
- (void)removeAllBlockingEntries;
- (void)addIdentificationEntryWithNextSequentialPhoneNumber:(long long)number label:(id)label;
- (void)removeIdentificationEntryWithPhoneNumber:(long long)number;
- (void)removeAllIdentificationEntries;
- (void)completeRequestWithCompletionHandler:(id /* block */)handler;
- (void)requestFailedWithError:(id)error reply:(id /* block */)reply;
@end

#endif /* CXCallDirectoryExtensionContext_h */
