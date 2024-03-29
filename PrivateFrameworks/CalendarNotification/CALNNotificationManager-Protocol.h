//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNNotificationManager_Protocol_h
#define CALNNotificationManager_Protocol_h
@import Foundation;

@protocol CALNNotificationManager <NSObject>

@property (readonly, nonatomic) BOOL isProtectedDataAvailable;

/* instance methods */
- (id)fetchRecordsWithSourceIdentifier:(id)identifier;
- (void)addRecord:(id)record;
- (void)updateRecord:(id)record;
- (void)removeRecordWithSourceIdentifier:(id)identifier sourceClientIdentifier:(id)identifier;
@end

#endif /* CALNNotificationManager_Protocol_h */
