//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CNContactStore_CallHistory_h
#define CNContactStore_CallHistory_h
@import Foundation;

@interface CNContactStore (CallHistory) <CHContactDataSource>
/* instance methods */
- (id)contactsByContactHandleForContactHandles:(id)handles keyDescriptors:(id)descriptors error:(id *)error;
@end

#endif /* CNContactStore_CallHistory_h */
