//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RENowPlayingRelevanceProvider_h
#define RENowPlayingRelevanceProvider_h
@import Foundation;

#include "RERelevanceProvider.h"

@class NSString;

@interface RENowPlayingRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifer;

/* class methods */
+ (id)relevanceSimulatorID;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryEncoding;
- (id)initWithState:(unsigned long long)state;
- (id)initWithState:(unsigned long long)state bundleIdentifier:(id)identifier itemIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)_hash;
- (id)description;
@end

#endif /* RENowPlayingRelevanceProvider_h */
