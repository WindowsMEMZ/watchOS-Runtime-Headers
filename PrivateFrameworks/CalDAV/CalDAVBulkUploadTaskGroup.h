//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVBulkUploadTaskGroup_h
#define CalDAVBulkUploadTaskGroup_h
@import Foundation;

#include "CoreDAVBulkUploadTaskGroup.h"

@interface CalDAVBulkUploadTaskGroup : CoreDAVBulkUploadTaskGroup
/* instance methods */
- (id)initWithFolderURL:(id)url checkCTag:(id)ctag uuidsToAddActions:(id)actions hrefsToModDeleteActions:(id)actions context:(id)context accountInfoProvider:(id)provider taskManager:(id)manager;
- (Class)multiPutTaskClass;
@end

#endif /* CalDAVBulkUploadTaskGroup_h */
