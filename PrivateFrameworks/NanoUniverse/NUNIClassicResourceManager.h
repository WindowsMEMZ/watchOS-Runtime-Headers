//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIClassicResourceManager_h
#define NUNIClassicResourceManager_h
@import Foundation;

#include "CLKUIResourceProviderDelegate-Protocol.h"

@class CLKUIResourceProviderKey, NSMapTable, NSString;
@protocol MTLDevice;

@interface NUNIClassicResourceManager : NSObject<CLKUIResourceProviderDelegate> {
  /* instance variables */
  NSObject<MTLDevice> *_device;
  CLKUIResourceProviderKey *_resourceProviderKey;
  unsigned long long _clients;
  NSMapTable *_textureGroupHashTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (void)_deallocInstance:(id)instance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (void)addClient;
- (void)removeClient;
- (id)textureGroupWithSuffix:(id)suffix;
- (id)provideAtlasBacking:(id)backing;
- (id)resourceProviderKey;
@end

#endif /* NUNIClassicResourceManager_h */
