//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBRichText_h
#define _SFPBRichText_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBGraphicalFloat.h"
#include "_SFPBRichText-Protocol.h"
#include "_SFPBText.h"

@class NSArray, NSData, NSString;

@interface _SFPBRichText : PBCodable<_SFPBRichText, NSSecureCoding>

@property (retain, nonatomic) _SFPBText *text;
@property (retain, nonatomic) _SFPBGraphicalFloat *starRating;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *formattedTextPieces;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFacade:(id)facade;
- (void)clearIcons;
- (void)addIcons:(id)icons;
- (unsigned long long)iconsCount;
- (id)iconsAtIndex:(unsigned long long)index;
- (void)clearFormattedTextPieces;
- (void)addFormattedTextPieces:(id)pieces;
- (unsigned long long)formattedTextPiecesCount;
- (id)formattedTextPiecesAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBRichText_h */
