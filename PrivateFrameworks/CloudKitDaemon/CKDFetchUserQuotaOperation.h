//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchUserQuotaOperation_h
#define CKDFetchUserQuotaOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"

@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long quotaAvailable;
@property (retain, @dynamic, nonatomic) NSObject<CKFetchUserQuotaOperationCallbacks> *clientOperationCallbackProxy;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (int)operationType;
- (void)main;
@end

#endif /* CKDFetchUserQuotaOperation_h */
