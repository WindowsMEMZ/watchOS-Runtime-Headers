//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFMD5DigestOperation_Ivars_h
#define SFMD5DigestOperation_Ivars_h
@import Foundation;

@interface SFMD5DigestOperation_Ivars : NSObject {
  /* instance variables */
  struct CC_MD5state_st { unsigned int A; unsigned int B; unsigned int C; unsigned int D; unsigned int Nl; unsigned int Nh; unsigned int x[16] data; int num; } context;
}

@end

#endif /* SFMD5DigestOperation_Ivars_h */
