//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECExchangeAccount_h
#define ECExchangeAccount_h
@import Foundation;

#include "ECAccount.h"

@class NSDate, NSString;

@interface ECExchangeAccount : ECAccount

@property (copy, nonatomic) NSString *inboxMailboxName;
@property (copy, nonatomic) NSString *journalMailboxName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSString *folderHierarchySyncState;

/* class methods */
+ (id)standardPorts;
+ (id)standardSSLPorts;

/* instance methods */
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
@end

#endif /* ECExchangeAccount_h */
