//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCTopStoriesConfiguration_h
#define FCTopStoriesConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSString, NTPBTopStoriesConfig;

@interface FCTopStoriesConfiguration : NSObject<NSCopying> {
  /* instance variables */
  NTPBTopStoriesConfig *_pbConfig;
  NSDictionary *_configDict;
}

@property (readonly, nonatomic) BOOL promotingEnabled;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSDictionary *styleConfigurations;
@property (readonly, nonatomic) long long storyTypeTimeout;

/* instance methods */
- (id)initWithPBTopStoriesConfig:(id)config;
- (id)initWithConfigDictionary:(id)dictionary;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isPromotingEnabled;
@end

#endif /* FCTopStoriesConfiguration_h */
