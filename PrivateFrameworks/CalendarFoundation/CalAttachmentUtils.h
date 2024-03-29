//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalAttachmentUtils_h
#define CalAttachmentUtils_h
@import Foundation;

@interface CalAttachmentUtils : NSObject
/* class methods */
+ (id)localURLForAttachmentWithRelativePath:(id)path baseURL:(id)url;
+ (id)attachmentContainerWithBaseURL:(id)url;
+ (id)attachmentContainerForSourceIdentifier:(id)identifier calendarDataContainer:(id)container;
+ (id)legacyAttachmentContainerWithBaseURL:(id)url;
+ (id)legacyCalendarDataContainer;
+ (id)getFileSizeForPath:(id)path fileManager:(id)manager error:(id *)error;
+ (id)localRelativePathForLocalAbsoluteURL:(id)url localBaseURL:(id)url;
+ (BOOL)attachmentURL:(id)url matchesServerURL:(id)url;
+ (id)_stripSubdomain:(id)subdomain;
+ (id)_knownTLDForHostname:(id)hostname;
@end

#endif /* CalAttachmentUtils_h */
