//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef AKAvailability_h
#define AKAvailability_h
@import Foundation;

@class NSString, NSUUID;

@interface AKAvailability : NSObject

@property (readonly, nonatomic) BOOL availableToMe;
@property (readonly, nonatomic) NSUUID *activityIdentifier;
@property (readonly, nonatomic) BOOL personalizedAvailability;
@property (readonly, nonatomic) BOOL available;
@property (readonly, nonatomic) NSString *activityIdentifierString;

/* class methods */
+ (id)logger;

/* instance methods */
- (id)initWithAvailable:(BOOL)available activityIdentifier:(id)identifier;
- (id)initWithPublishedStatus:(id)status;
- (id)statusPublishRequest;
- (id)_payloadDictionary;
- (id)initWithStatusPayload:(id)payload invitationPayload:(id)payload;
- (BOOL)isAvailableToMe;
- (id)initWithAvailable:(BOOL)available activityIdentifierString:(id)string;
- (id)_initWithAvailable:(BOOL)available activityIdentifierString:(id)string personalizedAvailability:(BOOL)availability;
- (BOOL)isAvailable;
@end

#endif /* AKAvailability_h */
