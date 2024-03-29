//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INEventParticipant_h
#define INEventParticipant_h
@import Foundation;

#include "INCacheableContainer-Protocol.h"
#include "INJSONSerializable-Protocol.h"
#include "INPerson.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface INEventParticipant : NSObject<INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) INPerson *person;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSNumber *isUser;
@property (readonly, copy, nonatomic) NSNumber *isEventOrganizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)jsondecoder codableDescription:(id)description from:(id)from;

/* instance methods */
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)cache;
- (id)initWithPerson:(id)person status:(long long)status isUser:(id)user isEventOrganizer:(id)organizer;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_intents_encodeWithJSONEncoder:(id)jsonencoder codableDescription:(id)description;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_dictionaryRepresentation;
@end

#endif /* INEventParticipant_h */
