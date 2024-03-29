//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKGreenfieldAddWatchFaceManagerDelegate_Protocol_h
#define NTKGreenfieldAddWatchFaceManagerDelegate_Protocol_h
@import Foundation;

@protocol NTKGreenfieldAddWatchFaceManagerDelegate <NSObject>
/* instance methods */
- (void)didStartLoadingInAddWatchFaceManager:(id)manager;
- (void)addWatchFaceManager:(id)manager updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)directly;
- (void)addWatchFaceManager:(id)manager updateStateToComplicationsNotAvailableWithSlots:(id)slots unavailableTitle:(id)title unavailableDescription:(id)description;
- (void)addWatchFaceManager:(id)manager updateStateToAddComplicationWithItemId:(id)id installMode:(long long)mode skippedComplicationSlots:(id)slots;
- (void)addWatchFaceManager:(id)manager updateStateToRevisitComplicationWithItemId:(id)id installMode:(long long)mode skippedComplicationSlots:(id)slots;
- (void)addWatchFaceManager:(id)manager updateStateToCompletedWithSkippedComplicationSlots:(id)slots canRevisit:(BOOL)revisit;
- (void)addWatchFaceManager:(id)manager didFinishAddingFaceWithError:(id)error;
@end

#endif /* NTKGreenfieldAddWatchFaceManagerDelegate_Protocol_h */
