//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKDebugRadarReporter_h
#define NTKDebugRadarReporter_h
@import Foundation;

@class NSMutableArray, NSString, NSURL;

@interface NTKDebugRadarReporter : NSObject

@property (copy, nonatomic) NSString *radarTitle;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertMessage;
@property (retain, nonatomic) NSMutableArray *attachmentURLs;
@property (retain, nonatomic) NSMutableArray *additionalInformationStrings;
@property (retain, nonatomic) NSURL *temporaryDirectoryURLToCleanup;

/* class methods */
+ (BOOL)_archiveDirectory:(id)directory toFile:(id)file;

/* instance methods */
- (id)initWithRadarTitle:(id)title alertTitle:(id)title alertMessage:(id)message;
- (BOOL)addAttachmentAtURL:(id)url error:(id *)error;
- (void)appendInformationToDescription:(id)description;
- (BOOL)present;
@end

#endif /* NTKDebugRadarReporter_h */
