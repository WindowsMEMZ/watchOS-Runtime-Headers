//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKActivitySummaryQueryClientInterface_Protocol_h
#define HKActivitySummaryQueryClientInterface_Protocol_h
@import Foundation;

@protocol HKActivitySummaryQueryClientInterface <HKQueryClientInterface>
/* instance methods */
- (void)client_deliverActivitySummaries:(id)summaries isFinalBatch:(BOOL)batch clearPendingBatches:(BOOL)batches queryUUID:(id)uuid;
@end

#endif /* HKActivitySummaryQueryClientInterface_Protocol_h */
