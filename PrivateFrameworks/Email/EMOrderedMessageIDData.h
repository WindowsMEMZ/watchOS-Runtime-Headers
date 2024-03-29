//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMOrderedMessageIDData_h
#define EMOrderedMessageIDData_h
@import Foundation;

@class NSArray, NSDictionary;

@interface EMOrderedMessageIDData : NSObject

@property (copy, nonatomic) NSArray *objectIDs;
@property (copy, nonatomic) NSDictionary *objectIDByPersistentID;

/* instance methods */
- (id)initWithObjectIDs:(id)ids objectIDByPersistentID:(id)id;
@end

#endif /* EMOrderedMessageIDData_h */
