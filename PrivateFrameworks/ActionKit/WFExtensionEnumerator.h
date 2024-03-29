//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFExtensionEnumerator_h
#define WFExtensionEnumerator_h
@import Foundation;

@class NSSet, NSString;
@protocol OS_dispatch_queue;

@interface WFExtensionEnumerator : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_notificationQueue;
  int _lsToken;
  int _pkToken;
}

@property (readonly, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) NSSet *supportedApplicationRecords;

/* instance methods */
- (id)initWithExtensionPointIdentifier:(id)identifier;
- (void)dealloc;
- (void)enumerateExtensions;
@end

#endif /* WFExtensionEnumerator_h */
