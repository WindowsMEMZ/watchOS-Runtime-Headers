//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef NSData_GZip_h
#define NSData_GZip_h
@import Foundation;

@interface NSData (GZip)
/* class methods */
+ (id)makeArchive:(const void *)archive length:(unsigned long long)length level:(float)level;

/* instance methods */
- (id)gzipDeflate:(float)deflate;
- (id)gzipInflate;
@end

#endif /* NSData_GZip_h */
