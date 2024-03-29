//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNNotificationIdentifier_h
#define CALNNotificationIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface CALNNotificationIdentifier : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

/* class methods */
+ (id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)components;
+ (id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)components;
+ (id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;

/* instance methods */
- (id)initWithSourceIdentifier:(id)identifier sourceClientIdentifier:(id)identifier;
- (id)initWithStringRepresentation:(id)representation;
- (id)initWithSourceIdentifier:(id)identifier sourceClientIdentifier:(id)identifier stringRepresentation:(id)representation;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToNotificationIdentifier:(id)identifier;
- (id)description;
@end

#endif /* CALNNotificationIdentifier_h */
