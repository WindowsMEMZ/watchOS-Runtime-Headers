//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBRFAvatarImage_h
#define _SFPBRFAvatarImage_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBRFAvatarImage-Protocol.h"

@class NSArray, NSData, NSString;

@interface _SFPBRFAvatarImage : PBCodable<_SFPBRFAvatarImage, NSSecureCoding>

@property (copy, nonatomic) NSArray *contact_ids;
@property (nonatomic) int image_style;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFacade:(id)facade;
- (void)clearContact_ids;
- (void)addContact_ids:(id)contact_ids;
- (unsigned long long)contact_idsCount;
- (id)contact_idsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBRFAvatarImage_h */
