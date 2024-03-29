//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFCellKVOObserver_h
#define NPRFCellKVOObserver_h
@import Foundation;

@class NSString;

@interface NPRFCellKVOObserver : NSObject

@property (retain, nonatomic) NSString *keyPath;
@property (weak, nonatomic) id observedObject;
@property (readonly, nonatomic) id /* block */ changeBlock;

/* instance methods */
- (id)observingKeyPath;
- (id)initWithKeyPath:(id)path observedObject:(id)object changeBlock:(id /* block */)block;
- (void)unregisterObservation;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)callChangeBlock;
@end

#endif /* NPRFCellKVOObserver_h */
