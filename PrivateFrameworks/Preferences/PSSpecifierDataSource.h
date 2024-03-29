//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSSpecifierDataSource_h
#define PSSpecifierDataSource_h
@import Foundation;

#include "PSSpecifierDataSource-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface PSSpecifierDataSource : NSObject<PSSpecifierDataSource> {
  /* instance variables */
  NSMutableSet *_observerRefs;
  BOOL _specifiersLoaded;
}

@property (readonly, nonatomic) NSMutableArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (id)loadSpecifiersFromPlist:(id)plist inBundle:(id)bundle target:(id)target stringsTable:(id)table;

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)observers;
- (void)enumerateObserversUsingBlock:(id /* block */)block;
- (id)observersOfClass:(Class)class;
- (void)enumerateObserversOfClass:(Class)class usingBlock:(id /* block */)block;
- (void)performUpdates:(id)updates;
- (void)_clearAllSpecifiers;
- (void)_invalidateSpecifiersForObservers;
- (id)specifiersForSpecifier:(id)specifier observer:(id)observer;
- (void)loadSpecifiers;
- (BOOL)areSpecifiersLoaded;
- (void)reloadSpecifiers;
- (void)performUpdatesAnimated:(BOOL)animated usingBlock:(id /* block */)block;
- (id)specifierForID:(id)id;
- (id)readPreferenceValue:(id)value;
- (void)setPreferenceValue:(id)value specifier:(id)specifier;
@end

#endif /* PSSpecifierDataSource_h */
