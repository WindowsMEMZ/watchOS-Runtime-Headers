//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACProtobufAccount_h
#define ACProtobufAccount_h
@import Foundation;

#include "PBCodable.h"
#include "ACProtobufAccount.h"
#include "ACProtobufAccountCredential.h"
#include "ACProtobufAccountType.h"
#include "ACProtobufDate.h"
#include "ACProtobufURL.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface ACProtobufAccount : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 warmingUp; } _has;
}

@property (copy, nonatomic) NSDictionary *propertiesDictionary;
@property (copy, nonatomic) NSDictionary *dataclassPropertiesDictionary;
@property (retain, nonatomic) ACProtobufAccountType *accountType;
@property (readonly, nonatomic) BOOL hasCredential;
@property (retain, nonatomic) ACProtobufAccountCredential *credential;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasAccountDescription;
@property (retain, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *properties;
@property (nonatomic) BOOL authenticated;
@property (readonly, nonatomic) BOOL hasLastCredentialRenewalRejectionDate;
@property (retain, nonatomic) ACProtobufDate *lastCredentialRenewalRejectionDate;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL supportsAuthentication;
@property (retain, nonatomic) NSMutableArray *dataclassProperties;
@property (readonly, nonatomic) BOOL hasObjectID;
@property (retain, nonatomic) ACProtobufURL *objectID;
@property (readonly, nonatomic) BOOL hasParentAccount;
@property (retain, nonatomic) ACProtobufAccount *parentAccount;
@property (retain, nonatomic) NSMutableArray *enabledDataclasses;
@property (retain, nonatomic) NSMutableArray *provisionedDataclasses;
@property (readonly, nonatomic) BOOL hasAuthenticationType;
@property (retain, nonatomic) NSString *authenticationType;
@property (readonly, nonatomic) BOOL hasCredentialType;
@property (retain, nonatomic) NSString *credentialType;
@property (readonly, nonatomic) BOOL hasDate;
@property (retain, nonatomic) ACProtobufDate *date;
@property (readonly, nonatomic) BOOL hasOwningBundleID;
@property (retain, nonatomic) NSString *owningBundleID;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;
@property (retain, nonatomic) NSMutableArray *dirtyAccountProperties;
@property (retain, nonatomic) NSMutableArray *dirtyDataclassProperties;
@property (nonatomic) BOOL hasWarmingUp;
@property (nonatomic) BOOL warmingUp;
@property (readonly, nonatomic) BOOL hasModificationID;
@property (retain, nonatomic) NSString *modificationID;

/* class methods */
+ (Class)propertiesType;
+ (Class)dataclassPropertiesType;
+ (Class)enabledDataclassesType;
+ (Class)provisionedDataclassesType;
+ (Class)dirtyPropertiesType;
+ (Class)dirtyAccountPropertiesType;
+ (Class)dirtyDataclassPropertiesType;

/* instance methods */
- (void)clearProperties;
- (void)addProperties:(id)properties;
- (unsigned long long)propertiesCount;
- (id)propertiesAtIndex:(unsigned long long)index;
- (void)clearDataclassProperties;
- (void)addDataclassProperties:(id)properties;
- (unsigned long long)dataclassPropertiesCount;
- (id)dataclassPropertiesAtIndex:(unsigned long long)index;
- (void)clearEnabledDataclasses;
- (void)addEnabledDataclasses:(id)dataclasses;
- (unsigned long long)enabledDataclassesCount;
- (id)enabledDataclassesAtIndex:(unsigned long long)index;
- (void)clearProvisionedDataclasses;
- (void)addProvisionedDataclasses:(id)dataclasses;
- (unsigned long long)provisionedDataclassesCount;
- (id)provisionedDataclassesAtIndex:(unsigned long long)index;
- (void)clearDirtyProperties;
- (void)addDirtyProperties:(id)properties;
- (unsigned long long)dirtyPropertiesCount;
- (id)dirtyPropertiesAtIndex:(unsigned long long)index;
- (void)clearDirtyAccountProperties;
- (void)addDirtyAccountProperties:(id)properties;
- (unsigned long long)dirtyAccountPropertiesCount;
- (id)dirtyAccountPropertiesAtIndex:(unsigned long long)index;
- (void)clearDirtyDataclassProperties;
- (void)addDirtyDataclassProperties:(id)properties;
- (unsigned long long)dirtyDataclassPropertiesCount;
- (id)dirtyDataclassPropertiesAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* ACProtobufAccount_h */
