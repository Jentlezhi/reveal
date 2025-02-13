//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFSDKiAdClient, AppsFlyerAES128Crypto, AppsFlyerHTTPClient, AppsFlyerKeychainWrapper, NSArray, NSDate, NSDictionary, NSString, NSURL, NSURLSessionDataTask;
@protocol AFSDKStorageProtocol, AppsFlyerTrackerDelegate, OS_dispatch_queue;

@interface AppsFlyerTracker : NSObject
{
    _Bool permitAggregateiAdData;
    _Bool _isStopTracking;
    _Bool _disableAppleAdSupportTracking;
    _Bool _isDebug;
    _Bool _shouldCollectDeviceName;
    _Bool _deviceTrackingDisabled;
    _Bool _disableIAdTracking;
    _Bool _useReceiptValidationSandbox;
    _Bool _useUninstallSandbox;
    _Bool _isBackgroundRequestEnabled;
    int emailCryptType;
    NSString *advertiserId;
    NSString *sourceApplication;
    NSURL *deeplink;
    NSDictionary *pushPayload;
    NSArray *userEmails;
    NSString *_host;
    NSString *_customerUserID;
    NSDictionary *_customData;
    NSString *_appsFlyerDevKey;
    NSString *_appleAppID;
    NSString *_currencyCode;
    NSString *_appInviteOneLinkID;
    id <AppsFlyerTrackerDelegate> _delegate;
    unsigned long long _minTimeBetweenSessions;
    AppsFlyerHTTPClient *_httpClient;
    NSURLSessionDataTask *_validateRequest;
    NSDate *_lastLaunchTime;
    AppsFlyerAES128Crypto *_crypto;
    AFSDKiAdClient *_iAdClient;
    id <AFSDKStorageProtocol> _storage;
    NSString *_platfromDevName;
    AppsFlyerKeychainWrapper *_keychainWrapper;
    NSObject<OS_dispatch_queue> *_mBackgroundQueue;
}

+ (id)sharedTracker;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mBackgroundQueue; // @synthesize mBackgroundQueue=_mBackgroundQueue;
@property(retain, nonatomic) AppsFlyerKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(retain, nonatomic) NSString *platfromDevName; // @synthesize platfromDevName=_platfromDevName;
@property(retain, nonatomic) id <AFSDKStorageProtocol> storage; // @synthesize storage=_storage;
@property(nonatomic) _Bool isBackgroundRequestEnabled; // @synthesize isBackgroundRequestEnabled=_isBackgroundRequestEnabled;
@property(retain) AFSDKiAdClient *iAdClient; // @synthesize iAdClient=_iAdClient;
@property(retain) AppsFlyerAES128Crypto *crypto; // @synthesize crypto=_crypto;
@property(retain) NSDate *lastLaunchTime; // @synthesize lastLaunchTime=_lastLaunchTime;
@property(retain, nonatomic) NSURLSessionDataTask *validateRequest; // @synthesize validateRequest=_validateRequest;
@property(retain, nonatomic) AppsFlyerHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
@property unsigned long long minTimeBetweenSessions; // @synthesize minTimeBetweenSessions=_minTimeBetweenSessions;
@property(nonatomic, setter=setUseUninstallSandbox:) _Bool useUninstallSandbox; // @synthesize useUninstallSandbox=_useUninstallSandbox;
@property(nonatomic, setter=setUseReceiptValidationSandbox:) _Bool useReceiptValidationSandbox; // @synthesize useReceiptValidationSandbox=_useReceiptValidationSandbox;
@property(nonatomic) __weak id <AppsFlyerTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool disableIAdTracking; // @synthesize disableIAdTracking=_disableIAdTracking;
@property _Bool deviceTrackingDisabled; // @synthesize deviceTrackingDisabled=_deviceTrackingDisabled;
@property(retain, nonatomic, setter=setAppInviteOneLink:) NSString *appInviteOneLinkID; // @synthesize appInviteOneLinkID=_appInviteOneLinkID;
@property(nonatomic, setter=setShouldCollectDeviceName:) _Bool shouldCollectDeviceName; // @synthesize shouldCollectDeviceName=_shouldCollectDeviceName;
@property(nonatomic, setter=setIsDebug:) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property _Bool disableAppleAdSupportTracking; // @synthesize disableAppleAdSupportTracking=_disableAppleAdSupportTracking;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic, setter=setAppleAppID:) NSString *appleAppID; // @synthesize appleAppID=_appleAppID;
@property(retain, nonatomic, setter=setAppsFlyerDevKey:) NSString *appsFlyerDevKey; // @synthesize appsFlyerDevKey=_appsFlyerDevKey;
@property(retain, nonatomic, setter=setAdditionalData:) NSDictionary *customData; // @synthesize customData=_customData;
@property(retain, nonatomic, setter=setCustomerUserID:) NSString *customerUserID; // @synthesize customerUserID=_customerUserID;
@property(nonatomic) int emailCryptType; // @synthesize emailCryptType;
@property(retain, nonatomic) NSArray *userEmails; // @synthesize userEmails;
@property(retain, nonatomic) NSDictionary *pushPayload; // @synthesize pushPayload;
@property(nonatomic) _Bool permitAggregateiAdData; // @synthesize permitAggregateiAdData;
@property(retain, nonatomic) NSURL *deeplink; // @synthesize deeplink;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication;
@property(retain, nonatomic) NSString *advertiserId; // @synthesize advertiserId;
- (void).cxx_destruct;
@property _Bool isStopTracking; // @synthesize isStopTracking=_isStopTracking;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void)remoteDebuggingCallWithData:(id)arg1;
- (id)getSDKVersion;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)handlePushNotification:(id)arg1;
- (id)getInstallDate:(id)arg1;
- (id)getFirstLanuchDate:(id)arg1;
- (id)getVersionUpdateDate:(id)arg1 currentUpdateDate:(id)arg2;
- (long long)getInAppCounter:(_Bool)arg1;
- (void)incrementRealLaunchCounter;
- (long long)getRealLaunchCounter;
- (long long)getCounter:(_Bool)arg1;
- (void)executeRequestWithRequestType:(long long)arg1 urlString:(id)arg2 parameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)callServerWithEventName:(id)arg1 value:(id)arg2 withDictionary:(id)arg3 isEvent:(_Bool)arg4 isIAd:(_Bool)arg5;
- (_Bool)isWifiAvailable;
- (double)getTimePassedSinceLastLaunch;
- (id)encryptData:(id)arg1;
- (_Bool)validateAppID;
- (void)callServerWithEventName:(id)arg1 value:(id)arg2 isInAppEvent:(_Bool)arg3 isIAd:(_Bool)arg4;
- (void)callServerWithEventName:(id)arg1;
- (void)setKeychain:(id)arg1;
- (id)getOriginalAppsFlyerId;
- (id)getAppsFlyerUID;
- (id)generateAppsFlyerId;
- (id)installDate;
- (void)trackLocation:(double)arg1 latitude:(double)arg2;
- (void)validateAndTrackInAppPurchase:(id)arg1 price:(id)arg2 currency:(id)arg3 transactionId:(id)arg4 additionalParameters:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)validatePurchaseEvent:(id)arg1 price:(id)arg2 currency:(id)arg3 transactionId:(id)arg4 receiptData:(id)arg5;
- (void)addOneLink:(id)arg1;
- (id)getEventParameters:(_Bool)arg1;
- (void)trackEvent:(id)arg1 withValues:(id)arg2;
- (void)trackEvent:(id)arg1 withValue:(id)arg2;
- (void)trackAppLaunch;
- (void)getConversionData;
- (void)loadConversionDataWithDelegate:(id)arg1;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (void)didUpdateUserActivity:(id)arg1;
- (_Bool)continueUserActivity:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (void)handleOpenUrl:(id)arg1 options:(id)arg2;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 withAnnotation:(id)arg3;
- (void)handleEnteredBackground;
- (void)handleDidFinishLaunch:(id)arg1;
- (id)getValueFromBundle:(id)arg1;
- (void)backgroundRegisterUninstall:(id)arg1;
- (void)registerUninstall:(id)arg1;
- (void)handleOneLinkResponse:(id)arg1;
- (void)sendRequestFromCache:(id)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (id)init;
- (void)setUserEmails:(id)arg1 withCryptType:(int)arg2;
- (void)setIsTrace:(_Bool)arg1;

@end

