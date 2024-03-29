//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISUniqueOperationContext_h
#define ISUniqueOperationContext_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject {
  /* instance variables */
  NSMutableSet *_operations;
  NSMutableDictionary *_uniqueOperations;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addOperation:(id)operation;
- (BOOL)containsOperation:(id)operation;
- (unsigned long long)countOfOperations;
- (void)removeOperation:(id)operation;
- (void)setUniqueOperation:(id)operation forKey:(id)key;
- (id)uniqueOperationForKey:(id)key;
@end

#endif /* ISUniqueOperationContext_h */
