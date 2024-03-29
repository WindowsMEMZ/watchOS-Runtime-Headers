//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMChangedKeysObserver_h
#define REMChangedKeysObserver_h
@import Foundation;

@class NSArray, NSMutableSet, NSObject, NSSet;

@interface REMChangedKeysObserver : NSObject

@property (retain, nonatomic) NSArray *keysToObserve;
@property (retain, nonatomic) NSMutableSet *mutableChangedKeys;
@property (readonly, nonatomic) NSObject *target;
@property (readonly, nonatomic) NSSet *changedKeys;

/* instance methods */
- (id)initWithTarget:(id)target keysToObserve:(id)observe includeInitial:(BOOL)initial;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)keyDidChange:(id)change;
@end

#endif /* REMChangedKeysObserver_h */
