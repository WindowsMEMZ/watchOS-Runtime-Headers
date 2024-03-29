//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNArchiver_h
#define CNArchiver_h
@import Foundation;

@interface CNArchiver : NSObject
/* class methods */
+ (id)os_log;
+ (id)encodeObject:(id)object error:(id *)error;
+ (id)decodeObjectOfClass:(Class)class data:(id)data error:(id *)error;
+ (id)decodeObjectOfClass:(Class)class associatedClasses:(id)classes data:(id)data error:(id *)error;
@end

#endif /* CNArchiver_h */
