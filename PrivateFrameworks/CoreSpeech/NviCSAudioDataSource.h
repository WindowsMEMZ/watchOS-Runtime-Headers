//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef NviCSAudioDataSource_h
#define NviCSAudioDataSource_h
@import Foundation;

#include "CSAudioStream.h"
#include "CSAudioStreamProvidingDelegate-Protocol.h"
#include "NviAudioDataSource-Protocol.h"
#include "NviContext.h"

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface NviCSAudioDataSource : NSObject<CSAudioStreamProvidingDelegate, NviAudioDataSource>

@property (retain, nonatomic) NviContext *nviCtx;
@property (retain, nonatomic) NSHashTable *receivers;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) unsigned long long numBytesPerSample;
@property (readonly, nonatomic) unsigned long long type;

/* instance methods */
- (id)init;
- (void)addReceiver:(id)receiver;
- (void)removeReceiver:(id)receiver;
- (void)startWithNviContext:(id)context didStartHandler:(id /* block */)handler;
- (void)stopWithDidStopHandler:(id /* block */)handler;
- (void)_createAudioStreamWithCurrentNviContext;
- (void)audioStreamProvider:(id)provider audioBufferAvailable:(id)available;
- (void)audioStreamProvider:(id)provider avBufferAvailable:(id)available;
- (void)audioStreamProvider:(id)provider didStopStreamUnexpectedly:(long long)unexpectedly;
- (void)audioStreamProvider:(id)provider audioChunkForTVAvailable:(id)tvavailable;
@end

#endif /* NviCSAudioDataSource_h */
