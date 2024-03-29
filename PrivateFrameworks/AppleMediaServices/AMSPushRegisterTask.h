//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPushRegisterTask_h
#define AMSPushRegisterTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSBagProtocol-Protocol.h"

@class ACAccount, NSData, NSString;

@interface AMSPushRegisterTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) NSData *token;

/* instance methods */
- (id)initWithAccount:(id)account token:(id)token environment:(id)environment bag:(id)bag;
- (id)performTask;
@end

#endif /* AMSPushRegisterTask_h */
