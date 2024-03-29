//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKMessagesAppSharedContext_h
#define PKMessagesAppSharedContext_h
@import Foundation;

#include "PKPaymentDataProviderDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSPointerArray, NSString, PKPaymentDefaultDataProvider, PKTransactionSource;

@interface PKMessagesAppSharedContext : NSObject<PKPaymentDataProviderDelegate> {
  /* instance variables */
  NSPointerArray *_weakBubbleAppControllers;
  NSMutableArray *_pendingPrimaryHandlers;
  PKPaymentDefaultDataProvider *_paymentServiceDataProvider;
  PKTransactionSource *_transactionSource;
  NSMutableDictionary *_externalizedControllerStateStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedContext;

/* instance methods */
- (id)init;
- (void)persistExternalizedControllerState:(id)state forMessageIdentifier:(id)identifier;
- (id)externalizedControllerStateForMessageIdentifier:(id)identifier;
- (void)removeExternalizedControllerStateDataForMessageIdentifier:(id)identifier;
- (id)_directoryPath;
- (id)_sharedDirectoryPath;
- (id)_urlForMessageIdentifier:(id)identifier;
- (void)_purgeOldCacheEntries;
@end

#endif /* PKMessagesAppSharedContext_h */
