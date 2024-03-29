//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSKeyValueStoreDatabase_h
#define SSKeyValueStoreDatabase_h
@import Foundation;

#include "SSSQLiteDatabase.h"

@interface SSKeyValueStoreDatabase : NSObject {
  /* instance variables */
  SSSQLiteDatabase *_database;
}

/* instance methods */
- (id)_initReadOnly:(BOOL)only;
- (id)init;
- (id)initReadOnly;
- (void)dealloc;
- (void)modifyAsyncUsingTransactionBlock:(id /* block */)block;
- (void)modifyUsingTransactionBlock:(id /* block */)block;
- (void)readAsyncUsingSessionBlock:(id /* block */)block;
- (void)readUsingSessionBlock:(id /* block */)block;
- (void)_dispatchBlockAsync:(id /* block */)async;
@end

#endif /* SSKeyValueStoreDatabase_h */
