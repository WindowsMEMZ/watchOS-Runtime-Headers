//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSResource_h
#define AMSResource_h
@import Foundation;

@interface AMSResource : NSObject
/* class methods */
+ (id)loadHARFileWithName:(id)name bundle:(id)bundle;
+ (id)loadPropertyListWithName:(id)name bundle:(id)bundle error:(id *)error;
@end

#endif /* AMSResource_h */
