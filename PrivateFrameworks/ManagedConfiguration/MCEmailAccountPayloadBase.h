//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCEmailAccountPayloadBase_h
#define MCEmailAccountPayloadBase_h
@import Foundation;

#include "MCPayload.h"
#include "MCPerAccountVPNPayloadProtocol-Protocol.h"

@class NSArray, NSData, NSNumber, NSString;

@interface MCEmailAccountPayloadBase : MCPayload<MCPerAccountVPNPayloadProtocol>

@property (retain, nonatomic) NSNumber *preventMoveNum;
@property (retain, nonatomic) NSNumber *preventAppSheetNum;
@property (retain, nonatomic) NSNumber *SMIMEEnabledNum;
@property (retain, nonatomic) NSNumber *isRecentsSyncingDisabledNum;
@property (retain, nonatomic) NSNumber *isMailDropEnabledNum;
@property (retain, nonatomic) NSNumber *SMIMEPerMessageSwitchEnabledNum;
@property (nonatomic) BOOL preventMove;
@property (nonatomic) BOOL preventAppSheet;
@property (nonatomic) BOOL SMIMEEnabled;
@property (nonatomic) BOOL isRecentsSyncingDisabled;
@property (nonatomic) BOOL isMailDropEnabled;
@property (retain, nonatomic) NSNumber *SMIMESigningEnabled;
@property (nonatomic) BOOL SMIMESigningUserOverrideable;
@property (retain, nonatomic) NSString *SMIMESigningIdentityUUID;
@property (retain, nonatomic) NSNumber *SMIMEEncryptionEnabled;
@property (nonatomic) BOOL SMIMEEncryptByDefaultUserOverrideable;
@property (retain, nonatomic) NSString *SMIMEEncryptionIdentityUUID;
@property (retain, nonatomic) NSData *SMIMESigningIdentityPersistentID;
@property (nonatomic) BOOL SMIMESigningIdentityUserOverrideable;
@property (retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID;
@property (nonatomic) BOOL SMIMEEncryptionIdentityUserOverrideable;
@property (nonatomic) BOOL SMIMEPerMessageSwitchEnabled;
@property (readonly, retain, nonatomic) NSString *VPNUUID;
@property (readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)stubDictionary;
- (id)verboseDescription;
- (id)payloadDescriptionKeyValueSections;
- (void)addSMIMEEncryptionPayloadKeysTo:(id)to;
- (BOOL)containsSensitiveUserInformation;
@end

#endif /* MCEmailAccountPayloadBase_h */
