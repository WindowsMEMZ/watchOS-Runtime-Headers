//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKEADFFileParser_h
#define HKEADFFileParser_h
@import Foundation;

@class NSData;

@interface HKEADFFileParser : NSObject

@property (retain, nonatomic) NSData *data;

/* instance methods */
- (id)initWithData:(id)data;
- (void)_enumerateHeadersWithHandler:(id /* block */)handler;
- (void)enumerateChannelsWithHandler:(id /* block */)handler;
- (id)payloadInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)newBuilderWithStartDate:(id)date;
@end

#endif /* HKEADFFileParser_h */
