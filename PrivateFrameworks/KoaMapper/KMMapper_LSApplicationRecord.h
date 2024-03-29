//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KMMapper_LSApplicationRecord_h
#define KMMapper_LSApplicationRecord_h
@import Foundation;

#include "KMMapper-Protocol.h"

@class KVItemBuilder, NSNumber, NSString;

@interface KMMapper_LSApplicationRecord : NSObject<KMMapper> {
  /* instance variables */
  KVItemBuilder *_builder;
  NSNumber *_languageCodeKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)externalObjectClass;

/* instance methods */
- (id)init;
- (long long)targetItemType;
- (BOOL)addAlternativeNamesFor:(id)for forLanguage:(id)language error:(id *)error;
- (id)itemsFromExternalObject:(id)object additionalFields:(id)fields error:(id *)error;
@end

#endif /* KMMapper_LSApplicationRecord_h */
