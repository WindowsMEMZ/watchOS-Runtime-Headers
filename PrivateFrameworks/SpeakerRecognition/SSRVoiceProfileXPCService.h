//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRVoiceProfileXPCService_h
#define SSRVoiceProfileXPCService_h
@import Foundation;

#include "SSRVoiceProfileXPCClient.h"
#include "SSRVoiceProfileXPCClientDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileXPCService : NSObject<SSRVoiceProfileXPCClientDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SSRVoiceProfileXPCClient *xpcClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedService;

/* instance methods */
- (id)init;
- (void)fetchEnrollmentStatusForSiriProfileId:(id)id forLanguageCode:(id)code completion:(id /* block */)completion;
- (id)_createXPCClientConnectionIfNeeded:(id)needed;
- (void)ssrVoiceProfileXPCClient:(id)xpcclient didDisconnect:(BOOL)disconnect;
- (void)_teardownXPCClientIfNeeded;
@end

#endif /* SSRVoiceProfileXPCService_h */
