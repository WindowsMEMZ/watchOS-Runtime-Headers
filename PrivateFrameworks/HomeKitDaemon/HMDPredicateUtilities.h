//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPredicateUtilities_h
#define HMDPredicateUtilities_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHome.h"
#include "HMFLogging-Protocol.h"

@class BOOL *, NSString;

@interface HMDPredicateUtilities : HMFObject<HMFLogging>

@property (readonly, copy) NSString *logIdentifier;
@property unsigned long long cameraSignificantEvent;
@property unsigned long long personFamiliarityOptions;
@property unsigned long long audioAnalysisEventNotificationOptions;
@property (weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)predicateCodingClasses;
+ (id)decodePredicateFromData:(id)data error:(id *)error;
+ (id)encodePredicate:(id)predicate error:(id *)error;
+ (id)logCategory;
+ (id)filteredPredicate:(id)predicate withUserUUIDs:(id)uuids;
+ (id)unarchiveFromData:(id)data error:(id *)error;

/* instance methods */
- (id)initWithHome:(id)home logIdentifier:(id)identifier;
- (id)sunrise;
- (id)sunset;
- (id)rewritePredicate:(id)predicate currentCharacteristicInPredicate:(id *)predicate characteristicsToRead:(id)read homePresence:(id)presence;
- (id)compareValueOfCharacteristic:(id)characteristic againstValue:(id)value operatorType:(id)type;
- (id)comparePresence:(id)presence operatorType:(id)type homePresence:(id)presence;
- (id)updatePredicate:(id)predicate currentCharacteristicInPredicate:(id *)predicate conditionModified:(BOOL *)modified removedCharacteristic:(id)characteristic underService:(id)service underAccessory:(id)accessory;
- (id)updatePredicate:(id)predicate removedUser:(id)user conditionModified:(BOOL *)modified;
- (id)predicateWithoutStaleCharacteristicsFromPredicate:(id)predicate accessory:(id)accessory conditionModified:(BOOL *)modified;
- (id)_updatePredicate:(id)predicate staleCharacteristicInCurrentPredicate:(BOOL *)predicate accessory:(id)accessory conditionModified:(BOOL *)modified;
- (id)rewriteNowAdjustedForHomeTimeZone:(id)zone;
- (id)addDeltaToNow:(id)now;
- (id)dateTodayMatchingComponents:(id)components;
- (id)rewritePredicateForClient:(id)client;
- (id)rewritePredicateForDaemon:(id)daemon message:(id)message;
- (id)rewritePredicate:(id)predicate forDaemon:(BOOL)daemon message:(id)message;
- (BOOL)containsPresenceEvents:(id)events;
- (id)generateAnalyticsData:(id)data;
- (void)fillAnalyticsData:(id)data forPredicate:(id)predicate;
@end

#endif /* HMDPredicateUtilities_h */
