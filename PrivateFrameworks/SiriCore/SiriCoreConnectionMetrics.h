//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.4.1.0.0
//
#ifndef SiriCoreConnectionMetrics_h
#define SiriCoreConnectionMetrics_h
@import Foundation;

#include "SiriCoreConnectionMetrics.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SiriCoreConnectionMetrics : NSObject

@property (copy, nonatomic) NSNumber *timeUntilOpen;
@property (copy, nonatomic) NSNumber *timeUntilFirstByteRead;
@property (copy, nonatomic) NSNumber *attemptCount;
@property (copy, nonatomic) NSNumber *metricsCount;
@property (copy, nonatomic) NSNumber *meanPing;
@property (copy, nonatomic) NSNumber *pingCount;
@property (copy, nonatomic) NSNumber *unacknowledgedPingCount;
@property (copy, nonatomic) NSDictionary *tcpInfoMetricsByInterfaceName;
@property (copy, nonatomic) NSNumber *subflowCount;
@property (copy, nonatomic) NSNumber *connectedSubflowCount;
@property (copy, nonatomic) NSString *primarySubflowInterfaceName;
@property (copy, nonatomic) NSDictionary *subflowSwitchCounts;
@property (retain, nonatomic) SiriCoreConnectionMetrics *remoteMetrics;
@property (copy, nonatomic) NSString *connectionMethod;
@property (copy, nonatomic) NSString *connectionEdgeID;
@property (copy, nonatomic) NSArray *connectionMethodHistory;
@property (copy, nonatomic) NSString *connectionEdgeType;
@property (copy, nonatomic) NSNumber *connectionFallbackReason;
@property (copy, nonatomic) NSNumber *connectionDelay;
@property (copy, nonatomic) NSNumber *firstTxByteDelay;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSNumber *signalStrengthBars;
@property (copy, nonatomic) NSString *providerStyle;
@property (copy, nonatomic) NSString *policyId;
@property (copy, nonatomic) NSDictionary *flowNetworkInterfaceType;
@property (copy, nonatomic) NSString *wifiPhyMode;
@property (copy, nonatomic) NSString *wifiChannelInfo;
@property (copy, nonatomic) NSNumber *rssi;
@property (copy, nonatomic) NSNumber *snr;
@property (copy, nonatomic) NSNumber *cca;
@property (copy, nonatomic) NSNumber *isCaptive;
@property (copy, nonatomic) NSDictionary *symptomsBasedNetworkQuality;
@property (copy, nonatomic) NSNumber *dnsResolutionTime;
@property (copy, nonatomic) NSNumber *connectionStartTimeToDNSResolutionTimeMsec;
@property (copy, nonatomic) NSNumber *connectionEstablishmentTimeMsec;
@property (copy, nonatomic) NSNumber *connectionStartTimeToConnectionEstablishmentTimeMsec;
@property (copy, nonatomic) NSNumber *tlsHandshakeTimeMsec;
@property (copy, nonatomic) NSNumber *connectionStartTimeToTLSHandshakeTimeMsec;
@property (copy, nonatomic) NSNumber *idsLastMessageDelay;
@property (copy, nonatomic) NSNumber *idsLastSocketDelay;
@property (copy, nonatomic) NSNumber *idsLastSocketOpenError;
@property (copy, nonatomic) NSString *tlsVersion;
@property (copy, nonatomic) NSNumber *simSubscriptions;

/* instance methods */
- (void)setConnectionMetricsFromStream:(id)stream isPop:(BOOL)pop withCompletion:(id /* block */)completion;
- (void)setConnectionMetricsFromStreamForDirect:(id)direct withCompletion:(id /* block */)completion;
- (void)setConnectionMetricsFromStreamForPOP:(id)pop withCompletion:(id /* block */)completion;
- (void)setTCPInfoMetricsByInterfaceName:(id)name;
- (void)_setConnectionMetricsTCPInfo:(id)tcpinfo;
- (void)setConnectionMetricsFromConnection:(id)connection isPop:(BOOL)pop isMPTCP:(BOOL)mptcp attemptedEndpoints:(id)endpoints completion:(id /* block */)completion;
- (void)setConnectionMetricsFromNWConnectionForDirect:(id)direct isMPTCP:(BOOL)mptcp attemptedEndpoints:(id)endpoints withCompletion:(id /* block */)completion;
- (void)setConnectionMetricsFromNWConnectionForPOP:(id)pop withCompletion:(id /* block */)completion;
- (void)setConnectionMetricsForIDS:(double)ids messageDelay:(double)delay openErrorCode:(unsigned long long)code;
- (id)getConnectionMetricsDescription;
@end

#endif /* SiriCoreConnectionMetrics_h */
