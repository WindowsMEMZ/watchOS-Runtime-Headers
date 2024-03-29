//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCMDMPayload_h
#define MCMDMPayload_h
@import Foundation;

#include "MCPayload.h"

@class NSArray, NSData, NSNumber, NSString;

@interface MCMDMPayload : MCPayload

@property (readonly, nonatomic) NSNumber *useDevelopmentAPNSNum;
@property (readonly, nonatomic) NSNumber *signMessageNum;
@property (readonly, nonatomic) NSNumber *checkOutWhenRemovedNum;
@property (readonly, retain, nonatomic) NSString *identityUUID;
@property (retain, nonatomic) NSData *identityPersistentID;
@property (readonly, retain, nonatomic) NSString *topic;
@property (readonly, retain, nonatomic) NSString *serverURLString;
@property (readonly, retain, nonatomic) NSArray *serverPinningUUIDs;
@property (retain, nonatomic) NSArray *serverPinningPersistentRefs;
@property (readonly, nonatomic) BOOL useDevelopmentAPNS;
@property (readonly, retain, nonatomic) NSString *checkInURLString;
@property (readonly, retain, nonatomic) NSArray *checkInPinningUUIDs;
@property (retain, nonatomic) NSArray *checkInPinningPersistentRefs;
@property (readonly, nonatomic) BOOL pinningRevocationCheckRequired;
@property (readonly, nonatomic) unsigned long long accessRights;
@property (readonly, retain, nonatomic) NSArray *localizedAccessRightDescriptions;
@property (readonly, nonatomic) BOOL signMessage;
@property (readonly, nonatomic) BOOL checkOutWhenRemoved;
@property (readonly, nonatomic) NSArray *serverCapabilities;
@property (readonly, retain, nonatomic) NSString *managedAppleID;
@property (readonly, retain, nonatomic) NSString *managedAppleIDName;
@property (readonly, retain, nonatomic) NSString *assignedManagedAppleID;
@property (readonly, retain, nonatomic) NSString *enrollmentMode;
@property (nonatomic) BOOL isUserEnrollment;
@property (readonly, nonatomic) BOOL supportUserChannel;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *enrollmentID;
@property (retain, nonatomic) NSString *iCloudEnrollmentID;
@property (retain, nonatomic) NSString *easEnrollmentID;
@property (readonly, retain, nonatomic) NSNumber *pollingIntervalMinutes;
@property (retain, nonatomic) NSNumber *requiredAppIDForMDM;

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

/* instance methods */
- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)field;
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)stubDictionary;
- (id)verboseDescription;
- (id)installationWarnings;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)payloadDescriptionKeyValueSections;
- (id)kvsForCertUUIDs:(id)uuids persistentRefs:(id)refs labelKey:(id)key;
@end

#endif /* MCMDMPayload_h */
