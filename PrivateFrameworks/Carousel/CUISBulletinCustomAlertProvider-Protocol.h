//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISBulletinCustomAlertProvider_Protocol_h
#define CUISBulletinCustomAlertProvider_Protocol_h
@import Foundation;

@protocol CUISBulletinCustomAlertProvider <CUISAlertProvider>
/* instance methods */
- (BOOL)wantsAlertForBulletin:(id)bulletin;
- (void)addBulletin:(id)bulletin;
- (void)addBulletin:(id)bulletin replaceBulletin:(id)bulletin;
- (void)modifyBulletin:(id)bulletin;
- (void)removeBulletin:(id)bulletin;
@optional
/* instance methods */
- (void)invalidateBulletinIDs:(id)ids;
- (void)activateAlertForBulletin:(id)bulletin completion:(id /* block */)completion;
- (void)sectionVisibilityUpdatedForSectionID:(id)id visible:(BOOL)visible;
@end

#endif /* CUISBulletinCustomAlertProvider_Protocol_h */
