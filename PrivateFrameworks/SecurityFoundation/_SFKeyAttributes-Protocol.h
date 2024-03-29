//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef _SFKeyAttributes_Protocol_h
#define _SFKeyAttributes_Protocol_h
@import Foundation;

@protocol _SFKeyAttributes <NSObject, NSCopying>

@property (readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
@property (readonly, copy, nonatomic) NSString *keyDomain;

/* class methods */
+ (id)alloc;
@end

#endif /* _SFKeyAttributes_Protocol_h */
