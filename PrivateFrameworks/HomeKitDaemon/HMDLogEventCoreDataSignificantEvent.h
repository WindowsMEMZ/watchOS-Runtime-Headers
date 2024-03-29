//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLogEventCoreDataSignificantEvent_h
#define HMDLogEventCoreDataSignificantEvent_h
@import Foundation;

#include "HMMLogEvent.h"
#include "HMDDiagnosticReportLogging-Protocol.h"

@class NSString;

@interface HMDLogEventCoreDataSignificantEvent : HMMLogEvent<HMDDiagnosticReportLogging>

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, nonatomic) unsigned long long reason;
@property (retain, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *extraContext;

/* instance methods */
- (void)updateDiagnosticReportSignature:(id)signature;
- (id)initWithReason:(unsigned long long)reason;
- (id)initWithReason:(unsigned long long)reason author:(unsigned long long)author;
@end

#endif /* HMDLogEventCoreDataSignificantEvent_h */
