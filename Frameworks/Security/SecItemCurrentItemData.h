//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef SecItemCurrentItemData_h
#define SecItemCurrentItemData_h
@import Foundation;

@class NSData, NSDate;

@interface SecItemCurrentItemData : NSObject

@property (retain) NSData *persistentRef;
@property (retain) NSDate *currentItemPointerModificationTime;

/* instance methods */
- (id)initWithPersistentRef:(id)ref;
@end

#endif /* SecItemCurrentItemData_h */
