//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditReportGenerator_h
#define AXAuditReportGenerator_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AXAuditReportGenerator : NSObject

@property (retain, nonatomic) NSMutableArray *_issues;
@property (retain, nonatomic) NSMutableDictionary *_auditScreenToIssuesMapping;
@property (copy, nonatomic) NSString *deviceName;

/* instance methods */
- (id)init;
- (void)appendIssues:(id)issues;
- (void)_generateMapOfScreensToIssues:(id)issues;
- (id)_fileExtensionForReportType:(long long)type;
- (id)_fullOutputPathForReportType:(long long)type outputPath:(id)path outputFilename:(id)filename;
- (void)generateXCTestReportType:(long long)type forAuditResult:(id)result completion:(id /* block */)completion;
- (void)_processScreenshotsForAXAuditResult:(id)result completion:(id /* block */)completion;
- (id)generateReportType:(long long)type outputPath:(id)path outputFilename:(id)filename error:(id *)error;
- (id)_defaultSavePath;
- (id)_locStringForKey:(id)key;
- (id)reportHeaderForIssues:(id)issues;
- (id)textDescriptionForIssues:(id)issues;
- (id)imageDataForIssue:(id)issue thumbnailOnly:(BOOL)only;
- (id)_htmlTemplatePath;
- (id)_htmlTemplate;
- (id)_generateHTMLSourceFromTemplates;
- (id)_jsonDictionaryForIssue:(id)issue screenName:(id)name;
- (id)_anyAuditIssueFromResults:(id)results;
- (id)_jsonDictionaryForAuditIssueImage:(id)image thumbnailOnly:(BOOL)only;
- (id)_jsonArrayForIssues:(id)issues screenName:(id)name;
- (id)_jsonDictionaryForScreen:(id)screen issuesOnScreen:(id)screen;
- (id)_jsonDictionary;
- (id)_jsonData;
- (id)_jsonString;
@end

#endif /* AXAuditReportGenerator_h */
