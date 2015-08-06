//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-proprietary/actor-apps/core/src/main/java/im/actor/model/Configuration.java
//

#ifndef _AMConfiguration_H_
#define _AMConfiguration_H_

#include "J2ObjC_header.h"

@class AMApiConfiguration;
@class AMAppCategoryEnum;
@class AMDeviceCategoryEnum;
@class IOSObjectArray;
@protocol AMAnalyticsProvider;
@protocol AMCryptoProvider;
@protocol AMDispatcherProvider;
@protocol AMFileSystemProvider;
@protocol AMHttpProvider;
@protocol AMLifecycleProvider;
@protocol AMLocaleProvider;
@protocol AMLogProvider;
@protocol AMMainThreadProvider;
@protocol AMNetworkProvider;
@protocol AMNotificationProvider;
@protocol AMPhoneBookProvider;
@protocol AMStorageProvider;
@protocol AMThreadingProvider;

@interface AMConfiguration : NSObject

#pragma mark Public

- (id<AMAnalyticsProvider>)getAnalyticsProvider;

- (AMApiConfiguration *)getApiConfiguration;

- (AMAppCategoryEnum *)getAppCategory;

- (id<AMCryptoProvider>)getCryptoProvider;

- (AMDeviceCategoryEnum *)getDeviceCategory;

- (id<AMDispatcherProvider>)getDispatcherProvider;

- (IOSObjectArray *)getEndpoints;

- (id<AMFileSystemProvider>)getFileSystemProvider;

- (id<AMHttpProvider>)getHttpProvider;

- (id<AMLifecycleProvider>)getLifecycleProvider;

- (id<AMLocaleProvider>)getLocaleProvider;

- (id<AMLogProvider>)getLog;

- (id<AMMainThreadProvider>)getMainThreadProvider;

- (jint)getMaxDelay;

- (jint)getMaxFailureCount;

- (jint)getMinDelay;

- (id<AMNetworkProvider>)getNetworkProvider;

- (id<AMNotificationProvider>)getNotificationProvider;

- (id<AMPhoneBookProvider>)getPhoneBookProvider;

- (id<AMStorageProvider>)getStorageProvider;

- (id<AMThreadingProvider>)getThreadingProvider;

- (jboolean)isEnableContactsLogging;

- (jboolean)isEnableFilesLogging;

- (jboolean)isEnableNetworkLogging;

#pragma mark Package-Private

- (instancetype)initWithAMNetworkProvider:(id<AMNetworkProvider>)networkProvider
            withAMConnectionEndpointArray:(IOSObjectArray *)endpoints
                  withAMThreadingProvider:(id<AMThreadingProvider>)threadingProvider
                 withAMMainThreadProvider:(id<AMMainThreadProvider>)mainThreadProvider
                    withAMStorageProvider:(id<AMStorageProvider>)storageProvider
                        withAMLogProvider:(id<AMLogProvider>)log
                     withAMLocaleProvider:(id<AMLocaleProvider>)localeProvider
                  withAMPhoneBookProvider:(id<AMPhoneBookProvider>)phoneBookProvider
                     withAMCryptoProvider:(id<AMCryptoProvider>)cryptoProvider
                 withAMFileSystemProvider:(id<AMFileSystemProvider>)fileSystemProvider
               withAMNotificationProvider:(id<AMNotificationProvider>)notificationProvider
                 withAMDispatcherProvider:(id<AMDispatcherProvider>)dispatcherProvider
                   withAMApiConfiguration:(AMApiConfiguration *)apiConfiguration
                              withBoolean:(jboolean)enableContactsLogging
                              withBoolean:(jboolean)enableNetworkLogging
                              withBoolean:(jboolean)enableFilesLogging
                       withAMHttpProvider:(id<AMHttpProvider>)httpProvider
                  withAMAnalyticsProvider:(id<AMAnalyticsProvider>)analyticsProvider
                 withAMDeviceCategoryEnum:(AMDeviceCategoryEnum *)deviceCategory
                    withAMAppCategoryEnum:(AMAppCategoryEnum *)appCategory
                  withAMLifecycleProvider:(id<AMLifecycleProvider>)lifecycleProvider
                                  withInt:(jint)minDelay
                                  withInt:(jint)maxDelay
                                  withInt:(jint)maxFailureCount;

@end

J2OBJC_EMPTY_STATIC_INIT(AMConfiguration)

FOUNDATION_EXPORT void AMConfiguration_initWithAMNetworkProvider_withAMConnectionEndpointArray_withAMThreadingProvider_withAMMainThreadProvider_withAMStorageProvider_withAMLogProvider_withAMLocaleProvider_withAMPhoneBookProvider_withAMCryptoProvider_withAMFileSystemProvider_withAMNotificationProvider_withAMDispatcherProvider_withAMApiConfiguration_withBoolean_withBoolean_withBoolean_withAMHttpProvider_withAMAnalyticsProvider_withAMDeviceCategoryEnum_withAMAppCategoryEnum_withAMLifecycleProvider_withInt_withInt_withInt_(AMConfiguration *self, id<AMNetworkProvider> networkProvider, IOSObjectArray *endpoints, id<AMThreadingProvider> threadingProvider, id<AMMainThreadProvider> mainThreadProvider, id<AMStorageProvider> storageProvider, id<AMLogProvider> log, id<AMLocaleProvider> localeProvider, id<AMPhoneBookProvider> phoneBookProvider, id<AMCryptoProvider> cryptoProvider, id<AMFileSystemProvider> fileSystemProvider, id<AMNotificationProvider> notificationProvider, id<AMDispatcherProvider> dispatcherProvider, AMApiConfiguration *apiConfiguration, jboolean enableContactsLogging, jboolean enableNetworkLogging, jboolean enableFilesLogging, id<AMHttpProvider> httpProvider, id<AMAnalyticsProvider> analyticsProvider, AMDeviceCategoryEnum *deviceCategory, AMAppCategoryEnum *appCategory, id<AMLifecycleProvider> lifecycleProvider, jint minDelay, jint maxDelay, jint maxFailureCount);

FOUNDATION_EXPORT AMConfiguration *new_AMConfiguration_initWithAMNetworkProvider_withAMConnectionEndpointArray_withAMThreadingProvider_withAMMainThreadProvider_withAMStorageProvider_withAMLogProvider_withAMLocaleProvider_withAMPhoneBookProvider_withAMCryptoProvider_withAMFileSystemProvider_withAMNotificationProvider_withAMDispatcherProvider_withAMApiConfiguration_withBoolean_withBoolean_withBoolean_withAMHttpProvider_withAMAnalyticsProvider_withAMDeviceCategoryEnum_withAMAppCategoryEnum_withAMLifecycleProvider_withInt_withInt_withInt_(id<AMNetworkProvider> networkProvider, IOSObjectArray *endpoints, id<AMThreadingProvider> threadingProvider, id<AMMainThreadProvider> mainThreadProvider, id<AMStorageProvider> storageProvider, id<AMLogProvider> log, id<AMLocaleProvider> localeProvider, id<AMPhoneBookProvider> phoneBookProvider, id<AMCryptoProvider> cryptoProvider, id<AMFileSystemProvider> fileSystemProvider, id<AMNotificationProvider> notificationProvider, id<AMDispatcherProvider> dispatcherProvider, AMApiConfiguration *apiConfiguration, jboolean enableContactsLogging, jboolean enableNetworkLogging, jboolean enableFilesLogging, id<AMHttpProvider> httpProvider, id<AMAnalyticsProvider> analyticsProvider, AMDeviceCategoryEnum *deviceCategory, AMAppCategoryEnum *appCategory, id<AMLifecycleProvider> lifecycleProvider, jint minDelay, jint maxDelay, jint maxFailureCount) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AMConfiguration)

typedef AMConfiguration ImActorModelConfiguration;

#endif // _AMConfiguration_H_