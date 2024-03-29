//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3DatabaseConnectionDelegate_Protocol_h
#define ML3DatabaseConnectionDelegate_Protocol_h
@import Foundation;

@protocol ML3DatabaseConnectionDelegate <NSObject>
@optional
/* instance methods */
- (void)connectionWillOpenDatabase:(id)database;
- (void)connectionDidOpenDatabase:(id)database;
- (void)connection:(id)connection didFailToOpenDatabaseWithError:(id)error;
- (void)connectionWillCloseDatabase:(id)database;
- (void)connectionDidCloseDatabase:(id)database;
- (void)connection:(id)connection didFailToCloseDatabaseWithError:(id)error;
- (void)connectionDidAccessDatabase:(id)database;
- (void)connectionDidBeginDatabaseTransaction:(id)transaction;
- (void)connection:(id)connection didEndDatabaseTransactionAndCommit:(BOOL)commit;
@end

#endif /* ML3DatabaseConnectionDelegate_Protocol_h */
