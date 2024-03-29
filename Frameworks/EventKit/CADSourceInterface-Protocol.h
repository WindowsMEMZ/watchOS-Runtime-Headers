//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef CADSourceInterface_Protocol_h
#define CADSourceInterface_Protocol_h
@import Foundation;

@protocol CADSourceInterface 
/* instance methods */
- (void)CADDatabaseGetSourcesWithFaultedProperties:(id)properties reply:(id /* block */)reply;
- (void)CADDatabaseGetLocalSourceWithEnableIfNeeded:(BOOL)needed reply:(id /* block */)reply;
- (void)CADDatabaseGetLocalBirthdaySource:(id /* block */)source;
- (void)CADObjectGetConstraints:(id)constraints reply:(id /* block */)reply;
- (void)CADSourceGetNotificationCollection:(id)collection reply:(id /* block */)reply;
- (void)CADSourceRefresh:(id)refresh isUserRequested:(BOOL)requested reply:(id /* block */)reply;
- (void)CADCountCalendarItemsOfType:(int)type inSource:(id)source reply:(id /* block */)reply;
- (void)CADRemoveCalendarItemsOlderThanDate:(id)date ofType:(int)type inSource:(id)source reply:(id /* block */)reply;
- (void)CADSourceGetGrantedDelegatesList:(id)list reply:(id /* block */)reply;
- (void)CADSourceUpdateGrantedDelegate:(id)delegate action:(long long)action sourceID:(id)id reply:(id /* block */)reply;
- (void)CADSourceAddExchangeDelegateWithName:(id)name emailAddress:(id)address toSourceWithID:(id)id reply:(id /* block */)reply;
- (void)CADSourceRemoveExchangeDelegateWithID:(id)id reply:(id /* block */)reply;
@end

#endif /* CADSourceInterface_Protocol_h */
