//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableCDADocumentSample_h
#define HDCodableCDADocumentSample_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableSample.h"
#include "HDDecoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HDCodableCDADocumentSample : PBCodable<HDDecoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 omittedContent; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasOmittedContent;
@property (nonatomic) int omittedContent;
@property (readonly, nonatomic) BOOL hasDocumentData;
@property (retain, nonatomic) NSData *documentData;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasPatientName;
@property (retain, nonatomic) NSString *patientName;
@property (readonly, nonatomic) BOOL hasAuthorName;
@property (retain, nonatomic) NSString *authorName;
@property (readonly, nonatomic) BOOL hasCustodianName;
@property (retain, nonatomic) NSString *custodianName;

/* instance methods */
- (BOOL)applyToObject:(id)object;
- (id)omittedContentAsString:(int)string;
- (int)StringAsOmittedContent:(id)content;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
@end

#endif /* HDCodableCDADocumentSample_h */
