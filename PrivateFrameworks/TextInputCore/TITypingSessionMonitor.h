//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITypingSessionMonitor_h
#define TITypingSessionMonitor_h
@import Foundation;

#include "TIBiomeObserver.h"
#include "TICoreAnalyticsEventDispatcher.h"
#include "TIDPEventDispatcher.h"
#include "TIFeatureUsageMetricsCache.h"
#include "TIKBUserModel.h"
#include "TIKeyboardInputManagerConfig.h"
#include "TIMetricDescriptorRegistry.h"
#include "TISKMetricCollector.h"
#include "TITypingDESRecordWriter.h"
#include "TITypingSession.h"
#include "TITypingSessionMonitoringProtocol-Protocol.h"

@class NSArray, NSLocale, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TITypingSessionMonitor : NSObject<TITypingSessionMonitoringProtocol> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) TIKeyboardInputManagerConfig *config;
@property (retain, nonatomic) TIMetricDescriptorRegistry *metricDescriptorRegistry;
@property (retain, nonatomic) TITypingDESRecordWriter *desRecordWriter;
@property (retain, nonatomic) NSArray *interactionObservers;
@property (retain, nonatomic) NSMutableArray *aggregatedEventObservers;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) TIKBUserModel *userModel;
@property (readonly, nonatomic) TISKMetricCollector *sensorKitMetricCollector;
@property (readonly, nonatomic) TICoreAnalyticsEventDispatcher *coreAnalyticsEventDispatcher;
@property (readonly, nonatomic) TIDPEventDispatcher *differentialPrivacyEventDispatcher;
@property (readonly, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache;
@property (readonly, nonatomic) TIBiomeObserver *biomeObserver;
@property (readonly, nonatomic) TITypingSession *currentTypingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)shouldRecordSession:(id)session;

/* instance methods */
- (id)initWithConfig:(id)config metricDescriptorRegistry:(id)registry;
- (void)addKeyInput:(id)input keyboardState:(id)state;
- (void)addDrawInputWithSyllableCount:(unsigned long long)count keyboardState:(id)state;
- (void)addTouchEvent:(id)event;
- (void)layoutDidChange:(id)change keyboardState:(id)state;
- (void)candidatesOffered:(id)offered keyboardState:(id)state;
- (void)acceptingCandidateWithTrigger:(id)trigger;
- (void)candidateAccepted:(id)accepted withInput:(id)input documentState:(id)state inputContext:(id)context inputStem:(id)stem predictionBarHit:(BOOL)hit useCandidateSelection:(BOOL)selection candidateIndex:(long long)index keyboardState:(id)state;
- (void)changingContextWithTrigger:(id)trigger;
- (void)contextDidChange:(id)change wordDelete:(BOOL)delete cursorMoved:(BOOL)moved extendsPriorWord:(BOOL)word inWord:(id)word range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range selectionLocation:(unsigned long long)location keyboardState:(id)state;
- (void)setClientID:(id)id keyboardState:(id)state;
- (id)resetInteractionObserversForNextSession;
- (void)endSessionWithInteractionObservers:(id)observers sessionParams:(id)params timestamp:(id)timestamp;
- (void)tearDown;
- (id)currentInteractionObservers;
- (id)_typingSessionFromInteractionObservers:(id)observers;
- (void)_loadInteractionObservers;
- (void)_lazyLoadAggregatedEventObservers;
- (void)_loadAggregatedEventObservers;
- (id)observeSession:(id)session sessionParams:(id)params;
@end

#endif /* TITypingSessionMonitor_h */
