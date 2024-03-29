//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessoryPairingEvent_h
#define HMDAccessoryPairingEvent_h
@import Foundation;

#include "HMMHomeLogEvent.h"
#include "HMDAccessory.h"
#include "HMDAccessoryMetricVendorDetails.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDate, NSDictionary, NSError, NSString, NSUUID;

@interface HMDAccessoryPairingEvent : HMMHomeLogEvent<HMMCoreAnalyticsLogging>

@property (nonatomic) unsigned long long pairingUIState;
@property (nonatomic) unsigned long long recoveryType;
@property (nonatomic) unsigned long long previousRecoveryType;
@property (retain, nonatomic) NSDictionary *vendorDetailsForCoreAnalytics;
@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (retain, nonatomic) NSString *accessoryServerIdentifier;
@property (retain, nonatomic) NSString *accessoryAddRequestIdentifier;
@property (retain) HMDAccessory *pairedAccessory;
@property (retain, nonatomic) NSString *accessoryModel;
@property (retain, nonatomic) NSString *accessoryManufacturer;
@property (retain, nonatomic) NSString *accessoryCategory;
@property (retain, nonatomic) NSString *primaryServiceType;
@property (retain, nonatomic) HMDAccessoryMetricVendorDetails *vendorDetailsForReporting;
@property (copy, nonatomic) NSString *appIdentifier;
@property long long linkType;
@property long long communicationProtocol;
@property long long certificationStatus;
@property (readonly, nonatomic) BOOL addOperation;
@property BOOL addViaWAC;
@property BOOL wacLegacy;
@property unsigned long long authMethod;
@property BOOL usedWiFiPPSK;
@property BOOL usedOwnershipProof;
@property BOOL networkRouterAdd;
@property BOOL networkRouterReplace;
@property BOOL firstHAPAccessoryInHome;
@property BOOL firstHAPAccessoryInAnyHome;
@property long long retryCount;
@property BOOL threadAccessory;
@property BOOL btCommissioned;
@property (copy, nonatomic) NSError *threadCommissioningError;
@property (nonatomic) double threadCommissioningDuration;
@property unsigned int threadCapabilities;
@property unsigned int threadStatus;
@property (nonatomic) long long hmdAccessoryPairingEventResidentConfirmation;
@property (readonly, nonatomic) NSDate *residentConfirmationTimeStarted;
@property (readonly, nonatomic) double residentConfirmationDurationInSeconds;
@property (retain, nonatomic) NSString *lastAccessoryPairingState;
@property (retain, nonatomic) NSString *longestPairingState;
@property double longestPairingProgressStateDurationInMilliseconds;
@property (readonly, nonatomic) NSString *categoryType;
@property (readonly, nonatomic) NSString *productNumber;
@property (readonly, nonatomic) BOOL requiresMatterCustomCommissioningFlow;
@property (copy, nonatomic) NSDictionary *matterMetrics;
@property (copy, nonatomic) NSString *matterSoftwareVersionString;
@property (readonly, nonatomic) BOOL isPrimaryResidentOnline;
@property (readonly, nonatomic) BOOL hasResidentInHome;
@property (readonly, nonatomic) BOOL accessorySupportsWoL;
@property (nonatomic) BOOL retry;
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
+ (id)pairingAccessoryWithDescription:(id)description home:(id)home;
+ (id)pairingAccessory:(id)accessory home:(id)home;
+ (id)removingAccessory:(id)accessory hapAccessory:(id)accessory;
+ (BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

/* instance methods */
- (id)initWithUnpairedAccessory:(id)accessory pairedAccessory:(id)accessory hapAccessory:(id)accessory home:(id)home isAddOperation:(BOOL)operation;
- (id)initWithAccessoryDescription:(id)description home:(id)home;
- (void)setAddedViaWAC:(BOOL)wac;
- (void)setAuthenticationMethod:(unsigned long long)method;
- (void)pairedToServer:(id)server certificationStatus:(long long)status addedViaWAC:(BOOL)wac legacyWAC:(BOOL)wac;
- (void)updateEventPropertiesWithPairedAccessory:(id)accessory;
- (void)updateEventPropertiesWithHAPAccessory:(id)hapaccessory;
- (void)_updateThreadPropertiesWithPairedAccessory:(id)accessory;
- (BOOL)_isMatterAccessory;
- (void)submitAtDate:(id)date;
- (id)getLowestError:(id)error;
- (void)updateResidentConfirmationDurationWithConfirmation:(long long)confirmation;
- (id)residentConfirmationToString:(long long)string;
- (BOOL)isAddOperation;
- (BOOL)isAddViaWAC;
- (BOOL)isWacLegacy;
- (BOOL)didUseWiFiPPSK;
- (BOOL)didUseOwnershipProof;
- (BOOL)isNetworkRouterAdd;
- (BOOL)isNetworkRouterReplace;
- (BOOL)isFirstHAPAccessoryInHome;
- (BOOL)isFirstHAPAccessoryInAnyHome;
- (BOOL)isThreadAccessory;
- (BOOL)isBTCommissioned;
@end

#endif /* HMDAccessoryPairingEvent_h */
