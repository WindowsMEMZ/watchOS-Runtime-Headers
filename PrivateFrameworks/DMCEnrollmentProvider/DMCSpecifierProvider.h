//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCSpecifierProvider_h
#define DMCSpecifierProvider_h
@import Foundation;

#include "AAUISpecifierProvider-Protocol.h"

@class ACAccount, AIDAAccountManager, NSArray, NSString;
@protocol AAUISpecifierProviderDelegate;

@interface DMCSpecifierProvider : NSObject<AAUISpecifierProvider>

@property (copy, nonatomic) NSArray *specifiers;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate;
@property (readonly, nonatomic) AIDAAccountManager *accountManager;
@property (readonly, nonatomic) ACAccount *rmAccount;
@property (nonatomic) BOOL isReloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountManager:(id)manager;
- (id)initWithAccountManager:(id)manager reloadNotification:(id)notification isLocalNotification:(BOOL)notification reloadIfMissingRMAccount:(BOOL)rmaccount;
- (id)initWithAccount:(id)account reloadNotification:(id)notification isLocalNotification:(BOOL)notification reloadIfMissingRMAccount:(BOOL)rmaccount;
- (void)_listenForNotification:(id)notification isLocalNotification:(BOOL)notification;
- (void)dealloc;
- (id)cachedSpecifiers:(id)specifiers;
- (void)reloadNotificationPosted:(id)posted;
- (void)reloadSpecifiers;
- (void)registerSpecifierBridgeForTableView:(id)view;
- (id)tableCellsForSpecifiersInTableView:(id)view;
- (id)cellForSpecifier:(id)specifier inTableView:(id)view;
- (id)specifiersReloadedNotificationName;
@end

#endif /* DMCSpecifierProvider_h */
