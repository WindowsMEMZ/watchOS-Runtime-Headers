//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEDNSQuery_h
#define NEDNSQuery_h
@import Foundation;

@class NSData, NSString;

@interface NEDNSQuery : NSObject

@property (readonly) NSString *name;
@property (readonly) long long recordType;
@property (readonly) long long recordClass;
@property (copy) NSData *answerData;
@property unsigned int answerTTL;

/* instance methods */
- (id)initWithName:(id)name recordType:(long long)type recordClass:(long long)class;
@end

#endif /* NEDNSQuery_h */
