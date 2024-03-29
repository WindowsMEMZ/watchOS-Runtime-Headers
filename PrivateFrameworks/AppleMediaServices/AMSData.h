//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSData_h
#define AMSData_h
@import Foundation;

@interface AMSData : NSObject
/* class methods */
+ (id)compressedGzippedDataWithData:(id)data;
+ (id)decompressedDataWithGzippedData:(id)data;
+ (id)objectWithData:(id)data encoding:(long long)encoding error:(id *)error;
+ (id)objectWithData:(id)data response:(id)response error:(id *)error;
+ (id)dataWithObject:(id)object encoding:(long long)encoding error:(id *)error;
+ (long long)dataEncodingFromContentType:(id)type;
+ (long long)_dataEncodingFromResponse:(id)response;
@end

#endif /* AMSData_h */
