//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDTransactionArchiveReplayLogEvent_h
#define HMDTransactionArchiveReplayLogEvent_h
@import Foundation;

#include "HMDLaunchTimingEvent.h"

@interface HMDTransactionArchiveReplayLogEvent : HMDLaunchTimingEvent

@property (readonly) long long numUncommittedRecords;
@property (readonly) long long numUncommittedAndPushedRecords;

/* instance methods */
- (id)initWithNumUncommittedRecords:(long long)records numUncommittedAndPushedRecords:(long long)records;
@end

#endif /* HMDTransactionArchiveReplayLogEvent_h */
