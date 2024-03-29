//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCHoldingTankManifest_h
#define MCHoldingTankManifest_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCHoldingTankManifest : NSObject {
  /* instance variables */
  NSMutableDictionary *_universalManifest;
  NSObject<OS_dispatch_queue> *_syncQueue;
}

/* class methods */
+ (id)sharedManifest;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)_profileDataFileNameForProfileIdentifier:(id)identifier;
- (id)_pathToHoldingTankDirectoryForDevice:(unsigned long long)device;
- (id)_pathToHoldingTankManifestForDevice:(unsigned long long)device;
- (id)pathToHoldingTankProfileDataForIdentifier:(id)identifier targetDevice:(unsigned long long)device createDirectory:(BOOL)directory;
- (void)_createDirectory:(id)directory withIntermediateDirectories:(BOOL)directories;
- (id)_manifestForDevice:(unsigned long long)device createIfNil:(BOOL)nil;
- (id)uninstalledProfileIdentifiersForDevice:(unsigned long long)device;
- (id)uninstalledProfileWithIdentifier:(id)identifier targetDevice:(unsigned long long)device;
- (id)uninstalledProfileDataWithIdentifier:(id)identifier targetDevice:(unsigned long long)device;
- (BOOL)addProfileData:(id)data withIdentifier:(id)identifier toHoldingTankForDevice:(unsigned long long)device outError:(id *)error;
- (void)removeProfileDataWithIdentifier:(id)identifier fromHoldingTankForDevice:(unsigned long long)device;
- (BOOL)_adjustManifestForDevice:(unsigned long long)device withIdentifier:(id)identifier addingIdentifer:(BOOL)identifer outError:(id *)error;
@end

#endif /* MCHoldingTankManifest_h */
