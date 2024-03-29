//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 324.0.0.0.0
//
#ifndef USUsageQuerying_h
#define USUsageQuerying_h
@import Foundation;

@class BMCoreDuetStream;
@protocol _CDUserContext;

@interface USUsageQuerying : NSObject

@property (readonly) NSObject<_CDUserContext> *context;
@property (readonly) BMCoreDuetStream *duetStream;

/* class methods */
+ (id)getLocalDeviceIdentifierAndReturnError:(id *)error;
+ (void)synchronizeUsageWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithContext:(id)context coreDuetStream:(id)stream;
- (id)initWithContext:(id)context eventStorage:(id)storage;
- (id)init;
- (void)queryUsageDuringInterval:(id)interval partitionInterval:(double)interval completionHandler:(id /* block */)handler;
- (void)queryUsageDuringInterval:(id)interval partitionInterval:(double)interval focalOnly:(BOOL)only completionHandler:(id /* block */)handler;
- (void)_computeUsageWithDisplayBacklitEvents:(id)events applicationUsageEvents:(id)events webUsageEvents:(id)events nowPlayingEvents:(id)events videoUsageEvents:(id)events notificationEvents:(id)events categoryByBundleIdentifier:(id)identifier categoryByWebDomain:(id)domain interval:(id)interval partitionInterval:(double)interval referenceDate:(id)date focalOnly:(BOOL)only completionHandler:(id /* block */)handler;
- (void)_updateLocalReports:(id)reports remoteReports:(id)reports aggregateReports:(id)reports nonIntersectingScreenTimeIntervals:(id)intervals intersectingScreenTimeIntervals:(id)intervals longestSessionByDevice:(id)device applicationUsageIntervals:(id)intervals unboundApplicationUsageIntervals:(id)intervals webUsageIntervalsByDevice:(id)device categoryUsageIntervalsByDevice:(id)device aggregatedApplicationUsageIntervalsByDevice:(id)device aggregatedWebUsageIntervalsByDevice:(id)device categoryByBundleIdentifier:(id)identifier categoryByWebDomain:(id)domain notificationsByDevice:(id)device interval:(id)interval timeZoneByDevice:(id)device lastEventDateByDevice:(id)device;
- (id)_generatePickupsByBundleIdentifierWithPickupIntervals:(id)intervals applicationUsageIntervals:(id)intervals pickupsWithoutApplicationUsage:(unsigned long long *)usage firstPickup:(id *)pickup;
- (id)_newReportWithNonIntersectingScreenTimeIntervals:(id)intervals pickupsByBundleIdentifier:(id)identifier pickupsWithoutApplicationUsage:(unsigned long long)usage firstPickup:(id)pickup longestSession:(id)session applicationUsageIntervals:(id)intervals webUsageIntervals:(id)intervals categoryUsageIntervals:(id)intervals aggregatedApplicationUsageIntervals:(id)intervals aggregatedWebUsageIntervals:(id)intervals categoryByBundleIdentifier:(id)identifier categoryByWebDomain:(id)domain notifications:(id)notifications interval:(id)interval timeZone:(id)zone lastEventDate:(id)date;
- (id)queryForApplications:(id)applications webDomains:(id)domains categories:(id)categories interval:(id)interval error:(id *)error;
- (id)queryForApplications:(id)applications webDomains:(id)domains categories:(id)categories interval:(id)interval segmentInterval:(double)interval error:(id *)error;
- (id)queryForApplications:(id)applications webDomains:(id)domains categories:(id)categories interval:(id)interval focalOnly:(BOOL)only error:(id *)error;
- (double)_computeUsageForApplications:(id)applications webDomains:(id)domains categories:(id)categories applicationUsageEvents:(id)events webUsageEvents:(id)events nowPlayingEvents:(id)events videoUsageEvents:(id)events categoryByBundleIdentifier:(id)identifier categoryByWebDomain:(id)domain interval:(id)interval referenceDate:(id)date focalOnly:(BOOL)only;
- (double)_generateUsageTimeWithApplicationUsageIntervals:(id)intervals webUsageIntervalsByDevice:(id)device categoryUsageIntervalsByDevice:(id)device aggregatedApplicationUsageIntervalsByDevice:(id)device aggregatedWebUsageIntervalsByDevice:(id)device categoryByBundleIdentifier:(id)identifier categoryByWebDomain:(id)domain applications:(id)applications webDomains:(id)domains categories:(id)categories;
- (void)queryForUncategorizedLocalWebUsageDuringInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)_computeUncategorizedLocalWebUsageWithWebUsageEvents:(id)events uncategorizedDomains:(id)domains interval:(id)interval referenceDate:(id)date completionHandler:(id /* block */)handler;
- (id)_generateUncategorizedLocalWebUsageWithWebUsageIntervals:(id)intervals uncategorizedDomains:(id)domains;
- (id)_computeScreenTime:(BOOL)time withEvents:(id)events intersectingScreenTimeIntervalsByDevice:(id *)device longestSessionByDevice:(id *)device timeZoneByDevice:(id)device lastEventDateByDevice:(id)device partition:(id)partition referenceDate:(id)date;
- (void)_updateScreenTimeWithInterval:(id)interval rawInterval:(id)interval deviceIdentifier:(id)identifier partition:(id)partition event:(id)event nonIntersectingScreenTimeIntervalsByDevice:(id)device intersectingScreenTimeIntervalsByDevice:(id)device longestSessionByDevice:(id)device timeZoneByDevice:(id)device lastEventDateByDevice:(id)device;
- (id)_currentScreenTimeIntervalDuringInterval:(id)interval usageStartDate:(id *)date referenceDate:(id)date;
- (id)_getBundleIdentiersFromApplicationUsageEvents:(id)events videoUsageEvents:(id)events interval:(id)interval referenceDate:(id)date focalOnly:(BOOL)only;
- (id)_computeApplicationUsageWithEvents:(id)events unboundApplicationUsageIntervalsByDevice:(id *)device timeZoneByDevice:(id)device lastEventDateByDevice:(id)device categoryUsageIntervalsByDevice:(id)device aggregatedApplicationUsageIntervalsByDevice:(id)device categoryByBundleIdentifier:(id)identifier partition:(id)partition referenceDate:(id)date focalOnly:(BOOL)only;
- (void)_updateApplicationUsageWithInterval:(id)interval unboundInterval:(id)interval bundleIdentifier:(id)identifier trustedApplicationUsage:(BOOL)usage deviceIdentifier:(id)identifier event:(id)event applicationUsageIntervalsByDevice:(id)device unboundApplicationUsageIntervalsByDevice:(id)device categoryUsageIntervalsByDevice:(id)device aggregatedApplicationUsageIntervalsByDevice:(id)device categoryByBundleIdentifier:(id)identifier timeZoneByDevice:(id)device lastEventDateByDevice:(id)device;
- (void)_enumerateCurrentApplicationUsageIntervalsDuringInterval:(id)interval referenceDate:(id)date focalOnly:(BOOL)only block:(id /* block */)block;
- (id)_getWebDomainsFromWebUsageEvents:(id)events videoUsageEvents:(id)events interval:(id)interval referenceDate:(id)date focalOnly:(BOOL)only;
- (id)_computeWebUsageWithEvents:(id)events timeZoneByDevice:(id)device lastEventDateByDevice:(id)device categoryUsageIntervalsByDevice:(id)device aggregatedApplicationUsageIntervalsByDevice:(id)device aggregatedWebUsageIntervalsByDevice:(id)device categoryByWebDomain:(id)domain partition:(id)partition referenceDate:(id)date focalOnly:(BOOL)only;
- (void)_updateWebUsageWithInterval:(id)interval webDomain:(id)domain trustedWebUsage:(BOOL)usage deviceIdentifier:(id)identifier event:(id)event webUsageIntervalsByDevice:(id)device categoryUsageIntervalsByDevice:(id)device aggregatedApplicationUsageIntervalsByDevice:(id)device aggregatedWebUsageIntervalsByDevice:(id)device categoryByWebDomain:(id)domain timeZoneByDevice:(id)device lastEventDateByDevice:(id)device;
- (void)_enumerateCurrentWebUsageIntervalsDuringInterval:(id)interval referenceDate:(id)date focalOnly:(BOOL)only block:(id /* block */)block;
- (void)_computeNowPlayingUsageWithEvents:(id)events categoryUsageIntervalsByDevice:(id)device timeZoneByDevice:(id)device lastEventDateByDevice:(id)device partition:(id)partition referenceDate:(id)date;
- (void)_updateNowPlayingUsageWithInterval:(id)interval event:(id)event deviceIdentifier:(id)identifier categoryUsageIntervalsByDevice:(id)device timeZoneByDevice:(id)device lastEventDateByDevice:(id)device;
- (id)_currentNowPlayingUsageIntervalsDuringInterval:(id)interval referenceDate:(id)date;
- (void)_enumerateCurrentVideoUsageIntervalsDuringInterval:(id)interval referenceDate:(id)date block:(id /* block */)block;
- (id)_computeNotificationsWithEvents:(id)events timeZoneByDevice:(id)device lastEventDateByDevice:(id)device partition:(id)partition;
- (void)_updateNotificationsWithEvent:(id)event bundleIdentifier:(id)identifier trustedNotification:(BOOL)notification deviceIdentifier:(id)identifier notificationsByDevice:(id)device timeZoneByDevice:(id)device lastEventDateByDevice:(id)device;
- (void)_enumerateEvents:(id)events intervalEndDate:(id)date block:(id /* block */)block;
@end

#endif /* USUsageQuerying_h */
