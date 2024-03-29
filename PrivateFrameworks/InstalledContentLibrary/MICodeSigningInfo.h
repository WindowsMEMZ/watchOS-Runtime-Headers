//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1270.60.4.0.0
//
#ifndef MICodeSigningInfo_h
#define MICodeSigningInfo_h
@import Foundation;

@class NSDictionary, NSNumber, NSString;

@interface MICodeSigningInfo : NSObject

@property (readonly, copy, nonatomic) NSString *signerIdentity;
@property (readonly, copy, nonatomic) NSString *signerOrganization;
@property (readonly, copy, nonatomic) NSString *codeInfoIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSNumber *signatureVersion;
@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) unsigned long long codeSignerType;
@property (readonly, nonatomic) unsigned long long profileValidationType;
@property (readonly, nonatomic) unsigned long long signingInfoSource;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* instance methods */
- (id)initForTesting;
- (id)initWithSignerIdentity:(id)identity signerOrganization:(id)organization codeInfoIdentifier:(id)identifier teamIdentifier:(id)identifier signatureVersion:(id)version entitlements:(id)entitlements signerType:(unsigned long long)type profileType:(unsigned long long)type signingInfoSource:(unsigned long long)source;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)initWithDictionaryRepresentation:(id)representation fromSource:(unsigned long long)source;
@end

#endif /* MICodeSigningInfo_h */
