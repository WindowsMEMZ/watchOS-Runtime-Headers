//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef SyncTokenStoreProviding_Protocol_h
#define SyncTokenStoreProviding_Protocol_h
@import Foundation;

@protocol SyncTokenStoreProviding <NSObject>
/* instance methods */
- (void)migrateKey:(id)key fromDatabase:(id)database;
- (id)tokenForKey:(id)key;
- (void)persistToken:(id)token forKey:(id)key;
@end

#endif /* SyncTokenStoreProviding_Protocol_h */
