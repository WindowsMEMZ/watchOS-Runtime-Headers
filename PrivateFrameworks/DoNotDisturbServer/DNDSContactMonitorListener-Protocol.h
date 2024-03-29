//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSContactMonitorListener_Protocol_h
#define DNDSContactMonitorListener_Protocol_h
@import Foundation;

@protocol DNDSContactMonitorListener <NSObject>

@property (copy, nonatomic) NSData *contactHistoryToken;
@property (readonly, copy, nonatomic) NSSet *monitoredContacts;

/* instance methods */
- (void)contactMonitor:(id)monitor didReceiveUpdatedContacts:(id)contacts deletedContactIdentifiers:(id)identifiers withContactHistoryToken:(id)token;
- (void)contactMonitor:(id)monitor didReceiveUpdatedContactsForContactsWithoutIdentifiers:(id)identifiers;
@end

#endif /* DNDSContactMonitorListener_Protocol_h */
