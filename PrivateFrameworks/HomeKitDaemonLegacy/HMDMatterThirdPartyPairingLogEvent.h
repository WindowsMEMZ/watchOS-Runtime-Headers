//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMatterThirdPartyPairingLogEvent_h
#define HMDMatterThirdPartyPairingLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSUUID;

@interface HMDMatterThirdPartyPairingLogEvent : HMMLogEvent<HMMCoreAnalyticsLogging>

@property (retain, nonatomic) NSNumber *pairingDuration;
@property (retain, nonatomic) NSNumber *success;
@property (copy, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *underlyingErrorDomain;
@property (retain, nonatomic) NSNumber *underlyingErrorCode;
@property (copy, nonatomic) NSString *longestStateName;
@property (retain, nonatomic) NSNumber *longestStateDuration;
@property (retain, nonatomic) NSNumber *matterCategoryNumber;
@property (retain, nonatomic) NSNumber *matterVendorNumber;
@property (retain, nonatomic) NSNumber *matterProductNumber;
@property (retain, nonatomic) NSNumber *matterProductID;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSNumber *threadSetupDuration;
@property (copy, nonatomic) NSNumber *pairingWindowOpenedWithPasscodeDuration;
@property (copy, nonatomic) NSString *accessoryTransportType;
@property (retain, nonatomic) NSNumber *supportsSoftAP;
@property (retain, nonatomic) NSNumber *hasShortDiscriminator;
@property (copy, nonatomic) NSString *client;
@property (retain, nonatomic) NSNumber *communicationProtocol;
@property (retain, nonatomic) NSNumber *requiresMatterCustomCommissioningFlow;
@property (retain, nonatomic) NSNumber *credentialsSentToClient;
@property (retain, nonatomic) NSNumber *providedWiFiScanResults;
@property (retain, nonatomic) NSNumber *providedThreadScanResults;
@property (retain, nonatomic) NSNumber *knownToSystemCommissioner;
@property (retain, nonatomic) NSNumber *discoveredOverBLE;
@property (retain, nonatomic) NSNumber *caseSessionSanityCheckPassed;
@property (nonatomic) BOOL cleanClose;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

/* instance methods */
@end

#endif /* HMDMatterThirdPartyPairingLogEvent_h */
