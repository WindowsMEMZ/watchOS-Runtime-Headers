//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSAnisetteProvisionTask_h
#define AMSAnisetteProvisionTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSBagProtocol-Protocol.h"

@class ACAccount, NSData;

@interface AMSAnisetteProvisionTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;

/* instance methods */
- (id)initWithData:(id)data type:(long long)type account:(id)account bag:(id)bag;
- (id)performProvisioning;
@end

#endif /* AMSAnisetteProvisionTask_h */
