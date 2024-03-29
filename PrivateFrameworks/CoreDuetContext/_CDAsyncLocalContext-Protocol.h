//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDAsyncLocalContext_Protocol_h
#define _CDAsyncLocalContext_Protocol_h
@import Foundation;

@protocol _CDAsyncLocalContext <_CDLocalContext, _CDAsyncContext>
/* instance methods */
- (void)setObject:(id)object forContextualKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (void)addObjects:(id)objects toArrayAtKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (void)removeObjects:(id)objects fromArrayAtKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (void)removeObjectsMatchingPredicate:(id)predicate fromArrayAtKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (void)addObjects:(id)objects andRemoveObjects:(id)objects fromArrayAtKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
@end

#endif /* _CDAsyncLocalContext_Protocol_h */
