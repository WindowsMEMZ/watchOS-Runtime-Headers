//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PAMediaConversionServiceResourceURLReference_h
#define PAMediaConversionServiceResourceURLReference_h
@import Foundation;

@class NSURL;

@interface PAMediaConversionServiceResourceURLReference : NSObject

@property (retain) NSURL *url;
@property BOOL mustStopAccessingURL;
@property BOOL shouldDeleteOnDeallocation;

/* class methods */
+ (id)referenceWithURL:(id)url;
+ (id)referenceWithDictionaryRepresentation:(id)representation error:(id *)error;
+ (BOOL)getPathHash:(unsigned long long *)hash lastPathComponent:(id *)component forDictionaryRepresentation:(id)representation;

/* instance methods */
- (void)getPathHash:(unsigned long long *)hash lastPathComponent:(id *)component;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)getFileSize:(unsigned long long *)size error:(id *)error;
- (void)dealloc;
- (id)dictionaryRepresentationWithError:(id *)error;
@end

#endif /* PAMediaConversionServiceResourceURLReference_h */
