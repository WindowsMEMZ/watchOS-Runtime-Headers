//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBStateProvider_Protocol_h
#define WBStateProvider_Protocol_h
@import Foundation;

@protocol WBStateProvider <NSObject, WBTabProvider>

@property (readonly, nonatomic) BOOL completedMigration;
@property (readonly, nonatomic) BOOL persistent;
@property (readonly, nonatomic) WBBrowserState *browserState;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (readonly, copy, nonatomic) NSArray *windowStates;
@property (readonly, nonatomic) int windowsFolderSpecialID;
@property (readonly, copy, nonatomic) NSArray *windows;

/* instance methods */
- (id)windowWithUUID:(id)uuid;
- (id)windowStateWithUUID:(id)uuid;
- (BOOL)hasCompletedMigration;
- (BOOL)isPersistent;
@end

#endif /* WBStateProvider_Protocol_h */
