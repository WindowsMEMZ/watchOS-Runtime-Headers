//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDMMCSRequestOptions_h
#define CKDMMCSRequestOptions_h
@import Foundation;

@class C2MetricOptions, CKContainerID, CKOperationMMCSRequestOptions, NSArray, NSData, NSDictionary, NSNumber, NSString;
@protocol C2NetworkingDelegate;

@interface CKDMMCSRequestOptions : NSObject

@property (nonatomic) long long databaseScope;
@property (retain, nonatomic) CKContainerID *containerID;
@property (retain, nonatomic) NSString *topmostParentOperationID;
@property (retain, nonatomic) NSString *topmostParentOperationGroupID;
@property (retain, nonatomic) NSString *applicationBundleIdentifierForContainerAccess;
@property (retain, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution;
@property (retain, nonatomic) NSString *applicationSecondaryID;
@property (retain, nonatomic) NSArray *zoneNames;
@property (retain, nonatomic) NSString *deviceHardwareID;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) BOOL allowsPowerNapScheduling;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long clientQueuePriority;
@property (nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures;
@property (nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (retain, nonatomic) C2MetricOptions *metricOptions;
@property (nonatomic) BOOL isCrossOwner;
@property (retain, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (retain, nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate;
@property (nonatomic) unsigned long long networkServiceType;
@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;

/* instance methods */
- (id)initWithOperation:(id)operation;
- (id)CKPropertiesDescription;
- (id)description;
- (BOOL)usesBackgroundSession;
- (id)MMCSOptions;
@end

#endif /* CKDMMCSRequestOptions_h */
