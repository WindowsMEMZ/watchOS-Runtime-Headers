//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFactorPackSetStorage_h
#define TRIFactorPackSetStorage_h
@import Foundation;

@protocol TRIPaths;

@interface TRIFactorPackSetStorage : NSObject {
  /* instance variables */
  NSObject<TRIPaths> *_paths;
}

/* instance methods */
- (id)init;
- (id)initWithPaths:(id)paths;
- (BOOL)saveFactorPackSet:(id)set;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)src dest:(id)dest;
- (BOOL)_forceRemoveItemAtPath:(id)path;
- (id)parentDirForFactorPackSets;
- (id)pathForFactorPackSetWithId:(id)id;
- (BOOL)hasFactorPackSetWithId:(id)id path:(id *)path;
- (id)_collectFactorPackSets;
- (BOOL)removeUnreferencedFactorPackSetsWithServerContext:(id)context removedCount:(unsigned int *)count;
- (void)enumerateFactorPacksForFactorPackSet:(id)set usingLegacyPaths:(BOOL)paths withBlock:(id /* block */)block;
- (void)enumerateCompatibleFactorPacksForFactorPackSet:(id)set usingLegacyPaths:(BOOL)paths withBlock:(id /* block */)block;
- (void)enumerateFBFactorPacksForFactorPackSet:(id)set usingLegacyPaths:(BOOL)paths withBlock:(id /* block */)block;
- (BOOL)migrateEligibleFactorPacksToGlobalWithServerContext:(id)context;
@end

#endif /* TRIFactorPackSetStorage_h */
