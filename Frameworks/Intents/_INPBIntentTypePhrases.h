//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBIntentTypePhrases_h
#define _INPBIntentTypePhrases_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentType.h"
#include "_INPBIntentTypePhrases-Protocol.h"

@class NSArray, NSString;

@interface _INPBIntentTypePhrases : PBCodable<_INPBIntentTypePhrases, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct  _has;
}

@property (retain, nonatomic) _INPBIntentType *intentType;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (copy, nonatomic) NSArray *intentVocabularyExamples;
@property (readonly, nonatomic) unsigned long long intentVocabularyExamplesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)clearIntentVocabularyExamples;
- (void)addIntentVocabularyExamples:(id)examples;
- (id)intentVocabularyExamplesAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBIntentTypePhrases_h */
