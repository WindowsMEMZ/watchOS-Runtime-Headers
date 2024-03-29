//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCCardDAVAccountPayload_h
#define MCCardDAVAccountPayload_h
@import Foundation;

#include "MCPayload.h"
#include "MCPerAccountVPNPayloadProtocol-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MCCardDAVAccountPayload : MCPayload<MCPerAccountVPNPayloadProtocol>

@property (readonly, nonatomic) NSNumber *useSSLNum;
@property (readonly, nonatomic) NSNumber *portNum;
@property (readonly, retain, nonatomic) NSString *accountDescription;
@property (readonly, retain, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (readonly, retain, nonatomic) NSString *principalURL;
@property (readonly, nonatomic) BOOL useSSL;
@property (readonly, nonatomic) int port;
@property (readonly, nonatomic) NSDictionary *communicationServiceRules;
@property (retain, nonatomic) NSString *acAccountIdentifier;
@property (copy, nonatomic) NSString *accountPersistentUUID;
@property (readonly, retain, nonatomic) NSString *VPNUUID;
@property (readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)verboseDescription;
- (id)stubDictionary;
- (id)restrictions;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)payloadDescriptionKeyValueSections;
- (BOOL)containsSensitiveUserInformation;
@end

#endif /* MCCardDAVAccountPayload_h */
