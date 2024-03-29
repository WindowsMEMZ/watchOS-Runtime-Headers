//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef TAStore_h
#define TAStore_h
@import Foundation;

#include "TADeviceRecord.h"
#include "TAEventBuffer.h"
#include "TAStoreObserver-Protocol.h"
#include "TAStoreRequestProtocol-Protocol.h"
#include "TAVisitState.h"

@class NSDate, NSHashTable, NSString;

@interface TAStore : NSObject<TAStoreObserver, TAStoreRequestProtocol> {
  /* instance variables */
  NSDate *_lastLocationDate;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSDate *clock;
@property (readonly, nonatomic) TAEventBuffer *eventBuffer;
@property (readonly, nonatomic) TAVisitState *visitState;
@property (readonly, nonatomic) TADeviceRecord *deviceRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventBufferSettings:(id)settings scanRequestSettings:(id)settings visitStateSettings:(id)settings deviceRecordSettings:(id)settings;
- (id)fetchTAUnknownBeacon:(id)beacon;
- (void)requestAIS:(id)ais;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)visitState:(id)state didChangeStateFromType:(unsigned long long)type toType:(unsigned long long)type;
- (void)visitState:(id)state didIssueMetricsSubmissionHint:(unsigned long long)hint;
- (void)updateClock:(id)clock;
- (BOOL)shouldAddTASPAdvertisement:(id)taspadvertisement;
- (BOOL)shouldAddTALocationLite:(id)lite;
- (BOOL)shouldAddTACLVisit:(id)taclvisit;
- (void)addTAEvent:(id)taevent andAppendOutgoingRequestsTo:(id)to;
- (BOOL)isEqual:(id)equal;
@end

#endif /* TAStore_h */
