//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFontLoader_h
#define NTKFontLoader_h
@import Foundation;

@interface NTKFontLoader : NSObject
/* class methods */
+ (id)fontDescriptorForSectName:(id)name;
+ (id)fontDescriptorForSectName:(id)name fromMachO:(const struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)o;
@end

#endif /* NTKFontLoader_h */
