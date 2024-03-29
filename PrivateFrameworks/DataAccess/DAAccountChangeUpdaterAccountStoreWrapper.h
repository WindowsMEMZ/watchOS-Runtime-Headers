//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2653.2.1.0.0
//
#ifndef DAAccountChangeUpdaterAccountStoreWrapper_h
#define DAAccountChangeUpdaterAccountStoreWrapper_h
@import Foundation;

#include "DAAccountChangeHandlerAccountStoreUpdater-Protocol.h"

@class ACAccountStore, NSString;

@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject<DAAccountChangeHandlerAccountStoreUpdater> {
  /* instance variables */
  ACAccountStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountStore:(id)store;
- (void)addAccount:(id)account withCompletionHandler:(id /* block */)handler;
- (void)updateAccount:(id)account withCompletionHandler:(id /* block */)handler;
- (void)removeAccount:(id)account completion:(id /* block */)completion;
@end

#endif /* DAAccountChangeUpdaterAccountStoreWrapper_h */
