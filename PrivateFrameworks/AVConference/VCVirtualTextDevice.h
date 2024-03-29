//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVirtualTextDevice_h
#define VCVirtualTextDevice_h
@import Foundation;

#include "VCMediaStreamDelegate-Protocol.h"
#include "VCMediaStreamProtocol-Protocol.h"
#include "VCTextReceiverDelegate-Protocol.h"
#include "VCTextSender-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface VCVirtualTextDevice : NSObject<VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate> {
  /* instance variables */
  int _clientPid;
  long long _state;
  NSObject<OS_dispatch_queue> *_queue;
  id _sendDelegate;
}

@property (nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
@property (nonatomic) struct tagVCMediaStreamDelegateRealtimeInstanceVTable { undefined * x0; } mediaStreamDelegateFunctions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)setStreamConfig:(id)config withError:(id *)error;
- (id)initWithSendDelegate:(id)delegate clientPid:(int)pid delegate:(id)delegate delegateFunctions:(const struct tagVCMediaStreamDelegateRealtimeInstanceVTable { undefined * x0; } *)functions delegateQueue:(id)queue;
- (void)dealloc;
- (id)sendDelegate;
- (id)start;
- (id)stop;
- (id)pause;
- (id)resume;
- (id)setPause:(BOOL)pause;
- (void)sendCharacter:(unsigned short)character;
- (void)sendText:(id)text;
- (void)didReceiveText:(id)text;
@end

#endif /* VCVirtualTextDevice_h */
