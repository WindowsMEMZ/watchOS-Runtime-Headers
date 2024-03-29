//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSSQLiteStoreDelegate_Protocol_h
#define WBSSQLiteStoreDelegate_Protocol_h
@import Foundation;

@protocol WBSSQLiteStoreDelegate <NSObject>
/* instance methods */
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)check completionHandler:(id /* block */)handler;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)store;
@end

#endif /* WBSSQLiteStoreDelegate_Protocol_h */
