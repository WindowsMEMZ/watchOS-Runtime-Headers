//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOReferenceTimeManager_h
#define GEOReferenceTimeManager_h
@import Foundation;

#include "GEOConfigChangeListenerDelegate-Protocol.h"
#include "GEOReferenceTimeData.h"

@class NSString, geo_isolater;
@protocol OS_dispatch_semaphore;

@interface GEOReferenceTimeManager : NSObject<GEOConfigChangeListenerDelegate> {
  /* instance variables */
  GEOReferenceTimeData *_refTimeData;
  geo_isolater *_iso;
  NSObject<OS_dispatch_semaphore> *_syncSem;
  BOOL _synchronized;
  BOOL _isGEOAPD;
  double _managerStartTime;
  unsigned int _attemptNum;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)_initInternal;
- (void)dealloc;
- (void)_reportCoreAnalyticAtTime:(double)time success:(BOOL)success error:(unsigned char)error attemptNo:(unsigned int)no;
- (void)_kernBootTimeResult:(id /* block */)result;
- (BOOL)_didKernBootTimeChange;
- (void)_persistBasisRefTimeData:(id)data;
- (id)_retrievePersistedBasisRefTimeData;
- (BOOL)_initFromPersistenceAtTime:(double)time;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void * x1; })key;
- (void)_startTimedSync;
- (void)_syncWithTimed;
- (double)_referenceTime;
- (void)referenceTimeResult:(id /* block */)result;
- (double)bestReferenceTime;
- (BOOL)_synchronized;
- (BOOL)synchronized;
@end

#endif /* GEOReferenceTimeManager_h */
