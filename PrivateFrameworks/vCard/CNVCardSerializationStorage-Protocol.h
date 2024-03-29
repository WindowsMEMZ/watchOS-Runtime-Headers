//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNVCardSerializationStorage_Protocol_h
#define CNVCardSerializationStorage_Protocol_h
@import Foundation;

@protocol CNVCardSerializationStorage <NSObject>
/* instance methods */
- (void)appendString:(id)string;
- (void)appendFormat:(id)format;
- (void)appendString:(id)string usingEncoding:(unsigned long long)encoding;
- (void)appendData:(id)data;
- (unsigned long long)currentLength;
- (id)insertionMarker;
- (unsigned long long)estimatedDataLength;
- (void)insertString:(id)string atMarker:(id)marker;
@end

#endif /* CNVCardSerializationStorage_Protocol_h */
