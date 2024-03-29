//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef LBAudioCapture_h
#define LBAudioCapture_h
@import Foundation;

#include "CSAudioStream.h"
#include "CSXPCClientDelegate-Protocol.h"

@class CSXPCClient, NSString;
@protocol OS_dispatch_queue;

@interface LBAudioCapture : NSObject<CSXPCClientDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)startAudioCaptureWithRecordContext:(id)context startHostTime:(unsigned long long)time siriSessionUUID:(id)uuid completion:(id /* block */)completion;
- (void)_startRequestWithAudioContext:(id)context streamOption:(id)option streamProvider:(id)provider completion:(id /* block */)completion;
- (void)stopAudioCaptureWithReason:(unsigned long long)reason requestId:(id)id completion:(id /* block */)completion;
- (id)_stopStreamOptionWithReason:(unsigned long long)reason forRequestId:(id)id;
- (void)CSXPCClient:(id)csxpcclient didDisconnect:(BOOL)disconnect;
@end

#endif /* LBAudioCapture_h */
