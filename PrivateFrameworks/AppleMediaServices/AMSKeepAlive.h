//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSKeepAlive_h
#define AMSKeepAlive_h
@import Foundation;

#include "AMSRBSKeepAlive.h"
#include "OS_os_transaction-Protocol.h"

@class NSString;

@interface AMSKeepAlive : NSObject {
  /* instance variables */
  NSObject<OS_os_transaction> *_transaction;
  NSString *_logKey;
  AMSRBSKeepAlive *_rbsKeepAlive;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long style;

/* class methods */
+ (id)keepAliveWithFormat:(id)format;
+ (id)keepAliveWithName:(id)name;
+ (id)keepAliveWithName:(id)name style:(long long)style;
+ (void)keepAliveWithName:(id)name style:(long long)style block:(id /* block */)block;
+ (id)rbs_keepAliveWithName:(id)name;
+ (id)rbs_keepAliveWithName:(id)name style:(long long)style;
+ (void)rbs_keepAliveWithName:(id)name style:(long long)style block:(id /* block */)block;
+ (BOOL)_isRBSAssertionsEnabled;
+ (void)_accessAssertionCache:(id /* block */)cache;
+ (void)_handleAssertionExpiration;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithName:(id)name style:(long long)style;
- (id)initRBSWithName:(id)name;
- (id)initRBSWithName:(id)name style:(long long)style;
- (void)dealloc;
- (void)invalidate;
- (void)rbs_invalidate;
- (id)_assertionName;
- (id)_cacheKey;
- (void)_removeOSTransaction;
- (void)_removeProcessAssertion;
- (void)_startLogTimer;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
@end

#endif /* AMSKeepAlive_h */
