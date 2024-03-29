//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASRelationshipEvent_h
#define ASRelationshipEvent_h
@import Foundation;

@class NSDate;

@interface ASRelationshipEvent : NSObject

@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short anchor;
@property (readonly, nonatomic) NSDate *timestamp;

/* class methods */
+ (id)_relationshipEventWithCodable:(id)codable;
+ (id)relationshipEventWithRecord:(id)record;

/* instance methods */
- (id)_codableRelationshipEvent;
- (id)initWithType:(unsigned short)type anchor:(unsigned short)anchor timestamp:(id)timestamp;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRelationshipEvent:(id)event;
- (id)description;
@end

#endif /* ASRelationshipEvent_h */
