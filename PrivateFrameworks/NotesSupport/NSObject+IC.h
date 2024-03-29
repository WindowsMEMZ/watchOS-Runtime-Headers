//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef NSObject_IC_h
#define NSObject_IC_h
@import Foundation;

@interface NSObject (IC)
/* class methods */
+ (id)ic_loggingDescriptionFromLoggable:(id)loggable isPretty:(BOOL)pretty;

/* instance methods */
- (id)ic_loggingDescription;
- (id)ic_prettyLoggingDescription;
- (id)ic_loggingIdentifier;
- (void)ic_addObserver:(id)observer forKeyPath:(id)path context:(struct { char * x0; char * x1; } *)context;
- (void)ic_addObserver:(id)observer forKeyPath:(id)path context:(struct { char * x0; char * x1; } *)context explicitOptions:(unsigned long long)options;
- (BOOL)ic_didAddObserverForContext:(void *)context inScope:(char *)scope;
- (void)ic_removeObserver:(id)observer forKeyPath:(id)path context:(void *)context;
- (BOOL)ic_shouldIgnoreObserveValue:(id)value ofObject:(id)object forKeyPath:(id)path;
@end

#endif /* NSObject_IC_h */
