//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLTestDataProvider_h
#define CSLTestDataProvider_h
@import Foundation;

@class BBSectionIcon, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface CSLTestDataProvider : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  BBSectionIcon *_sectionIcon;
  UNUserNotificationCenter *_unCenter;
  long long _mostRecentRecordIdentifier;
}

/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier;
- (void)addNotificationRequest:(id)request id:(id)id clearable:(BOOL)clearable;
@end

#endif /* CSLTestDataProvider_h */
