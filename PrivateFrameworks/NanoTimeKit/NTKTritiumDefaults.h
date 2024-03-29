//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKTritiumDefaults_h
#define NTKTritiumDefaults_h
@import Foundation;

@class NPSDomainAccessor, NSHashTable, NSUserDefaults;

@interface NTKTritiumDefaults : NSObject {
  /* instance variables */
  NPSDomainAccessor *_domainAccessor;
  NSUserDefaults *_defaults;
  NSHashTable *_observers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)_domainAccessor;
- (void)_synchronize;
- (void)reload;
- (BOOL)allBundleIDsPrivateInTritium;
- (void)setAllBundleIDsPrivateInTritium:(BOOL)tritium;
- (BOOL)isBundleIdPrivateInTritium:(id)tritium;
- (BOOL)isSiriPlatterPrivateInTritium:(id)tritium;
- (void)setBundleIDs:(id)ids privateInTritium:(BOOL)tritium;
- (void)setSiriPlatters:(id)platters privateInTritium:(BOOL)tritium;
- (id)_privateBundleIDs;
- (id)_privateSiriCardIDs;
- (void)_observe;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
@end

#endif /* NTKTritiumDefaults_h */
