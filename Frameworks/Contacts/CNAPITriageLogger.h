//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNAPITriageLogger_h
#define CNAPITriageLogger_h
@import Foundation;

#include "CNAPITriageLogger-Protocol.h"

@class NSString;
@protocol OS_os_log;

@interface CNAPITriageLogger : NSObject<CNAPITriageLogger>

@property (readonly) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setThreadEntryPoint:(SEL)point;
+ (id)threadEntryPoint;
+ (id)os_log;

/* instance methods */
- (id)init;
- (void)willExecuteFetchRequest:(id)request;
- (void)didExecuteFetchRequest:(id)request duration:(double)duration;
- (void)request:(id)request encounteredError:(id)error;
- (void)request:(id)request containsContact:(id)contact;
- (void)clientStoppedEnumerationForRequest:(id)request;
- (void)didReturnAllResultsForContactFetchRequest:(id)request;
- (void)request:(id)request spentTimeInClientCode:(double)code;
- (void)request:(id)request willReturnAnchor:(id)anchor;
- (void)request:(id)request failedWithError:(id)error;
@end

#endif /* CNAPITriageLogger_h */
