//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INBoatTrip_h
#define INBoatTrip_h
@import Foundation;

#include "INDateComponentsRange.h"
#include "INJSONSerializable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CLPlacemark, NSString;

@interface INBoatTrip : NSObject<INJSONSerializable, NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *provider;
@property (readonly, copy, nonatomic) NSString *boatName;
@property (readonly, copy, nonatomic) NSString *boatNumber;
@property (readonly, copy, nonatomic) INDateComponentsRange *tripDuration;
@property (readonly, copy, nonatomic) CLPlacemark *departureBoatTerminalLocation;
@property (readonly, copy, nonatomic) CLPlacemark *arrivalBoatTerminalLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)jsondecoder codableDescription:(id)description from:(id)from;

/* instance methods */
- (id)initWithProvider:(id)provider boatName:(id)name boatNumber:(id)number tripDuration:(id)duration departureBoatTerminalLocation:(id)location arrivalBoatTerminalLocation:(id)location;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_intents_encodeWithJSONEncoder:(id)jsonencoder codableDescription:(id)description;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_dictionaryRepresentation;
@end

#endif /* INBoatTrip_h */
