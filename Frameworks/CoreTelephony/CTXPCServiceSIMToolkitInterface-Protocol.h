//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTXPCServiceSIMToolkitInterface_Protocol_h
#define CTXPCServiceSIMToolkitInterface_Protocol_h
@import Foundation;

@protocol CTXPCServiceSIMToolkitInterface 
/* instance methods */
- (void)getSIMToolkitMenuForContext:(id)context completion:(id /* block */)completion;
- (void)selectSIMToolkitMenuItemForContext:(id)context index:(id)index completion:(id /* block */)completion;
- (void)getSIMToolkitListItemsForContext:(id)context completion:(id /* block */)completion;
- (void)selectSIMToolkitListItemForContext:(id)context session:(id)session response:(id)response index:(id)index completion:(id /* block */)completion;
- (void)sendSIMToolkitResponseForContext:(id)context session:(id)session response:(id)response completion:(id /* block */)completion;
- (void)sendSIMToolkitStringResponseForContext:(id)context session:(id)session response:(id)response string:(id)string completion:(id /* block */)completion;
- (void)sendSIMToolkitBooleanResponseForContext:(id)context session:(id)session response:(id)response yesNo:(BOOL)no completion:(id /* block */)completion;
- (void)sendSIMToolkitUserActivityForContext:(id)context completion:(id /* block */)completion;
- (void)sendSIMToolkitDisplayReadyForContext:(id)context completion:(id /* block */)completion;
- (void)getSIMToolkitUSSDStringForContext:(id)context completion:(id /* block */)completion;
- (void)sendSIMToolkitUSSDResponseForContext:(id)context response:(id)response completion:(id /* block */)completion;
- (void)cancelSIMToolkitUSSDSessionForContext:(id)context completion:(id /* block */)completion;
@end

#endif /* CTXPCServiceSIMToolkitInterface_Protocol_h */
