//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef __NSCFURLLocalSessionConnection_h
#define __NSCFURLLocalSessionConnection_h
@import Foundation;

#include "__NSCFURLSessionConnection.h"
#include "NSCopying-Protocol.h"
#include "NSURLAuthenticationChallengeSender-Protocol.h"
#include "NSURLResponse.h"

@class NSError, NSString;
@protocol OS_dispatch_data;

@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection<NSURLAuthenticationChallengeSender, NSCopying> {
  /* instance variables */
  struct SessionConnectionLoadable { undefined * * x0; undefined * * x1; undefined * * x2; id x3; } * _loaderClient;
  struct URLConnectionLoader { undefined * * x0; struct __CFAllocator * x1; undefined * * x2; unsigned char x3; unsigned char x4; struct InterfaceRequiredForLoader * x5; id x6; undefined * * x7; undefined * * x8; id x9; id x10; long long x11; struct RedirectionRecorder * x12; unsigned char x13; unsigned char x14; unsigned char x15; id x16; unsigned char x17; double x18; double x19; unsigned char x20; struct URLProtocol * x21; id x22; unsigned char x23; struct CoreSchedulingSet * x24; double x25; double x26; unsigned long long x27; struct ConfigFlags { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; } x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; BOOL x33; } * _loader;
  BOOL _canceled;
  long long _suspended;
  NSObject<OS_dispatch_data> *_pendingData;
  long long _pendingCompletion;
  unsigned long long _didReceiveResponseDisposition;
  NSError *_pendingError;
  int _state;
  long long _clientBufferLength;
  NSObject<OS_dispatch_data> *_sniffData;
  NSURLResponse *_sniffResponse;
  BOOL _isMixedReplace;
  BOOL _didCheckMixedReplace;
  BOOL _didCheckCredentialsSuppliedInURL;
  BOOL _actuallyTriedCredentialsSuppliedInURL;
  unsigned long long _maxDataSegmentCoalesceThreshhold;
  unsigned long long _maxDataSegmentCount;
  unsigned int _didReceiveDataCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTask:(id)task delegate:(id)delegate delegateQueue:(id)queue;
- (void)dealloc;
- (void)withLoaderAsync:(id /* block */)async;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)setIsDownload:(BOOL)download;
- (void)setPoolPriority:(long long)priority;
- (void)setPriorityHint:(float)hint incremental:(BOOL)incremental;
- (void)setBytesPerSecondLimit:(long long)limit;
- (void)expectedProgressTargetChanged;
- (void)_ackBytes:(long long)bytes;
- (void)_didUseCachedResponse;
- (void)_didReceiveInformationalResponse:(id)response;
- (void)_didReceiveResponse:(id)response sniff:(BOOL)sniff;
- (void)_didReceiveData:(id)data;
- (void)_didSendBodyData:(struct UploadProgressInfo { long long x0; long long x1; long long x2; })data;
- (void)_didFinishWithError:(id)error;
- (void)_willSendRequestForEstablishedConnection:(id)connection completion:(id /* block */)completion;
- (void)_connectionIsWaitingWithReason:(long long)reason;
- (void)_conditionalRequirementsChanged:(BOOL)changed;
- (void)_alternatePathAvailable:(int)available;
- (void)_redirectRequest:(id)request redirectResponse:(id)response completion:(id /* block */)completion;
- (void)_didReceiveChallenge:(id)challenge;
- (void)_needNewBodyStream;
- (void)_needNewBodyStreamFromOffset:(long long)offset;
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)challenge;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)challenge;
- (void)cancelAuthenticationChallenge:(id)challenge;
- (void)_capturedSocketInputStream:(id)stream outputStream:(id)stream;
- (void)_captureTransportConnection:(struct shared_ptr<TransportConnection> { struct TransportConnection * x0; struct __shared_weak_count * x1; })connection extraBytes:(id)bytes;
@end

#endif /* __NSCFURLLocalSessionConnection_h */
