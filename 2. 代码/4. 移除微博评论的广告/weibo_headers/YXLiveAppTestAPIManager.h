//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface YXLiveAppTestAPIManager : NSObject
{
    _Bool _config_isonline;
    NSString *_live_play_url;
    NSString *_record_play_url;
    NSString *_live_picture_url;
    NSDictionary *_appAPIMaps;
    NSString *_lwAPIUrl;
}

+ (id)taobaoWebsocketChatList;
+ (id)taobaoWebsocketDispatchList;
+ (id)webSocketList;
+ (id)goldList;
+ (id)millionList;
+ (id)millionH5List;
+ (id)millionPlayList;
+ (id)mobileH5List;
+ (id)funAPIList;
+ (id)xiaokaxiuAPIList;
+ (id)RPCAPIList;
+ (id)playbackAPIList;
+ (id)staticH5APIList;
+ (id)H5APIList;
+ (id)financeAPIList;
+ (id)uploadAPIList;
+ (id)zfAPIList;
+ (id)mainAPIList;
+ (void)logoutMethod;
+ (long long)currentH5APIMode;
+ (id)h5APIList;
+ (id)batchAPIBussiness;
+ (void)batchSaveCurrentAPIModesWithIndex:(long long)arg1;
+ (void)saveCurrentAPIModes:(id)arg1;
+ (id)allAPIBussiness;
+ (id)sharedManager;
@property(copy, nonatomic) NSString *lwAPIUrl; // @synthesize lwAPIUrl=_lwAPIUrl;
@property(retain, nonatomic) NSDictionary *appAPIMaps; // @synthesize appAPIMaps=_appAPIMaps;
@property(nonatomic) _Bool config_isonline; // @synthesize config_isonline=_config_isonline;
@property(retain, nonatomic) NSString *live_picture_url; // @synthesize live_picture_url=_live_picture_url;
@property(retain, nonatomic) NSString *record_play_url; // @synthesize record_play_url=_record_play_url;
@property(retain, nonatomic) NSString *live_play_url; // @synthesize live_play_url=_live_play_url;
- (void).cxx_destruct;
- (id)getReportAPIBaseUrl;
- (id)getZfAPIBaseUrl;
- (id)getTaobaoWebSocketChatUrl;
- (id)getTaobaoWebSocketDispatchUrl;
- (id)getWebSocketUrl;
- (id)getRPCUrl;
- (id)getPolicyUrl;
- (id)getPlayBackAPIBaseUrl;
- (id)getAnnounceH5UrlWithCourseId:(id)arg1;
- (id)getFinanceAPIBaseUrl;
- (id)getStaticH5BaseUrl;
- (id)getMobileH5APIBaseUrl;
- (id)getH5APIBaseUrl;
- (id)getAPIBaseUrl;
- (_Bool)isAppVersionOnline;
- (void)openDebugMode;
- (void)closeDebugMode;
- (_Bool)isDebugMode;
- (_Bool)isPublicTestApp;
- (id)getBaiWanH5Url;
- (id)getUploadFileAPIBaseUrl;
- (id)getscreenRecordH5UrlWithrcid:(id)arg1 withType:(long long)arg2;
- (id)getH5UrlWithScid:(id)arg1 withType:(long long)arg2;
- (id)getAppModeForBaseAPI;
- (id)init;

@end

