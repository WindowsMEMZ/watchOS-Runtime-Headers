//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12563.0.0.0.0
//
#ifndef ABSCallbackInvoker_h
#define ABSCallbackInvoker_h
@import Foundation;

@interface ABSCallbackInvoker : NSObject {
  /* instance variables */
  void * addressBook;
  undefined * callback;
  void * context;
}

/* class methods */
+ (void)invokeOnThread:(id)thread callback:(undefined *)callback withAddressBook:(void *)book context:(void *)context;

/* instance methods */
- (void)invoke;
@end

#endif /* ABSCallbackInvoker_h */
