//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLUnintendedChangeChecker_h
#define PLUnintendedChangeChecker_h
@import Foundation;

@class NSArray;

@interface PLUnintendedChangeChecker : NSObject {
  /* instance variables */
  NSArray *_unexpectedMomentAssetKeys;
  NSArray *_unexpectedMomentAdditionalAssetAttributeKeys;
  NSArray *_unexpectedCPLAssetKeys;
}

/* class methods */
+ (BOOL)shouldCheckForUnintendedChanges;
+ (void)checkForUnintendedChangesDuringeSave:(id)save withBlock:(id /* block */)block;
+ (void)checkForUnintendedChangeOnMergeConflicts:(id)conflicts withBlock:(id /* block */)block;

/* instance methods */
- (id)init;
- (void)checkForUnintendedChangesDuringeSave:(id)save withBlock:(id /* block */)block;
- (void)checkForUnintendedChangeOnMergeConflicts:(id)conflicts withBlock:(id /* block */)block;
- (void)_checkForUnintendedChangesOnObject:(id)object withBlock:(id /* block */)block;
- (void)_checkForUnintendedMomentChangesOnObject:(id)object withBlock:(id /* block */)block;
- (void)_checkForUnintendedCPLChangesOnObject:(id)object withBlock:(id /* block */)block;
- (void)_checkForUnintendedChangesOnObject:(id)object withEntity:(id)entity unexpectedKeys:(id)keys block:(id /* block */)block;
@end

#endif /* PLUnintendedChangeChecker_h */
