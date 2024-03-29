//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNPushNotificationRequestBuilder_h
#define UNPushNotificationRequestBuilder_h
@import Foundation;

@class NSDictionary, NSString;

@interface UNPushNotificationRequestBuilder : NSObject {
  /* instance variables */
  NSDictionary *_payload;
  NSString *_bundleIdentifier;
  NSString *_identifier;
}

/* instance methods */
- (id)initWithIdentifier:(id)identifier payload:(id)payload bundleIdentifier:(id)identifier;
- (id)buildNotificationRequest;
- (id)buildSafePayload;
- (id)_sanitizeAPSDictionary:(id)apsdictionary;
- (id)_sanitizeAlert:(id)alert;
- (id)_sanitizeSound:(id)sound;
- (id)_sanitizeTopicIdentifier:(id)identifier;
- (id)_sanitizeStringArray:(id)array;
- (id)_sanitizeLocalizationArgumentsArray:(id)array;
- (id)_sanitizeFlag:(id)flag;
- (id)_sanitizeVolume:(id)volume;
- (id)_sanitizeUnsignedInteger:(id)integer;
- (id)_sanitizeInterruptionLevelString:(id)string;
- (unsigned long long)_interruptionLevelForString:(id)string;
- (id)_sanitizeRelevanceScore:(id)score;
@end

#endif /* UNPushNotificationRequestBuilder_h */
