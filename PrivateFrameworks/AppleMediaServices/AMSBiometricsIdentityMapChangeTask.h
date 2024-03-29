//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSBiometricsIdentityMapChangeTask_h
#define AMSBiometricsIdentityMapChangeTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSURLSession.h"

@class ACAccount, NSURLSessionTask;

@interface AMSBiometricsIdentityMapChangeTask : AMSTask

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;

/* instance methods */
- (id)initWithAccount:(id)account session:(id)session task:(id)task;
- (id)perform;
@end

#endif /* AMSBiometricsIdentityMapChangeTask_h */
