//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPInterfaceDelegate_Protocol_h
#define SPInterfaceDelegate_Protocol_h
@import Foundation;

@protocol SPInterfaceDelegate <NSObject>
/* instance methods */
- (void)performAction:(id)action withValue:(id)value;
- (void)setValue:(id)value forKey:(id)key;
@optional
/* instance methods */
- (void)interfaceGroupViewDidAdjustHeight:(id)height;
@end

#endif /* SPInterfaceDelegate_Protocol_h */
