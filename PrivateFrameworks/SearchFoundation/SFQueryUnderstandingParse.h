//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFQueryUnderstandingParse_h
#define SFQueryUnderstandingParse_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFQueryUnderstandingParse-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface SFQueryUnderstandingParse : NSObject<SFQueryUnderstandingParse, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 queryIntentType; unsigned int x :1 hasUnspecifiedTokens; unsigned int x :1 hasSortCriteriaTokens; unsigned int x :1 hasLocationTokens; unsigned int x :1 hasActionTokens; unsigned int x :1 hasMediaTypeTokens; unsigned int x :1 hasVisualQualityTokens; unsigned int x :1 hasNounTokens; unsigned int x :1 hasTimeTokens; unsigned int x :1 hasEventTokens; unsigned int x :1 hasGenericLocationTokens; unsigned int x :1 hasCaptureDeviceTokens; unsigned int x :1 hasFavoritedTokens; unsigned int x :1 hasSourceAppTokens; unsigned int x :1 hasPersonTokens; unsigned int x :1 hasPersonSenderTokens; } _has;
}

@property (nonatomic) int queryIntentType;
@property (nonatomic) BOOL hasUnspecifiedTokens;
@property (nonatomic) BOOL hasSortCriteriaTokens;
@property (nonatomic) BOOL hasLocationTokens;
@property (nonatomic) BOOL hasActionTokens;
@property (nonatomic) BOOL hasMediaTypeTokens;
@property (nonatomic) BOOL hasVisualQualityTokens;
@property (nonatomic) BOOL hasNounTokens;
@property (nonatomic) BOOL hasTimeTokens;
@property (nonatomic) BOOL hasEventTokens;
@property (nonatomic) BOOL hasGenericLocationTokens;
@property (nonatomic) BOOL hasCaptureDeviceTokens;
@property (nonatomic) BOOL hasFavoritedTokens;
@property (nonatomic) BOOL hasSourceAppTokens;
@property (nonatomic) BOOL hasPersonTokens;
@property (nonatomic) BOOL hasPersonSenderTokens;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasQueryIntentType;
- (BOOL)hasHasUnspecifiedTokens;
- (BOOL)hasHasSortCriteriaTokens;
- (BOOL)hasHasLocationTokens;
- (BOOL)hasHasActionTokens;
- (BOOL)hasHasMediaTypeTokens;
- (BOOL)hasHasVisualQualityTokens;
- (BOOL)hasHasNounTokens;
- (BOOL)hasHasTimeTokens;
- (BOOL)hasHasEventTokens;
- (BOOL)hasHasGenericLocationTokens;
- (BOOL)hasHasCaptureDeviceTokens;
- (BOOL)hasHasFavoritedTokens;
- (BOOL)hasHasSourceAppTokens;
- (BOOL)hasHasPersonTokens;
- (BOOL)hasHasPersonSenderTokens;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFQueryUnderstandingParse_h */
