//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCGmailAccountPayload_h
#define MCGmailAccountPayload_h
@import Foundation;

#include "MCPayload.h"
#include "MCPerAccountVPNPayloadProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface MCGmailAccountPayload : MCPayload<MCPerAccountVPNPayloadProtocol>

@property (readonly, retain, nonatomic) NSString *accountDescription;
@property (readonly, retain, nonatomic) NSString *accountName;
@property (readonly, retain, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSDictionary *communicationServiceRules;
@property (retain, nonatomic) NSString *acAccountIdentifier;
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
- (BOOL)mustInstallNonInteractively;
- (id)stubDictionary;
- (id)verboseDescription;
- (id)restrictions;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)payloadDescriptionKeyValueSections;
@end

#endif /* MCGmailAccountPayload_h */
