//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCPayload_h
#define MCPayload_h
@import Foundation;

#include "MCProfile.h"

@class NSArray, NSDictionary, NSString;

@interface MCPayload : NSObject

@property (readonly, weak, nonatomic) MCProfile *profile;
@property (readonly, retain, nonatomic) NSString *friendlyName;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, retain, nonatomic) NSString *payloadDescription;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *organization;
@property (readonly, retain, nonatomic) NSString *UUID;
@property (readonly, nonatomic) long long version;
@property (retain, nonatomic) NSString *persistentResourceID;
@property (readonly, nonatomic) NSDictionary *restrictions;
@property (nonatomic) BOOL mustInstallNonInteractively;
@property (readonly, nonatomic) BOOL containsSensitiveUserInformation;
@property (readonly, retain, nonatomic) NSArray *installationWarnings;

/* class methods */
+ (id)_platformSpecificConfigurationPayloadClasses;
+ (id)_allKnownPayloadClasses;
+ (id)_installableTVConfigurationPayloadClasses;
+ (id)_installablePhoneConfigurationPayloadClasses;
+ (id)accountPayloads;
+ (id)unavailablePayloadsInEphemeralMultiUser;
+ (id)hrnRequiredPayloads;
+ (id)mdmAdoptablePayloads;
+ (id)cellularRequiredPayloads;
+ (id)supervisedRequiredPayloads;
+ (id)unavailableSystemPayloadsInEphemeralMultiUser;
+ (id)unavailableUserPayloadsInEphemeralMultiUser;
+ (id)availablePayloadsForUserEnrollment;
+ (id)payloadsFromArray:(id)array isStub:(BOOL)stub profile:(id)profile outError:(id *)error;
+ (id)payloadFromDictionary:(id)dictionary isStub:(BOOL)stub profile:(id)profile outError:(id *)error;
+ (id)missingFieldErrorWithField:(id)field underlyingError:(id)error;
+ (id)badFieldTypeErrorWithField:(id)field;
+ (id)badFieldValueErrorWithField:(id)field;
+ (id)badFieldValueErrorWithField:(id)field underlyingError:(id)error;
+ (id)conflictingFieldValueErrorWithUnderlyingError:(id)error;
+ (id)wrapperPayloadDictionary;
+ (id)_sharedHomePodPayloadClasses;
+ (id)installableHomePodConfigurationPayloadClasses;
+ (id)remoteQueueableHomePodPayloadClasses;
+ (id)_sharedWatchPayloadClasses;
+ (id)installableWatchConfigurationPayloadClasses;
+ (id)remoteQueueableWatchPayloadClasses;
+ (id)_minimumWatchVersionRequirementsForPayloads;
+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)count;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)count;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)malformedPayloadErrorWithError:(id)error;
- (id)stubDictionary;
- (id)filterForUserEnrollmentOutError:(id *)error;
- (BOOL)isSupportedByWatchVersions:(id)versions;
- (id)description;
- (id)verboseDescription;
- (id)serializedDictionary;
- (id)title;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)payloadDescriptionKeyValueSections;
@end

#endif /* MCPayload_h */
