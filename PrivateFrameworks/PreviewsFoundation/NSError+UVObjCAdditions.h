//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef NSError_UVObjCAdditions_h
#define NSError_UVObjCAdditions_h
@import Foundation;

@interface NSError (UVObjCAdditions)
/* class methods */
+ (id)uv_errorWithUserInfo:(id)info;
+ (id)uv_errorWithDescription:(id)description;
+ (id)uv_errorWithFormat:(id)format;
@end

#endif /* NSError_UVObjCAdditions_h */
