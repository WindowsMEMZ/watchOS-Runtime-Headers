//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INAnnouncement_h
#define INAnnouncement_h
@import Foundation;

#include "INJSONSerializable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface INAnnouncement : NSObject<INJSONSerializable, NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSNumber *startTime;
@property (readonly, copy, nonatomic) NSNumber *endTime;
@property (readonly, copy, nonatomic) NSURL *speechDataURL;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *speechDataTranscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)jsondecoder codableDescription:(id)description from:(id)from;

/* instance methods */
- (id)initWithSpeechDataURL:(id)url startTime:(id)time endTime:(id)time identifier:(id)identifier;
- (id)initWithSpeechDataURL:(id)url identifier:(id)identifier speechDataTranscription:(id)transcription;
- (id)initWithSpeechDataURL:(id)url identifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_intents_encodeWithJSONEncoder:(id)jsonencoder codableDescription:(id)description;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_dictionaryRepresentation;
@end

#endif /* INAnnouncement_h */
