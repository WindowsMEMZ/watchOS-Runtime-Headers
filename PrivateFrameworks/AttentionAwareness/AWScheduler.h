//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 137.60.2.0.0
//
#ifndef AWScheduler_h
#define AWScheduler_h
@import Foundation;

#include "AWAttentionSampler.h"
#include "AWAttentionStreamer.h"
#include "AWSchedulerObserver-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWScheduler : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_timer;
  NSMutableArray *_clients;
  NSMutableDictionary *_streamingClients;
  NSMutableDictionary *_interruptedStreamingClients;
  AWAttentionStreamer *_attentionStreamer;
  struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase;
  NSUserDefaults *_userDefaults;
  BOOL _useAVFoundation;
}

@property (weak, nonatomic) NSObject<AWSchedulerObserver> *observer;
@property (readonly, nonatomic) AWAttentionSampler *attentionSampler;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL allowFaceDetect;
@property (readonly, nonatomic) BOOL allowHIDEvents;
@property (readonly, nonatomic) BOOL allowMotionDetect;
@property (readonly, nonatomic) BOOL unitTestMode;

/* class methods */
+ (id)sharedScheduler;
+ (id)sharedMotionDetectScheduler;
+ (id)sharedUnitTestScheduler;

/* instance methods */
- (id)initWithOptions:(id)options;
- (id)description;
- (void)addClient:(id)client;
- (void)removeInvalidClientsWithConnection:(id)connection;
- (void)removeInvalidClients;
- (void)processHIDEvent:(struct __IOHIDEvent *)hidevent mask:(unsigned long long)mask timestamp:(unsigned long long)timestamp senderID:(unsigned long long)id displayUUID:(id)uuid;
- (void)setSmartCoverClosed:(BOOL)closed;
- (void)armEvents;
- (void)reevaluate;
- (unsigned long long)nextSamplingTimeForSamplingInterval:(unsigned long long)interval;
- (id)addStreamingClient:(id)client withIdentifier:(int)identifier;
- (void)removeStreamingClientwithIdentifier:(int)identifier;
- (id)streamFaceDetectEvents;
- (id)streamFaceDetectEventsWithOptions:(struct { BOOL x0; BOOL x1; })options;
- (id)cancelFaceDetectStream:(id)stream withIdentifier:(id)identifier;
- (void)handleNotification:(unsigned long long)notification;
- (void)setClientAsInterrupted:(id)interrupted forKey:(id)key;
- (BOOL)shouldActivateAttentionDetectionForSampling;
- (BOOL)shouldActivateAttentionDetectForStreaming;
- (BOOL)shouldActivateEyeReliefForStreaming;
- (BOOL)shouldActivateMotionDetectForSampling;
- (double)calculateTimeDelta:(unsigned long long)delta endTime:(unsigned long long)time timebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })timebase;
- (BOOL)canRunMotionDetect;
@end

#endif /* AWScheduler_h */
