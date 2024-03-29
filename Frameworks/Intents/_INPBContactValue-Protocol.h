//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBContactValue_Protocol_h
#define _INPBContactValue_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBContactHandle.h"
#include "_INPBContactValue-Protocol.h"
#include "_INPBImageValue.h"
#include "_INPBValueMetadata.h"

@class NSArray, NSString;

@protocol _INPBContactValue <NSObject>

@property (copy, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) unsigned long long aliasesCount;
@property (retain, nonatomic) _INPBContactHandle *contactHandle;
@property (readonly, nonatomic) BOOL hasContactHandle;
@property (copy, nonatomic) NSString *customIdentifier;
@property (readonly, nonatomic) BOOL hasCustomIdentifier;
@property (copy, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (copy, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasFullName;
@property (copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) _INPBImageValue *image;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL isContactSuggestion;
@property (nonatomic) BOOL hasIsContactSuggestion;
@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL hasIsMe;
@property (copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (copy, nonatomic) NSString *middleName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (copy, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (copy, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (copy, nonatomic) NSString *nickName;
@property (readonly, nonatomic) BOOL hasNickName;
@property (copy, nonatomic) NSString *phonemeData;
@property (readonly, nonatomic) BOOL hasPhonemeData;
@property (copy, nonatomic) NSString *phoneticFirstName;
@property (readonly, nonatomic) BOOL hasPhoneticFirstName;
@property (copy, nonatomic) NSString *phoneticLastName;
@property (readonly, nonatomic) BOOL hasPhoneticLastName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticNamePrefix;
@property (readonly, nonatomic) BOOL hasPhoneticNamePrefix;
@property (copy, nonatomic) NSString *phoneticNameSuffix;
@property (readonly, nonatomic) BOOL hasPhoneticNameSuffix;
@property (copy, nonatomic) NSString *relationship;
@property (readonly, nonatomic) BOOL hasRelationship;
@property (nonatomic) int searchProvider;
@property (nonatomic) BOOL hasSearchProvider;
@property (nonatomic) int suggestionType;
@property (nonatomic) BOOL hasSuggestionType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;

/* class methods */
+ (Class)aliasesType;
/* instance methods */
- (void)clearAliases;
- (void)addAliases:(id)aliases;
- (id)aliasesAtIndex:(unsigned long long)index;
- (id)searchProviderAsString:(int)string;
- (int)StringAsSearchProvider:(id)provider;
- (id)suggestionTypeAsString:(int)string;
- (int)StringAsSuggestionType:(id)type;
@end

#endif /* _INPBContactValue_Protocol_h */
