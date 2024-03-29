//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1131.0.0.0.0
//
#ifndef _TtP14FamilyControls19FamilyControlsAgent__Protocol_h
#define _TtP14FamilyControls19FamilyControlsAgent__Protocol_h
@import Foundation;

@protocol FamilyControls.FamilyControlsAgent 
/* instance methods */
- (void)requestAuthorizationFor:(long long)for;
- (void)revokeAuthorization:(id /* block */)authorization;
- (void)getRemoteContentForActivitySlotWithSlotID:(long long)id slotStyle:(id)style slotType:(long long)type tokenToPresent:(id)present tokenType:(long long)type;
- (void)getRemoteContentByBundleIDWithBundleIdentifier:(id)identifier slotID:(long long)id slotStyle:(id)style slotType:(long long)type;
- (void)getAuthorizationStatus:(id /* block */)status;
@end

#endif /* _TtP14FamilyControls19FamilyControlsAgent__Protocol_h */
