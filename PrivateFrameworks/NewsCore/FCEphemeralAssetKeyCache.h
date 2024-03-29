//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCEphemeralAssetKeyCache_h
#define FCEphemeralAssetKeyCache_h
@import Foundation;

#include "FCAssetKeyCacheType-Protocol.h"
#include "FCThreadSafeMutableDictionary.h"

@class NSString;

@interface FCEphemeralAssetKeyCache : NSObject<FCAssetKeyCacheType> {
  /* instance variables */
  FCThreadSafeMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)wrappingKeyForWrappingKeyID:(id)id;
- (id)interestTokenForWrappingKeyIDs:(id)ids;
- (void)setWrappingKey:(id)key forWrappingKeyID:(id)id;
- (void)removeAllWrappingKeys;
@end

#endif /* FCEphemeralAssetKeyCache_h */
