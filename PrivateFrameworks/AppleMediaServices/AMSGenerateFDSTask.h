//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSGenerateFDSTask_h
#define AMSGenerateFDSTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSFDSRequest.h"

@class ACAccount, NSNumber, NSString;

@interface AMSGenerateFDSTask : AMSTask

@property (readonly, nonatomic) AMSFDSRequest *request;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, nonatomic) BOOL deviceSupportsAFDSValues;
@property (readonly, nonatomic) BOOL deviceSupportsAFDSValuesV2;
@property (readonly, nonatomic) NSString *logKey;
@property (readonly, nonatomic) NSNumber *purchaseIdentifier;

/* class methods */
+ (BOOL)deviceSupportsAFDSV2WithBag:(id)bag logKey:(id)key;

/* instance methods */
- (id)initWithPurchaseInfo:(id)info bag:(id)bag;
- (id)initWithRequest:(id)request bag:(id)bag;
- (id)runTask;
@end

#endif /* AMSGenerateFDSTask_h */
