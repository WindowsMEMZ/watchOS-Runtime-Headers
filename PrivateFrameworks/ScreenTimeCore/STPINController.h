//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STPINController_h
#define STPINController_h
@import Foundation;

#include "STCoreUser.h"

@class NSDate;
@protocol OS_dispatch_source;

@interface STPINController : NSObject

@property (readonly, nonatomic) STCoreUser *user;
@property (retain) NSObject<OS_dispatch_source> *backoffTimer;
@property (copy) NSDate *timeoutEndDate;
@property (readonly) BOOL canRecoveryAuthenticate;

/* class methods */
+ (unsigned long long)pinLength;

/* instance methods */
- (id)initWithUser:(id)user;
- (void)setPIN:(id)pin withRecoveryAppleIDPrompt:(id /* block */)idprompt completionHandler:(id /* block */)handler;
- (void)updatePIN:(id)pin toPIN:(id)pin withRecoveryAppleIDPrompt:(id /* block */)idprompt completionHandler:(id /* block */)handler;
- (void)removePIN:(id)pin completionHandler:(id /* block */)handler;
- (BOOL)_isPINValid:(id)pinvalid;
- (void)_setNewPIN:(id)pin currentPIN:(id)pin recoveryAppleIDPrompt:(id /* block */)idprompt completionHandler:(id /* block */)handler;
- (BOOL)_setPasscode:(id)passcode recoveryAppleID:(id)id forUser:(id)user error:(id *)error;
- (BOOL)_saveChangesForUser:(id)user error:(id *)error;
- (BOOL)authenticateWithPIN:(id)pin error:(id *)error;
- (void)authenticateWithPIN:(id)pin allowPasscodeRecovery:(BOOL)recovery completionHandler:(id /* block */)handler;
- (void)authenticateWithPIN:(id)pin completionHandler:(id /* block */)handler;
- (BOOL)_authenticateWithPIN:(id)pin forUser:(id)user allowPasscodeRecovery:(BOOL)recovery error:(id *)error;
- (id)_timeoutEndDateForAttemptNumber:(long long)number;
- (void)_beginTimeoutUntilDate:(id)date;
@end

#endif /* STPINController_h */
