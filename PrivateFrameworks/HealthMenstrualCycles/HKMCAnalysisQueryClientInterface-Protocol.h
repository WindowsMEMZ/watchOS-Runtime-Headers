//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMCAnalysisQueryClientInterface_Protocol_h
#define HKMCAnalysisQueryClientInterface_Protocol_h
@import Foundation;

@protocol HKMCAnalysisQueryClientInterface <HKQueryClientInterface>
/* instance methods */
- (void)client_deliverAnalysis:(id)analysis queryUUID:(id)uuid;
@end

#endif /* HKMCAnalysisQueryClientInterface_Protocol_h */
