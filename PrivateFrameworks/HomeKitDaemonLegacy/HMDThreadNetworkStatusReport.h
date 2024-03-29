//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDThreadNetworkStatusReport_h
#define HMDThreadNetworkStatusReport_h
@import Foundation;

@interface HMDThreadNetworkStatusReport : NSObject

@property (readonly, nonatomic) unsigned long long numAdvertisedBRs;
@property (readonly, nonatomic) unsigned long long numAppleBRs;
@property (readonly, nonatomic) unsigned long long numThirdPartyBRs;
@property (readonly, nonatomic) unsigned long long numThreadNetworks;
@property (readonly, nonatomic) unsigned long long maxSimuIPPrefixesDetected;
@property (readonly, nonatomic) unsigned long long txTotal;
@property (readonly, nonatomic) unsigned long long txSuccess;
@property (readonly, nonatomic) unsigned long long txDelayAvg;
@property (readonly, nonatomic) unsigned long long rxTotal;
@property (readonly, nonatomic) unsigned long long rxSuccess;
@property (readonly, nonatomic) unsigned long long reportDuration;

/* instance methods */
- (id)initWithNumAdvertisedBRs:(unsigned long long)brs numAppleBRs:(unsigned long long)brs numThirdPartyBRs:(unsigned long long)brs numThreadNetworks:(unsigned long long)networks maxSimuIPPrefixesDetected:(unsigned long long)detected txTotal:(unsigned long long)total txSuccess:(unsigned long long)success txDelayAvg:(unsigned long long)avg rxTotal:(unsigned long long)total rxSuccess:(unsigned long long)success reportDuration:(unsigned long long)duration;
@end

#endif /* HMDThreadNetworkStatusReport_h */
