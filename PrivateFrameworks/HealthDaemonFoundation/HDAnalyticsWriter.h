//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDAnalyticsWriter_h
#define HDAnalyticsWriter_h
@import Foundation;

@class NSString;

@interface HDAnalyticsWriter : NSObject {
  /* instance variables */
  struct __SecCertificate * _certificate;
  NSString *_analyticsDirectory;
}

/* instance methods */
- (id)initWithURL:(id)url;
- (id)init;
- (BOOL)submitJSONAnalyticsData:(id)data bugType:(id)type error:(id *)error;
- (BOOL)submitJSONAnalyticsData:(id)data toDirectory:(id)directory withConfiguration:(id)configuration error:(id *)error;
- (id)URLForAnalyticsFileWithName:(id)name;
- (id)analyticsFilePathsWithError:(id *)error;
@end

#endif /* HDAnalyticsWriter_h */
