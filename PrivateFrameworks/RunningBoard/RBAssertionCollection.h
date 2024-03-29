//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBAssertionCollection_h
#define RBAssertionCollection_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet;

@interface RBAssertionCollection : NSObject {
  /* instance variables */
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
  NSMutableDictionary *_assertionsByIdentifier;
  NSMutableSet *_processAssertions;
  NSMutableSet *_systemAssertions;
  NSMutableDictionary *_assertionsByOriginator;
  NSMutableDictionary *_assertionsByTargetProcessIdentity;
  NSMutableSet *_resolvedIdentifiers;
}

/* instance methods */
- (id)init;
- (id)allAssertions;
- (void)enumerateAssertionsWithBlock:(id /* block */)block;
- (void)enumerateAssertionsForSystemTargetWithBlock:(id /* block */)block;
- (void)enumerateAssertionsForProcessTargetsWithBlock:(id /* block */)block;
- (void)enumerateAssertionsForTargetProcessIdentity:(id)identity withBlock:(id /* block */)block;
- (void)enumerateAssertionsForOriginator:(id)originator withBlock:(id /* block */)block;
- (id)assertionWithIdentifier:(id)identifier;
- (id)assertionsForTarget:(id)target;
- (id)assertionsForTargetIdentity:(id)identity;
- (id)assertionsForOriginator:(id)originator;
- (void)removeAssertion:(id)assertion;
- (void)addAssertion:(id)assertion;
- (BOOL)hasAssertion:(id)assertion;
- (BOOL)hasAssertionsForOriginator:(id)originator;
- (unsigned long long)assertionCountForTargetProcessIdentity:(id)identity;
- (BOOL)hasAssertionsForOriginator:(id)originator exceedingCount:(unsigned long long)count;
- (unsigned long long)assertionCountForOriginator:(id)originator;
- (void)noteResolvedAssertion:(id)assertion;
- (BOOL)hasResolvedAssertion:(id)assertion;
- (unsigned long long)count;
@end

#endif /* RBAssertionCollection_h */
