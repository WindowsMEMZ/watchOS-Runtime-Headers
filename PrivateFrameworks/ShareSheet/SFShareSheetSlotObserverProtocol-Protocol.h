//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFShareSheetSlotObserverProtocol_Protocol_h
#define SFShareSheetSlotObserverProtocol_Protocol_h
@import Foundation;

@protocol SFShareSheetSlotObserverProtocol <SFShareSheetSlotManagerDelegate>
/* instance methods */
- (void)didPerformInServiceActivityWithIdentifier:(id)identifier completed:(BOOL)completed items:(id)items error:(id)error;
@end

#endif /* SFShareSheetSlotObserverProtocol_Protocol_h */
