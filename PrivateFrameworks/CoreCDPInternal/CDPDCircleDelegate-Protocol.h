//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDCircleDelegate_Protocol_h
#define CDPDCircleDelegate_Protocol_h
@import Foundation;

@protocol CDPDCircleDelegate 
/* instance methods */
- (void)circleController:(id)controller secureBackupRecordsArePresentWithCompletion:(id /* block */)completion;
- (id)contextForController:(id)controller;
- (id)secureChannelContextForController:(id)controller;
@end

#endif /* CDPDCircleDelegate_Protocol_h */
