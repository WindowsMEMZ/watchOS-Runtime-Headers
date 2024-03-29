//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOConfigStorageSQLiteBase_h
#define GEOConfigStorageSQLiteBase_h
@import Foundation;

#include "GEOConfigPersistence.h"
#include "GEOConfigStorageReadWrite-Protocol.h"

@class NSString;

@interface GEOConfigStorageSQLiteBase : NSObject<GEOConfigStorageReadWrite> {
  /* instance variables */
  long long _source;
  GEOConfigPersistence *_persister;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)getConfigValueForKey:(id)key countryCode:(id)code options:(unsigned long long)options source:(long long *)source;
- (void)resync;
- (void)setConfigValue:(id)value forKey:(id)key options:(unsigned long long)options synchronous:(BOOL)synchronous;
- (void)_instanceSpecificSetValue:(id)value forKey:(id)key;
- (id)_instanceSpecificGetKey:(id)key;
- (id)_instanceSpecificGetKeyPath:(id)path;
@end

#endif /* GEOConfigStorageSQLiteBase_h */
